// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from planning_msgs:msg/LaneletSegment.idl
// generated code does not contain a copyright notice
#include "planning_msgs/msg/detail/lanelet_segment__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `preferred_primitive`
// Member `primitives`
// Member `left_bound`
// Member `right_bound`
#include "planning_msgs/msg/detail/lanelet_primitive__functions.h"

bool
planning_msgs__msg__LaneletSegment__init(planning_msgs__msg__LaneletSegment * msg)
{
  if (!msg) {
    return false;
  }
  // preferred_primitive
  if (!planning_msgs__msg__LaneletPrimitive__init(&msg->preferred_primitive)) {
    planning_msgs__msg__LaneletSegment__fini(msg);
    return false;
  }
  // primitives
  if (!planning_msgs__msg__LaneletPrimitive__Sequence__init(&msg->primitives, 0)) {
    planning_msgs__msg__LaneletSegment__fini(msg);
    return false;
  }
  // left_bound
  if (!planning_msgs__msg__LaneletPrimitive__init(&msg->left_bound)) {
    planning_msgs__msg__LaneletSegment__fini(msg);
    return false;
  }
  // right_bound
  if (!planning_msgs__msg__LaneletPrimitive__init(&msg->right_bound)) {
    planning_msgs__msg__LaneletSegment__fini(msg);
    return false;
  }
  // is_inverted
  return true;
}

void
planning_msgs__msg__LaneletSegment__fini(planning_msgs__msg__LaneletSegment * msg)
{
  if (!msg) {
    return;
  }
  // preferred_primitive
  planning_msgs__msg__LaneletPrimitive__fini(&msg->preferred_primitive);
  // primitives
  planning_msgs__msg__LaneletPrimitive__Sequence__fini(&msg->primitives);
  // left_bound
  planning_msgs__msg__LaneletPrimitive__fini(&msg->left_bound);
  // right_bound
  planning_msgs__msg__LaneletPrimitive__fini(&msg->right_bound);
  // is_inverted
}

bool
planning_msgs__msg__LaneletSegment__are_equal(const planning_msgs__msg__LaneletSegment * lhs, const planning_msgs__msg__LaneletSegment * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // preferred_primitive
  if (!planning_msgs__msg__LaneletPrimitive__are_equal(
      &(lhs->preferred_primitive), &(rhs->preferred_primitive)))
  {
    return false;
  }
  // primitives
  if (!planning_msgs__msg__LaneletPrimitive__Sequence__are_equal(
      &(lhs->primitives), &(rhs->primitives)))
  {
    return false;
  }
  // left_bound
  if (!planning_msgs__msg__LaneletPrimitive__are_equal(
      &(lhs->left_bound), &(rhs->left_bound)))
  {
    return false;
  }
  // right_bound
  if (!planning_msgs__msg__LaneletPrimitive__are_equal(
      &(lhs->right_bound), &(rhs->right_bound)))
  {
    return false;
  }
  // is_inverted
  if (lhs->is_inverted != rhs->is_inverted) {
    return false;
  }
  return true;
}

bool
planning_msgs__msg__LaneletSegment__copy(
  const planning_msgs__msg__LaneletSegment * input,
  planning_msgs__msg__LaneletSegment * output)
{
  if (!input || !output) {
    return false;
  }
  // preferred_primitive
  if (!planning_msgs__msg__LaneletPrimitive__copy(
      &(input->preferred_primitive), &(output->preferred_primitive)))
  {
    return false;
  }
  // primitives
  if (!planning_msgs__msg__LaneletPrimitive__Sequence__copy(
      &(input->primitives), &(output->primitives)))
  {
    return false;
  }
  // left_bound
  if (!planning_msgs__msg__LaneletPrimitive__copy(
      &(input->left_bound), &(output->left_bound)))
  {
    return false;
  }
  // right_bound
  if (!planning_msgs__msg__LaneletPrimitive__copy(
      &(input->right_bound), &(output->right_bound)))
  {
    return false;
  }
  // is_inverted
  output->is_inverted = input->is_inverted;
  return true;
}

planning_msgs__msg__LaneletSegment *
planning_msgs__msg__LaneletSegment__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planning_msgs__msg__LaneletSegment * msg = (planning_msgs__msg__LaneletSegment *)allocator.allocate(sizeof(planning_msgs__msg__LaneletSegment), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planning_msgs__msg__LaneletSegment));
  bool success = planning_msgs__msg__LaneletSegment__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
planning_msgs__msg__LaneletSegment__destroy(planning_msgs__msg__LaneletSegment * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    planning_msgs__msg__LaneletSegment__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
planning_msgs__msg__LaneletSegment__Sequence__init(planning_msgs__msg__LaneletSegment__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planning_msgs__msg__LaneletSegment * data = NULL;

  if (size) {
    data = (planning_msgs__msg__LaneletSegment *)allocator.zero_allocate(size, sizeof(planning_msgs__msg__LaneletSegment), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planning_msgs__msg__LaneletSegment__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planning_msgs__msg__LaneletSegment__fini(&data[i - 1]);
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
planning_msgs__msg__LaneletSegment__Sequence__fini(planning_msgs__msg__LaneletSegment__Sequence * array)
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
      planning_msgs__msg__LaneletSegment__fini(&array->data[i]);
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

planning_msgs__msg__LaneletSegment__Sequence *
planning_msgs__msg__LaneletSegment__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planning_msgs__msg__LaneletSegment__Sequence * array = (planning_msgs__msg__LaneletSegment__Sequence *)allocator.allocate(sizeof(planning_msgs__msg__LaneletSegment__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = planning_msgs__msg__LaneletSegment__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
planning_msgs__msg__LaneletSegment__Sequence__destroy(planning_msgs__msg__LaneletSegment__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    planning_msgs__msg__LaneletSegment__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
planning_msgs__msg__LaneletSegment__Sequence__are_equal(const planning_msgs__msg__LaneletSegment__Sequence * lhs, const planning_msgs__msg__LaneletSegment__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!planning_msgs__msg__LaneletSegment__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
planning_msgs__msg__LaneletSegment__Sequence__copy(
  const planning_msgs__msg__LaneletSegment__Sequence * input,
  planning_msgs__msg__LaneletSegment__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(planning_msgs__msg__LaneletSegment);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    planning_msgs__msg__LaneletSegment * data =
      (planning_msgs__msg__LaneletSegment *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!planning_msgs__msg__LaneletSegment__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          planning_msgs__msg__LaneletSegment__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!planning_msgs__msg__LaneletSegment__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
