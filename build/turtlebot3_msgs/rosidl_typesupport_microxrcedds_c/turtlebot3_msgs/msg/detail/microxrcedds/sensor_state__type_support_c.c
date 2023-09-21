// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from turtlebot3_msgs:msg/SensorState.idl
// generated code does not contain a copyright notice
#include "turtlebot3_msgs/msg/detail/sensor_state__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "turtlebot3_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "turtlebot3_msgs/msg/detail/sensor_state__struct.h"
#include "turtlebot3_msgs/msg/detail/sensor_state__functions.h"

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

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_turtlebot3_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_turtlebot3_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_turtlebot3_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header)();


typedef turtlebot3_msgs__msg__SensorState _SensorState__ros_msg_type;

static bool _SensorState__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _SensorState__ros_msg_type * ros_message = (_SensorState__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_serialize(&ros_message->header, cdr);
  // Member: bumper
  rv = ucdr_serialize_uint8_t(cdr, ros_message->bumper);
  // Member: cliff
  rv = ucdr_serialize_float(cdr, ros_message->cliff);
  // Member: sonar
  rv = ucdr_serialize_float(cdr, ros_message->sonar);
  // Member: illumination
  rv = ucdr_serialize_float(cdr, ros_message->illumination);
  // Member: led
  rv = ucdr_serialize_uint8_t(cdr, ros_message->led);
  // Member: button
  rv = ucdr_serialize_uint8_t(cdr, ros_message->button);
  // Member: torque
  rv = ucdr_serialize_bool(cdr, (ros_message->torque) ? 0x01 : 0x00);
  // Member: left_encoder
  rv = ucdr_serialize_int32_t(cdr, ros_message->left_encoder);
  // Member: right_encoder
  rv = ucdr_serialize_int32_t(cdr, ros_message->right_encoder);
  // Member: battery
  rv = ucdr_serialize_float(cdr, ros_message->battery);

  return rv;
}

static bool _SensorState__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _SensorState__ros_msg_type * ros_message = (_SensorState__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_deserialize(cdr, &ros_message->header);
  // Field name: bumper
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->bumper);
  // Field name: cliff
  rv = ucdr_deserialize_float(cdr, &ros_message->cliff);
  // Field name: sonar
  rv = ucdr_deserialize_float(cdr, &ros_message->sonar);
  // Field name: illumination
  rv = ucdr_deserialize_float(cdr, &ros_message->illumination);
  // Field name: led
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->led);
  // Field name: button
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->button);
  // Field name: torque
  rv = ucdr_deserialize_bool(cdr, &ros_message->torque);
  // Field name: left_encoder
  rv = ucdr_deserialize_int32_t(cdr, &ros_message->left_encoder);
  // Field name: right_encoder
  rv = ucdr_deserialize_int32_t(cdr, &ros_message->right_encoder);
  // Field name: battery
  rv = ucdr_deserialize_float(cdr, &ros_message->battery);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlebot3_msgs
size_t get_serialized_size_turtlebot3_msgs__msg__SensorState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _SensorState__ros_msg_type * ros_message = (const _SensorState__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    get_serialized_size_std_msgs__msg__Header(&ros_message->header, current_alignment);
  // Member: bumper
  {
    const size_t item_size = sizeof(ros_message->bumper);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: cliff
  {
    const size_t item_size = sizeof(ros_message->cliff);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: sonar
  {
    const size_t item_size = sizeof(ros_message->sonar);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: illumination
  {
    const size_t item_size = sizeof(ros_message->illumination);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: led
  {
    const size_t item_size = sizeof(ros_message->led);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: button
  {
    const size_t item_size = sizeof(ros_message->button);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: torque
  {
    const size_t item_size = sizeof(ros_message->torque);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: left_encoder
  {
    const size_t item_size = sizeof(ros_message->left_encoder);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: right_encoder
  {
    const size_t item_size = sizeof(ros_message->right_encoder);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: battery
  {
    const size_t item_size = sizeof(ros_message->battery);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SensorState__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_turtlebot3_msgs__msg__SensorState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlebot3_msgs
size_t max_serialized_size_turtlebot3_msgs__msg__SensorState(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    max_serialized_size_std_msgs__msg__Header(full_bounded, current_alignment);
  // Member: bumper
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: cliff
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: sonar
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: illumination
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: led
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: button
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: torque
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: left_encoder
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);
  // Member: right_encoder
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);
  // Member: battery
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);

  return current_alignment - initial_alignment;
}

static size_t _SensorState__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_turtlebot3_msgs__msg__SensorState(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_SensorState = {
  "turtlebot3_msgs::msg",
  "SensorState",
  _SensorState__cdr_serialize,
  _SensorState__cdr_deserialize,
  _SensorState__get_serialized_size,
  get_serialized_size_turtlebot3_msgs__msg__SensorState,
  _SensorState__max_serialized_size
};

static rosidl_message_type_support_t _SensorState__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_SensorState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlebot3_msgs, msg, SensorState)() {
  return &_SensorState__type_support;
}

#if defined(__cplusplus)
}
#endif
