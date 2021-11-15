// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from motion_controller_msgs:msg/RoboclawCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "motion_controller_msgs/msg/detail/roboclaw_command__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace motion_controller_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RoboclawCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) motion_controller_msgs::msg::RoboclawCommand(_init);
}

void RoboclawCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<motion_controller_msgs::msg::RoboclawCommand *>(message_memory);
  typed_message->~RoboclawCommand();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RoboclawCommand_message_member_array[2] = {
  {
    "m1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_controller_msgs::msg::RoboclawCommand, m1),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "m2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_controller_msgs::msg::RoboclawCommand, m2),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RoboclawCommand_message_members = {
  "motion_controller_msgs::msg",  // message namespace
  "RoboclawCommand",  // message name
  2,  // number of fields
  sizeof(motion_controller_msgs::msg::RoboclawCommand),
  RoboclawCommand_message_member_array,  // message members
  RoboclawCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  RoboclawCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RoboclawCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RoboclawCommand_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace motion_controller_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motion_controller_msgs::msg::RoboclawCommand>()
{
  return &::motion_controller_msgs::msg::rosidl_typesupport_introspection_cpp::RoboclawCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motion_controller_msgs, msg, RoboclawCommand)() {
  return &::motion_controller_msgs::msg::rosidl_typesupport_introspection_cpp::RoboclawCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
