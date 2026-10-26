// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from perception_msgs:msg/Cluster.idl
// generated code does not contain a copyright notice
#include "perception_msgs/msg/detail/cluster__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `min_pt`
// Member `max_pt`
// Member `centroid`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `size`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
perception_msgs__msg__Cluster__init(perception_msgs__msg__Cluster * msg)
{
  if (!msg) {
    return false;
  }
  // is_human
  // id
  // min_pt
  if (!geometry_msgs__msg__Point__init(&msg->min_pt)) {
    perception_msgs__msg__Cluster__fini(msg);
    return false;
  }
  // max_pt
  if (!geometry_msgs__msg__Point__init(&msg->max_pt)) {
    perception_msgs__msg__Cluster__fini(msg);
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__init(&msg->size)) {
    perception_msgs__msg__Cluster__fini(msg);
    return false;
  }
  // centroid
  if (!geometry_msgs__msg__Point__init(&msg->centroid)) {
    perception_msgs__msg__Cluster__fini(msg);
    return false;
  }
  return true;
}

void
perception_msgs__msg__Cluster__fini(perception_msgs__msg__Cluster * msg)
{
  if (!msg) {
    return;
  }
  // is_human
  // id
  // min_pt
  geometry_msgs__msg__Point__fini(&msg->min_pt);
  // max_pt
  geometry_msgs__msg__Point__fini(&msg->max_pt);
  // size
  geometry_msgs__msg__Vector3__fini(&msg->size);
  // centroid
  geometry_msgs__msg__Point__fini(&msg->centroid);
}

bool
perception_msgs__msg__Cluster__are_equal(const perception_msgs__msg__Cluster * lhs, const perception_msgs__msg__Cluster * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_human
  if (lhs->is_human != rhs->is_human) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // min_pt
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->min_pt), &(rhs->min_pt)))
  {
    return false;
  }
  // max_pt
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->max_pt), &(rhs->max_pt)))
  {
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->size), &(rhs->size)))
  {
    return false;
  }
  // centroid
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->centroid), &(rhs->centroid)))
  {
    return false;
  }
  return true;
}

bool
perception_msgs__msg__Cluster__copy(
  const perception_msgs__msg__Cluster * input,
  perception_msgs__msg__Cluster * output)
{
  if (!input || !output) {
    return false;
  }
  // is_human
  output->is_human = input->is_human;
  // id
  output->id = input->id;
  // min_pt
  if (!geometry_msgs__msg__Point__copy(
      &(input->min_pt), &(output->min_pt)))
  {
    return false;
  }
  // max_pt
  if (!geometry_msgs__msg__Point__copy(
      &(input->max_pt), &(output->max_pt)))
  {
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->size), &(output->size)))
  {
    return false;
  }
  // centroid
  if (!geometry_msgs__msg__Point__copy(
      &(input->centroid), &(output->centroid)))
  {
    return false;
  }
  return true;
}

perception_msgs__msg__Cluster *
perception_msgs__msg__Cluster__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_msgs__msg__Cluster * msg = (perception_msgs__msg__Cluster *)allocator.allocate(sizeof(perception_msgs__msg__Cluster), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(perception_msgs__msg__Cluster));
  bool success = perception_msgs__msg__Cluster__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
perception_msgs__msg__Cluster__destroy(perception_msgs__msg__Cluster * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    perception_msgs__msg__Cluster__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
perception_msgs__msg__Cluster__Sequence__init(perception_msgs__msg__Cluster__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_msgs__msg__Cluster * data = NULL;

  if (size) {
    data = (perception_msgs__msg__Cluster *)allocator.zero_allocate(size, sizeof(perception_msgs__msg__Cluster), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = perception_msgs__msg__Cluster__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        perception_msgs__msg__Cluster__fini(&data[i - 1]);
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
perception_msgs__msg__Cluster__Sequence__fini(perception_msgs__msg__Cluster__Sequence * array)
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
      perception_msgs__msg__Cluster__fini(&array->data[i]);
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

perception_msgs__msg__Cluster__Sequence *
perception_msgs__msg__Cluster__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_msgs__msg__Cluster__Sequence * array = (perception_msgs__msg__Cluster__Sequence *)allocator.allocate(sizeof(perception_msgs__msg__Cluster__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = perception_msgs__msg__Cluster__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
perception_msgs__msg__Cluster__Sequence__destroy(perception_msgs__msg__Cluster__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    perception_msgs__msg__Cluster__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
perception_msgs__msg__Cluster__Sequence__are_equal(const perception_msgs__msg__Cluster__Sequence * lhs, const perception_msgs__msg__Cluster__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!perception_msgs__msg__Cluster__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
perception_msgs__msg__Cluster__Sequence__copy(
  const perception_msgs__msg__Cluster__Sequence * input,
  perception_msgs__msg__Cluster__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(perception_msgs__msg__Cluster);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    perception_msgs__msg__Cluster * data =
      (perception_msgs__msg__Cluster *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!perception_msgs__msg__Cluster__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          perception_msgs__msg__Cluster__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!perception_msgs__msg__Cluster__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
