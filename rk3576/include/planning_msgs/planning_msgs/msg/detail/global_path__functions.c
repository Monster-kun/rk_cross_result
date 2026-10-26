// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from planning_msgs:msg/GlobalPath.idl
// generated code does not contain a copyright notice
#include "planning_msgs/msg/detail/global_path__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `main_trajectory`
#include "planning_msgs/msg/detail/trajectory__functions.h"
// Member `left_bound`
// Member `right_bound`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `left_bound_s`
// Member `right_bound_s`
// Member `checkpoint_indices`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
planning_msgs__msg__GlobalPath__init(planning_msgs__msg__GlobalPath * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    planning_msgs__msg__GlobalPath__fini(msg);
    return false;
  }
  // main_trajectory
  if (!planning_msgs__msg__Trajectory__init(&msg->main_trajectory)) {
    planning_msgs__msg__GlobalPath__fini(msg);
    return false;
  }
  // left_bound
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->left_bound, 0)) {
    planning_msgs__msg__GlobalPath__fini(msg);
    return false;
  }
  // right_bound
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->right_bound, 0)) {
    planning_msgs__msg__GlobalPath__fini(msg);
    return false;
  }
  // left_bound_s
  if (!rosidl_runtime_c__double__Sequence__init(&msg->left_bound_s, 0)) {
    planning_msgs__msg__GlobalPath__fini(msg);
    return false;
  }
  // right_bound_s
  if (!rosidl_runtime_c__double__Sequence__init(&msg->right_bound_s, 0)) {
    planning_msgs__msg__GlobalPath__fini(msg);
    return false;
  }
  // checkpoint_indices
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->checkpoint_indices, 0)) {
    planning_msgs__msg__GlobalPath__fini(msg);
    return false;
  }
  // loop
  // loop_start_index
  // loop_left_bound_start_index
  // loop_right_bound_start_index
  return true;
}

void
planning_msgs__msg__GlobalPath__fini(planning_msgs__msg__GlobalPath * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // main_trajectory
  planning_msgs__msg__Trajectory__fini(&msg->main_trajectory);
  // left_bound
  geometry_msgs__msg__Point__Sequence__fini(&msg->left_bound);
  // right_bound
  geometry_msgs__msg__Point__Sequence__fini(&msg->right_bound);
  // left_bound_s
  rosidl_runtime_c__double__Sequence__fini(&msg->left_bound_s);
  // right_bound_s
  rosidl_runtime_c__double__Sequence__fini(&msg->right_bound_s);
  // checkpoint_indices
  rosidl_runtime_c__uint32__Sequence__fini(&msg->checkpoint_indices);
  // loop
  // loop_start_index
  // loop_left_bound_start_index
  // loop_right_bound_start_index
}

bool
planning_msgs__msg__GlobalPath__are_equal(const planning_msgs__msg__GlobalPath * lhs, const planning_msgs__msg__GlobalPath * rhs)
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
  // main_trajectory
  if (!planning_msgs__msg__Trajectory__are_equal(
      &(lhs->main_trajectory), &(rhs->main_trajectory)))
  {
    return false;
  }
  // left_bound
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->left_bound), &(rhs->left_bound)))
  {
    return false;
  }
  // right_bound
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->right_bound), &(rhs->right_bound)))
  {
    return false;
  }
  // left_bound_s
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->left_bound_s), &(rhs->left_bound_s)))
  {
    return false;
  }
  // right_bound_s
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->right_bound_s), &(rhs->right_bound_s)))
  {
    return false;
  }
  // checkpoint_indices
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->checkpoint_indices), &(rhs->checkpoint_indices)))
  {
    return false;
  }
  // loop
  if (lhs->loop != rhs->loop) {
    return false;
  }
  // loop_start_index
  if (lhs->loop_start_index != rhs->loop_start_index) {
    return false;
  }
  // loop_left_bound_start_index
  if (lhs->loop_left_bound_start_index != rhs->loop_left_bound_start_index) {
    return false;
  }
  // loop_right_bound_start_index
  if (lhs->loop_right_bound_start_index != rhs->loop_right_bound_start_index) {
    return false;
  }
  return true;
}

