// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from chassis_control_msgs:msg/Ominicmd.idl
// generated code does not contain a copyright notice
#include "chassis_control_msgs/msg/detail/ominicmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
chassis_control_msgs__msg__Ominicmd__init(chassis_control_msgs__msg__Ominicmd * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // angle
  return true;
}

void
chassis_control_msgs__msg__Ominicmd__fini(chassis_control_msgs__msg__Ominicmd * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // angle
}

bool
chassis_control_msgs__msg__Ominicmd__are_equal(const chassis_control_msgs__msg__Ominicmd * lhs, const chassis_control_msgs__msg__Ominicmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  return true;
}

bool
chassis_control_msgs__msg__Ominicmd__copy(
  const chassis_control_msgs__msg__Ominicmd * input,
  chassis_control_msgs__msg__Ominicmd * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // angle
  output->angle = input->angle;
  return true;
}

chassis_control_msgs__msg__Ominicmd *
chassis_control_msgs__msg__Ominicmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chassis_control_msgs__msg__Ominicmd * msg = (chassis_control_msgs__msg__Ominicmd *)allocator.allocate(sizeof(chassis_control_msgs__msg__Ominicmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chassis_control_msgs__msg__Ominicmd));
  bool success = chassis_control_msgs__msg__Ominicmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
chassis_control_msgs__msg__Ominicmd__destroy(chassis_control_msgs__msg__Ominicmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    chassis_control_msgs__msg__Ominicmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
chassis_control_msgs__msg__Ominicmd__Sequence__init(chassis_control_msgs__msg__Ominicmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chassis_control_msgs__msg__Ominicmd * data = NULL;

  if (size) {
    data = (chassis_control_msgs__msg__Ominicmd *)allocator.zero_allocate(size, sizeof(chassis_control_msgs__msg__Ominicmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chassis_control_msgs__msg__Ominicmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chassis_control_msgs__msg__Ominicmd__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
chassis_control_msgs__msg__Ominicmd__Sequence__fini(chassis_control_msgs__msg__Ominicmd__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      chassis_control_msgs__msg__Ominicmd__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

chassis_control_msgs__msg__Ominicmd__Sequence *
chassis_control_msgs__msg__Ominicmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chassis_control_msgs__msg__Ominicmd__Sequence * array = (chassis_control_msgs__msg__Ominicmd__Sequence *)allocator.allocate(sizeof(chassis_control_msgs__msg__Ominicmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = chassis_control_msgs__msg__Ominicmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
chassis_control_msgs__msg__Ominicmd__Sequence__destroy(chassis_control_msgs__msg__Ominicmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    chassis_control_msgs__msg__Ominicmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
chassis_control_msgs__msg__Ominicmd__Sequence__are_equal(const chassis_control_msgs__msg__Ominicmd__Sequence * lhs, const chassis_control_msgs__msg__Ominicmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!chassis_control_msgs__msg__Ominicmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
chassis_control_msgs__msg__Ominicmd__Sequence__copy(
  const chassis_control_msgs__msg__Ominicmd__Sequence * input,
  chassis_control_msgs__msg__Ominicmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(chassis_control_msgs__msg__Ominicmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    chassis_control_msgs__msg__Ominicmd * data =
      (chassis_control_msgs__msg__Ominicmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!chassis_control_msgs__msg__Ominicmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          chassis_control_msgs__msg__Ominicmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!chassis_control_msgs__msg__Ominicmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
