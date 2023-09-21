// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from turtlebot3_msgs:srv/Dqn.idl
// generated code does not contain a copyright notice
#include "turtlebot3_msgs/srv/detail/dqn__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "turtlebot3_msgs/srv/detail/dqn__struct.hpp"

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
  const turtlebot3_msgs::srv::Dqn_Request & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: action
  rv = ucdr_serialize_uint8_t(cdr, ros_message.action);
  // Member: init
  rv = ucdr_serialize_bool(cdr, ros_message.init);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlebot3_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  turtlebot3_msgs::srv::Dqn_Request & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: action
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.action);
  // Member: init
  rv = ucdr_deserialize_bool(cdr, &ros_message.init);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlebot3_msgs
get_serialized_size(
  const turtlebot3_msgs::srv::Dqn_Request & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: action
  {
    const size_t item_size = sizeof(ros_message.action);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: init
  {
    const size_t item_size = sizeof(ros_message.init);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlebot3_msgs
max_serialized_size_Dqn_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: action
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: init
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);

  return current_alignment - initial_alignment;
}

static bool _Dqn_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const turtlebot3_msgs::srv::Dqn_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Dqn_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<turtlebot3_msgs::srv::Dqn_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Dqn_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const turtlebot3_msgs::srv::Dqn_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Dqn_Request__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const turtlebot3_msgs::srv::Dqn_Request *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Dqn_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Dqn_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t _Dqn_Request__callbacks = {
  "turtlebot3_msgs::srv",
  "Dqn_Request",
  _Dqn_Request__cdr_serialize,
  _Dqn_Request__cdr_deserialize,
  _Dqn_Request__get_serialized_size,
  _Dqn_Request__get_serialized_size_with_initial_alignment,
  _Dqn_Request__max_serialized_size
};

static rosidl_message_type_support_t _Dqn_Request__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Dqn_Request__callbacks,
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
get_message_type_support_handle<turtlebot3_msgs::srv::Dqn_Request>()
{
  return &turtlebot3_msgs::srv::typesupport_microxrcedds_cpp::_Dqn_Request__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, turtlebot3_msgs, srv, Dqn_Request)() {
  return &turtlebot3_msgs::srv::typesupport_microxrcedds_cpp::_Dqn_Request__handle;
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
  const turtlebot3_msgs::srv::Dqn_Response & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: state
  {
    size_t size = ros_message.state.size();
    rv = ucdr_serialize_sequence_float(cdr, &ros_message.state[0], size);
  }
  // Member: reward
  rv = ucdr_serialize_float(cdr, ros_message.reward);
  // Member: done
  rv = ucdr_serialize_bool(cdr, ros_message.done);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlebot3_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  turtlebot3_msgs::srv::Dqn_Response & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: state
  {
    uint32_t size;
    const size_t capacity = ros_message.state.capacity();
    ros_message.state.resize(capacity);
    rv = ucdr_deserialize_sequence_float(cdr, &ros_message.state[0], capacity, &size);
    if (rv) {
      ros_message.state.resize(size);
    }
  }
  // Member: reward
  rv = ucdr_deserialize_float(cdr, &ros_message.reward);
  // Member: done
  rv = ucdr_deserialize_bool(cdr, &ros_message.done);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlebot3_msgs
get_serialized_size(
  const turtlebot3_msgs::srv::Dqn_Response & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: state
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.state.size();
    size_t item_size = sizeof(ros_message.state[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: reward
  {
    const size_t item_size = sizeof(ros_message.reward);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: done
  {
    const size_t item_size = sizeof(ros_message.done);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_turtlebot3_msgs
max_serialized_size_Dqn_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: state
  {
    *full_bounded = false;
  }
  // Member: reward
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: done
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);

  return current_alignment - initial_alignment;
}

static bool _Dqn_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const turtlebot3_msgs::srv::Dqn_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Dqn_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<turtlebot3_msgs::srv::Dqn_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Dqn_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const turtlebot3_msgs::srv::Dqn_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Dqn_Response__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const turtlebot3_msgs::srv::Dqn_Response *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Dqn_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Dqn_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t _Dqn_Response__callbacks = {
  "turtlebot3_msgs::srv",
  "Dqn_Response",
  _Dqn_Response__cdr_serialize,
  _Dqn_Response__cdr_deserialize,
  _Dqn_Response__get_serialized_size,
  _Dqn_Response__get_serialized_size_with_initial_alignment,
  _Dqn_Response__max_serialized_size
};

static rosidl_message_type_support_t _Dqn_Response__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Dqn_Response__callbacks,
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
get_message_type_support_handle<turtlebot3_msgs::srv::Dqn_Response>()
{
  return &turtlebot3_msgs::srv::typesupport_microxrcedds_cpp::_Dqn_Response__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, turtlebot3_msgs, srv, Dqn_Response)() {
  return &turtlebot3_msgs::srv::typesupport_microxrcedds_cpp::_Dqn_Response__handle;
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

static service_type_support_callbacks_t _Dqn__callbacks = {
  "turtlebot3_msgs::srv",
  "Dqn",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, turtlebot3_msgs, srv, Dqn_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, turtlebot3_msgs, srv, Dqn_Response),
};

static rosidl_service_type_support_t _Dqn__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Dqn__callbacks,
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
get_service_type_support_handle<turtlebot3_msgs::srv::Dqn>()
{
  return &turtlebot3_msgs::srv::typesupport_microxrcedds_cpp::_Dqn__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, turtlebot3_msgs, srv, Dqn)() {
  return &turtlebot3_msgs::srv::typesupport_microxrcedds_cpp::_Dqn__handle;
}

#ifdef __cplusplus
}
#endif
