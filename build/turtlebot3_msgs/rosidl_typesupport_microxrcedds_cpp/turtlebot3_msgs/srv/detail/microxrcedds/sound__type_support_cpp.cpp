// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from turtlebot3_msgs:srv/Sound.idl
// generated code does not contain a copyright notice
#include "turtlebot3_msgs/srv/detail/sound__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "turtlebot3_msgs/srv/detail/sound__struct.hpp"

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

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlebot3_msgs
cdr_serialize(
  const turtlebot3_msgs::srv::Sound_Request & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: value
  rv = ucdr_serialize_uint8_t(cdr, ros_message.value);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlebot3_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  turtlebot3_msgs::srv::Sound_Request & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: value
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.value);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlebot3_msgs
get_serialized_size(
  const turtlebot3_msgs::srv::Sound_Request & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: value
  {
    const size_t item_size = sizeof(ros_message.value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlebot3_msgs
max_serialized_size_Sound_Request(
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

static bool _Sound_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const turtlebot3_msgs::srv::Sound_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Sound_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<turtlebot3_msgs::srv::Sound_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Sound_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const turtlebot3_msgs::srv::Sound_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Sound_Request__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const turtlebot3_msgs::srv::Sound_Request *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Sound_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Sound_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t _Sound_Request__callbacks = {
  "turtlebot3_msgs::srv",
  "Sound_Request",
  _Sound_Request__cdr_serialize,
  _Sound_Request__cdr_deserialize,
  _Sound_Request__get_serialized_size,
  _Sound_Request__get_serialized_size_with_initial_alignment,
  _Sound_Request__max_serialized_size
};

static rosidl_message_type_support_t _Sound_Request__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Sound_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace turtlebot3_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_turtlebot3_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlebot3_msgs::srv::Sound_Request>()
{
  return &turtlebot3_msgs::srv::typesupport_microxrcedds_cpp::_Sound_Request__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, turtlebot3_msgs, srv, Sound_Request)() {
  return &turtlebot3_msgs::srv::typesupport_microxrcedds_cpp::_Sound_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <algorithm>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include <cstring>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
// already included above
// #include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions

namespace turtlebot3_msgs
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlebot3_msgs
cdr_serialize(
  const turtlebot3_msgs::srv::Sound_Response & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: success
  rv = ucdr_serialize_bool(cdr, ros_message.success);
  // Member: message
  rv = ucdr_serialize_string(cdr, ros_message.message.c_str());

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlebot3_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  turtlebot3_msgs::srv::Sound_Response & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: success
  rv = ucdr_deserialize_bool(cdr, &ros_message.success);
  // Member: message
  ros_message.message.resize(ros_message.message.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.message[0], ros_message.message.capacity());
  if (rv) {
    ros_message.message.resize(std::strlen(&ros_message.message[0]));
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlebot3_msgs
get_serialized_size(
  const turtlebot3_msgs::srv::Sound_Response & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: success
  {
    const size_t item_size = sizeof(ros_message.success);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: message
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.message.size() + 1;

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlebot3_msgs
max_serialized_size_Sound_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: success
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: message
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static bool _Sound_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const turtlebot3_msgs::srv::Sound_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Sound_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<turtlebot3_msgs::srv::Sound_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Sound_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const turtlebot3_msgs::srv::Sound_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Sound_Response__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const turtlebot3_msgs::srv::Sound_Response *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Sound_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Sound_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t _Sound_Response__callbacks = {
  "turtlebot3_msgs::srv",
  "Sound_Response",
  _Sound_Response__cdr_serialize,
  _Sound_Response__cdr_deserialize,
  _Sound_Response__get_serialized_size,
  _Sound_Response__get_serialized_size_with_initial_alignment,
  _Sound_Response__max_serialized_size
};

static rosidl_message_type_support_t _Sound_Response__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Sound_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace turtlebot3_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_turtlebot3_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlebot3_msgs::srv::Sound_Response>()
{
  return &turtlebot3_msgs::srv::typesupport_microxrcedds_cpp::_Sound_Response__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, turtlebot3_msgs, srv, Sound_Response)() {
  return &turtlebot3_msgs::srv::typesupport_microxrcedds_cpp::_Sound_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/service_type_support_decl.hpp"

namespace turtlebot3_msgs
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

static service_type_support_callbacks_t _Sound__callbacks = {
  "turtlebot3_msgs::srv",
  "Sound",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, turtlebot3_msgs, srv, Sound_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, turtlebot3_msgs, srv, Sound_Response),
};

static rosidl_service_type_support_t _Sound__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Sound__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace turtlebot3_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_turtlebot3_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<turtlebot3_msgs::srv::Sound>()
{
  return &turtlebot3_msgs::srv::typesupport_microxrcedds_cpp::_Sound__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, turtlebot3_msgs, srv, Sound)() {
  return &turtlebot3_msgs::srv::typesupport_microxrcedds_cpp::_Sound__handle;
}

#ifdef __cplusplus
}
#endif
