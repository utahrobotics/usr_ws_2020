// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from motion_controller_msgs:msg/Mobility.idl
// generated code does not contain a copyright notice
#include "motion_controller_msgs/msg/detail/mobility__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "motion_controller_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "motion_controller_msgs/msg/detail/mobility__struct.h"
#include "motion_controller_msgs/msg/detail/mobility__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Mobility__ros_msg_type = motion_controller_msgs__msg__Mobility;

static bool _Mobility__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Mobility__ros_msg_type * ros_message = static_cast<const _Mobility__ros_msg_type *>(untyped_ros_message);
  // Field name: front_right
  {
    cdr << ros_message->front_right;
  }

  // Field name: front_left
  {
    cdr << ros_message->front_left;
  }

  // Field name: rear_right
  {
    cdr << ros_message->rear_right;
  }

  // Field name: rear_left
  {
    cdr << ros_message->rear_left;
  }

  return true;
}

static bool _Mobility__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Mobility__ros_msg_type * ros_message = static_cast<_Mobility__ros_msg_type *>(untyped_ros_message);
  // Field name: front_right
  {
    cdr >> ros_message->front_right;
  }

  // Field name: front_left
  {
    cdr >> ros_message->front_left;
  }

  // Field name: rear_right
  {
    cdr >> ros_message->rear_right;
  }

  // Field name: rear_left
  {
    cdr >> ros_message->rear_left;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motion_controller_msgs
size_t get_serialized_size_motion_controller_msgs__msg__Mobility(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Mobility__ros_msg_type * ros_message = static_cast<const _Mobility__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name front_right
  {
    size_t item_size = sizeof(ros_message->front_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_left
  {
    size_t item_size = sizeof(ros_message->front_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_right
  {
    size_t item_size = sizeof(ros_message->rear_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_left
  {
    size_t item_size = sizeof(ros_message->rear_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Mobility__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_motion_controller_msgs__msg__Mobility(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motion_controller_msgs
size_t max_serialized_size_motion_controller_msgs__msg__Mobility(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: front_right
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: front_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rear_right
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rear_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Mobility__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_motion_controller_msgs__msg__Mobility(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Mobility = {
  "motion_controller_msgs::msg",
  "Mobility",
  _Mobility__cdr_serialize,
  _Mobility__cdr_deserialize,
  _Mobility__get_serialized_size,
  _Mobility__max_serialized_size
};

static rosidl_message_type_support_t _Mobility__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Mobility,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motion_controller_msgs, msg, Mobility)() {
  return &_Mobility__type_support;
}

#if defined(__cplusplus)
}
#endif
