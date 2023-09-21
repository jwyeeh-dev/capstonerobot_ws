// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from turtlebot3_msgs:msg/SensorState.idl
// generated code does not contain a copyright notice
#include "turtlebot3_msgs/msg/detail/sensor_state__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "turtlebot3_msgs/msg/detail/sensor_state__struct.hpp"

#include <limits>
#include <algorithm>
#include <stdexcept>
#include <string>
#include <cstring>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
#include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  std_msgs::msg::Header &);

size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);

size_t
max_serialized_size_Header(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace std_msgs


namespace turtlebot3_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlebot3_msgs
cdr_serialize(
  const turtlebot3_msgs::msg::SensorState & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: bumper
  rv = ucdr_serialize_uint8_t(cdr, ros_message.bumper);
  // Member: cliff
  rv = ucdr_serialize_float(cdr, ros_message.cliff);
  // Member: sonar
  rv = ucdr_serialize_float(cdr, ros_message.sonar);
  // Member: illumination
  rv = ucdr_serialize_float(cdr, ros_message.illumination);
  // Member: led
  rv = ucdr_serialize_uint8_t(cdr, ros_message.led);
  // Member: button
  rv = ucdr_serialize_uint8_t(cdr, ros_message.button);
  // Member: torque
  rv = ucdr_serialize_bool(cdr, ros_message.torque);
  // Member: left_encoder
  rv = ucdr_serialize_int32_t(cdr, ros_message.left_encoder);
  // Member: right_encoder
  rv = ucdr_serialize_int32_t(cdr, ros_message.right_encoder);
  // Member: battery
  rv = ucdr_serialize_float(cdr, ros_message.battery);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlebot3_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  turtlebot3_msgs::msg::SensorState & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.header);
  // Member: bumper
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.bumper);
  // Member: cliff
  rv = ucdr_deserialize_float(cdr, &ros_message.cliff);
  // Member: sonar
  rv = ucdr_deserialize_float(cdr, &ros_message.sonar);
  // Member: illumination
  rv = ucdr_deserialize_float(cdr, &ros_message.illumination);
  // Member: led
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.led);
  // Member: button
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.button);
  // Member: torque
  rv = ucdr_deserialize_bool(cdr, &ros_message.torque);
  // Member: left_encoder
  rv = ucdr_deserialize_int32_t(cdr, &ros_message.left_encoder);
  // Member: right_encoder
  rv = ucdr_deserialize_int32_t(cdr, &ros_message.right_encoder);
  // Member: battery
  rv = ucdr_deserialize_float(cdr, &ros_message.battery);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlebot3_msgs
get_serialized_size(
  const turtlebot3_msgs::msg::SensorState & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment += std_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.header,
    current_alignment);
  // Member: bumper
  {
    const size_t item_size = sizeof(ros_message.bumper);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: cliff
  {
    const size_t item_size = sizeof(ros_message.cliff);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: sonar
  {
    const size_t item_size = sizeof(ros_message.sonar);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: illumination
  {
    const size_t item_size = sizeof(ros_message.illumination);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: led
  {
    const size_t item_size = sizeof(ros_message.led);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: button
  {
    const size_t item_size = sizeof(ros_message.button);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: torque
  {
    const size_t item_size = sizeof(ros_message.torque);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: left_encoder
  {
    const size_t item_size = sizeof(ros_message.left_encoder);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: right_encoder
  {
    const size_t item_size = sizeof(ros_message.right_encoder);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: battery
  {
    const size_t item_size = sizeof(ros_message.battery);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlebot3_msgs
max_serialized_size_SensorState(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment += std_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_Header(
    full_bounded,
    current_alignment);
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

static bool _SensorState__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const turtlebot3_msgs::msg::SensorState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SensorState__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<turtlebot3_msgs::msg::SensorState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SensorState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const turtlebot3_msgs::msg::SensorState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SensorState__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const turtlebot3_msgs::msg::SensorState *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _SensorState__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_SensorState(&full_bounded, 0);
}

static message_type_support_callbacks_t _SensorState__callbacks = {
  "turtlebot3_msgs::msg",
  "SensorState",
  _SensorState__cdr_serialize,
  _SensorState__cdr_deserialize,
  _SensorState__get_serialized_size,
  _SensorState__get_serialized_size_with_initial_alignment,
  _SensorState__max_serialized_size
};

static rosidl_message_type_support_t _SensorState__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_SensorState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace turtlebot3_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_turtlebot3_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlebot3_msgs::msg::SensorState>()
{
  return &turtlebot3_msgs::msg::typesupport_microxrcedds_cpp::_SensorState__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, turtlebot3_msgs, msg, SensorState)() {
  return &turtlebot3_msgs::msg::typesupport_microxrcedds_cpp::_SensorState__handle;
}

#ifdef __cplusplus
}
#endif
