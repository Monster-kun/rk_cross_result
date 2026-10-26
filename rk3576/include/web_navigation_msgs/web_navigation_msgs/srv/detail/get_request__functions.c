// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from web_navigation_msgs:srv/GetRequest.idl
// generated code does not contain a copyright notice
#include "web_navigation_msgs/srv/detail/get_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `request_id`
#include "rosidl_runtime_c/string_functions.h"

bool
web_navigation_msgs__srv__GetRequest_Request__init(web_navigation_msgs__srv__GetRequest_Request * msg)
{
  if (!msg) {
    return false;
  }
  // request_id
  if (!rosidl_runtime_c__String__init(&msg->request_id)) {
    web_navigation_msgs__srv__GetRequest_Request__fini(msg);
    return false;
  }
  return true;
}

void
web_navigation_msgs__srv__GetRequest_Request__fini(web_navigation_msgs__srv__GetRequest_Request * msg)
{
  if (!msg) {
    return;
  }
  // request_id
  rosidl_runtime_c__String__fini(&msg->request_id);
}

bool
web_navigation_msgs__srv__GetRequest_Request__are_equal(const web_navigation_msgs__srv__GetRequest_Request * lhs, const web_navigation_msgs__srv__GetRequest_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // request_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->request_id), &(rhs->request_id)))
  {
    return false;
  }
  return true;
}

bool
web_navigation_msgs__srv__GetRequest_Request__copy(
  const web_navigation_msgs__srv__GetRequest_Request * input,
  web_navigation_msgs__srv__GetRequest_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // request_id
  if (!rosidl_runtime_c__String__copy(
      &(input->request_id), &(output->request_id)))
  {
    return false;
  }
  return true;
}

