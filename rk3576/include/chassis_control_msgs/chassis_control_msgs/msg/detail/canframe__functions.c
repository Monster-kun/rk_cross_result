// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from chassis_control_msgs:msg/Canframe.idl
// generated code does not contain a copyright notice
#include "chassis_control_msgs/msg/detail/canframe__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
chassis_control_msgs__msg__Canframe__init(chassis_control_msgs__msg__Canframe * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // dricmd
  // pivcmd
  return true;
}

void
chassis_control_msgs__msg__Canframe__fini(chassis_control_msgs__msg__Canframe * msg)
{
  if (!msg) {
    return;
  }
  // id
  // dricmd
  // pivcmd
}

bool
chassis_control_msgs__msg__Canframe__are_equal(const chassis_control_msgs__msg__Canframe * lhs, const chassis_control_msgs__msg__Canframe * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // dricmd
  if (lhs->dricmd != rhs->dricmd) {
    return false;
  }
  // pivcmd
  if (lhs->pivcmd != rhs->pivcmd) {
    return false;
  }
  return true;
}

bool
chassis_control_msgs__msg__Canframe__copy(
  const chassis_control_msgs__msg__Canframe * input,
  chassis_control_msgs__msg__Canframe * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // dricmd
  output->dricmd = input->dricmd;
  // pivcmd
  output->pivcmd = input->pivcmd;
  return true;
}

chassis_control_msgs__msg__Canframe *
chassis_control_msgs__msg__Canframe__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chassis_control_msgs__msg__Canframe * msg = (chassis_control_msgs__msg__Canframe *)allocator.allocate(sizeof(chassis_control_msgs__msg__Canframe), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chassis_control_msgs__msg__Canframe));
  bool success = chassis_control_msgs__msg__Canframe__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
chassis_control_msgs__msg__Canframe__destroy(chassis_control_msgs__msg__Canframe * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    chassis_control_msgs__msg__Canframe__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
chassis_control_msgs__msg__Canframe__Sequence__init(chassis_control_msgs__msg__Canframe__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chassis_control_msgs__msg__Canframe * data = NULL;

  if (size) {
    data = (chassis_control_msgs__msg__Canframe *)allocator.zero_allocate(size, sizeof(chassis_control_msgs__msg__Canframe), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chassis_control_msgs__msg__Canframe__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chassis_control_msgs__msg__Canframe__fini(&data[i - 1]);
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
chassis_control_msgs__msg__Canframe__Sequence__fini(chassis_control_msgs__msg__Canframe__Sequence * array)
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
      chassis_control_msgs__msg__Canframe__fini(&array->data[i]);
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

chassis_control_msgs__msg__Canframe__Sequence *
chassis_control_msgs__msg__Canframe__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chassis_control_msgs__msg__Canframe__Sequence * array = (chassis_control_msgs__msg__Canframe__Sequence *)allocator.allocate(sizeof(chassis_control_msgs__msg__Canframe__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = chassis_control_msgs__msg__Canframe__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
chassis_control_msgs__msg__Canframe__Sequence__destroy(chassis_control_msgs__msg__Canframe__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    chassis_control_msgs__msg__Canframe__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
chassis_control_msgs__msg__Canframe__Sequence__are_equal(const chassis_control_msgs__msg__Canframe__Sequence * lhs, const chassis_control_msgs__msg__Canframe__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!chassis_control_msgs__msg__Canframe__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
chassis_control_msgs__msg__Canframe__Sequence__copy(
  const chassis_control_msgs__msg__Canframe__Sequence * input,
  chassis_control_msgs__msg__Canframe__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(chassis_control_msgs__msg__Canframe);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    chassis_control_msgs__msg__Canframe * data =
      (chassis_control_msgs__msg__Canframe *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!chassis_control_msgs__msg__Canframe__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          chassis_control_msgs__msg__Canframe__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!chassis_control_msgs__msg__Canframe__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
