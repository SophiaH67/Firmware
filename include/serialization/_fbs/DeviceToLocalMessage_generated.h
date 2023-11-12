// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_DEVICETOLOCALMESSAGE_OPENSHOCK_SERIALIZATION_LOCAL_H_
#define FLATBUFFERS_GENERATED_DEVICETOLOCALMESSAGE_OPENSHOCK_SERIALIZATION_LOCAL_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 23 &&
              FLATBUFFERS_VERSION_MINOR == 5 &&
              FLATBUFFERS_VERSION_REVISION == 26,
             "Non-compatible flatbuffers version included");

#include "WifiNetwork_generated.h"
#include "WifiNetworkEventType_generated.h"
#include "WifiScanStatus_generated.h"

namespace OpenShock {
namespace Serialization {
namespace Local {

struct ReadyMessage;
struct ReadyMessageBuilder;

struct ErrorMessage;
struct ErrorMessageBuilder;

struct WifiScanStatusMessage;

struct WifiNetworkEvent;
struct WifiNetworkEventBuilder;

struct WifiGotIpEvent;
struct WifiGotIpEventBuilder;

struct WifiLostIpEvent;
struct WifiLostIpEventBuilder;

struct AccountLinkCommandResult;

struct SetRfTxPinCommandResult;

struct DeviceToLocalMessage;
struct DeviceToLocalMessageBuilder;

enum class AccountLinkResultCode : uint8_t {
  Success = 0,
  CodeRequired = 1,
  InvalidCodeLength = 2,
  NoInternetConnection = 3,
  InvalidCode = 4,
  InternalError = 5,
  MIN = Success,
  MAX = InternalError
};

inline const AccountLinkResultCode (&EnumValuesAccountLinkResultCode())[6] {
  static const AccountLinkResultCode values[] = {
    AccountLinkResultCode::Success,
    AccountLinkResultCode::CodeRequired,
    AccountLinkResultCode::InvalidCodeLength,
    AccountLinkResultCode::NoInternetConnection,
    AccountLinkResultCode::InvalidCode,
    AccountLinkResultCode::InternalError
  };
  return values;
}

inline const char * const *EnumNamesAccountLinkResultCode() {
  static const char * const names[7] = {
    "Success",
    "CodeRequired",
    "InvalidCodeLength",
    "NoInternetConnection",
    "InvalidCode",
    "InternalError",
    nullptr
  };
  return names;
}

inline const char *EnumNameAccountLinkResultCode(AccountLinkResultCode e) {
  if (::flatbuffers::IsOutRange(e, AccountLinkResultCode::Success, AccountLinkResultCode::InternalError)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesAccountLinkResultCode()[index];
}

enum class SetRfPinResultCode : uint8_t {
  Success = 0,
  InvalidPin = 1,
  InternalError = 2,
  MIN = Success,
  MAX = InternalError
};

inline const SetRfPinResultCode (&EnumValuesSetRfPinResultCode())[3] {
  static const SetRfPinResultCode values[] = {
    SetRfPinResultCode::Success,
    SetRfPinResultCode::InvalidPin,
    SetRfPinResultCode::InternalError
  };
  return values;
}

inline const char * const *EnumNamesSetRfPinResultCode() {
  static const char * const names[4] = {
    "Success",
    "InvalidPin",
    "InternalError",
    nullptr
  };
  return names;
}

inline const char *EnumNameSetRfPinResultCode(SetRfPinResultCode e) {
  if (::flatbuffers::IsOutRange(e, SetRfPinResultCode::Success, SetRfPinResultCode::InternalError)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesSetRfPinResultCode()[index];
}

enum class DeviceToLocalMessagePayload : uint8_t {
  NONE = 0,
  ReadyMessage = 1,
  ErrorMessage = 2,
  WifiScanStatusMessage = 3,
  WifiNetworkEvent = 4,
  WifiGotIpEvent = 5,
  WifiLostIpEvent = 6,
  AccountLinkCommandResult = 7,
  SetRfTxPinCommandResult = 8,
  MIN = NONE,
  MAX = SetRfTxPinCommandResult
};

inline const DeviceToLocalMessagePayload (&EnumValuesDeviceToLocalMessagePayload())[9] {
  static const DeviceToLocalMessagePayload values[] = {
    DeviceToLocalMessagePayload::NONE,
    DeviceToLocalMessagePayload::ReadyMessage,
    DeviceToLocalMessagePayload::ErrorMessage,
    DeviceToLocalMessagePayload::WifiScanStatusMessage,
    DeviceToLocalMessagePayload::WifiNetworkEvent,
    DeviceToLocalMessagePayload::WifiGotIpEvent,
    DeviceToLocalMessagePayload::WifiLostIpEvent,
    DeviceToLocalMessagePayload::AccountLinkCommandResult,
    DeviceToLocalMessagePayload::SetRfTxPinCommandResult
  };
  return values;
}

inline const char * const *EnumNamesDeviceToLocalMessagePayload() {
  static const char * const names[10] = {
    "NONE",
    "ReadyMessage",
    "ErrorMessage",
    "WifiScanStatusMessage",
    "WifiNetworkEvent",
    "WifiGotIpEvent",
    "WifiLostIpEvent",
    "AccountLinkCommandResult",
    "SetRfTxPinCommandResult",
    nullptr
  };
  return names;
}

inline const char *EnumNameDeviceToLocalMessagePayload(DeviceToLocalMessagePayload e) {
  if (::flatbuffers::IsOutRange(e, DeviceToLocalMessagePayload::NONE, DeviceToLocalMessagePayload::SetRfTxPinCommandResult)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesDeviceToLocalMessagePayload()[index];
}

template<typename T> struct DeviceToLocalMessagePayloadTraits {
  static const DeviceToLocalMessagePayload enum_value = DeviceToLocalMessagePayload::NONE;
};

template<> struct DeviceToLocalMessagePayloadTraits<OpenShock::Serialization::Local::ReadyMessage> {
  static const DeviceToLocalMessagePayload enum_value = DeviceToLocalMessagePayload::ReadyMessage;
};

template<> struct DeviceToLocalMessagePayloadTraits<OpenShock::Serialization::Local::ErrorMessage> {
  static const DeviceToLocalMessagePayload enum_value = DeviceToLocalMessagePayload::ErrorMessage;
};

template<> struct DeviceToLocalMessagePayloadTraits<OpenShock::Serialization::Local::WifiScanStatusMessage> {
  static const DeviceToLocalMessagePayload enum_value = DeviceToLocalMessagePayload::WifiScanStatusMessage;
};

template<> struct DeviceToLocalMessagePayloadTraits<OpenShock::Serialization::Local::WifiNetworkEvent> {
  static const DeviceToLocalMessagePayload enum_value = DeviceToLocalMessagePayload::WifiNetworkEvent;
};

template<> struct DeviceToLocalMessagePayloadTraits<OpenShock::Serialization::Local::WifiGotIpEvent> {
  static const DeviceToLocalMessagePayload enum_value = DeviceToLocalMessagePayload::WifiGotIpEvent;
};

template<> struct DeviceToLocalMessagePayloadTraits<OpenShock::Serialization::Local::WifiLostIpEvent> {
  static const DeviceToLocalMessagePayload enum_value = DeviceToLocalMessagePayload::WifiLostIpEvent;
};

template<> struct DeviceToLocalMessagePayloadTraits<OpenShock::Serialization::Local::AccountLinkCommandResult> {
  static const DeviceToLocalMessagePayload enum_value = DeviceToLocalMessagePayload::AccountLinkCommandResult;
};

template<> struct DeviceToLocalMessagePayloadTraits<OpenShock::Serialization::Local::SetRfTxPinCommandResult> {
  static const DeviceToLocalMessagePayload enum_value = DeviceToLocalMessagePayload::SetRfTxPinCommandResult;
};

bool VerifyDeviceToLocalMessagePayload(::flatbuffers::Verifier &verifier, const void *obj, DeviceToLocalMessagePayload type);
bool VerifyDeviceToLocalMessagePayloadVector(::flatbuffers::Verifier &verifier, const ::flatbuffers::Vector<::flatbuffers::Offset<void>> *values, const ::flatbuffers::Vector<DeviceToLocalMessagePayload> *types);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(1) WifiScanStatusMessage FLATBUFFERS_FINAL_CLASS {
 private:
  uint8_t status_;

 public:
  struct Traits;
  static FLATBUFFERS_CONSTEXPR_CPP11 const char *GetFullyQualifiedName() {
    return "OpenShock.Serialization.Local.WifiScanStatusMessage";
  }
  WifiScanStatusMessage()
      : status_(0) {
  }
  WifiScanStatusMessage(OpenShock::Serialization::Types::WifiScanStatus _status)
      : status_(::flatbuffers::EndianScalar(static_cast<uint8_t>(_status))) {
  }
  OpenShock::Serialization::Types::WifiScanStatus status() const {
    return static_cast<OpenShock::Serialization::Types::WifiScanStatus>(::flatbuffers::EndianScalar(status_));
  }
};
FLATBUFFERS_STRUCT_END(WifiScanStatusMessage, 1);

struct WifiScanStatusMessage::Traits {
  using type = WifiScanStatusMessage;
};

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(1) AccountLinkCommandResult FLATBUFFERS_FINAL_CLASS {
 private:
  uint8_t result_;

 public:
  struct Traits;
  static FLATBUFFERS_CONSTEXPR_CPP11 const char *GetFullyQualifiedName() {
    return "OpenShock.Serialization.Local.AccountLinkCommandResult";
  }
  AccountLinkCommandResult()
      : result_(0) {
  }
  AccountLinkCommandResult(OpenShock::Serialization::Local::AccountLinkResultCode _result)
      : result_(::flatbuffers::EndianScalar(static_cast<uint8_t>(_result))) {
  }
  OpenShock::Serialization::Local::AccountLinkResultCode result() const {
    return static_cast<OpenShock::Serialization::Local::AccountLinkResultCode>(::flatbuffers::EndianScalar(result_));
  }
};
FLATBUFFERS_STRUCT_END(AccountLinkCommandResult, 1);

struct AccountLinkCommandResult::Traits {
  using type = AccountLinkCommandResult;
};

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(1) SetRfTxPinCommandResult FLATBUFFERS_FINAL_CLASS {
 private:
  uint8_t pin_;
  uint8_t result_;

 public:
  struct Traits;
  static FLATBUFFERS_CONSTEXPR_CPP11 const char *GetFullyQualifiedName() {
    return "OpenShock.Serialization.Local.SetRfTxPinCommandResult";
  }
  SetRfTxPinCommandResult()
      : pin_(0),
        result_(0) {
  }
  SetRfTxPinCommandResult(uint8_t _pin, OpenShock::Serialization::Local::SetRfPinResultCode _result)
      : pin_(::flatbuffers::EndianScalar(_pin)),
        result_(::flatbuffers::EndianScalar(static_cast<uint8_t>(_result))) {
  }
  uint8_t pin() const {
    return ::flatbuffers::EndianScalar(pin_);
  }
  OpenShock::Serialization::Local::SetRfPinResultCode result() const {
    return static_cast<OpenShock::Serialization::Local::SetRfPinResultCode>(::flatbuffers::EndianScalar(result_));
  }
};
FLATBUFFERS_STRUCT_END(SetRfTxPinCommandResult, 2);

struct SetRfTxPinCommandResult::Traits {
  using type = SetRfTxPinCommandResult;
};

struct ReadyMessage FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef ReadyMessageBuilder Builder;
  struct Traits;
  static FLATBUFFERS_CONSTEXPR_CPP11 const char *GetFullyQualifiedName() {
    return "OpenShock.Serialization.Local.ReadyMessage";
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_POGGIES = 4,
    VT_CONNECTED_WIFI = 6,
    VT_GATEWAY_PAIRED = 8,
    VT_RFTX_PIN = 10
  };
  bool poggies() const {
    return GetField<uint8_t>(VT_POGGIES, 0) != 0;
  }
  const OpenShock::Serialization::Types::WifiNetwork *connected_wifi() const {
    return GetPointer<const OpenShock::Serialization::Types::WifiNetwork *>(VT_CONNECTED_WIFI);
  }
  bool gateway_paired() const {
    return GetField<uint8_t>(VT_GATEWAY_PAIRED, 0) != 0;
  }
  uint8_t rftx_pin() const {
    return GetField<uint8_t>(VT_RFTX_PIN, 0);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_POGGIES, 1) &&
           VerifyOffset(verifier, VT_CONNECTED_WIFI) &&
           verifier.VerifyTable(connected_wifi()) &&
           VerifyField<uint8_t>(verifier, VT_GATEWAY_PAIRED, 1) &&
           VerifyField<uint8_t>(verifier, VT_RFTX_PIN, 1) &&
           verifier.EndTable();
  }
};

struct ReadyMessageBuilder {
  typedef ReadyMessage Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_poggies(bool poggies) {
    fbb_.AddElement<uint8_t>(ReadyMessage::VT_POGGIES, static_cast<uint8_t>(poggies), 0);
  }
  void add_connected_wifi(::flatbuffers::Offset<OpenShock::Serialization::Types::WifiNetwork> connected_wifi) {
    fbb_.AddOffset(ReadyMessage::VT_CONNECTED_WIFI, connected_wifi);
  }
  void add_gateway_paired(bool gateway_paired) {
    fbb_.AddElement<uint8_t>(ReadyMessage::VT_GATEWAY_PAIRED, static_cast<uint8_t>(gateway_paired), 0);
  }
  void add_rftx_pin(uint8_t rftx_pin) {
    fbb_.AddElement<uint8_t>(ReadyMessage::VT_RFTX_PIN, rftx_pin, 0);
  }
  explicit ReadyMessageBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<ReadyMessage> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<ReadyMessage>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<ReadyMessage> CreateReadyMessage(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    bool poggies = false,
    ::flatbuffers::Offset<OpenShock::Serialization::Types::WifiNetwork> connected_wifi = 0,
    bool gateway_paired = false,
    uint8_t rftx_pin = 0) {
  ReadyMessageBuilder builder_(_fbb);
  builder_.add_connected_wifi(connected_wifi);
  builder_.add_rftx_pin(rftx_pin);
  builder_.add_gateway_paired(gateway_paired);
  builder_.add_poggies(poggies);
  return builder_.Finish();
}

struct ReadyMessage::Traits {
  using type = ReadyMessage;
  static auto constexpr Create = CreateReadyMessage;
};

struct ErrorMessage FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef ErrorMessageBuilder Builder;
  struct Traits;
  static FLATBUFFERS_CONSTEXPR_CPP11 const char *GetFullyQualifiedName() {
    return "OpenShock.Serialization.Local.ErrorMessage";
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_MESSAGE = 4
  };
  const ::flatbuffers::String *message() const {
    return GetPointer<const ::flatbuffers::String *>(VT_MESSAGE);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_MESSAGE) &&
           verifier.VerifyString(message()) &&
           verifier.EndTable();
  }
};

struct ErrorMessageBuilder {
  typedef ErrorMessage Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_message(::flatbuffers::Offset<::flatbuffers::String> message) {
    fbb_.AddOffset(ErrorMessage::VT_MESSAGE, message);
  }
  explicit ErrorMessageBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<ErrorMessage> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<ErrorMessage>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<ErrorMessage> CreateErrorMessage(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::String> message = 0) {
  ErrorMessageBuilder builder_(_fbb);
  builder_.add_message(message);
  return builder_.Finish();
}

struct ErrorMessage::Traits {
  using type = ErrorMessage;
  static auto constexpr Create = CreateErrorMessage;
};

inline ::flatbuffers::Offset<ErrorMessage> CreateErrorMessageDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const char *message = nullptr) {
  auto message__ = message ? _fbb.CreateString(message) : 0;
  return OpenShock::Serialization::Local::CreateErrorMessage(
      _fbb,
      message__);
}

struct WifiNetworkEvent FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef WifiNetworkEventBuilder Builder;
  struct Traits;
  static FLATBUFFERS_CONSTEXPR_CPP11 const char *GetFullyQualifiedName() {
    return "OpenShock.Serialization.Local.WifiNetworkEvent";
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_EVENT_TYPE = 4,
    VT_NETWORK = 6
  };
  OpenShock::Serialization::Types::WifiNetworkEventType event_type() const {
    return static_cast<OpenShock::Serialization::Types::WifiNetworkEventType>(GetField<uint8_t>(VT_EVENT_TYPE, 0));
  }
  const OpenShock::Serialization::Types::WifiNetwork *network() const {
    return GetPointer<const OpenShock::Serialization::Types::WifiNetwork *>(VT_NETWORK);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_EVENT_TYPE, 1) &&
           VerifyOffset(verifier, VT_NETWORK) &&
           verifier.VerifyTable(network()) &&
           verifier.EndTable();
  }
};

struct WifiNetworkEventBuilder {
  typedef WifiNetworkEvent Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_event_type(OpenShock::Serialization::Types::WifiNetworkEventType event_type) {
    fbb_.AddElement<uint8_t>(WifiNetworkEvent::VT_EVENT_TYPE, static_cast<uint8_t>(event_type), 0);
  }
  void add_network(::flatbuffers::Offset<OpenShock::Serialization::Types::WifiNetwork> network) {
    fbb_.AddOffset(WifiNetworkEvent::VT_NETWORK, network);
  }
  explicit WifiNetworkEventBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<WifiNetworkEvent> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<WifiNetworkEvent>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<WifiNetworkEvent> CreateWifiNetworkEvent(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    OpenShock::Serialization::Types::WifiNetworkEventType event_type = OpenShock::Serialization::Types::WifiNetworkEventType::Discovered,
    ::flatbuffers::Offset<OpenShock::Serialization::Types::WifiNetwork> network = 0) {
  WifiNetworkEventBuilder builder_(_fbb);
  builder_.add_network(network);
  builder_.add_event_type(event_type);
  return builder_.Finish();
}

struct WifiNetworkEvent::Traits {
  using type = WifiNetworkEvent;
  static auto constexpr Create = CreateWifiNetworkEvent;
};

struct WifiGotIpEvent FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef WifiGotIpEventBuilder Builder;
  struct Traits;
  static FLATBUFFERS_CONSTEXPR_CPP11 const char *GetFullyQualifiedName() {
    return "OpenShock.Serialization.Local.WifiGotIpEvent";
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_IP = 4
  };
  const ::flatbuffers::String *ip() const {
    return GetPointer<const ::flatbuffers::String *>(VT_IP);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_IP) &&
           verifier.VerifyString(ip()) &&
           verifier.EndTable();
  }
};