web_navigation_msgs__srv__GetRequest_Request *
web_navigation_msgs__srv__GetRequest_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__GetRequest_Request * msg = (web_navigation_msgs__srv__GetRequest_Request *)allocator.allocate(sizeof(web_navigation_msgs__srv__GetRequest_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(web_navigation_msgs__srv__GetRequest_Request));
  bool success = web_navigation_msgs__srv__GetRequest_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
web_navigation_msgs__srv__GetRequest_Request__destroy(web_navigation_msgs__srv__GetRequest_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    web_navigation_msgs__srv__GetRequest_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
web_navigation_msgs__srv__GetRequest_Request__Sequence__init(web_navigation_msgs__srv__GetRequest_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__GetRequest_Request * data = NULL;

  if (size) {
    data = (web_navigation_msgs__srv__GetRequest_Request *)allocator.zero_allocate(size, sizeof(web_navigation_msgs__srv__GetRequest_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = web_navigation_msgs__srv__GetRequest_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        web_navigation_msgs__srv__GetRequest_Request__fini(&data[i - 1]);
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
web_navigation_msgs__srv__GetRequest_Request__Sequence__fini(web_navigation_msgs__srv__GetRequest_Request__Sequence * array)
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
      web_navigation_msgs__srv__GetRequest_Request__fini(&array->data[i]);
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

web_navigation_msgs__srv__GetRequest_Request__Sequence *
web_navigation_msgs__srv__GetRequest_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__GetRequest_Request__Sequence * array = (web_navigation_msgs__srv__GetRequest_Request__Sequence *)allocator.allocate(sizeof(web_navigation_msgs__srv__GetRequest_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = web_navigation_msgs__srv__GetRequest_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
web_navigation_msgs__srv__GetRequest_Request__Sequence__destroy(web_navigation_msgs__srv__GetRequest_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    web_navigation_msgs__srv__GetRequest_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
web_navigation_msgs__srv__GetRequest_Request__Sequence__are_equal(const web_navigation_msgs__srv__GetRequest_Request__Sequence * lhs, const web_navigation_msgs__srv__GetRequest_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!web_navigation_msgs__srv__GetRequest_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
web_navigation_msgs__srv__GetRequest_Request__Sequence__copy(
  const web_navigation_msgs__srv__GetRequest_Request__Sequence * input,
  web_navigation_msgs__srv__GetRequest_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(web_navigation_msgs__srv__GetRequest_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    web_navigation_msgs__srv__GetRequest_Request * data =
      (web_navigation_msgs__srv__GetRequest_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!web_navigation_msgs__srv__GetRequest_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          web_navigation_msgs__srv__GetRequest_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!web_navigation_msgs__srv__GetRequest_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `code`
// Member `message`
// Member `task_id`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
web_navigation_msgs__srv__GetRequest_Response__init(web_navigation_msgs__srv__GetRequest_Response * msg)
{
  if (!msg) {
    return false;
  }
  // found
  // accepted
  // code
  if (!rosidl_runtime_c__String__init(&msg->code)) {
    web_navigation_msgs__srv__GetRequest_Response__fini(msg);
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    web_navigation_msgs__srv__GetRequest_Response__fini(msg);
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    web_navigation_msgs__srv__GetRequest_Response__fini(msg);
    return false;
  }
  // task_status
  // state_revision
  return true;
}

void
web_navigation_msgs__srv__GetRequest_Response__fini(web_navigation_msgs__srv__GetRequest_Response * msg)
{
  if (!msg) {
    return;
  }
  // found
  // accepted
  // code
  rosidl_runtime_c__String__fini(&msg->code);
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
  // task_status
  // state_revision
}

bool
web_navigation_msgs__srv__GetRequest_Response__are_equal(const web_navigation_msgs__srv__GetRequest_Response * lhs, const web_navigation_msgs__srv__GetRequest_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // found
  if (lhs->found != rhs->found) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
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
  // task_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_id), &(rhs->task_id)))
  {
    return false;
  }
  // task_status
  if (lhs->task_status != rhs->task_status) {
    return false;
  }
  // state_revision
  if (lhs->state_revision != rhs->state_revision) {
    return false;
  }
  return true;
}

bool
web_navigation_msgs__srv__GetRequest_Response__copy(
  const web_navigation_msgs__srv__GetRequest_Response * input,
  web_navigation_msgs__srv__GetRequest_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // found
  output->found = input->found;
  // accepted
  output->accepted = input->accepted;
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
  // task_id
  if (!rosidl_runtime_c__String__copy(
      &(input->task_id), &(output->task_id)))
  {
    return false;
  }
  // task_status
  output->task_status = input->task_status;
  // state_revision
  output->state_revision = input->state_revision;
  return true;
}

web_navigation_msgs__srv__GetRequest_Response *
web_navigation_msgs__srv__GetRequest_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__GetRequest_Response * msg = (web_navigation_msgs__srv__GetRequest_Response *)allocator.allocate(sizeof(web_navigation_msgs__srv__GetRequest_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(web_navigation_msgs__srv__GetRequest_Response));
  bool success = web_navigation_msgs__srv__GetRequest_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
web_navigation_msgs__srv__GetRequest_Response__destroy(web_navigation_msgs__srv__GetRequest_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    web_navigation_msgs__srv__GetRequest_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
web_navigation_msgs__srv__GetRequest_Response__Sequence__init(web_navigation_msgs__srv__GetRequest_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__GetRequest_Response * data = NULL;

  if (size) {
    data = (web_navigation_msgs__srv__GetRequest_Response *)allocator.zero_allocate(size, sizeof(web_navigation_msgs__srv__GetRequest_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = web_navigation_msgs__srv__GetRequest_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        web_navigation_msgs__srv__GetRequest_Response__fini(&data[i - 1]);
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
web_navigation_msgs__srv__GetRequest_Response__Sequence__fini(web_navigation_msgs__srv__GetRequest_Response__Sequence * array)
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
      web_navigation_msgs__srv__GetRequest_Response__fini(&array->data[i]);
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

web_navigation_msgs__srv__GetRequest_Response__Sequence *
web_navigation_msgs__srv__GetRequest_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__GetRequest_Response__Sequence * array = (web_navigation_msgs__srv__GetRequest_Response__Sequence *)allocator.allocate(sizeof(web_navigation_msgs__srv__GetRequest_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = web_navigation_msgs__srv__GetRequest_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
web_navigation_msgs__srv__GetRequest_Response__Sequence__destroy(web_navigation_msgs__srv__GetRequest_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    web_navigation_msgs__srv__GetRequest_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
web_navigation_msgs__srv__GetRequest_Response__Sequence__are_equal(const web_navigation_msgs__srv__GetRequest_Response__Sequence * lhs, const web_navigation_msgs__srv__GetRequest_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!web_navigation_msgs__srv__GetRequest_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
web_navigation_msgs__srv__GetRequest_Response__Sequence__copy(
  const web_navigation_msgs__srv__GetRequest_Response__Sequence * input,
  web_navigation_msgs__srv__GetRequest_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(web_navigation_msgs__srv__GetRequest_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    web_navigation_msgs__srv__GetRequest_Response * data =
      (web_navigation_msgs__srv__GetRequest_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!web_navigation_msgs__srv__GetRequest_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          web_navigation_msgs__srv__GetRequest_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!web_navigation_msgs__srv__GetRequest_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
