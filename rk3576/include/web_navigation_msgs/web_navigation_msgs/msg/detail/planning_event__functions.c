// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from web_navigation_msgs:msg/PlanningEvent.idl
// generated code does not contain a copyright notice
#include "web_navigation_msgs/msg/detail/planning_event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `task_id`
// Member `ros_goal_uuid`
// Member `map_version`
// Member `planning_attempt_id`
// Member `error_code`
// Member `error_message`
#include "rosidl_runtime_c/string_functions.h"
// Member `effective_endpoint`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `path`
#include "planning_msgs/msg/detail/global_path__functions.h"

bool
web_navigation_msgs__msg__PlanningEvent__init(web_navigation_msgs__msg__PlanningEvent * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    web_navigation_msgs__msg__PlanningEvent__fini(msg);
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    web_navigation_msgs__msg__PlanningEvent__fini(msg);
    return false;
  }
  // ros_goal_uuid
  if (!rosidl_runtime_c__String__init(&msg->ros_goal_uuid)) {
    web_navigation_msgs__msg__PlanningEvent__fini(msg);
    return false;
  }
  // map_version
  if (!rosidl_runtime_c__String__init(&msg->map_version)) {
    web_navigation_msgs__msg__PlanningEvent__fini(msg);
    return false;
  }
  // planning_attempt_id
  if (!rosidl_runtime_c__String__init(&msg->planning_attempt_id)) {
    web_navigation_msgs__msg__PlanningEvent__fini(msg);
    return false;
  }
  // status
  // path_revision
  // effective_endpoint
  if (!geometry_msgs__msg__Pose__init(&msg->effective_endpoint)) {
    web_navigation_msgs__msg__PlanningEvent__fini(msg);
    return false;
  }
  // error_code
  if (!rosidl_runtime_c__String__init(&msg->error_code)) {
    web_navigation_msgs__msg__PlanningEvent__fini(msg);
    return false;
  }
  // error_message
  if (!rosidl_runtime_c__String__init(&msg->error_message)) {
    web_navigation_msgs__msg__PlanningEvent__fini(msg);
    return false;
  }
  // path
  if (!planning_msgs__msg__GlobalPath__init(&msg->path)) {
    web_navigation_msgs__msg__PlanningEvent__fini(msg);
    return false;
  }
  return true;
}

void
web_navigation_msgs__msg__PlanningEvent__fini(web_navigation_msgs__msg__PlanningEvent * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
  // ros_goal_uuid
  rosidl_runtime_c__String__fini(&msg->ros_goal_uuid);
  // map_version
  rosidl_runtime_c__String__fini(&msg->map_version);
  // planning_attempt_id
  rosidl_runtime_c__String__fini(&msg->planning_attempt_id);
  // status
  // path_revision
  // effective_endpoint
  geometry_msgs__msg__Pose__fini(&msg->effective_endpoint);
  // error_code
  rosidl_runtime_c__String__fini(&msg->error_code);
  // error_message
  rosidl_runtime_c__String__fini(&msg->error_message);
  // path
  planning_msgs__msg__GlobalPath__fini(&msg->path);
}

bool
web_navigation_msgs__msg__PlanningEvent__are_equal(const web_navigation_msgs__msg__PlanningEvent * lhs, const web_navigation_msgs__msg__PlanningEvent * rhs)
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
  // task_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_id), &(rhs->task_id)))
  {
    return false;
  }
  // ros_goal_uuid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ros_goal_uuid), &(rhs->ros_goal_uuid)))
  {
    return false;
  }
  // map_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map_version), &(rhs->map_version)))
  {
    return false;
  }
  // planning_attempt_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->planning_attempt_id), &(rhs->planning_attempt_id)))
  {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // path_revision
  if (lhs->path_revision != rhs->path_revision) {
    return false;
  }
  // effective_endpoint
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->effective_endpoint), &(rhs->effective_endpoint)))
  {
    return false;
  }
  // error_code
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_code), &(rhs->error_code)))
  {
    return false;
  }
  // error_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_message), &(rhs->error_message)))
  {
    return false;
  }
  // path
  if (!planning_msgs__msg__GlobalPath__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  return true;
}

