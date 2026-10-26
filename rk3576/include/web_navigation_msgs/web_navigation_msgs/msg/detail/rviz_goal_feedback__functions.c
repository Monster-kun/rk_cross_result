// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from web_navigation_msgs:msg/RvizGoalFeedback.idl
// generated code does not contain a copyright notice
#include "web_navigation_msgs/msg/detail/rviz_goal_feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `manager_boot_id`
// Member `request_id`
// Member `task_id`
// Member `code`
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
web_navigation_msgs__msg__RvizGoalFeedback__init(web_navigation_msgs__msg__RvizGoalFeedback * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    web_navigation_msgs__msg__RvizGoalFeedback__fini(msg);
    return false;
  }
  // manager_boot_id
  if (!rosidl_runtime_c__String__init(&msg->manager_boot_id)) {
    web_navigation_msgs__msg__RvizGoalFeedback__fini(msg);
    return false;
  }
  // status
  // request_id
  if (!rosidl_runtime_c__String__init(&msg->request_id)) {
    web_navigation_msgs__msg__RvizGoalFeedback__fini(msg);
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    web_navigation_msgs__msg__RvizGoalFeedback__fini(msg);
    return false;
  }
  // code
  if (!rosidl_runtime_c__String__init(&msg->code)) {
    web_navigation_msgs__msg__RvizGoalFeedback__fini(msg);
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    web_navigation_msgs__msg__RvizGoalFeedback__fini(msg);
    return false;
  }
  // staged_waypoints
  return true;
}

void
web_navigation_msgs__msg__RvizGoalFeedback__fini(web_navigation_msgs__msg__RvizGoalFeedback * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // manager_boot_id
  rosidl_runtime_c__String__fini(&msg->manager_boot_id);
  // status
  // request_id
  rosidl_runtime_c__String__fini(&msg->request_id);
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
  // code
  rosidl_runtime_c__String__fini(&msg->code);
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // staged_waypoints
}

bool
web_navigation_msgs__msg__RvizGoalFeedback__are_equal(const web_navigation_msgs__msg__RvizGoalFeedback * lhs, const web_navigation_msgs__msg__RvizGoalFeedback * rhs)
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
  // manager_boot_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->manager_boot_id), &(rhs->manager_boot_id)))
  {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // request_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->request_id), &(rhs->request_id)))
  {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_id), &(rhs->task_id)))
  {
    return false;
  }
  // code
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->code), &(rhs->code)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // staged_waypoints
  if (lhs->staged_waypoints != rhs->staged_waypoints) {
    return false;
  }
  return true;
}

bool
web_navigation_msgs__msg__RvizGoalFeedback__copy(
  const web_navigation_msgs__msg__RvizGoalFeedback * input,
  web_navigation_msgs__msg__RvizGoalFeedback * output)
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
  // manager_boot_id
  if (!rosidl_runtime_c__String__copy(
      &(input->manager_boot_id), &(output->manager_boot_id)))
  {
    return false;
  }
  // status
  output->status = input->status;
  // request_id
  if (!rosidl_runtime_c__String__copy(
      &(input->request_id), &(output->request_id)))
  {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__copy(
      &(input->task_id), &(output->task_id)))
  {
    return false;
  }
  // code
  if (!rosidl_runtime_c__String__copy(
      &(input->code), &(output->code)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // staged_waypoints
  output->staged_waypoints = input->staged_waypoints;
  return true;
}

web_navigation_msgs__msg__RvizGoalFeedback *
web_navigation_msgs__msg__RvizGoalFeedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__msg__RvizGoalFeedback * msg = (web_navigation_msgs__msg__RvizGoalFeedback *)allocator.allocate(sizeof(web_navigation_msgs__msg__RvizGoalFeedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(web_navigation_msgs__msg__RvizGoalFeedback));
  bool success = web_navigation_msgs__msg__RvizGoalFeedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
web_navigation_msgs__msg__RvizGoalFeedback__destroy(web_navigation_msgs__msg__RvizGoalFeedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    web_navigation_msgs__msg__RvizGoalFeedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
web_navigation_msgs__msg__RvizGoalFeedback__Sequence__init(web_navigation_msgs__msg__RvizGoalFeedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__msg__RvizGoalFeedback * data = NULL;

  if (size) {
    data = (web_navigation_msgs__msg__RvizGoalFeedback *)allocator.zero_allocate(size, sizeof(web_navigation_msgs__msg__RvizGoalFeedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = web_navigation_msgs__msg__RvizGoalFeedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        web_navigation_msgs__msg__RvizGoalFeedback__fini(&data[i - 1]);
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
web_navigation_msgs__msg__RvizGoalFeedback__Sequence__fini(web_navigation_msgs__msg__RvizGoalFeedback__Sequence * array)
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
      web_navigation_msgs__msg__RvizGoalFeedback__fini(&array->data[i]);
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

web_navigation_msgs__msg__RvizGoalFeedback__Sequence *
web_navigation_msgs__msg__RvizGoalFeedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__msg__RvizGoalFeedback__Sequence * array = (web_navigation_msgs__msg__RvizGoalFeedback__Sequence *)allocator.allocate(sizeof(web_navigation_msgs__msg__RvizGoalFeedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = web_navigation_msgs__msg__RvizGoalFeedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
web_navigation_msgs__msg__RvizGoalFeedback__Sequence__destroy(web_navigation_msgs__msg__RvizGoalFeedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    web_navigation_msgs__msg__RvizGoalFeedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
web_navigation_msgs__msg__RvizGoalFeedback__Sequence__are_equal(const web_navigation_msgs__msg__RvizGoalFeedback__Sequence * lhs, const web_navigation_msgs__msg__RvizGoalFeedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!web_navigation_msgs__msg__RvizGoalFeedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
web_navigation_msgs__msg__RvizGoalFeedback__Sequence__copy(
  const web_navigation_msgs__msg__RvizGoalFeedback__Sequence * input,
  web_navigation_msgs__msg__RvizGoalFeedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(web_navigation_msgs__msg__RvizGoalFeedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    web_navigation_msgs__msg__RvizGoalFeedback * data =
      (web_navigation_msgs__msg__RvizGoalFeedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!web_navigation_msgs__msg__RvizGoalFeedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          web_navigation_msgs__msg__RvizGoalFeedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!web_navigation_msgs__msg__RvizGoalFeedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