struct WifiGotIpEventBuilder {
  typedef WifiGotIpEvent Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_ip(::flatbuffers::Offset<::flatbuffers::String> ip) {
    fbb_.AddOffset(WifiGotIpEvent::VT_IP, ip);
  }
  explicit WifiGotIpEventBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<WifiGotIpEvent> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<WifiGotIpEvent>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<WifiGotIpEvent> CreateWifiGotIpEvent(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::String> ip = 0) {
  WifiGotIpEventBuilder builder_(_fbb);
  builder_.add_ip(ip);
  return builder_.Finish();
}

struct WifiGotIpEvent::Traits {
  using type = WifiGotIpEvent;
  static auto constexpr Create = CreateWifiGotIpEvent;
};

inline ::flatbuffers::Offset<WifiGotIpEvent> CreateWifiGotIpEventDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const char *ip = nullptr) {
  auto ip__ = ip ? _fbb.CreateString(ip) : 0;
  return OpenShock::Serialization::Local::CreateWifiGotIpEvent(
      _fbb,
      ip__);
}

struct WifiLostIpEvent FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef WifiLostIpEventBuilder Builder;
  struct Traits;
  static FLATBUFFERS_CONSTEXPR_CPP11 const char *GetFullyQualifiedName() {
    return "OpenShock.Serialization.Local.WifiLostIpEvent";
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_IP = 4
  };
  const ::flatbuffers::String *ip() const {
    return GetPointer<const ::flatbuffers::String *>(VT_IP);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_IP) &&
           verifier.VerifyString(ip()) &&
           verifier.EndTable();
  }
};

