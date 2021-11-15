// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motion_controller_msgs:msg/RoboclawCommand.idl
// generated code does not contain a copyright notice

#ifndef MOTION_CONTROLLER_MSGS__MSG__DETAIL__ROBOCLAW_COMMAND__STRUCT_H_
#define MOTION_CONTROLLER_MSGS__MSG__DETAIL__ROBOCLAW_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/RoboclawCommand in the package motion_controller_msgs.
typedef struct motion_controller_msgs__msg__RoboclawCommand
{
  float m1;
  float m2;
} motion_controller_msgs__msg__RoboclawCommand;

// Struct for a sequence of motion_controller_msgs__msg__RoboclawCommand.
typedef struct motion_controller_msgs__msg__RoboclawCommand__Sequence
{
  motion_controller_msgs__msg__RoboclawCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motion_controller_msgs__msg__RoboclawCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTION_CONTROLLER_MSGS__MSG__DETAIL__ROBOCLAW_COMMAND__STRUCT_H_
