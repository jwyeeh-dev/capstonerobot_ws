// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from turtlebot3_msgs:msg/Sound.idl
// generated code does not contain a copyright notice
#include "turtlebot3_msgs/msg/detail/sound__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "turtlebot3_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "turtlebot3_msgs/msg/detail/sound__struct.h"
#include "turtlebot3_msgs/msg/detail/sound__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


typedef turtlebot3_msgs__msg__Sound _Sound__ros_msg_type;

static bool _Sound__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Sound__ros_msg_type * ros_message = (_Sound__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: value
  rv = ucdr_serialize_uint8_t(cdr, ros_message->value);

  return rv;
}

static bool _Sound__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Sound__ros_msg_type * ros_message = (_Sound__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: value
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->value);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlebot3_msgs
size_t get_serialized_size_turtlebot3_msgs__msg__Sound(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Sound__ros_msg_type * ros_message = (const _Sound__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: value
  {
    const size_t item_size = sizeof(ros_message->value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Sound__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_turtlebot3_msgs__msg__Sound(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlebot3_msgs
size_t max_serialized_size_turtlebot3_msgs__msg__Sound(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: value
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);

  return current_alignment - initial_alignment;
}

static size_t _Sound__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_turtlebot3_msgs__msg__Sound(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Sound = {
  "turtlebot3_msgs::msg",
  "Sound",
  _Sound__cdr_serialize,
  _Sound__cdr_deserialize,
  _Sound__get_serialized_size,
  get_serialized_size_turtlebot3_msgs__msg__Sound,
  _Sound__max_serialized_size
};

static rosidl_message_type_support_t _Sound__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Sound,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlebot3_msgs, msg, Sound)() {
  return &_Sound__type_support;
}

#if defined(__cplusplus)
}
#endif
