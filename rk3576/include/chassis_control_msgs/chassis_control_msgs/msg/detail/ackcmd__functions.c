// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from chassis_control_msgs:msg/Ackcmd.idl
// generated code does not contain a copyright notice
#include "chassis_control_msgs/msg/detail/ackcmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
chassis_control_msgs__msg__Ackcmd__init(chassis_control_msgs__msg__Ackcmd * msg)
{
  if (!msg) {
    return false;
  }
  // vel
  // steer
  return true;
}

void
chassis_control_msgs__msg__Ackcmd__fini(chassis_control_msgs__msg__Ackcmd * msg)
{
  if (!msg) {
    return;
  }
  // vel
  // steer
}

bool
chassis_control_msgs__msg__Ackcmd__are_equal(const chassis_control_msgs__msg__Ackcmd * lhs, const chassis_control_msgs__msg__Ackcmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vel
  if (lhs->vel != rhs->vel) {
    return false;
  }
  // steer
  if (lhs->steer != rhs->steer) {
    return false;
  }
  return true;
}

bool
chassis_control_msgs__msg__Ackcmd__copy(
  const chassis_control_msgs__msg__Ackcmd * input,
  chassis_control_msgs__msg__Ackcmd * output)
{
  if (!input || !output) {
    return false;
  }
  // vel
  output->vel = input->vel;
  // steer
  output->steer = input->steer;
  return true;
}

chassis_control_msgs__msg__Ackcmd *
chassis_control_msgs__msg__Ackcmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chassis_control_msgs__msg__Ackcmd * msg = (chassis_control_msgs__msg__Ackcmd *)allocator.allocate(sizeof(chassis_control_msgs__msg__Ackcmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chassis_control_msgs__msg__Ackcmd));
  bool success = chassis_control_msgs__msg__Ackcmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
chassis_control_msgs__msg__Ackcmd__destroy(chassis_control_msgs__msg__Ackcmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    chassis_control_msgs__msg__Ackcmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
chassis_control_msgs__msg__Ackcmd__Sequence__init(chassis_control_msgs__msg__Ackcmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chassis_control_msgs__msg__Ackcmd * data = NULL;

  if (size) {
    data = (chassis_control_msgs__msg__Ackcmd *)allocator.zero_allocate(size, sizeof(chassis_control_msgs__msg__Ackcmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chassis_control_msgs__msg__Ackcmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chassis_control_msgs__msg__Ackcmd__fini(&data[i - 1]);
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
chassis_control_msgs__msg__Ackcmd__Sequence__fini(chassis_control_msgs__msg__Ackcmd__Sequence * array)
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
      chassis_control_msgs__msg__Ackcmd__fini(&array->data[i]);
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

chassis_control_msgs__msg__Ackcmd__Sequence *
chassis_control_msgs__msg__Ackcmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chassis_control_msgs__msg__Ackcmd__Sequence * array = (chassis_control_msgs__msg__Ackcmd__Sequence *)allocator.allocate(sizeof(chassis_control_msgs__msg__Ackcmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = chassis_control_msgs__msg__Ackcmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
chassis_control_msgs__msg__Ackcmd__Sequence__destroy(chassis_control_msgs__msg__Ackcmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    chassis_control_msgs__msg__Ackcmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
chassis_control_msgs__msg__Ackcmd__Sequence__are_equal(const chassis_control_msgs__msg__Ackcmd__Sequence * lhs, const chassis_control_msgs__msg__Ackcmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!chassis_control_msgs__msg__Ackcmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
chassis_control_msgs__msg__Ackcmd__Sequence__copy(
  const chassis_control_msgs__msg__Ackcmd__Sequence * input,
  chassis_control_msgs__msg__Ackcmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(chassis_control_msgs__msg__Ackcmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    chassis_control_msgs__msg__Ackcmd * data =
      (chassis_control_msgs__msg__Ackcmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!chassis_control_msgs__msg__Ackcmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          chassis_control_msgs__msg__Ackcmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!chassis_control_msgs__msg__Ackcmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
