// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__rosidl_typesupport_microxrcedds_cpp.hpp.em
// with input from turtlebot3_msgs:msg/Sound.idl
// generated code does not contain a copyright notice

#ifndef TURTLEBOT3_MSGS__MSG__SOUND__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
#define TURTLEBOT3_MSGS__MSG__SOUND__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "turtlebot3_msgs/msg/rosidl_typesupport_microxrcedds_cpp__visibility_control.h"
#include "turtlebot3_msgs/msg/detail/sound__struct.hpp"

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

#include "ucdr/microcdr.h"

namespace turtlebot3_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlebot3_msgs
cdr_serialize(
  const turtlebot3_msgs::msg::Sound & ros_message,
  ucdrBuffer * cdr);

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlebot3_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  turtlebot3_msgs::msg::Sound & ros_message);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlebot3_msgs
get_serialized_size(
  const turtlebot3_msgs::msg::Sound & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlebot3_msgs
max_serialized_size_Sound(
  bool * full_bounded,
  size_t current_alignment);

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace turtlebot3_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlebot3_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, turtlebot3_msgs, msg, Sound)();

#ifdef __cplusplus
}
#endif

#endif  // TURTLEBOT3_MSGS__MSG__SOUND__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
