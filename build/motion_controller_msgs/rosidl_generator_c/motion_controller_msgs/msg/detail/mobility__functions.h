// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from motion_controller_msgs:msg/Mobility.idl
// generated code does not contain a copyright notice

#ifndef MOTION_CONTROLLER_MSGS__MSG__DETAIL__MOBILITY__FUNCTIONS_H_
#define MOTION_CONTROLLER_MSGS__MSG__DETAIL__MOBILITY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "motion_controller_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "motion_controller_msgs/msg/detail/mobility__struct.h"

/// Initialize msg/Mobility message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * motion_controller_msgs__msg__Mobility
 * )) before or use
 * motion_controller_msgs__msg__Mobility__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_motion_controller_msgs
bool
motion_controller_msgs__msg__Mobility__init(motion_controller_msgs__msg__Mobility * msg);

/// Finalize msg/Mobility message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motion_controller_msgs
void
motion_controller_msgs__msg__Mobility__fini(motion_controller_msgs__msg__Mobility * msg);

/// Create msg/Mobility message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * motion_controller_msgs__msg__Mobility__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motion_controller_msgs
motion_controller_msgs__msg__Mobility *
motion_controller_msgs__msg__Mobility__create();

/// Destroy msg/Mobility message.
/**
 * It calls
 * motion_controller_msgs__msg__Mobility__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motion_controller_msgs
void
motion_controller_msgs__msg__Mobility__destroy(motion_controller_msgs__msg__Mobility * msg);


/// Initialize array of msg/Mobility messages.
/**
 * It allocates the memory for the number of elements and calls
 * motion_controller_msgs__msg__Mobility__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_motion_controller_msgs
bool
motion_controller_msgs__msg__Mobility__Sequence__init(motion_controller_msgs__msg__Mobility__Sequence * array, size_t size);

/// Finalize array of msg/Mobility messages.
/**
 * It calls
 * motion_controller_msgs__msg__Mobility__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motion_controller_msgs
void
motion_controller_msgs__msg__Mobility__Sequence__fini(motion_controller_msgs__msg__Mobility__Sequence * array);

/// Create array of msg/Mobility messages.
/**
 * It allocates the memory for the array and calls
 * motion_controller_msgs__msg__Mobility__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motion_controller_msgs
motion_controller_msgs__msg__Mobility__Sequence *
motion_controller_msgs__msg__Mobility__Sequence__create(size_t size);

/// Destroy array of msg/Mobility messages.
/**
 * It calls
 * motion_controller_msgs__msg__Mobility__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motion_controller_msgs
void
motion_controller_msgs__msg__Mobility__Sequence__destroy(motion_controller_msgs__msg__Mobility__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MOTION_CONTROLLER_MSGS__MSG__DETAIL__MOBILITY__FUNCTIONS_H_