struct WifiLostIpEventBuilder {
  typedef WifiLostIpEvent Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_ip(::flatbuffers::Offset<::flatbuffers::String> ip) {
    fbb_.AddOffset(WifiLostIpEvent::VT_IP, ip);
  }
  explicit WifiLostIpEventBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<WifiLostIpEvent> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<WifiLostIpEvent>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<WifiLostIpEvent> CreateWifiLostIpEvent(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::String> ip = 0) {
  WifiLostIpEventBuilder builder_(_fbb);
  builder_.add_ip(ip);
  return builder_.Finish();
}

struct WifiLostIpEvent::Traits {
  using type = WifiLostIpEvent;
  static auto constexpr Create = CreateWifiLostIpEvent;
};

inline ::flatbuffers::Offset<WifiLostIpEvent> CreateWifiLostIpEventDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const char *ip = nullptr) {
  auto ip__ = ip ? _fbb.CreateString(ip) : 0;
  return OpenShock::Serialization::Local::CreateWifiLostIpEvent(
      _fbb,
      ip__);
}

struct DeviceToLocalMessage FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef DeviceToLocalMessageBuilder Builder;
  struct Traits;
  static FLATBUFFERS_CONSTEXPR_CPP11 const char *GetFullyQualifiedName() {
    return "OpenShock.Serialization.Local.DeviceToLocalMessage";
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_PAYLOAD_TYPE = 4,
    VT_PAYLOAD = 6
  };
  OpenShock::Serialization::Local::DeviceToLocalMessagePayload payload_type() const {
    return static_cast<OpenShock::Serialization::Local::DeviceToLocalMessagePayload>(GetField<uint8_t>(VT_PAYLOAD_TYPE, 0));
  }
  const void *payload() const {
    return GetPointer<const void *>(VT_PAYLOAD);
  }
  template<typename T> const T *payload_as() const;
  const OpenShock::Serialization::Local::ReadyMessage *payload_as_ReadyMessage() const {
    return payload_type() == OpenShock::Serialization::Local::DeviceToLocalMessagePayload::ReadyMessage ? static_cast<const OpenShock::Serialization::Local::ReadyMessage *>(payload()) : nullptr;
  }
  const OpenShock::Serialization::Local::ErrorMessage *payload_as_ErrorMessage() const {
    return payload_type() == OpenShock::Serialization::Local::DeviceToLocalMessagePayload::ErrorMessage ? static_cast<const OpenShock::Serialization::Local::ErrorMessage *>(payload()) : nullptr;
  }
  const OpenShock::Serialization::Local::WifiScanStatusMessage *payload_as_WifiScanStatusMessage() const {
    return payload_type() == OpenShock::Serialization::Local::DeviceToLocalMessagePayload::WifiScanStatusMessage ? static_cast<const OpenShock::Serialization::Local::WifiScanStatusMessage *>(payload()) : nullptr;
  }
  const OpenShock::Serialization::Local::WifiNetworkEvent *payload_as_WifiNetworkEvent() const {
    return payload_type() == OpenShock::Serialization::Local::DeviceToLocalMessagePayload::WifiNetworkEvent ? static_cast<const OpenShock::Serialization::Local::WifiNetworkEvent *>(payload()) : nullptr;
  }
  const OpenShock::Serialization::Local::WifiGotIpEvent *payload_as_WifiGotIpEvent() const {
    return payload_type() == OpenShock::Serialization::Local::DeviceToLocalMessagePayload::WifiGotIpEvent ? static_cast<const OpenShock::Serialization::Local::WifiGotIpEvent *>(payload()) : nullptr;
  }
  const OpenShock::Serialization::Local::WifiLostIpEvent *payload_as_WifiLostIpEvent() const {
    return payload_type() == OpenShock::Serialization::Local::DeviceToLocalMessagePayload::WifiLostIpEvent ? static_cast<const OpenShock::Serialization::Local::WifiLostIpEvent *>(payload()) : nullptr;
  }
  const OpenShock::Serialization::Local::AccountLinkCommandResult *payload_as_AccountLinkCommandResult() const {
    return payload_type() == OpenShock::Serialization::Local::DeviceToLocalMessagePayload::AccountLinkCommandResult ? static_cast<const OpenShock::Serialization::Local::AccountLinkCommandResult *>(payload()) : nullptr;
  }
  const OpenShock::Serialization::Local::SetRfTxPinCommandResult *payload_as_SetRfTxPinCommandResult() const {
    return payload_type() == OpenShock::Serialization::Local::DeviceToLocalMessagePayload::SetRfTxPinCommandResult ? static_cast<const OpenShock::Serialization::Local::SetRfTxPinCommandResult *>(payload()) : nullptr;
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_PAYLOAD_TYPE, 1) &&
           VerifyOffset(verifier, VT_PAYLOAD) &&
           VerifyDeviceToLocalMessagePayload(verifier, payload(), payload_type()) &&
           verifier.EndTable();
  }
};

