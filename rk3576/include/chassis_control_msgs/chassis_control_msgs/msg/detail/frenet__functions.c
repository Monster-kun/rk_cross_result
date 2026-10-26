// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from chassis_control_msgs:msg/Frenet.idl
// generated code does not contain a copyright notice
#include "chassis_control_msgs/msg/detail/frenet__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
chassis_control_msgs__msg__Frenet__init(chassis_control_msgs__msg__Frenet * msg)
{
  if (!msg) {
    return false;
  }
  // s
  // ds
  // dds
  // l
  // dl
  // ddl
  return true;
}

void
chassis_control_msgs__msg__Frenet__fini(chassis_control_msgs__msg__Frenet * msg)
{
  if (!msg) {
    return;
  }
  // s
  // ds
  // dds
  // l
  // dl
  // ddl
}

bool
chassis_control_msgs__msg__Frenet__are_equal(const chassis_control_msgs__msg__Frenet * lhs, const chassis_control_msgs__msg__Frenet * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // s
  if (lhs->s != rhs->s) {
    return false;
  }
  // ds
  if (lhs->ds != rhs->ds) {
    return false;
  }
  // dds
  if (lhs->dds != rhs->dds) {
    return false;
  }
  // l
  if (lhs->l != rhs->l) {
    return false;
  }
  // dl
  if (lhs->dl != rhs->dl) {
    return false;
  }
  // ddl
  if (lhs->ddl != rhs->ddl) {
    return false;
  }
  return true;
}

bool
chassis_control_msgs__msg__Frenet__copy(
  const chassis_control_msgs__msg__Frenet * input,
  chassis_control_msgs__msg__Frenet * output)
{
  if (!input || !output) {
    return false;
  }
  // s
  output->s = input->s;
  // ds
  output->ds = input->ds;
  // dds
  output->dds = input->dds;
  // l
  output->l = input->l;
  // dl
  output->dl = input->dl;
  // ddl
  output->ddl = input->ddl;
  return true;
}

chassis_control_msgs__msg__Frenet *
chassis_control_msgs__msg__Frenet__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chassis_control_msgs__msg__Frenet * msg = (chassis_control_msgs__msg__Frenet *)allocator.allocate(sizeof(chassis_control_msgs__msg__Frenet), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chassis_control_msgs__msg__Frenet));
  bool success = chassis_control_msgs__msg__Frenet__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
chassis_control_msgs__msg__Frenet__destroy(chassis_control_msgs__msg__Frenet * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    chassis_control_msgs__msg__Frenet__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
chassis_control_msgs__msg__Frenet__Sequence__init(chassis_control_msgs__msg__Frenet__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chassis_control_msgs__msg__Frenet * data = NULL;

  if (size) {
    data = (chassis_control_msgs__msg__Frenet *)allocator.zero_allocate(size, sizeof(chassis_control_msgs__msg__Frenet), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chassis_control_msgs__msg__Frenet__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chassis_control_msgs__msg__Frenet__fini(&data[i - 1]);
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
chassis_control_msgs__msg__Frenet__Sequence__fini(chassis_control_msgs__msg__Frenet__Sequence * array)
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
      chassis_control_msgs__msg__Frenet__fini(&array->data[i]);
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

chassis_control_msgs__msg__Frenet__Sequence *
chassis_control_msgs__msg__Frenet__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chassis_control_msgs__msg__Frenet__Sequence * array = (chassis_control_msgs__msg__Frenet__Sequence *)allocator.allocate(sizeof(chassis_control_msgs__msg__Frenet__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = chassis_control_msgs__msg__Frenet__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
chassis_control_msgs__msg__Frenet__Sequence__destroy(chassis_control_msgs__msg__Frenet__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    chassis_control_msgs__msg__Frenet__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
chassis_control_msgs__msg__Frenet__Sequence__are_equal(const chassis_control_msgs__msg__Frenet__Sequence * lhs, const chassis_control_msgs__msg__Frenet__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!chassis_control_msgs__msg__Frenet__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
chassis_control_msgs__msg__Frenet__Sequence__copy(
  const chassis_control_msgs__msg__Frenet__Sequence * input,
  chassis_control_msgs__msg__Frenet__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(chassis_control_msgs__msg__Frenet);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    chassis_control_msgs__msg__Frenet * data =
      (chassis_control_msgs__msg__Frenet *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!chassis_control_msgs__msg__Frenet__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          chassis_control_msgs__msg__Frenet__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!chassis_control_msgs__msg__Frenet__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
