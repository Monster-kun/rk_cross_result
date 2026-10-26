// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from planning_msgs:msg/MincoTraj.idl
// generated code does not contain a copyright notice
#include "planning_msgs/msg/detail/minco_traj__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `start_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `head_x`
// Member `head_y`
// Member `tail_x`
// Member `tail_y`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `t_pts`
// Member `yaw_pts`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `pos_pts`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `waypoints`
#include "planning_msgs/msg/detail/waypoint__functions.h"

bool
planning_msgs__msg__MincoTraj__init(planning_msgs__msg__MincoTraj * msg)
{
  if (!msg) {
    return false;
  }
  // start_time
  if (!builtin_interfaces__msg__Time__init(&msg->start_time)) {
    planning_msgs__msg__MincoTraj__fini(msg);
    return false;
  }
  // end_time
  // use_init
  // yaw
  // head_x
  if (!geometry_msgs__msg__Vector3__init(&msg->head_x)) {
    planning_msgs__msg__MincoTraj__fini(msg);
    return false;
  }
  // head_y
  if (!geometry_msgs__msg__Vector3__init(&msg->head_y)) {
    planning_msgs__msg__MincoTraj__fini(msg);
    return false;
  }
  // tail_x
  if (!geometry_msgs__msg__Vector3__init(&msg->tail_x)) {
    planning_msgs__msg__MincoTraj__fini(msg);
    return false;
  }
  // tail_y
  if (!geometry_msgs__msg__Vector3__init(&msg->tail_y)) {
    planning_msgs__msg__MincoTraj__fini(msg);
    return false;
  }
  // t_pts
  if (!rosidl_runtime_c__double__Sequence__init(&msg->t_pts, 0)) {
    planning_msgs__msg__MincoTraj__fini(msg);
    return false;
  }
  // pos_pts
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->pos_pts, 0)) {
    planning_msgs__msg__MincoTraj__fini(msg);
    return false;
  }
  // yaw_pts
  if (!rosidl_runtime_c__double__Sequence__init(&msg->yaw_pts, 0)) {
    planning_msgs__msg__MincoTraj__fini(msg);
    return false;
  }
  // waypoints
  if (!planning_msgs__msg__Waypoint__Sequence__init(&msg->waypoints, 0)) {
    planning_msgs__msg__MincoTraj__fini(msg);
    return false;
  }
  return true;
}

void
planning_msgs__msg__MincoTraj__fini(planning_msgs__msg__MincoTraj * msg)
{
  if (!msg) {
    return;
  }
  // start_time
  builtin_interfaces__msg__Time__fini(&msg->start_time);
  // end_time
  // use_init
  // yaw
  // head_x
  geometry_msgs__msg__Vector3__fini(&msg->head_x);
  // head_y
  geometry_msgs__msg__Vector3__fini(&msg->head_y);
  // tail_x
  geometry_msgs__msg__Vector3__fini(&msg->tail_x);
  // tail_y
  geometry_msgs__msg__Vector3__fini(&msg->tail_y);
  // t_pts
  rosidl_runtime_c__double__Sequence__fini(&msg->t_pts);
  // pos_pts
  geometry_msgs__msg__Point__Sequence__fini(&msg->pos_pts);
  // yaw_pts
  rosidl_runtime_c__double__Sequence__fini(&msg->yaw_pts);
  // waypoints
  planning_msgs__msg__Waypoint__Sequence__fini(&msg->waypoints);
}

bool
planning_msgs__msg__MincoTraj__are_equal(const planning_msgs__msg__MincoTraj * lhs, const planning_msgs__msg__MincoTraj * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->start_time), &(rhs->start_time)))
  {
    return false;
  }
  // end_time
  if (lhs->end_time != rhs->end_time) {
    return false;
  }
  // use_init
  if (lhs->use_init != rhs->use_init) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // head_x
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->head_x), &(rhs->head_x)))
  {
    return false;
  }
  // head_y
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->head_y), &(rhs->head_y)))
  {
    return false;
  }
  // tail_x
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->tail_x), &(rhs->tail_x)))
  {
    return false;
  }
  // tail_y
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->tail_y), &(rhs->tail_y)))
  {
    return false;
  }
  // t_pts
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->t_pts), &(rhs->t_pts)))
  {
    return false;
  }
  // pos_pts
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->pos_pts), &(rhs->pos_pts)))
  {
    return false;
  }
  // yaw_pts
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->yaw_pts), &(rhs->yaw_pts)))
  {
    return false;
  }
  // waypoints
  if (!planning_msgs__msg__Waypoint__Sequence__are_equal(
      &(lhs->waypoints), &(rhs->waypoints)))
  {
    return false;
  }
  return true;
}

