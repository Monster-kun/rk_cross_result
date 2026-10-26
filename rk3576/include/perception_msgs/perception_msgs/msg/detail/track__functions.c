// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from perception_msgs:msg/Track.idl
// generated code does not contain a copyright notice
#include "perception_msgs/msg/detail/track__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `vel`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `associated`
#include "perception_msgs/msg/detail/cluster__functions.h"

bool
perception_msgs__msg__Track__init(perception_msgs__msg__Track * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // age
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    perception_msgs__msg__Track__fini(msg);
    return false;
  }
  // vel
  if (!geometry_msgs__msg__Vector3__init(&msg->vel)) {
    perception_msgs__msg__Track__fini(msg);
    return false;
  }
  // pos_cov
  // vel_cov
  // associated
  if (!perception_msgs__msg__Cluster__Sequence__init(&msg->associated, 0)) {
    perception_msgs__msg__Track__fini(msg);
    return false;
  }
  return true;
}

void
perception_msgs__msg__Track__fini(perception_msgs__msg__Track * msg)
{
  if (!msg) {
    return;
  }
  // id
  // age
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // vel
  geometry_msgs__msg__Vector3__fini(&msg->vel);
  // pos_cov
  // vel_cov
  // associated
  perception_msgs__msg__Cluster__Sequence__fini(&msg->associated);
}

bool
perception_msgs__msg__Track__are_equal(const perception_msgs__msg__Track * lhs, const perception_msgs__msg__Track * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // age
  if (lhs->age != rhs->age) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // vel
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->vel), &(rhs->vel)))
  {
    return false;
  }
  // pos_cov
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->pos_cov[i] != rhs->pos_cov[i]) {
      return false;
    }
  }
  // vel_cov
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->vel_cov[i] != rhs->vel_cov[i]) {
      return false;
    }
  }
  // associated
  if (!perception_msgs__msg__Cluster__Sequence__are_equal(
      &(lhs->associated), &(rhs->associated)))
  {
    return false;
  }
  return true;
}

bool
perception_msgs__msg__Track__copy(
  const perception_msgs__msg__Track * input,
  perception_msgs__msg__Track * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // age
  output->age = input->age;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // vel
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->vel), &(output->vel)))
  {
    return false;
  }
  // pos_cov
  for (size_t i = 0; i < 9; ++i) {
    output->pos_cov[i] = input->pos_cov[i];
  }
  // vel_cov
  for (size_t i = 0; i < 9; ++i) {
    output->vel_cov[i] = input->vel_cov[i];
  }
  // associated
  if (!perception_msgs__msg__Cluster__Sequence__copy(
      &(input->associated), &(output->associated)))
  {
    return false;
  }
  return true;
}

perception_msgs__msg__Track *
perception_msgs__msg__Track__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_msgs__msg__Track * msg = (perception_msgs__msg__Track *)allocator.allocate(sizeof(perception_msgs__msg__Track), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(perception_msgs__msg__Track));
  bool success = perception_msgs__msg__Track__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
perception_msgs__msg__Track__destroy(perception_msgs__msg__Track * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    perception_msgs__msg__Track__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
perception_msgs__msg__Track__Sequence__init(perception_msgs__msg__Track__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_msgs__msg__Track * data = NULL;

  if (size) {
    data = (perception_msgs__msg__Track *)allocator.zero_allocate(size, sizeof(perception_msgs__msg__Track), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = perception_msgs__msg__Track__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        perception_msgs__msg__Track__fini(&data[i - 1]);
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
perception_msgs__msg__Track__Sequence__fini(perception_msgs__msg__Track__Sequence * array)
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
      perception_msgs__msg__Track__fini(&array->data[i]);
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

perception_msgs__msg__Track__Sequence *
perception_msgs__msg__Track__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_msgs__msg__Track__Sequence * array = (perception_msgs__msg__Track__Sequence *)allocator.allocate(sizeof(perception_msgs__msg__Track__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = perception_msgs__msg__Track__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
perception_msgs__msg__Track__Sequence__destroy(perception_msgs__msg__Track__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    perception_msgs__msg__Track__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
perception_msgs__msg__Track__Sequence__are_equal(const perception_msgs__msg__Track__Sequence * lhs, const perception_msgs__msg__Track__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!perception_msgs__msg__Track__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
perception_msgs__msg__Track__Sequence__copy(
  const perception_msgs__msg__Track__Sequence * input,
  perception_msgs__msg__Track__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(perception_msgs__msg__Track);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    perception_msgs__msg__Track * data =
      (perception_msgs__msg__Track *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!perception_msgs__msg__Track__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          perception_msgs__msg__Track__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!perception_msgs__msg__Track__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
