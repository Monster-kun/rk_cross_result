// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from web_navigation_msgs:srv/ControlLease.idl
// generated code does not contain a copyright notice
#include "web_navigation_msgs/srv/detail/control_lease__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `session_id`
// Member `device_label`
// Member `manager_boot_id`
// Member `lease_token`
#include "rosidl_runtime_c/string_functions.h"

bool
web_navigation_msgs__srv__ControlLease_Request__init(web_navigation_msgs__srv__ControlLease_Request * msg)
{
  if (!msg) {
    return false;
  }
  // operation
  // session_id
  if (!rosidl_runtime_c__String__init(&msg->session_id)) {
    web_navigation_msgs__srv__ControlLease_Request__fini(msg);
    return false;
  }
  // device_label
  if (!rosidl_runtime_c__String__init(&msg->device_label)) {
    web_navigation_msgs__srv__ControlLease_Request__fini(msg);
    return false;
  }
  // manager_boot_id
  if (!rosidl_runtime_c__String__init(&msg->manager_boot_id)) {
    web_navigation_msgs__srv__ControlLease_Request__fini(msg);
    return false;
  }
  // lease_token
  if (!rosidl_runtime_c__String__init(&msg->lease_token)) {
    web_navigation_msgs__srv__ControlLease_Request__fini(msg);
    return false;
  }
  // control_epoch
  return true;
}

void
web_navigation_msgs__srv__ControlLease_Request__fini(web_navigation_msgs__srv__ControlLease_Request * msg)
{
  if (!msg) {
    return;
  }
  // operation
  // session_id
  rosidl_runtime_c__String__fini(&msg->session_id);
  // device_label
  rosidl_runtime_c__String__fini(&msg->device_label);
  // manager_boot_id
  rosidl_runtime_c__String__fini(&msg->manager_boot_id);
  // lease_token
  rosidl_runtime_c__String__fini(&msg->lease_token);
  // control_epoch
}

bool
web_navigation_msgs__srv__ControlLease_Request__are_equal(const web_navigation_msgs__srv__ControlLease_Request * lhs, const web_navigation_msgs__srv__ControlLease_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // operation
  if (lhs->operation != rhs->operation) {
    return false;
  }
  // session_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->session_id), &(rhs->session_id)))
  {
    return false;
  }
  // device_label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->device_label), &(rhs->device_label)))
  {
    return false;
  }
  // manager_boot_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->manager_boot_id), &(rhs->manager_boot_id)))
  {
    return false;
  }
  // lease_token
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->lease_token), &(rhs->lease_token)))
  {
    return false;
  }
  // control_epoch
  if (lhs->control_epoch != rhs->control_epoch) {
    return false;
  }
  return true;
}

bool
web_navigation_msgs__srv__ControlLease_Request__copy(
  const web_navigation_msgs__srv__ControlLease_Request * input,
  web_navigation_msgs__srv__ControlLease_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // operation
  output->operation = input->operation;
  // session_id
  if (!rosidl_runtime_c__String__copy(
      &(input->session_id), &(output->session_id)))
  {
    return false;
  }
  // device_label
  if (!rosidl_runtime_c__String__copy(
      &(input->device_label), &(output->device_label)))
  {
    return false;
  }
  // manager_boot_id
  if (!rosidl_runtime_c__String__copy(
      &(input->manager_boot_id), &(output->manager_boot_id)))
  {
    return false;
  }
  // lease_token
  if (!rosidl_runtime_c__String__copy(
      &(input->lease_token), &(output->lease_token)))
  {
    return false;
  }
  // control_epoch
  output->control_epoch = input->control_epoch;
  return true;
}

