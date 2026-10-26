// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from se2_grid_msgs:msg/SE2GridInfo.idl
// generated code does not contain a copyright notice
#include "se2_grid_msgs/msg/detail/se2_grid_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
se2_grid_msgs__msg__SE2GridInfo__init(se2_grid_msgs__msg__SE2GridInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    se2_grid_msgs__msg__SE2GridInfo__fini(msg);
    return false;
  }
  // pos_resolution
  // yaw_resolution
  // length_x
  // length_y
  // length_yaw
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    se2_grid_msgs__msg__SE2GridInfo__fini(msg);
    return false;
  }
  return true;
}

void
se2_grid_msgs__msg__SE2GridInfo__fini(se2_grid_msgs__msg__SE2GridInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pos_resolution
  // yaw_resolution
  // length_x
  // length_y
  // length_yaw
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

bool
se2_grid_msgs__msg__SE2GridInfo__are_equal(const se2_grid_msgs__msg__SE2GridInfo * lhs, const se2_grid_msgs__msg__SE2GridInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // pos_resolution
  if (lhs->pos_resolution != rhs->pos_resolution) {
    return false;
  }
  // yaw_resolution
  if (lhs->yaw_resolution != rhs->yaw_resolution) {
    return false;
  }
  // length_x
  if (lhs->length_x != rhs->length_x) {
    return false;
  }
  // length_y
  if (lhs->length_y != rhs->length_y) {
    return false;
  }
  // length_yaw
  if (lhs->length_yaw != rhs->length_yaw) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
se2_grid_msgs__msg__SE2GridInfo__copy(
  const se2_grid_msgs__msg__SE2GridInfo * input,
  se2_grid_msgs__msg__SE2GridInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // pos_resolution
  output->pos_resolution = input->pos_resolution;
  // yaw_resolution
  output->yaw_resolution = input->yaw_resolution;
  // length_x
  output->length_x = input->length_x;
  // length_y
  output->length_y = input->length_y;
  // length_yaw
  output->length_yaw = input->length_yaw;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

se2_grid_msgs__msg__SE2GridInfo *
se2_grid_msgs__msg__SE2GridInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  se2_grid_msgs__msg__SE2GridInfo * msg = (se2_grid_msgs__msg__SE2GridInfo *)allocator.allocate(sizeof(se2_grid_msgs__msg__SE2GridInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(se2_grid_msgs__msg__SE2GridInfo));
  bool success = se2_grid_msgs__msg__SE2GridInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
se2_grid_msgs__msg__SE2GridInfo__destroy(se2_grid_msgs__msg__SE2GridInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    se2_grid_msgs__msg__SE2GridInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
se2_grid_msgs__msg__SE2GridInfo__Sequence__init(se2_grid_msgs__msg__SE2GridInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  se2_grid_msgs__msg__SE2GridInfo * data = NULL;

  if (size) {
    data = (se2_grid_msgs__msg__SE2GridInfo *)allocator.zero_allocate(size, sizeof(se2_grid_msgs__msg__SE2GridInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = se2_grid_msgs__msg__SE2GridInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        se2_grid_msgs__msg__SE2GridInfo__fini(&data[i - 1]);
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
se2_grid_msgs__msg__SE2GridInfo__Sequence__fini(se2_grid_msgs__msg__SE2GridInfo__Sequence * array)
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
      se2_grid_msgs__msg__SE2GridInfo__fini(&array->data[i]);
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

se2_grid_msgs__msg__SE2GridInfo__Sequence *
se2_grid_msgs__msg__SE2GridInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  se2_grid_msgs__msg__SE2GridInfo__Sequence * array = (se2_grid_msgs__msg__SE2GridInfo__Sequence *)allocator.allocate(sizeof(se2_grid_msgs__msg__SE2GridInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = se2_grid_msgs__msg__SE2GridInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
se2_grid_msgs__msg__SE2GridInfo__Sequence__destroy(se2_grid_msgs__msg__SE2GridInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    se2_grid_msgs__msg__SE2GridInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
se2_grid_msgs__msg__SE2GridInfo__Sequence__are_equal(const se2_grid_msgs__msg__SE2GridInfo__Sequence * lhs, const se2_grid_msgs__msg__SE2GridInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!se2_grid_msgs__msg__SE2GridInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
se2_grid_msgs__msg__SE2GridInfo__Sequence__copy(
  const se2_grid_msgs__msg__SE2GridInfo__Sequence * input,
  se2_grid_msgs__msg__SE2GridInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(se2_grid_msgs__msg__SE2GridInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    se2_grid_msgs__msg__SE2GridInfo * data =
      (se2_grid_msgs__msg__SE2GridInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!se2_grid_msgs__msg__SE2GridInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          se2_grid_msgs__msg__SE2GridInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!se2_grid_msgs__msg__SE2GridInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
