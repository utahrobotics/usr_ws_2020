// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motion_controller_msgs:msg/Mobility.idl
// generated code does not contain a copyright notice

#ifndef MOTION_CONTROLLER_MSGS__MSG__DETAIL__MOBILITY__STRUCT_H_
#define MOTION_CONTROLLER_MSGS__MSG__DETAIL__MOBILITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Mobility in the package motion_controller_msgs.
typedef struct motion_controller_msgs__msg__Mobility
{
  float front_right;
  float front_left;
  float rear_right;
  float rear_left;
} motion_controller_msgs__msg__Mobility;

// Struct for a sequence of motion_controller_msgs__msg__Mobility.
typedef struct motion_controller_msgs__msg__Mobility__Sequence
{
  motion_controller_msgs__msg__Mobility * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motion_controller_msgs__msg__Mobility__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTION_CONTROLLER_MSGS__MSG__DETAIL__MOBILITY__STRUCT_H_
