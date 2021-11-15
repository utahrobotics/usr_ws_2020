// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from motion_controller_msgs:msg/Mobility.idl
// generated code does not contain a copyright notice
#include "motion_controller_msgs/msg/detail/mobility__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
motion_controller_msgs__msg__Mobility__init(motion_controller_msgs__msg__Mobility * msg)
{
  if (!msg) {
    return false;
  }
  // front_right
  // front_left
  // rear_right
  // rear_left
  return true;
}

void
motion_controller_msgs__msg__Mobility__fini(motion_controller_msgs__msg__Mobility * msg)
{
  if (!msg) {
    return;
  }
  // front_right
  // front_left
  // rear_right
  // rear_left
}

motion_controller_msgs__msg__Mobility *
motion_controller_msgs__msg__Mobility__create()
{
  motion_controller_msgs__msg__Mobility * msg = (motion_controller_msgs__msg__Mobility *)malloc(sizeof(motion_controller_msgs__msg__Mobility));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motion_controller_msgs__msg__Mobility));
  bool success = motion_controller_msgs__msg__Mobility__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
motion_controller_msgs__msg__Mobility__destroy(motion_controller_msgs__msg__Mobility * msg)
{
  if (msg) {
    motion_controller_msgs__msg__Mobility__fini(msg);
  }
  free(msg);
}


bool
motion_controller_msgs__msg__Mobility__Sequence__init(motion_controller_msgs__msg__Mobility__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  motion_controller_msgs__msg__Mobility * data = NULL;
  if (size) {
    data = (motion_controller_msgs__msg__Mobility *)calloc(size, sizeof(motion_controller_msgs__msg__Mobility));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motion_controller_msgs__msg__Mobility__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motion_controller_msgs__msg__Mobility__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
motion_controller_msgs__msg__Mobility__Sequence__fini(motion_controller_msgs__msg__Mobility__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      motion_controller_msgs__msg__Mobility__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

motion_controller_msgs__msg__Mobility__Sequence *
motion_controller_msgs__msg__Mobility__Sequence__create(size_t size)
{
  motion_controller_msgs__msg__Mobility__Sequence * array = (motion_controller_msgs__msg__Mobility__Sequence *)malloc(sizeof(motion_controller_msgs__msg__Mobility__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = motion_controller_msgs__msg__Mobility__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
motion_controller_msgs__msg__Mobility__Sequence__destroy(motion_controller_msgs__msg__Mobility__Sequence * array)
{
  if (array) {
    motion_controller_msgs__msg__Mobility__Sequence__fini(array);
  }
  free(array);
}
