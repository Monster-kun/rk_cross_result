// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from planning_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice
#include "planning_msgs/msg/detail/waypoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `point`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
planning_msgs__msg__Waypoint__init(planning_msgs__msg__Waypoint * msg)
{
  if (!msg) {
    return false;
  }
  // point
  if (!geometry_msgs__msg__Point__init(&msg->point)) {
    planning_msgs__msg__Waypoint__fini(msg);
    return false;
  }
  // time
  // s
  // theta
  // kappa
  // dkappa
  // ddkappa
  // v
  // a
  // j
  // w
  return true;
}

void
planning_msgs__msg__Waypoint__fini(planning_msgs__msg__Waypoint * msg)
{
  if (!msg) {
    return;
  }
  // point
  geometry_msgs__msg__Point__fini(&msg->point);
  // time
  // s
  // theta
  // kappa
  // dkappa
  // ddkappa
  // v
  // a
  // j
  // w
}

bool
planning_msgs__msg__Waypoint__are_equal(const planning_msgs__msg__Waypoint * lhs, const planning_msgs__msg__Waypoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // point
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->point), &(rhs->point)))
  {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // s
  if (lhs->s != rhs->s) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  // kappa
  if (lhs->kappa != rhs->kappa) {
    return false;
  }
  // dkappa
  if (lhs->dkappa != rhs->dkappa) {
    return false;
  }
  // ddkappa
  if (lhs->ddkappa != rhs->ddkappa) {
    return false;
  }
  // v
  if (lhs->v != rhs->v) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // j
  if (lhs->j != rhs->j) {
    return false;
  }
  // w
  if (lhs->w != rhs->w) {
    return false;
  }
  return true;
}

bool
planning_msgs__msg__Waypoint__copy(
  const planning_msgs__msg__Waypoint * input,
  planning_msgs__msg__Waypoint * output)
{
  if (!input || !output) {
    return false;
  }
  // point
  if (!geometry_msgs__msg__Point__copy(
      &(input->point), &(output->point)))
  {
    return false;
  }
  // time
  output->time = input->time;
  // s
  output->s = input->s;
  // theta
  output->theta = input->theta;
  // kappa
  output->kappa = input->kappa;
  // dkappa
  output->dkappa = input->dkappa;
  // ddkappa
  output->ddkappa = input->ddkappa;
  // v
  output->v = input->v;
  // a
  output->a = input->a;
  // j
  output->j = input->j;
  // w
  output->w = input->w;
  return true;
}

planning_msgs__msg__Waypoint *
planning_msgs__msg__Waypoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planning_msgs__msg__Waypoint * msg = (planning_msgs__msg__Waypoint *)allocator.allocate(sizeof(planning_msgs__msg__Waypoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planning_msgs__msg__Waypoint));
  bool success = planning_msgs__msg__Waypoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
planning_msgs__msg__Waypoint__destroy(planning_msgs__msg__Waypoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    planning_msgs__msg__Waypoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
planning_msgs__msg__Waypoint__Sequence__init(planning_msgs__msg__Waypoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planning_msgs__msg__Waypoint * data = NULL;

  if (size) {
    data = (planning_msgs__msg__Waypoint *)allocator.zero_allocate(size, sizeof(planning_msgs__msg__Waypoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planning_msgs__msg__Waypoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planning_msgs__msg__Waypoint__fini(&data[i - 1]);
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
planning_msgs__msg__Waypoint__Sequence__fini(planning_msgs__msg__Waypoint__Sequence * array)
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
      planning_msgs__msg__Waypoint__fini(&array->data[i]);
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

planning_msgs__msg__Waypoint__Sequence *
planning_msgs__msg__Waypoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planning_msgs__msg__Waypoint__Sequence * array = (planning_msgs__msg__Waypoint__Sequence *)allocator.allocate(sizeof(planning_msgs__msg__Waypoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = planning_msgs__msg__Waypoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
planning_msgs__msg__Waypoint__Sequence__destroy(planning_msgs__msg__Waypoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    planning_msgs__msg__Waypoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
planning_msgs__msg__Waypoint__Sequence__are_equal(const planning_msgs__msg__Waypoint__Sequence * lhs, const planning_msgs__msg__Waypoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!planning_msgs__msg__Waypoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
planning_msgs__msg__Waypoint__Sequence__copy(
  const planning_msgs__msg__Waypoint__Sequence * input,
  planning_msgs__msg__Waypoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(planning_msgs__msg__Waypoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    planning_msgs__msg__Waypoint * data =
      (planning_msgs__msg__Waypoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!planning_msgs__msg__Waypoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          planning_msgs__msg__Waypoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!planning_msgs__msg__Waypoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
