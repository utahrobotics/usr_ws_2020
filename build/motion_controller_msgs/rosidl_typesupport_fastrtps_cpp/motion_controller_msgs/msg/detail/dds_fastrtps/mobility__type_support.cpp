// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from motion_controller_msgs:msg/Mobility.idl
// generated code does not contain a copyright notice
#include "motion_controller_msgs/msg/detail/mobility__rosidl_typesupport_fastrtps_cpp.hpp"
#include "motion_controller_msgs/msg/detail/mobility__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace motion_controller_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_motion_controller_msgs
cdr_serialize(
  const motion_controller_msgs::msg::Mobility & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: front_right
  cdr << ros_message.front_right;
  // Member: front_left
  cdr << ros_message.front_left;
  // Member: rear_right
  cdr << ros_message.rear_right;
  // Member: rear_left
  cdr << ros_message.rear_left;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_motion_controller_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  motion_controller_msgs::msg::Mobility & ros_message)
{
  // Member: front_right
  cdr >> ros_message.front_right;

  // Member: front_left
  cdr >> ros_message.front_left;

  // Member: rear_right
  cdr >> ros_message.rear_right;

  // Member: rear_left
  cdr >> ros_message.rear_left;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_motion_controller_msgs
get_serialized_size(
  const motion_controller_msgs::msg::Mobility & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: front_right
  {
    size_t item_size = sizeof(ros_message.front_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_left
  {
    size_t item_size = sizeof(ros_message.front_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rear_right
  {
    size_t item_size = sizeof(ros_message.rear_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rear_left
  {
    size_t item_size = sizeof(ros_message.rear_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_motion_controller_msgs
max_serialized_size_Mobility(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: front_right
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: front_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rear_right
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rear_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Mobility__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const motion_controller_msgs::msg::Mobility *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Mobility__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<motion_controller_msgs::msg::Mobility *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Mobility__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const motion_controller_msgs::msg::Mobility *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Mobility__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Mobility(full_bounded, 0);
}

static message_type_support_callbacks_t _Mobility__callbacks = {
  "motion_controller_msgs::msg",
  "Mobility",
  _Mobility__cdr_serialize,
  _Mobility__cdr_deserialize,
  _Mobility__get_serialized_size,
  _Mobility__max_serialized_size
};

static rosidl_message_type_support_t _Mobility__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Mobility__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace motion_controller_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_motion_controller_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<motion_controller_msgs::msg::Mobility>()
{
  return &motion_controller_msgs::msg::typesupport_fastrtps_cpp::_Mobility__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motion_controller_msgs, msg, Mobility)() {
  return &motion_controller_msgs::msg::typesupport_fastrtps_cpp::_Mobility__handle;
}

#ifdef __cplusplus
}
#endif
