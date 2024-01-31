// automatically generated by the FlatBuffers compiler, do not modify

/* eslint-disable @typescript-eslint/no-unused-vars, @typescript-eslint/no-explicit-any, @typescript-eslint/no-non-null-assertion */

import * as flatbuffers from 'flatbuffers';

export class AccountLinkCommand {
  bb: flatbuffers.ByteBuffer|null = null;
  bb_pos = 0;
  __init(i:number, bb:flatbuffers.ByteBuffer):AccountLinkCommand {
  this.bb_pos = i;
  this.bb = bb;
  return this;
}

static getRootAsAccountLinkCommand(bb:flatbuffers.ByteBuffer, obj?:AccountLinkCommand):AccountLinkCommand {
  return (obj || new AccountLinkCommand()).__init(bb.readInt32(bb.position()) + bb.position(), bb);
}

static getSizePrefixedRootAsAccountLinkCommand(bb:flatbuffers.ByteBuffer, obj?:AccountLinkCommand):AccountLinkCommand {
  bb.setPosition(bb.position() + flatbuffers.SIZE_PREFIX_LENGTH);
  return (obj || new AccountLinkCommand()).__init(bb.readInt32(bb.position()) + bb.position(), bb);
}

code():string|null
code(optionalEncoding:flatbuffers.Encoding):string|Uint8Array|null
code(optionalEncoding?:any):string|Uint8Array|null {
  const offset = this.bb!.__offset(this.bb_pos, 4);
  return offset ? this.bb!.__string(this.bb_pos + offset, optionalEncoding) : null;
}

static startAccountLinkCommand(builder:flatbuffers.Builder) {
  builder.startObject(1);
}

static addCode(builder:flatbuffers.Builder, codeOffset:flatbuffers.Offset) {
  builder.addFieldOffset(0, codeOffset, 0);
}

static endAccountLinkCommand(builder:flatbuffers.Builder):flatbuffers.Offset {
  const offset = builder.endObject();
  return offset;
}

static createAccountLinkCommand(builder:flatbuffers.Builder, codeOffset:flatbuffers.Offset):flatbuffers.Offset {
  AccountLinkCommand.startAccountLinkCommand(builder);
  AccountLinkCommand.addCode(builder, codeOffset);
  return AccountLinkCommand.endAccountLinkCommand(builder);
}
}