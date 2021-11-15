// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from motion_controller_msgs:msg/Mobility.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "motion_controller_msgs/msg/detail/mobility__rosidl_typesupport_introspection_c.h"
#include "motion_controller_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "motion_controller_msgs/msg/detail/mobility__functions.h"
#include "motion_controller_msgs/msg/detail/mobility__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Mobility__rosidl_typesupport_introspection_c__Mobility_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  motion_controller_msgs__msg__Mobility__init(message_memory);
}

void Mobility__rosidl_typesupport_introspection_c__Mobility_fini_function(void * message_memory)
{
  motion_controller_msgs__msg__Mobility__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Mobility__rosidl_typesupport_introspection_c__Mobility_message_member_array[4] = {
  {
    "front_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_controller_msgs__msg__Mobility, front_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "front_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_controller_msgs__msg__Mobility, front_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rear_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_controller_msgs__msg__Mobility, rear_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rear_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motion_controller_msgs__msg__Mobility, rear_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Mobility__rosidl_typesupport_introspection_c__Mobility_message_members = {
  "motion_controller_msgs__msg",  // message namespace
  "Mobility",  // message name
  4,  // number of fields
  sizeof(motion_controller_msgs__msg__Mobility),
  Mobility__rosidl_typesupport_introspection_c__Mobility_message_member_array,  // message members
  Mobility__rosidl_typesupport_introspection_c__Mobility_init_function,  // function to initialize message memory (memory has to be allocated)
  Mobility__rosidl_typesupport_introspection_c__Mobility_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Mobility__rosidl_typesupport_introspection_c__Mobility_message_type_support_handle = {
  0,
  &Mobility__rosidl_typesupport_introspection_c__Mobility_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_motion_controller_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motion_controller_msgs, msg, Mobility)() {
  if (!Mobility__rosidl_typesupport_introspection_c__Mobility_message_type_support_handle.typesupport_identifier) {
    Mobility__rosidl_typesupport_introspection_c__Mobility_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Mobility__rosidl_typesupport_introspection_c__Mobility_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
