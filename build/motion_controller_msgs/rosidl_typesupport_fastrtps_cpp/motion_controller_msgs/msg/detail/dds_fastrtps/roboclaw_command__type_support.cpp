// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from motion_controller_msgs:msg/RoboclawCommand.idl
// generated code does not contain a copyright notice
#include "motion_controller_msgs/msg/detail/roboclaw_command__rosidl_typesupport_fastrtps_cpp.hpp"
#include "motion_controller_msgs/msg/detail/roboclaw_command__struct.hpp"

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
  const motion_controller_msgs::msg::RoboclawCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: m1
  cdr << ros_message.m1;
  // Member: m2
  cdr << ros_message.m2;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_motion_controller_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  motion_controller_msgs::msg::RoboclawCommand & ros_message)
{
  // Member: m1
  cdr >> ros_message.m1;

  // Member: m2
  cdr >> ros_message.m2;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_motion_controller_msgs
get_serialized_size(
  const motion_controller_msgs::msg::RoboclawCommand & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: m1
  {
    size_t item_size = sizeof(ros_message.m1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: m2
  {
    size_t item_size = sizeof(ros_message.m2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_motion_controller_msgs
max_serialized_size_RoboclawCommand(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: m1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: m2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _RoboclawCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const motion_controller_msgs::msg::RoboclawCommand *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RoboclawCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<motion_controller_msgs::msg::RoboclawCommand *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RoboclawCommand__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const motion_controller_msgs::msg::RoboclawCommand *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RoboclawCommand__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RoboclawCommand(full_bounded, 0);
}

static message_type_support_callbacks_t _RoboclawCommand__callbacks = {
  "motion_controller_msgs::msg",
  "RoboclawCommand",
  _RoboclawCommand__cdr_serialize,
  _RoboclawCommand__cdr_deserialize,
  _RoboclawCommand__get_serialized_size,
  _RoboclawCommand__max_serialized_size
};

static rosidl_message_type_support_t _RoboclawCommand__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RoboclawCommand__callbacks,
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
get_message_type_support_handle<motion_controller_msgs::msg::RoboclawCommand>()
{
  return &motion_controller_msgs::msg::typesupport_fastrtps_cpp::_RoboclawCommand__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motion_controller_msgs, msg, RoboclawCommand)() {
  return &motion_controller_msgs::msg::typesupport_fastrtps_cpp::_RoboclawCommand__handle;
}

#ifdef __cplusplus
}
#endif
