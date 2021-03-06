/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: Timestamp.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "Timestamp.pb-c.h"
void   proto__timestamp__init
                     (Proto__Timestamp         *message)
{
  static const Proto__Timestamp init_value = PROTO__TIMESTAMP__INIT;
  *message = init_value;
}
size_t proto__timestamp__get_packed_size
                     (const Proto__Timestamp *message)
{
  assert(message->base.descriptor == &proto__timestamp__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t proto__timestamp__pack
                     (const Proto__Timestamp *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &proto__timestamp__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t proto__timestamp__pack_to_buffer
                     (const Proto__Timestamp *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &proto__timestamp__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Proto__Timestamp *
       proto__timestamp__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Proto__Timestamp *)
     protobuf_c_message_unpack (&proto__timestamp__descriptor,
                                allocator, len, data);
}
void   proto__timestamp__free_unpacked
                     (Proto__Timestamp *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &proto__timestamp__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   proto__timestamp_seconds__init
                     (Proto__TimestampSeconds         *message)
{
  static const Proto__TimestampSeconds init_value = PROTO__TIMESTAMP_SECONDS__INIT;
  *message = init_value;
}
size_t proto__timestamp_seconds__get_packed_size
                     (const Proto__TimestampSeconds *message)
{
  assert(message->base.descriptor == &proto__timestamp_seconds__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t proto__timestamp_seconds__pack
                     (const Proto__TimestampSeconds *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &proto__timestamp_seconds__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t proto__timestamp_seconds__pack_to_buffer
                     (const Proto__TimestampSeconds *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &proto__timestamp_seconds__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Proto__TimestampSeconds *
       proto__timestamp_seconds__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Proto__TimestampSeconds *)
     protobuf_c_message_unpack (&proto__timestamp_seconds__descriptor,
                                allocator, len, data);
}
void   proto__timestamp_seconds__free_unpacked
                     (Proto__TimestampSeconds *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &proto__timestamp_seconds__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor proto__timestamp__field_descriptors[2] =
{
  {
    "seconds",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(Proto__Timestamp, seconds),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "nanos",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Proto__Timestamp, nanos),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned proto__timestamp__field_indices_by_name[] = {
  1,   /* field[1] = nanos */
  0,   /* field[0] = seconds */
};
static const ProtobufCIntRange proto__timestamp__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor proto__timestamp__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "proto.Timestamp",
  "Timestamp",
  "Proto__Timestamp",
  "proto",
  sizeof(Proto__Timestamp),
  2,
  proto__timestamp__field_descriptors,
  proto__timestamp__field_indices_by_name,
  1,  proto__timestamp__number_ranges,
  (ProtobufCMessageInit) proto__timestamp__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor proto__timestamp_seconds__field_descriptors[1] =
{
  {
    "seconds",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(Proto__TimestampSeconds, seconds),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned proto__timestamp_seconds__field_indices_by_name[] = {
  0,   /* field[0] = seconds */
};
static const ProtobufCIntRange proto__timestamp_seconds__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor proto__timestamp_seconds__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "proto.TimestampSeconds",
  "TimestampSeconds",
  "Proto__TimestampSeconds",
  "proto",
  sizeof(Proto__TimestampSeconds),
  1,
  proto__timestamp_seconds__field_descriptors,
  proto__timestamp_seconds__field_indices_by_name,
  1,  proto__timestamp_seconds__number_ranges,
  (ProtobufCMessageInit) proto__timestamp_seconds__init,
  NULL,NULL,NULL    /* reserved[123] */
};
