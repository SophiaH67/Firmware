#include "RFTransmitter.h"

#include "Rmt/MainEncoder.h"
#include "Time.h"

#include <esp_log.h>

#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

struct command_t {
  std::uint64_t until;
  std::vector<rmt_data_t> sequence;
  std::shared_ptr<std::vector<rmt_data_t>> zeroSequence;
  std::uint16_t shockerId;
};

using namespace OpenShock;

RFTransmitter::RFTransmitter(unsigned int gpioPin, int queueSize)
  : m_gpioPin(gpioPin), m_rmtHandle(nullptr), m_queueHandle(nullptr), m_taskHandle(nullptr) {
  snprintf(m_name, sizeof(m_name), "RFTransmitter-%d", gpioPin);

  m_rmtHandle = rmtInit(gpioPin, RMT_TX_MODE, RMT_MEM_64);
  if (m_rmtHandle == nullptr) {
    ESP_LOGE(m_name, "Failed to create rmt object");
    return;
  }

  float realTick = rmtSetTick(m_rmtHandle, 1000);
  ESP_LOGD(m_name, "real tick set to: %fns", realTick);

  m_queueHandle = xQueueCreate(queueSize, sizeof(command_t*));
  if (m_queueHandle == nullptr) {
    ESP_LOGE(m_name, "Failed to create queue");
    return;
  }

  if (xTaskCreate(TransmitTask, m_name, 4096, this, 1, &m_taskHandle) != pdPASS) {
    ESP_LOGE(m_name, "Failed to create task");
    return;
  }
}

RFTransmitter::~RFTransmitter() {
  if (m_taskHandle != nullptr) {
    vTaskDelete(m_taskHandle);
  }
  if (m_queueHandle != nullptr) {
    vQueueDelete(m_queueHandle);
  }
  if (m_rmtHandle != nullptr) {
    rmtDeinit(m_rmtHandle);
  }
}

bool RFTransmitter::SendCommand(std::uint8_t shockerModel,
                                std::uint16_t shockerId,
                                std::uint8_t method,
                                std::uint8_t intensity,
                                unsigned int duration) {
  if (!ok()) {
    return false;
  }

  // Intensity must be between 0 and 99
  // Duration for provided command must not exceed hard limit of 66 seconds (2^16 ms)
  intensity = std::min(intensity, (std::uint8_t)99);
  duration  = std::min(duration, (unsigned int)std::numeric_limits<std::uint16_t>::max());

  command_t* cmd = new command_t {OpenShock::Millis() + duration,
                                  Rmt::GetSequence(shockerId, method, intensity, shockerModel),
                                  Rmt::GetZeroSequence(shockerId, shockerModel),
                                  shockerId};

  // Add the command to the queue, wait max 10 ms (Adjust this)
  if (xQueueSend(m_queueHandle, cmd, 10 / portTICK_PERIOD_MS) != pdTRUE) {
    ESP_LOGE(m_name, "Failed to send command to queue");
    delete cmd;
    return false;
  }

  return true;
}

void RFTransmitter::ClearPendingCommands() {
  if (!ok()) {
    return;
  }

  command_t* command;
  while (xQueueReceive(m_queueHandle, &command, 0) == pdPASS) {
    delete command;
  }
}

void RFTransmitter::TransmitTask(void* arg) {
  RFTransmitter* transmitter = reinterpret_cast<RFTransmitter*>(arg);
  const char* name           = transmitter->m_name;
  rmt_obj_t* rmtHandle       = transmitter->m_rmtHandle;
  QueueHandle_t queueHandle  = transmitter->m_queueHandle;

  ESP_LOGD(name, "RMT loop running on core %d", xPortGetCoreID());

  std::vector<command_t*> commands;
  while (true) {
    // Receive commands
    command_t* cmd = nullptr;
    while (xQueueReceive(queueHandle, &cmd, 0) == pdTRUE) {
      // Replace the command if it already exists
      bool replaced = false;
      for (auto it = commands.begin(); it != commands.end(); ++it) {
        if ((*it)->shockerId == cmd->shockerId) {
          delete *it;
          *it = cmd;

          replaced = true;

          break;
        }
      }

      // If the command was not replaced, add it to the queue
      if (!replaced) {
        commands.push_back(cmd);
      }
    }

    std::uint64_t mil = OpenShock::Millis();

    // Send queued commands
    for (auto it = commands.begin(); it != commands.end();) {
      cmd = *it;

      bool expired = cmd->until < mil;
      bool empty   = cmd->sequence.size() <= 0;

      // Remove expired or empty commands, else send the command.
      // After sending/receiving a command, move to the next one.
      if (expired || empty) {
        // If the command is not empty, send the zero sequence to stop the shocker
        if (!empty) {
          rmtWriteBlocking(rmtHandle, cmd->zeroSequence->data(), cmd->zeroSequence->size());
        }

        // Remove the command and move to the next one
        it = commands.erase(it);
        delete cmd;
      } else {
        // Send the command
        rmtWriteBlocking(rmtHandle, cmd->sequence.data(), cmd->sequence.size());

        // Move to the next command
        ++it;
      }
    }
  }
}