web_navigation_msgs__srv__ControlLease_Request *
web_navigation_msgs__srv__ControlLease_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__ControlLease_Request * msg = (web_navigation_msgs__srv__ControlLease_Request *)allocator.allocate(sizeof(web_navigation_msgs__srv__ControlLease_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(web_navigation_msgs__srv__ControlLease_Request));
  bool success = web_navigation_msgs__srv__ControlLease_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
web_navigation_msgs__srv__ControlLease_Request__destroy(web_navigation_msgs__srv__ControlLease_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    web_navigation_msgs__srv__ControlLease_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
web_navigation_msgs__srv__ControlLease_Request__Sequence__init(web_navigation_msgs__srv__ControlLease_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__ControlLease_Request * data = NULL;

  if (size) {
    data = (web_navigation_msgs__srv__ControlLease_Request *)allocator.zero_allocate(size, sizeof(web_navigation_msgs__srv__ControlLease_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = web_navigation_msgs__srv__ControlLease_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        web_navigation_msgs__srv__ControlLease_Request__fini(&data[i - 1]);
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
web_navigation_msgs__srv__ControlLease_Request__Sequence__fini(web_navigation_msgs__srv__ControlLease_Request__Sequence * array)
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
      web_navigation_msgs__srv__ControlLease_Request__fini(&array->data[i]);
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

web_navigation_msgs__srv__ControlLease_Request__Sequence *
web_navigation_msgs__srv__ControlLease_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__ControlLease_Request__Sequence * array = (web_navigation_msgs__srv__ControlLease_Request__Sequence *)allocator.allocate(sizeof(web_navigation_msgs__srv__ControlLease_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = web_navigation_msgs__srv__ControlLease_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
web_navigation_msgs__srv__ControlLease_Request__Sequence__destroy(web_navigation_msgs__srv__ControlLease_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    web_navigation_msgs__srv__ControlLease_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
web_navigation_msgs__srv__ControlLease_Request__Sequence__are_equal(const web_navigation_msgs__srv__ControlLease_Request__Sequence * lhs, const web_navigation_msgs__srv__ControlLease_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!web_navigation_msgs__srv__ControlLease_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
web_navigation_msgs__srv__ControlLease_Request__Sequence__copy(
  const web_navigation_msgs__srv__ControlLease_Request__Sequence * input,
  web_navigation_msgs__srv__ControlLease_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(web_navigation_msgs__srv__ControlLease_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    web_navigation_msgs__srv__ControlLease_Request * data =
      (web_navigation_msgs__srv__ControlLease_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!web_navigation_msgs__srv__ControlLease_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          web_navigation_msgs__srv__ControlLease_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!web_navigation_msgs__srv__ControlLease_Request__copy(
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
// Member `manager_boot_id`
// Member `lease_token`
// Member `owner_label`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
web_navigation_msgs__srv__ControlLease_Response__init(web_navigation_msgs__srv__ControlLease_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // code
  if (!rosidl_runtime_c__String__init(&msg->code)) {
    web_navigation_msgs__srv__ControlLease_Response__fini(msg);
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    web_navigation_msgs__srv__ControlLease_Response__fini(msg);
    return false;
  }
  // manager_boot_id
  if (!rosidl_runtime_c__String__init(&msg->manager_boot_id)) {
    web_navigation_msgs__srv__ControlLease_Response__fini(msg);
    return false;
  }
  // lease_token
  if (!rosidl_runtime_c__String__init(&msg->lease_token)) {
    web_navigation_msgs__srv__ControlLease_Response__fini(msg);
    return false;
  }
  // control_epoch
  // lease_ttl_ms
  // control_held
  // owner_label
  if (!rosidl_runtime_c__String__init(&msg->owner_label)) {
    web_navigation_msgs__srv__ControlLease_Response__fini(msg);
    return false;
  }
  return true;
}

void
web_navigation_msgs__srv__ControlLease_Response__fini(web_navigation_msgs__srv__ControlLease_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // code
  rosidl_runtime_c__String__fini(&msg->code);
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // manager_boot_id
  rosidl_runtime_c__String__fini(&msg->manager_boot_id);
  // lease_token
  rosidl_runtime_c__String__fini(&msg->lease_token);
  // control_epoch
  // lease_ttl_ms
  // control_held
  // owner_label
  rosidl_runtime_c__String__fini(&msg->owner_label);
}

bool
web_navigation_msgs__srv__ControlLease_Response__are_equal(const web_navigation_msgs__srv__ControlLease_Response * lhs, const web_navigation_msgs__srv__ControlLease_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
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
  // manager_boot_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->manager_boot_id), &(rhs->manager_boot_id)))
  {
    return false;
  }
  // lease_token
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->lease_token), &(rhs->lease_token)))
  {
    return false;
  }
  // control_epoch
  if (lhs->control_epoch != rhs->control_epoch) {
    return false;
  }
  // lease_ttl_ms
  if (lhs->lease_ttl_ms != rhs->lease_ttl_ms) {
    return false;
  }
  // control_held
  if (lhs->control_held != rhs->control_held) {
    return false;
  }
  // owner_label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->owner_label), &(rhs->owner_label)))
  {
    return false;
  }
  return true;
}

bool
web_navigation_msgs__srv__ControlLease_Response__copy(
  const web_navigation_msgs__srv__ControlLease_Response * input,
  web_navigation_msgs__srv__ControlLease_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
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
  // manager_boot_id
  if (!rosidl_runtime_c__String__copy(
      &(input->manager_boot_id), &(output->manager_boot_id)))
  {
    return false;
  }
  // lease_token
  if (!rosidl_runtime_c__String__copy(
      &(input->lease_token), &(output->lease_token)))
  {
    return false;
  }
  // control_epoch
  output->control_epoch = input->control_epoch;
  // lease_ttl_ms
  output->lease_ttl_ms = input->lease_ttl_ms;
  // control_held
  output->control_held = input->control_held;
  // owner_label
  if (!rosidl_runtime_c__String__copy(
      &(input->owner_label), &(output->owner_label)))
  {
    return false;
  }
  return true;
}

web_navigation_msgs__srv__ControlLease_Response *
web_navigation_msgs__srv__ControlLease_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__ControlLease_Response * msg = (web_navigation_msgs__srv__ControlLease_Response *)allocator.allocate(sizeof(web_navigation_msgs__srv__ControlLease_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(web_navigation_msgs__srv__ControlLease_Response));
  bool success = web_navigation_msgs__srv__ControlLease_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
web_navigation_msgs__srv__ControlLease_Response__destroy(web_navigation_msgs__srv__ControlLease_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    web_navigation_msgs__srv__ControlLease_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
web_navigation_msgs__srv__ControlLease_Response__Sequence__init(web_navigation_msgs__srv__ControlLease_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__ControlLease_Response * data = NULL;

  if (size) {
    data = (web_navigation_msgs__srv__ControlLease_Response *)allocator.zero_allocate(size, sizeof(web_navigation_msgs__srv__ControlLease_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = web_navigation_msgs__srv__ControlLease_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        web_navigation_msgs__srv__ControlLease_Response__fini(&data[i - 1]);
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
web_navigation_msgs__srv__ControlLease_Response__Sequence__fini(web_navigation_msgs__srv__ControlLease_Response__Sequence * array)
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
      web_navigation_msgs__srv__ControlLease_Response__fini(&array->data[i]);
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

web_navigation_msgs__srv__ControlLease_Response__Sequence *
web_navigation_msgs__srv__ControlLease_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__ControlLease_Response__Sequence * array = (web_navigation_msgs__srv__ControlLease_Response__Sequence *)allocator.allocate(sizeof(web_navigation_msgs__srv__ControlLease_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = web_navigation_msgs__srv__ControlLease_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
web_navigation_msgs__srv__ControlLease_Response__Sequence__destroy(web_navigation_msgs__srv__ControlLease_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    web_navigation_msgs__srv__ControlLease_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
web_navigation_msgs__srv__ControlLease_Response__Sequence__are_equal(const web_navigation_msgs__srv__ControlLease_Response__Sequence * lhs, const web_navigation_msgs__srv__ControlLease_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!web_navigation_msgs__srv__ControlLease_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
web_navigation_msgs__srv__ControlLease_Response__Sequence__copy(
  const web_navigation_msgs__srv__ControlLease_Response__Sequence * input,
  web_navigation_msgs__srv__ControlLease_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(web_navigation_msgs__srv__ControlLease_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    web_navigation_msgs__srv__ControlLease_Response * data =
      (web_navigation_msgs__srv__ControlLease_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!web_navigation_msgs__srv__ControlLease_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          web_navigation_msgs__srv__ControlLease_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!web_navigation_msgs__srv__ControlLease_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
