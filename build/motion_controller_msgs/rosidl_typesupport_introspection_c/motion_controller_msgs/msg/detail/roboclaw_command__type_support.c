// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from motion_controller_msgs:msg/RoboclawCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "motion_controller_msgs/msg/detail/roboclaw_command__rosidl_typesupport_introspection_c.h"
#include "motion_controller_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "motion_controller_msgs/msg/detail/roboclaw_command__functions.h"
#include "motion_controller_msgs/msg/detail/roboclaw_command__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void RoboclawCommand__rosidl_typesupport_introspection_c__RoboclawCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  motion_controller_msgs__msg__RoboclawCommand__init(message_memory);
}

void RoboclawCommand__rosidl_typesupport_introspection_c__RoboclawCommand_fini_function(void * message_memory)
{
  motion_controller_msgs__msg__RoboclawCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RoboclawCommand__rosidl_typesupport_introspection_c__RoboclawCommand_message_member_array[2] = {
  {
    "m1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_controller_msgs__msg__RoboclawCommand, m1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "m2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_controller_msgs__msg__RoboclawCommand, m2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RoboclawCommand__rosidl_typesupport_introspection_c__RoboclawCommand_message_members = {
  "motion_controller_msgs__msg",  // message namespace
  "RoboclawCommand",  // message name
  2,  // number of fields
  sizeof(motion_controller_msgs__msg__RoboclawCommand),
  RoboclawCommand__rosidl_typesupport_introspection_c__RoboclawCommand_message_member_array,  // message members
  RoboclawCommand__rosidl_typesupport_introspection_c__RoboclawCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  RoboclawCommand__rosidl_typesupport_introspection_c__RoboclawCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RoboclawCommand__rosidl_typesupport_introspection_c__RoboclawCommand_message_type_support_handle = {
  0,
  &RoboclawCommand__rosidl_typesupport_introspection_c__RoboclawCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_motion_controller_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motion_controller_msgs, msg, RoboclawCommand)() {
  if (!RoboclawCommand__rosidl_typesupport_introspection_c__RoboclawCommand_message_type_support_handle.typesupport_identifier) {
    RoboclawCommand__rosidl_typesupport_introspection_c__RoboclawCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RoboclawCommand__rosidl_typesupport_introspection_c__RoboclawCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
