// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from web_navigation_msgs:msg/NavigationExecution.idl
// generated code does not contain a copyright notice
#include "web_navigation_msgs/msg/detail/navigation_execution__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ros_goal_uuid`
// Member `task_id`
// Member `map_version`
#include "rosidl_runtime_c/string_functions.h"
// Member `goals`
// Member `endpoint`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
web_navigation_msgs__msg__NavigationExecution__init(web_navigation_msgs__msg__NavigationExecution * msg)
{
  if (!msg) {
    return false;
  }
  // ros_goal_uuid
  if (!rosidl_runtime_c__String__init(&msg->ros_goal_uuid)) {
    web_navigation_msgs__msg__NavigationExecution__fini(msg);
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    web_navigation_msgs__msg__NavigationExecution__fini(msg);
    return false;
  }
  // map_version
  if (!rosidl_runtime_c__String__init(&msg->map_version)) {
    web_navigation_msgs__msg__NavigationExecution__fini(msg);
    return false;
  }
  // status
  // goals
  if (!geometry_msgs__msg__PoseStamped__Sequence__init(&msg->goals, 0)) {
    web_navigation_msgs__msg__NavigationExecution__fini(msg);
    return false;
  }
  // endpoint
  if (!geometry_msgs__msg__PoseStamped__init(&msg->endpoint)) {
    web_navigation_msgs__msg__NavigationExecution__fini(msg);
    return false;
  }
  return true;
}

void
web_navigation_msgs__msg__NavigationExecution__fini(web_navigation_msgs__msg__NavigationExecution * msg)
{
  if (!msg) {
    return;
  }
  // ros_goal_uuid
  rosidl_runtime_c__String__fini(&msg->ros_goal_uuid);
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
  // map_version
  rosidl_runtime_c__String__fini(&msg->map_version);
  // status
  // goals
  geometry_msgs__msg__PoseStamped__Sequence__fini(&msg->goals);
  // endpoint
  geometry_msgs__msg__PoseStamped__fini(&msg->endpoint);
}

bool
web_navigation_msgs__msg__NavigationExecution__are_equal(const web_navigation_msgs__msg__NavigationExecution * lhs, const web_navigation_msgs__msg__NavigationExecution * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ros_goal_uuid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ros_goal_uuid), &(rhs->ros_goal_uuid)))
  {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_id), &(rhs->task_id)))
  {
    return false;
  }
  // map_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map_version), &(rhs->map_version)))
  {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // goals
  if (!geometry_msgs__msg__PoseStamped__Sequence__are_equal(
      &(lhs->goals), &(rhs->goals)))
  {
    return false;
  }
  // endpoint
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->endpoint), &(rhs->endpoint)))
  {
    return false;
  }
  return true;
}

bool
web_navigation_msgs__msg__NavigationExecution__copy(
  const web_navigation_msgs__msg__NavigationExecution * input,
  web_navigation_msgs__msg__NavigationExecution * output)
{
  if (!input || !output) {
    return false;
  }
  // ros_goal_uuid
  if (!rosidl_runtime_c__String__copy(
      &(input->ros_goal_uuid), &(output->ros_goal_uuid)))
  {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__copy(
      &(input->task_id), &(output->task_id)))
  {
    return false;
  }
  // map_version
  if (!rosidl_runtime_c__String__copy(
      &(input->map_version), &(output->map_version)))
  {
    return false;
  }
  // status
  output->status = input->status;
  // goals
  if (!geometry_msgs__msg__PoseStamped__Sequence__copy(
      &(input->goals), &(output->goals)))
  {
    return false;
  }
  // endpoint
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->endpoint), &(output->endpoint)))
  {
    return false;
  }
  return true;
}

web_navigation_msgs__msg__NavigationExecution *
web_navigation_msgs__msg__NavigationExecution__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__msg__NavigationExecution * msg = (web_navigation_msgs__msg__NavigationExecution *)allocator.allocate(sizeof(web_navigation_msgs__msg__NavigationExecution), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(web_navigation_msgs__msg__NavigationExecution));
  bool success = web_navigation_msgs__msg__NavigationExecution__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
web_navigation_msgs__msg__NavigationExecution__destroy(web_navigation_msgs__msg__NavigationExecution * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    web_navigation_msgs__msg__NavigationExecution__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
web_navigation_msgs__msg__NavigationExecution__Sequence__init(web_navigation_msgs__msg__NavigationExecution__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__msg__NavigationExecution * data = NULL;

  if (size) {
    data = (web_navigation_msgs__msg__NavigationExecution *)allocator.zero_allocate(size, sizeof(web_navigation_msgs__msg__NavigationExecution), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = web_navigation_msgs__msg__NavigationExecution__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        web_navigation_msgs__msg__NavigationExecution__fini(&data[i - 1]);
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
web_navigation_msgs__msg__NavigationExecution__Sequence__fini(web_navigation_msgs__msg__NavigationExecution__Sequence * array)
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
      web_navigation_msgs__msg__NavigationExecution__fini(&array->data[i]);
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

web_navigation_msgs__msg__NavigationExecution__Sequence *
web_navigation_msgs__msg__NavigationExecution__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__msg__NavigationExecution__Sequence * array = (web_navigation_msgs__msg__NavigationExecution__Sequence *)allocator.allocate(sizeof(web_navigation_msgs__msg__NavigationExecution__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = web_navigation_msgs__msg__NavigationExecution__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
web_navigation_msgs__msg__NavigationExecution__Sequence__destroy(web_navigation_msgs__msg__NavigationExecution__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    web_navigation_msgs__msg__NavigationExecution__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
web_navigation_msgs__msg__NavigationExecution__Sequence__are_equal(const web_navigation_msgs__msg__NavigationExecution__Sequence * lhs, const web_navigation_msgs__msg__NavigationExecution__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!web_navigation_msgs__msg__NavigationExecution__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
web_navigation_msgs__msg__NavigationExecution__Sequence__copy(
  const web_navigation_msgs__msg__NavigationExecution__Sequence * input,
  web_navigation_msgs__msg__NavigationExecution__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(web_navigation_msgs__msg__NavigationExecution);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    web_navigation_msgs__msg__NavigationExecution * data =
      (web_navigation_msgs__msg__NavigationExecution *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!web_navigation_msgs__msg__NavigationExecution__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          web_navigation_msgs__msg__NavigationExecution__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!web_navigation_msgs__msg__NavigationExecution__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