bool
planning_msgs__msg__MincoTraj__copy(
  const planning_msgs__msg__MincoTraj * input,
  planning_msgs__msg__MincoTraj * output)
{
  if (!input || !output) {
    return false;
  }
  // start_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->start_time), &(output->start_time)))
  {
    return false;
  }
  // end_time
  output->end_time = input->end_time;
  // use_init
  output->use_init = input->use_init;
  // yaw
  output->yaw = input->yaw;
  // head_x
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->head_x), &(output->head_x)))
  {
    return false;
  }
  // head_y
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->head_y), &(output->head_y)))
  {
    return false;
  }
  // tail_x
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->tail_x), &(output->tail_x)))
  {
    return false;
  }
  // tail_y
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->tail_y), &(output->tail_y)))
  {
    return false;
  }
  // t_pts
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->t_pts), &(output->t_pts)))
  {
    return false;
  }
  // pos_pts
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->pos_pts), &(output->pos_pts)))
  {
    return false;
  }
  // yaw_pts
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->yaw_pts), &(output->yaw_pts)))
  {
    return false;
  }
  // waypoints
  if (!planning_msgs__msg__Waypoint__Sequence__copy(
      &(input->waypoints), &(output->waypoints)))
  {
    return false;
  }
  return true;
}

planning_msgs__msg__MincoTraj *
planning_msgs__msg__MincoTraj__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planning_msgs__msg__MincoTraj * msg = (planning_msgs__msg__MincoTraj *)allocator.allocate(sizeof(planning_msgs__msg__MincoTraj), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planning_msgs__msg__MincoTraj));
  bool success = planning_msgs__msg__MincoTraj__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
planning_msgs__msg__MincoTraj__destroy(planning_msgs__msg__MincoTraj * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    planning_msgs__msg__MincoTraj__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
planning_msgs__msg__MincoTraj__Sequence__init(planning_msgs__msg__MincoTraj__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planning_msgs__msg__MincoTraj * data = NULL;

  if (size) {
    data = (planning_msgs__msg__MincoTraj *)allocator.zero_allocate(size, sizeof(planning_msgs__msg__MincoTraj), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planning_msgs__msg__MincoTraj__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planning_msgs__msg__MincoTraj__fini(&data[i - 1]);
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
planning_msgs__msg__MincoTraj__Sequence__fini(planning_msgs__msg__MincoTraj__Sequence * array)
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
      planning_msgs__msg__MincoTraj__fini(&array->data[i]);
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

planning_msgs__msg__MincoTraj__Sequence *
planning_msgs__msg__MincoTraj__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planning_msgs__msg__MincoTraj__Sequence * array = (planning_msgs__msg__MincoTraj__Sequence *)allocator.allocate(sizeof(planning_msgs__msg__MincoTraj__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = planning_msgs__msg__MincoTraj__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
planning_msgs__msg__MincoTraj__Sequence__destroy(planning_msgs__msg__MincoTraj__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    planning_msgs__msg__MincoTraj__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
planning_msgs__msg__MincoTraj__Sequence__are_equal(const planning_msgs__msg__MincoTraj__Sequence * lhs, const planning_msgs__msg__MincoTraj__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!planning_msgs__msg__MincoTraj__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
planning_msgs__msg__MincoTraj__Sequence__copy(
  const planning_msgs__msg__MincoTraj__Sequence * input,
  planning_msgs__msg__MincoTraj__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(planning_msgs__msg__MincoTraj);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    planning_msgs__msg__MincoTraj * data =
      (planning_msgs__msg__MincoTraj *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!planning_msgs__msg__MincoTraj__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          planning_msgs__msg__MincoTraj__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!planning_msgs__msg__MincoTraj__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
