// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from localization_msgs:msg/PoseVelAccAng.idl
// generated code does not contain a copyright notice
#include "localization_msgs/msg/detail/pose_vel_acc_ang__functions.h"

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
// Member `linear_velocity`
// Member `linear_acceleration`
// Member `angular_velocity`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
localization_msgs__msg__PoseVelAccAng__init(localization_msgs__msg__PoseVelAccAng * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    localization_msgs__msg__PoseVelAccAng__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    localization_msgs__msg__PoseVelAccAng__fini(msg);
    return false;
  }
  // linear_velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->linear_velocity)) {
    localization_msgs__msg__PoseVelAccAng__fini(msg);
    return false;
  }
  // linear_acceleration
  if (!geometry_msgs__msg__Vector3__init(&msg->linear_acceleration)) {
    localization_msgs__msg__PoseVelAccAng__fini(msg);
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->angular_velocity)) {
    localization_msgs__msg__PoseVelAccAng__fini(msg);
    return false;
  }
  return true;
}

void
localization_msgs__msg__PoseVelAccAng__fini(localization_msgs__msg__PoseVelAccAng * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // linear_velocity
  geometry_msgs__msg__Vector3__fini(&msg->linear_velocity);
  // linear_acceleration
  geometry_msgs__msg__Vector3__fini(&msg->linear_acceleration);
  // angular_velocity
  geometry_msgs__msg__Vector3__fini(&msg->angular_velocity);
}

bool
localization_msgs__msg__PoseVelAccAng__are_equal(const localization_msgs__msg__PoseVelAccAng * lhs, const localization_msgs__msg__PoseVelAccAng * rhs)
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
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // linear_velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->linear_velocity), &(rhs->linear_velocity)))
  {
    return false;
  }
  // linear_acceleration
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->linear_acceleration), &(rhs->linear_acceleration)))
  {
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->angular_velocity), &(rhs->angular_velocity)))
  {
    return false;
  }
  return true;
}

bool
localization_msgs__msg__PoseVelAccAng__copy(
  const localization_msgs__msg__PoseVelAccAng * input,
  localization_msgs__msg__PoseVelAccAng * output)
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
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // linear_velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->linear_velocity), &(output->linear_velocity)))
  {
    return false;
  }
  // linear_acceleration
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->linear_acceleration), &(output->linear_acceleration)))
  {
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->angular_velocity), &(output->angular_velocity)))
  {
    return false;
  }
  return true;
}

localization_msgs__msg__PoseVelAccAng *
localization_msgs__msg__PoseVelAccAng__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  localization_msgs__msg__PoseVelAccAng * msg = (localization_msgs__msg__PoseVelAccAng *)allocator.allocate(sizeof(localization_msgs__msg__PoseVelAccAng), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(localization_msgs__msg__PoseVelAccAng));
  bool success = localization_msgs__msg__PoseVelAccAng__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
localization_msgs__msg__PoseVelAccAng__destroy(localization_msgs__msg__PoseVelAccAng * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    localization_msgs__msg__PoseVelAccAng__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
localization_msgs__msg__PoseVelAccAng__Sequence__init(localization_msgs__msg__PoseVelAccAng__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  localization_msgs__msg__PoseVelAccAng * data = NULL;

  if (size) {
    data = (localization_msgs__msg__PoseVelAccAng *)allocator.zero_allocate(size, sizeof(localization_msgs__msg__PoseVelAccAng), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = localization_msgs__msg__PoseVelAccAng__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        localization_msgs__msg__PoseVelAccAng__fini(&data[i - 1]);
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
localization_msgs__msg__PoseVelAccAng__Sequence__fini(localization_msgs__msg__PoseVelAccAng__Sequence * array)
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
      localization_msgs__msg__PoseVelAccAng__fini(&array->data[i]);
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

localization_msgs__msg__PoseVelAccAng__Sequence *
localization_msgs__msg__PoseVelAccAng__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  localization_msgs__msg__PoseVelAccAng__Sequence * array = (localization_msgs__msg__PoseVelAccAng__Sequence *)allocator.allocate(sizeof(localization_msgs__msg__PoseVelAccAng__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = localization_msgs__msg__PoseVelAccAng__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
localization_msgs__msg__PoseVelAccAng__Sequence__destroy(localization_msgs__msg__PoseVelAccAng__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    localization_msgs__msg__PoseVelAccAng__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
localization_msgs__msg__PoseVelAccAng__Sequence__are_equal(const localization_msgs__msg__PoseVelAccAng__Sequence * lhs, const localization_msgs__msg__PoseVelAccAng__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!localization_msgs__msg__PoseVelAccAng__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
localization_msgs__msg__PoseVelAccAng__Sequence__copy(
  const localization_msgs__msg__PoseVelAccAng__Sequence * input,
  localization_msgs__msg__PoseVelAccAng__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(localization_msgs__msg__PoseVelAccAng);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    localization_msgs__msg__PoseVelAccAng * data =
      (localization_msgs__msg__PoseVelAccAng *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!localization_msgs__msg__PoseVelAccAng__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          localization_msgs__msg__PoseVelAccAng__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!localization_msgs__msg__PoseVelAccAng__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
