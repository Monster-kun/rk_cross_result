// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from planning_msgs:msg/LaneletPrimitive.idl
// generated code does not contain a copyright notice
#include "planning_msgs/msg/detail/lanelet_primitive__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `primitive_type`
#include "rosidl_runtime_c/string_functions.h"

bool
planning_msgs__msg__LaneletPrimitive__init(planning_msgs__msg__LaneletPrimitive * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // primitive_type
  if (!rosidl_runtime_c__String__init(&msg->primitive_type)) {
    planning_msgs__msg__LaneletPrimitive__fini(msg);
    return false;
  }
  return true;
}

void
planning_msgs__msg__LaneletPrimitive__fini(planning_msgs__msg__LaneletPrimitive * msg)
{
  if (!msg) {
    return;
  }
  // id
  // primitive_type
  rosidl_runtime_c__String__fini(&msg->primitive_type);
}

bool
planning_msgs__msg__LaneletPrimitive__are_equal(const planning_msgs__msg__LaneletPrimitive * lhs, const planning_msgs__msg__LaneletPrimitive * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // primitive_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->primitive_type), &(rhs->primitive_type)))
  {
    return false;
  }
  return true;
}

bool
planning_msgs__msg__LaneletPrimitive__copy(
  const planning_msgs__msg__LaneletPrimitive * input,
  planning_msgs__msg__LaneletPrimitive * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // primitive_type
  if (!rosidl_runtime_c__String__copy(
      &(input->primitive_type), &(output->primitive_type)))
  {
    return false;
  }
  return true;
}

planning_msgs__msg__LaneletPrimitive *
planning_msgs__msg__LaneletPrimitive__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planning_msgs__msg__LaneletPrimitive * msg = (planning_msgs__msg__LaneletPrimitive *)allocator.allocate(sizeof(planning_msgs__msg__LaneletPrimitive), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planning_msgs__msg__LaneletPrimitive));
  bool success = planning_msgs__msg__LaneletPrimitive__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
planning_msgs__msg__LaneletPrimitive__destroy(planning_msgs__msg__LaneletPrimitive * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    planning_msgs__msg__LaneletPrimitive__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
planning_msgs__msg__LaneletPrimitive__Sequence__init(planning_msgs__msg__LaneletPrimitive__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planning_msgs__msg__LaneletPrimitive * data = NULL;

  if (size) {
    data = (planning_msgs__msg__LaneletPrimitive *)allocator.zero_allocate(size, sizeof(planning_msgs__msg__LaneletPrimitive), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planning_msgs__msg__LaneletPrimitive__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planning_msgs__msg__LaneletPrimitive__fini(&data[i - 1]);
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
planning_msgs__msg__LaneletPrimitive__Sequence__fini(planning_msgs__msg__LaneletPrimitive__Sequence * array)
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
      planning_msgs__msg__LaneletPrimitive__fini(&array->data[i]);
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

planning_msgs__msg__LaneletPrimitive__Sequence *
planning_msgs__msg__LaneletPrimitive__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planning_msgs__msg__LaneletPrimitive__Sequence * array = (planning_msgs__msg__LaneletPrimitive__Sequence *)allocator.allocate(sizeof(planning_msgs__msg__LaneletPrimitive__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = planning_msgs__msg__LaneletPrimitive__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
planning_msgs__msg__LaneletPrimitive__Sequence__destroy(planning_msgs__msg__LaneletPrimitive__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    planning_msgs__msg__LaneletPrimitive__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
planning_msgs__msg__LaneletPrimitive__Sequence__are_equal(const planning_msgs__msg__LaneletPrimitive__Sequence * lhs, const planning_msgs__msg__LaneletPrimitive__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!planning_msgs__msg__LaneletPrimitive__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
planning_msgs__msg__LaneletPrimitive__Sequence__copy(
  const planning_msgs__msg__LaneletPrimitive__Sequence * input,
  planning_msgs__msg__LaneletPrimitive__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(planning_msgs__msg__LaneletPrimitive);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    planning_msgs__msg__LaneletPrimitive * data =
      (planning_msgs__msg__LaneletPrimitive *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!planning_msgs__msg__LaneletPrimitive__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          planning_msgs__msg__LaneletPrimitive__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!planning_msgs__msg__LaneletPrimitive__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
