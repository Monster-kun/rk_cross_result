// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from web_navigation_msgs:srv/GetTask.idl
// generated code does not contain a copyright notice
#include "web_navigation_msgs/srv/detail/get_task__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `task_id`
#include "rosidl_runtime_c/string_functions.h"

bool
web_navigation_msgs__srv__GetTask_Request__init(web_navigation_msgs__srv__GetTask_Request * msg)
{
  if (!msg) {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    web_navigation_msgs__srv__GetTask_Request__fini(msg);
    return false;
  }
  return true;
}

void
web_navigation_msgs__srv__GetTask_Request__fini(web_navigation_msgs__srv__GetTask_Request * msg)
{
  if (!msg) {
    return;
  }
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
}

bool
web_navigation_msgs__srv__GetTask_Request__are_equal(const web_navigation_msgs__srv__GetTask_Request * lhs, const web_navigation_msgs__srv__GetTask_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_id), &(rhs->task_id)))
  {
    return false;
  }
  return true;
}

bool
web_navigation_msgs__srv__GetTask_Request__copy(
  const web_navigation_msgs__srv__GetTask_Request * input,
  web_navigation_msgs__srv__GetTask_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__copy(
      &(input->task_id), &(output->task_id)))
  {
    return false;
  }
  return true;
}