template<> inline const OpenShock::Serialization::Local::ReadyMessage *DeviceToLocalMessage::payload_as<OpenShock::Serialization::Local::ReadyMessage>() const {
  return payload_as_ReadyMessage();
}

template<> inline const OpenShock::Serialization::Local::ErrorMessage *DeviceToLocalMessage::payload_as<OpenShock::Serialization::Local::ErrorMessage>() const {
  return payload_as_ErrorMessage();
}

template<> inline const OpenShock::Serialization::Local::WifiScanStatusMessage *DeviceToLocalMessage::payload_as<OpenShock::Serialization::Local::WifiScanStatusMessage>() const {
  return payload_as_WifiScanStatusMessage();
}

template<> inline const OpenShock::Serialization::Local::WifiNetworkEvent *DeviceToLocalMessage::payload_as<OpenShock::Serialization::Local::WifiNetworkEvent>() const {
  return payload_as_WifiNetworkEvent();
}

template<> inline const OpenShock::Serialization::Local::WifiGotIpEvent *DeviceToLocalMessage::payload_as<OpenShock::Serialization::Local::WifiGotIpEvent>() const {
  return payload_as_WifiGotIpEvent();
}

template<> inline const OpenShock::Serialization::Local::WifiLostIpEvent *DeviceToLocalMessage::payload_as<OpenShock::Serialization::Local::WifiLostIpEvent>() const {
  return payload_as_WifiLostIpEvent();
}