bool
web_navigation_msgs__msg__PlanningEvent__copy(
  const web_navigation_msgs__msg__PlanningEvent * input,
  web_navigation_msgs__msg__PlanningEvent * output)
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
  // task_id
  if (!rosidl_runtime_c__String__copy(
      &(input->task_id), &(output->task_id)))
  {
    return false;
  }
  // ros_goal_uuid
  if (!rosidl_runtime_c__String__copy(
      &(input->ros_goal_uuid), &(output->ros_goal_uuid)))
  {
    return false;
  }
  // map_version
  if (!rosidl_runtime_c__String__copy(
      &(input->map_version), &(output->map_version)))
  {
    return false;
  }
  // planning_attempt_id
  if (!rosidl_runtime_c__String__copy(
      &(input->planning_attempt_id), &(output->planning_attempt_id)))
  {
    return false;
  }
  // status
  output->status = input->status;
  // path_revision
  output->path_revision = input->path_revision;
  // effective_endpoint
  if (!geometry_msgs__msg__Pose__copy(
      &(input->effective_endpoint), &(output->effective_endpoint)))
  {
    return false;
  }
  // error_code
  if (!rosidl_runtime_c__String__copy(
      &(input->error_code), &(output->error_code)))
  {
    return false;
  }
  // error_message
  if (!rosidl_runtime_c__String__copy(
      &(input->error_message), &(output->error_message)))
  {
    return false;
  }
  // path
  if (!planning_msgs__msg__GlobalPath__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  return true;
}

web_navigation_msgs__msg__PlanningEvent *
web_navigation_msgs__msg__PlanningEvent__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__msg__PlanningEvent * msg = (web_navigation_msgs__msg__PlanningEvent *)allocator.allocate(sizeof(web_navigation_msgs__msg__PlanningEvent), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(web_navigation_msgs__msg__PlanningEvent));
  bool success = web_navigation_msgs__msg__PlanningEvent__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
web_navigation_msgs__msg__PlanningEvent__destroy(web_navigation_msgs__msg__PlanningEvent * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    web_navigation_msgs__msg__PlanningEvent__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
web_navigation_msgs__msg__PlanningEvent__Sequence__init(web_navigation_msgs__msg__PlanningEvent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__msg__PlanningEvent * data = NULL;

  if (size) {
    data = (web_navigation_msgs__msg__PlanningEvent *)allocator.zero_allocate(size, sizeof(web_navigation_msgs__msg__PlanningEvent), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = web_navigation_msgs__msg__PlanningEvent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        web_navigation_msgs__msg__PlanningEvent__fini(&data[i - 1]);
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
web_navigation_msgs__msg__PlanningEvent__Sequence__fini(web_navigation_msgs__msg__PlanningEvent__Sequence * array)
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
      web_navigation_msgs__msg__PlanningEvent__fini(&array->data[i]);
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

web_navigation_msgs__msg__PlanningEvent__Sequence *
web_navigation_msgs__msg__PlanningEvent__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__msg__PlanningEvent__Sequence * array = (web_navigation_msgs__msg__PlanningEvent__Sequence *)allocator.allocate(sizeof(web_navigation_msgs__msg__PlanningEvent__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = web_navigation_msgs__msg__PlanningEvent__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
web_navigation_msgs__msg__PlanningEvent__Sequence__destroy(web_navigation_msgs__msg__PlanningEvent__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    web_navigation_msgs__msg__PlanningEvent__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
web_navigation_msgs__msg__PlanningEvent__Sequence__are_equal(const web_navigation_msgs__msg__PlanningEvent__Sequence * lhs, const web_navigation_msgs__msg__PlanningEvent__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!web_navigation_msgs__msg__PlanningEvent__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
web_navigation_msgs__msg__PlanningEvent__Sequence__copy(
  const web_navigation_msgs__msg__PlanningEvent__Sequence * input,
  web_navigation_msgs__msg__PlanningEvent__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(web_navigation_msgs__msg__PlanningEvent);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    web_navigation_msgs__msg__PlanningEvent * data =
      (web_navigation_msgs__msg__PlanningEvent *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!web_navigation_msgs__msg__PlanningEvent__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          web_navigation_msgs__msg__PlanningEvent__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!web_navigation_msgs__msg__PlanningEvent__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
