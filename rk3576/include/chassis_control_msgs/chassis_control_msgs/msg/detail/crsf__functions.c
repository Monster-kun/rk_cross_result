// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from chassis_control_msgs:msg/Crsf.idl
// generated code does not contain a copyright notice
#include "chassis_control_msgs/msg/detail/crsf__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
chassis_control_msgs__msg__Crsf__init(chassis_control_msgs__msg__Crsf * msg)
{
  if (!msg) {
    return false;
  }
  // ch1
  // ch2
  // ch3
  // ch4
  // ch5
  // ch6
  // ch7
  // ch8
  // ch9
  // ch10
  // ch11
  // ch12
  // ch13
  // ch14
  // ch15
  // ch16
  return true;
}

void
chassis_control_msgs__msg__Crsf__fini(chassis_control_msgs__msg__Crsf * msg)
{
  if (!msg) {
    return;
  }
  // ch1
  // ch2
  // ch3
  // ch4
  // ch5
  // ch6
  // ch7
  // ch8
  // ch9
  // ch10
  // ch11
  // ch12
  // ch13
  // ch14
  // ch15
  // ch16
}

bool
chassis_control_msgs__msg__Crsf__are_equal(const chassis_control_msgs__msg__Crsf * lhs, const chassis_control_msgs__msg__Crsf * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ch1
  if (lhs->ch1 != rhs->ch1) {
    return false;
  }
  // ch2
  if (lhs->ch2 != rhs->ch2) {
    return false;
  }
  // ch3
  if (lhs->ch3 != rhs->ch3) {
    return false;
  }
  // ch4
  if (lhs->ch4 != rhs->ch4) {
    return false;
  }
  // ch5
  if (lhs->ch5 != rhs->ch5) {
    return false;
  }
  // ch6
  if (lhs->ch6 != rhs->ch6) {
    return false;
  }
  // ch7
  if (lhs->ch7 != rhs->ch7) {
    return false;
  }
  // ch8
  if (lhs->ch8 != rhs->ch8) {
    return false;
  }
  // ch9
  if (lhs->ch9 != rhs->ch9) {
    return false;
  }
  // ch10
  if (lhs->ch10 != rhs->ch10) {
    return false;
  }
  // ch11
  if (lhs->ch11 != rhs->ch11) {
    return false;
  }
  // ch12
  if (lhs->ch12 != rhs->ch12) {
    return false;
  }
  // ch13
  if (lhs->ch13 != rhs->ch13) {
    return false;
  }
  // ch14
  if (lhs->ch14 != rhs->ch14) {
    return false;
  }
  // ch15
  if (lhs->ch15 != rhs->ch15) {
    return false;
  }
  // ch16
  if (lhs->ch16 != rhs->ch16) {
    return false;
  }
  return true;
}

bool
chassis_control_msgs__msg__Crsf__copy(
  const chassis_control_msgs__msg__Crsf * input,
  chassis_control_msgs__msg__Crsf * output)
{
  if (!input || !output) {
    return false;
  }
  // ch1
  output->ch1 = input->ch1;
  // ch2
  output->ch2 = input->ch2;
  // ch3
  output->ch3 = input->ch3;
  // ch4
  output->ch4 = input->ch4;
  // ch5
  output->ch5 = input->ch5;
  // ch6
  output->ch6 = input->ch6;
  // ch7
  output->ch7 = input->ch7;
  // ch8
  output->ch8 = input->ch8;
  // ch9
  output->ch9 = input->ch9;
  // ch10
  output->ch10 = input->ch10;
  // ch11
  output->ch11 = input->ch11;
  // ch12
  output->ch12 = input->ch12;
  // ch13
  output->ch13 = input->ch13;
  // ch14
  output->ch14 = input->ch14;
  // ch15
  output->ch15 = input->ch15;
  // ch16
  output->ch16 = input->ch16;
  return true;
}

chassis_control_msgs__msg__Crsf *
chassis_control_msgs__msg__Crsf__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chassis_control_msgs__msg__Crsf * msg = (chassis_control_msgs__msg__Crsf *)allocator.allocate(sizeof(chassis_control_msgs__msg__Crsf), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chassis_control_msgs__msg__Crsf));
  bool success = chassis_control_msgs__msg__Crsf__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
chassis_control_msgs__msg__Crsf__destroy(chassis_control_msgs__msg__Crsf * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    chassis_control_msgs__msg__Crsf__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
chassis_control_msgs__msg__Crsf__Sequence__init(chassis_control_msgs__msg__Crsf__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chassis_control_msgs__msg__Crsf * data = NULL;

  if (size) {
    data = (chassis_control_msgs__msg__Crsf *)allocator.zero_allocate(size, sizeof(chassis_control_msgs__msg__Crsf), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chassis_control_msgs__msg__Crsf__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chassis_control_msgs__msg__Crsf__fini(&data[i - 1]);
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
chassis_control_msgs__msg__Crsf__Sequence__fini(chassis_control_msgs__msg__Crsf__Sequence * array)
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
      chassis_control_msgs__msg__Crsf__fini(&array->data[i]);
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

chassis_control_msgs__msg__Crsf__Sequence *
chassis_control_msgs__msg__Crsf__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chassis_control_msgs__msg__Crsf__Sequence * array = (chassis_control_msgs__msg__Crsf__Sequence *)allocator.allocate(sizeof(chassis_control_msgs__msg__Crsf__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = chassis_control_msgs__msg__Crsf__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
chassis_control_msgs__msg__Crsf__Sequence__destroy(chassis_control_msgs__msg__Crsf__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    chassis_control_msgs__msg__Crsf__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
chassis_control_msgs__msg__Crsf__Sequence__are_equal(const chassis_control_msgs__msg__Crsf__Sequence * lhs, const chassis_control_msgs__msg__Crsf__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!chassis_control_msgs__msg__Crsf__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
chassis_control_msgs__msg__Crsf__Sequence__copy(
  const chassis_control_msgs__msg__Crsf__Sequence * input,
  chassis_control_msgs__msg__Crsf__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(chassis_control_msgs__msg__Crsf);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    chassis_control_msgs__msg__Crsf * data =
      (chassis_control_msgs__msg__Crsf *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!chassis_control_msgs__msg__Crsf__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          chassis_control_msgs__msg__Crsf__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!chassis_control_msgs__msg__Crsf__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