template<> inline const OpenShock::Serialization::Local::AccountLinkCommandResult *DeviceToLocalMessage::payload_as<OpenShock::Serialization::Local::AccountLinkCommandResult>() const {
  return payload_as_AccountLinkCommandResult();
}

template<> inline const OpenShock::Serialization::Local::SetRfTxPinCommandResult *DeviceToLocalMessage::payload_as<OpenShock::Serialization::Local::SetRfTxPinCommandResult>() const {
  return payload_as_SetRfTxPinCommandResult();
}

struct DeviceToLocalMessageBuilder {
  typedef DeviceToLocalMessage Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_payload_type(OpenShock::Serialization::Local::DeviceToLocalMessagePayload payload_type) {
    fbb_.AddElement<uint8_t>(DeviceToLocalMessage::VT_PAYLOAD_TYPE, static_cast<uint8_t>(payload_type), 0);
  }
  void add_payload(::flatbuffers::Offset<void> payload) {
    fbb_.AddOffset(DeviceToLocalMessage::VT_PAYLOAD, payload);
  }
  explicit DeviceToLocalMessageBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<DeviceToLocalMessage> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<DeviceToLocalMessage>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<DeviceToLocalMessage> CreateDeviceToLocalMessage(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    OpenShock::Serialization::Local::DeviceToLocalMessagePayload payload_type = OpenShock::Serialization::Local::DeviceToLocalMessagePayload::NONE,
    ::flatbuffers::Offset<void> payload = 0) {
  DeviceToLocalMessageBuilder builder_(_fbb);
  builder_.add_payload(payload);
  builder_.add_payload_type(payload_type);
  return builder_.Finish();
}

struct DeviceToLocalMessage::Traits {
  using type = DeviceToLocalMessage;
  static auto constexpr Create = CreateDeviceToLocalMessage;
};

inline bool VerifyDeviceToLocalMessagePayload(::flatbuffers::Verifier &verifier, const void *obj, DeviceToLocalMessagePayload type) {
  switch (type) {
    case DeviceToLocalMessagePayload::NONE: {
      return true;
    }
    case DeviceToLocalMessagePayload::ReadyMessage: {
      auto ptr = reinterpret_cast<const OpenShock::Serialization::Local::ReadyMessage *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case DeviceToLocalMessagePayload::ErrorMessage: {
      auto ptr = reinterpret_cast<const OpenShock::Serialization::Local::ErrorMessage *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case DeviceToLocalMessagePayload::WifiScanStatusMessage: {
      return verifier.VerifyField<OpenShock::Serialization::Local::WifiScanStatusMessage>(static_cast<const uint8_t *>(obj), 0, 1);
    }
    case DeviceToLocalMessagePayload::WifiNetworkEvent: {
      auto ptr = reinterpret_cast<const OpenShock::Serialization::Local::WifiNetworkEvent *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case DeviceToLocalMessagePayload::WifiGotIpEvent: {
      auto ptr = reinterpret_cast<const OpenShock::Serialization::Local::WifiGotIpEvent *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case DeviceToLocalMessagePayload::WifiLostIpEvent: {
      auto ptr = reinterpret_cast<const OpenShock::Serialization::Local::WifiLostIpEvent *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case DeviceToLocalMessagePayload::AccountLinkCommandResult: {
      return verifier.VerifyField<OpenShock::Serialization::Local::AccountLinkCommandResult>(static_cast<const uint8_t *>(obj), 0, 1);
    }
    case DeviceToLocalMessagePayload::SetRfTxPinCommandResult: {
      return verifier.VerifyField<OpenShock::Serialization::Local::SetRfTxPinCommandResult>(static_cast<const uint8_t *>(obj), 0, 1);
    }
    default: return true;
  }
}

inline bool VerifyDeviceToLocalMessagePayloadVector(::flatbuffers::Verifier &verifier, const ::flatbuffers::Vector<::flatbuffers::Offset<void>> *values, const ::flatbuffers::Vector<DeviceToLocalMessagePayload> *types) {
  if (!values || !types) return !values && !types;
  if (values->size() != types->size()) return false;
  for (::flatbuffers::uoffset_t i = 0; i < values->size(); ++i) {
    if (!VerifyDeviceToLocalMessagePayload(
        verifier,  values->Get(i), types->GetEnum<DeviceToLocalMessagePayload>(i))) {
      return false;
    }
  }
  return true;
}

inline const OpenShock::Serialization::Local::DeviceToLocalMessage *GetDeviceToLocalMessage(const void *buf) {
  return ::flatbuffers::GetRoot<OpenShock::Serialization::Local::DeviceToLocalMessage>(buf);
}

inline const OpenShock::Serialization::Local::DeviceToLocalMessage *GetSizePrefixedDeviceToLocalMessage(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<OpenShock::Serialization::Local::DeviceToLocalMessage>(buf);
}

inline bool VerifyDeviceToLocalMessageBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<OpenShock::Serialization::Local::DeviceToLocalMessage>(nullptr);
}

inline bool VerifySizePrefixedDeviceToLocalMessageBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<OpenShock::Serialization::Local::DeviceToLocalMessage>(nullptr);
}

inline void FinishDeviceToLocalMessageBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<OpenShock::Serialization::Local::DeviceToLocalMessage> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedDeviceToLocalMessageBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<OpenShock::Serialization::Local::DeviceToLocalMessage> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace Local
}  // namespace Serialization
}  // namespace OpenShock

#endif  // FLATBUFFERS_GENERATED_DEVICETOLOCALMESSAGE_OPENSHOCK_SERIALIZATION_LOCAL_H_