bool
planning_msgs__msg__GlobalPath__copy(
  const planning_msgs__msg__GlobalPath * input,
  planning_msgs__msg__GlobalPath * output)
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
  // main_trajectory
  if (!planning_msgs__msg__Trajectory__copy(
      &(input->main_trajectory), &(output->main_trajectory)))
  {
    return false;
  }
  // left_bound
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->left_bound), &(output->left_bound)))
  {
    return false;
  }
  // right_bound
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->right_bound), &(output->right_bound)))
  {
    return false;
  }
  // left_bound_s
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->left_bound_s), &(output->left_bound_s)))
  {
    return false;
  }
  // right_bound_s
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->right_bound_s), &(output->right_bound_s)))
  {
    return false;
  }
  // checkpoint_indices
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->checkpoint_indices), &(output->checkpoint_indices)))
  {
    return false;
  }
  // loop
  output->loop = input->loop;
  // loop_start_index
  output->loop_start_index = input->loop_start_index;
  // loop_left_bound_start_index
  output->loop_left_bound_start_index = input->loop_left_bound_start_index;
  // loop_right_bound_start_index
  output->loop_right_bound_start_index = input->loop_right_bound_start_index;
  return true;
}

planning_msgs__msg__GlobalPath *
planning_msgs__msg__GlobalPath__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planning_msgs__msg__GlobalPath * msg = (planning_msgs__msg__GlobalPath *)allocator.allocate(sizeof(planning_msgs__msg__GlobalPath), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planning_msgs__msg__GlobalPath));
  bool success = planning_msgs__msg__GlobalPath__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
planning_msgs__msg__GlobalPath__destroy(planning_msgs__msg__GlobalPath * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    planning_msgs__msg__GlobalPath__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
planning_msgs__msg__GlobalPath__Sequence__init(planning_msgs__msg__GlobalPath__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planning_msgs__msg__GlobalPath * data = NULL;

  if (size) {
    data = (planning_msgs__msg__GlobalPath *)allocator.zero_allocate(size, sizeof(planning_msgs__msg__GlobalPath), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planning_msgs__msg__GlobalPath__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planning_msgs__msg__GlobalPath__fini(&data[i - 1]);
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
planning_msgs__msg__GlobalPath__Sequence__fini(planning_msgs__msg__GlobalPath__Sequence * array)
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
      planning_msgs__msg__GlobalPath__fini(&array->data[i]);
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

planning_msgs__msg__GlobalPath__Sequence *
planning_msgs__msg__GlobalPath__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planning_msgs__msg__GlobalPath__Sequence * array = (planning_msgs__msg__GlobalPath__Sequence *)allocator.allocate(sizeof(planning_msgs__msg__GlobalPath__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = planning_msgs__msg__GlobalPath__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
planning_msgs__msg__GlobalPath__Sequence__destroy(planning_msgs__msg__GlobalPath__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    planning_msgs__msg__GlobalPath__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
planning_msgs__msg__GlobalPath__Sequence__are_equal(const planning_msgs__msg__GlobalPath__Sequence * lhs, const planning_msgs__msg__GlobalPath__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!planning_msgs__msg__GlobalPath__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
planning_msgs__msg__GlobalPath__Sequence__copy(
  const planning_msgs__msg__GlobalPath__Sequence * input,
  planning_msgs__msg__GlobalPath__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(planning_msgs__msg__GlobalPath);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    planning_msgs__msg__GlobalPath * data =
      (planning_msgs__msg__GlobalPath *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!planning_msgs__msg__GlobalPath__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          planning_msgs__msg__GlobalPath__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!planning_msgs__msg__GlobalPath__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
