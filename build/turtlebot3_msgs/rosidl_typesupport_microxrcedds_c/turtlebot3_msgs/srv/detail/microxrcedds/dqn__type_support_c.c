// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from turtlebot3_msgs:srv/Dqn.idl
// generated code does not contain a copyright notice
#include "turtlebot3_msgs/srv/detail/dqn__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "turtlebot3_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "turtlebot3_msgs/srv/detail/dqn__struct.h"
#include "turtlebot3_msgs/srv/detail/dqn__functions.h"

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


typedef turtlebot3_msgs__srv__Dqn_Request _Dqn_Request__ros_msg_type;

static bool _Dqn_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Dqn_Request__ros_msg_type * ros_message = (_Dqn_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: action
  rv = ucdr_serialize_uint8_t(cdr, ros_message->action);
  // Member: init
  rv = ucdr_serialize_bool(cdr, (ros_message->init) ? 0x01 : 0x00);

  return rv;
}

static bool _Dqn_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Dqn_Request__ros_msg_type * ros_message = (_Dqn_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: action
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->action);
  // Field name: init
  rv = ucdr_deserialize_bool(cdr, &ros_message->init);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlebot3_msgs
size_t get_serialized_size_turtlebot3_msgs__srv__Dqn_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Dqn_Request__ros_msg_type * ros_message = (const _Dqn_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: action
  {
    const size_t item_size = sizeof(ros_message->action);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: init
  {
    const size_t item_size = sizeof(ros_message->init);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Dqn_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_turtlebot3_msgs__srv__Dqn_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlebot3_msgs
size_t max_serialized_size_turtlebot3_msgs__srv__Dqn_Request(
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

static size_t _Dqn_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_turtlebot3_msgs__srv__Dqn_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Dqn_Request = {
  "turtlebot3_msgs::srv",
  "Dqn_Request",
  _Dqn_Request__cdr_serialize,
  _Dqn_Request__cdr_deserialize,
  _Dqn_Request__get_serialized_size,
  get_serialized_size_turtlebot3_msgs__srv__Dqn_Request,
  _Dqn_Request__max_serialized_size
};

static rosidl_message_type_support_t _Dqn_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Dqn_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlebot3_msgs, srv, Dqn_Request)() {
  return &_Dqn_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <stdint.h>
// already included above
// #include <stdio.h>
// already included above
// #include <string.h>
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "turtlebot3_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "turtlebot3_msgs/srv/detail/dqn__struct.h"
// already included above
// #include "turtlebot3_msgs/srv/detail/dqn__functions.h"

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

#include "rosidl_runtime_c/primitives_sequence.h"  // state
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // state

// forward declare type support functions


typedef turtlebot3_msgs__srv__Dqn_Response _Dqn_Response__ros_msg_type;

static bool _Dqn_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Dqn_Response__ros_msg_type * ros_message = (_Dqn_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: state
  {
    const size_t size = ros_message->state.size;
    rv = ucdr_serialize_sequence_float(cdr, ros_message->state.data, size);
  }
  // Member: reward
  rv = ucdr_serialize_float(cdr, ros_message->reward);
  // Member: done
  rv = ucdr_serialize_bool(cdr, (ros_message->done) ? 0x01 : 0x00);

  return rv;
}

static bool _Dqn_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Dqn_Response__ros_msg_type * ros_message = (_Dqn_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: state
  {
    uint32_t size;
    const size_t capacity = ros_message->state.capacity;
    rv = ucdr_deserialize_sequence_float(cdr, ros_message->state.data, capacity, &size);
    if (rv) {
      ros_message->state.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->state.size = 0;
      ucdr_align_to(cdr, sizeof(float));
      ucdr_advance_buffer(cdr, size * sizeof(float));
    }
  }
  // Field name: reward
  rv = ucdr_deserialize_float(cdr, &ros_message->reward);
  // Field name: done
  rv = ucdr_deserialize_bool(cdr, &ros_message->done);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlebot3_msgs
size_t get_serialized_size_turtlebot3_msgs__srv__Dqn_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Dqn_Response__ros_msg_type * ros_message = (const _Dqn_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: state
  {
    size_t sequence_size = ros_message->state.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->state.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: reward
  {
    const size_t item_size = sizeof(ros_message->reward);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: done
  {
    const size_t item_size = sizeof(ros_message->done);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Dqn_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_turtlebot3_msgs__srv__Dqn_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlebot3_msgs
size_t max_serialized_size_turtlebot3_msgs__srv__Dqn_Response(
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

static size_t _Dqn_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_turtlebot3_msgs__srv__Dqn_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Dqn_Response = {
  "turtlebot3_msgs::srv",
  "Dqn_Response",
  _Dqn_Response__cdr_serialize,
  _Dqn_Response__cdr_deserialize,
  _Dqn_Response__get_serialized_size,
  get_serialized_size_turtlebot3_msgs__srv__Dqn_Response,
  _Dqn_Response__max_serialized_size
};

static rosidl_message_type_support_t _Dqn_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Dqn_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlebot3_msgs, srv, Dqn_Response)() {
  return &_Dqn_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "turtlebot3_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "turtlebot3_msgs/srv/dqn.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Dqn__callbacks = {
  "turtlebot3_msgs::srv",
  "Dqn",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlebot3_msgs, srv, Dqn_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlebot3_msgs, srv, Dqn_Response),
};

static rosidl_service_type_support_t Dqn__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &Dqn__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlebot3_msgs, srv, Dqn)() {
  return &Dqn__handle;
}

#if defined(__cplusplus)
}
#endif