web_navigation_msgs__srv__GetTask_Request *
web_navigation_msgs__srv__GetTask_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__GetTask_Request * msg = (web_navigation_msgs__srv__GetTask_Request *)allocator.allocate(sizeof(web_navigation_msgs__srv__GetTask_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(web_navigation_msgs__srv__GetTask_Request));
  bool success = web_navigation_msgs__srv__GetTask_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
web_navigation_msgs__srv__GetTask_Request__destroy(web_navigation_msgs__srv__GetTask_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    web_navigation_msgs__srv__GetTask_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
web_navigation_msgs__srv__GetTask_Request__Sequence__init(web_navigation_msgs__srv__GetTask_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__GetTask_Request * data = NULL;

  if (size) {
    data = (web_navigation_msgs__srv__GetTask_Request *)allocator.zero_allocate(size, sizeof(web_navigation_msgs__srv__GetTask_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = web_navigation_msgs__srv__GetTask_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        web_navigation_msgs__srv__GetTask_Request__fini(&data[i - 1]);
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
web_navigation_msgs__srv__GetTask_Request__Sequence__fini(web_navigation_msgs__srv__GetTask_Request__Sequence * array)
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
      web_navigation_msgs__srv__GetTask_Request__fini(&array->data[i]);
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

web_navigation_msgs__srv__GetTask_Request__Sequence *
web_navigation_msgs__srv__GetTask_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__GetTask_Request__Sequence * array = (web_navigation_msgs__srv__GetTask_Request__Sequence *)allocator.allocate(sizeof(web_navigation_msgs__srv__GetTask_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = web_navigation_msgs__srv__GetTask_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
web_navigation_msgs__srv__GetTask_Request__Sequence__destroy(web_navigation_msgs__srv__GetTask_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    web_navigation_msgs__srv__GetTask_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
web_navigation_msgs__srv__GetTask_Request__Sequence__are_equal(const web_navigation_msgs__srv__GetTask_Request__Sequence * lhs, const web_navigation_msgs__srv__GetTask_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!web_navigation_msgs__srv__GetTask_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
web_navigation_msgs__srv__GetTask_Request__Sequence__copy(
  const web_navigation_msgs__srv__GetTask_Request__Sequence * input,
  web_navigation_msgs__srv__GetTask_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(web_navigation_msgs__srv__GetTask_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    web_navigation_msgs__srv__GetTask_Request * data =
      (web_navigation_msgs__srv__GetTask_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!web_navigation_msgs__srv__GetTask_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          web_navigation_msgs__srv__GetTask_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!web_navigation_msgs__srv__GetTask_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `task_id`
// Member `request_id`
// Member `ros_goal_uuid`
// Member `map_version`
// Member `frame_id`
// Member `device_label`
// Member `error_code`
// Member `error_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `effective_endpoint`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
web_navigation_msgs__srv__GetTask_Response__init(web_navigation_msgs__srv__GetTask_Response * msg)
{
  if (!msg) {
    return false;
  }
  // found
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    web_navigation_msgs__srv__GetTask_Response__fini(msg);
    return false;
  }
  // request_id
  if (!rosidl_runtime_c__String__init(&msg->request_id)) {
    web_navigation_msgs__srv__GetTask_Response__fini(msg);
    return false;
  }
  // ros_goal_uuid
  if (!rosidl_runtime_c__String__init(&msg->ros_goal_uuid)) {
    web_navigation_msgs__srv__GetTask_Response__fini(msg);
    return false;
  }
  // map_version
  if (!rosidl_runtime_c__String__init(&msg->map_version)) {
    web_navigation_msgs__srv__GetTask_Response__fini(msg);
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__init(&msg->frame_id)) {
    web_navigation_msgs__srv__GetTask_Response__fini(msg);
    return false;
  }
  // status
  // requested_x
  // requested_y
  // effective_endpoint
  if (!geometry_msgs__msg__Pose__init(&msg->effective_endpoint)) {
    web_navigation_msgs__srv__GetTask_Response__fini(msg);
    return false;
  }
  // device_label
  if (!rosidl_runtime_c__String__init(&msg->device_label)) {
    web_navigation_msgs__srv__GetTask_Response__fini(msg);
    return false;
  }
  // error_code
  if (!rosidl_runtime_c__String__init(&msg->error_code)) {
    web_navigation_msgs__srv__GetTask_Response__fini(msg);
    return false;
  }
  // error_message
  if (!rosidl_runtime_c__String__init(&msg->error_message)) {
    web_navigation_msgs__srv__GetTask_Response__fini(msg);
    return false;
  }
  // updated_at
  return true;
}

void
web_navigation_msgs__srv__GetTask_Response__fini(web_navigation_msgs__srv__GetTask_Response * msg)
{
  if (!msg) {
    return;
  }
  // found
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
  // request_id
  rosidl_runtime_c__String__fini(&msg->request_id);
  // ros_goal_uuid
  rosidl_runtime_c__String__fini(&msg->ros_goal_uuid);
  // map_version
  rosidl_runtime_c__String__fini(&msg->map_version);
  // frame_id
  rosidl_runtime_c__String__fini(&msg->frame_id);
  // status
  // requested_x
  // requested_y
  // effective_endpoint
  geometry_msgs__msg__Pose__fini(&msg->effective_endpoint);
  // device_label
  rosidl_runtime_c__String__fini(&msg->device_label);
  // error_code
  rosidl_runtime_c__String__fini(&msg->error_code);
  // error_message
  rosidl_runtime_c__String__fini(&msg->error_message);
  // updated_at
}

bool
web_navigation_msgs__srv__GetTask_Response__are_equal(const web_navigation_msgs__srv__GetTask_Response * lhs, const web_navigation_msgs__srv__GetTask_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // found
  if (lhs->found != rhs->found) {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_id), &(rhs->task_id)))
  {
    return false;
  }
  // request_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->request_id), &(rhs->request_id)))
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
  // frame_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_id), &(rhs->frame_id)))
  {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // requested_x
  if (lhs->requested_x != rhs->requested_x) {
    return false;
  }
  // requested_y
  if (lhs->requested_y != rhs->requested_y) {
    return false;
  }
  // effective_endpoint
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->effective_endpoint), &(rhs->effective_endpoint)))
  {
    return false;
  }
  // device_label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->device_label), &(rhs->device_label)))
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
  // updated_at
  if (lhs->updated_at != rhs->updated_at) {
    return false;
  }
  return true;
}

bool
web_navigation_msgs__srv__GetTask_Response__copy(
  const web_navigation_msgs__srv__GetTask_Response * input,
  web_navigation_msgs__srv__GetTask_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // found
  output->found = input->found;
  // task_id
  if (!rosidl_runtime_c__String__copy(
      &(input->task_id), &(output->task_id)))
  {
    return false;
  }
  // request_id
  if (!rosidl_runtime_c__String__copy(
      &(input->request_id), &(output->request_id)))
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
  // frame_id
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_id), &(output->frame_id)))
  {
    return false;
  }
  // status
  output->status = input->status;
  // requested_x
  output->requested_x = input->requested_x;
  // requested_y
  output->requested_y = input->requested_y;
  // effective_endpoint
  if (!geometry_msgs__msg__Pose__copy(
      &(input->effective_endpoint), &(output->effective_endpoint)))
  {
    return false;
  }
  // device_label
  if (!rosidl_runtime_c__String__copy(
      &(input->device_label), &(output->device_label)))
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
  // updated_at
  output->updated_at = input->updated_at;
  return true;
}

web_navigation_msgs__srv__GetTask_Response *
web_navigation_msgs__srv__GetTask_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__GetTask_Response * msg = (web_navigation_msgs__srv__GetTask_Response *)allocator.allocate(sizeof(web_navigation_msgs__srv__GetTask_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(web_navigation_msgs__srv__GetTask_Response));
  bool success = web_navigation_msgs__srv__GetTask_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
web_navigation_msgs__srv__GetTask_Response__destroy(web_navigation_msgs__srv__GetTask_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    web_navigation_msgs__srv__GetTask_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
web_navigation_msgs__srv__GetTask_Response__Sequence__init(web_navigation_msgs__srv__GetTask_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__GetTask_Response * data = NULL;

  if (size) {
    data = (web_navigation_msgs__srv__GetTask_Response *)allocator.zero_allocate(size, sizeof(web_navigation_msgs__srv__GetTask_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = web_navigation_msgs__srv__GetTask_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        web_navigation_msgs__srv__GetTask_Response__fini(&data[i - 1]);
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
web_navigation_msgs__srv__GetTask_Response__Sequence__fini(web_navigation_msgs__srv__GetTask_Response__Sequence * array)
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
      web_navigation_msgs__srv__GetTask_Response__fini(&array->data[i]);
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

web_navigation_msgs__srv__GetTask_Response__Sequence *
web_navigation_msgs__srv__GetTask_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__GetTask_Response__Sequence * array = (web_navigation_msgs__srv__GetTask_Response__Sequence *)allocator.allocate(sizeof(web_navigation_msgs__srv__GetTask_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = web_navigation_msgs__srv__GetTask_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
web_navigation_msgs__srv__GetTask_Response__Sequence__destroy(web_navigation_msgs__srv__GetTask_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    web_navigation_msgs__srv__GetTask_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
web_navigation_msgs__srv__GetTask_Response__Sequence__are_equal(const web_navigation_msgs__srv__GetTask_Response__Sequence * lhs, const web_navigation_msgs__srv__GetTask_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!web_navigation_msgs__srv__GetTask_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
web_navigation_msgs__srv__GetTask_Response__Sequence__copy(
  const web_navigation_msgs__srv__GetTask_Response__Sequence * input,
  web_navigation_msgs__srv__GetTask_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(web_navigation_msgs__srv__GetTask_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    web_navigation_msgs__srv__GetTask_Response * data =
      (web_navigation_msgs__srv__GetTask_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!web_navigation_msgs__srv__GetTask_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          web_navigation_msgs__srv__GetTask_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!web_navigation_msgs__srv__GetTask_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
