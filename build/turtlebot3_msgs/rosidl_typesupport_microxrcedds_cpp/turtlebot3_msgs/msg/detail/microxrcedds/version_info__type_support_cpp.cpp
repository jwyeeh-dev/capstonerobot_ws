// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from turtlebot3_msgs:msg/VersionInfo.idl
// generated code does not contain a copyright notice
#include "turtlebot3_msgs/msg/detail/version_info__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "turtlebot3_msgs/msg/detail/version_info__struct.hpp"

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

namespace turtlebot3_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlebot3_msgs
cdr_serialize(
  const turtlebot3_msgs::msg::VersionInfo & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: hardware
  rv = ucdr_serialize_string(cdr, ros_message.hardware.c_str());
  // Member: firmware
  rv = ucdr_serialize_string(cdr, ros_message.firmware.c_str());
  // Member: software
  rv = ucdr_serialize_string(cdr, ros_message.software.c_str());

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlebot3_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  turtlebot3_msgs::msg::VersionInfo & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: hardware
  ros_message.hardware.resize(ros_message.hardware.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.hardware[0], ros_message.hardware.capacity());
  if (rv) {
    ros_message.hardware.resize(std::strlen(&ros_message.hardware[0]));
  }
  // Member: firmware
  ros_message.firmware.resize(ros_message.firmware.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.firmware[0], ros_message.firmware.capacity());
  if (rv) {
    ros_message.firmware.resize(std::strlen(&ros_message.firmware[0]));
  }
  // Member: software
  ros_message.software.resize(ros_message.software.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.software[0], ros_message.software.capacity());
  if (rv) {
    ros_message.software.resize(std::strlen(&ros_message.software[0]));
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlebot3_msgs
get_serialized_size(
  const turtlebot3_msgs::msg::VersionInfo & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: hardware
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.hardware.size() + 1;
  // Member: firmware
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.firmware.size() + 1;
  // Member: software
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.software.size() + 1;

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlebot3_msgs
max_serialized_size_VersionInfo(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: hardware
  *full_bounded = false;
  // Member: firmware
  *full_bounded = false;
  // Member: software
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static bool _VersionInfo__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const turtlebot3_msgs::msg::VersionInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VersionInfo__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<turtlebot3_msgs::msg::VersionInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VersionInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const turtlebot3_msgs::msg::VersionInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VersionInfo__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const turtlebot3_msgs::msg::VersionInfo *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _VersionInfo__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_VersionInfo(&full_bounded, 0);
}

static message_type_support_callbacks_t _VersionInfo__callbacks = {
  "turtlebot3_msgs::msg",
  "VersionInfo",
  _VersionInfo__cdr_serialize,
  _VersionInfo__cdr_deserialize,
  _VersionInfo__get_serialized_size,
  _VersionInfo__get_serialized_size_with_initial_alignment,
  _VersionInfo__max_serialized_size
};

static rosidl_message_type_support_t _VersionInfo__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_VersionInfo__callbacks,
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
get_message_type_support_handle<turtlebot3_msgs::msg::VersionInfo>()
{
  return &turtlebot3_msgs::msg::typesupport_microxrcedds_cpp::_VersionInfo__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, turtlebot3_msgs, msg, VersionInfo)() {
  return &turtlebot3_msgs::msg::typesupport_microxrcedds_cpp::_VersionInfo__handle;
}

#ifdef __cplusplus
}
#endif
