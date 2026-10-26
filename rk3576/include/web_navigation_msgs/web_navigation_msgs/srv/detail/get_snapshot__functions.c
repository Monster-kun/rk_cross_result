// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from web_navigation_msgs:srv/GetSnapshot.idl
// generated code does not contain a copyright notice
#include "web_navigation_msgs/srv/detail/get_snapshot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
web_navigation_msgs__srv__GetSnapshot_Request__init(web_navigation_msgs__srv__GetSnapshot_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
web_navigation_msgs__srv__GetSnapshot_Request__fini(web_navigation_msgs__srv__GetSnapshot_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
web_navigation_msgs__srv__GetSnapshot_Request__are_equal(const web_navigation_msgs__srv__GetSnapshot_Request * lhs, const web_navigation_msgs__srv__GetSnapshot_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
web_navigation_msgs__srv__GetSnapshot_Request__copy(
  const web_navigation_msgs__srv__GetSnapshot_Request * input,
  web_navigation_msgs__srv__GetSnapshot_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

web_navigation_msgs__srv__GetSnapshot_Request *
web_navigation_msgs__srv__GetSnapshot_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__GetSnapshot_Request * msg = (web_navigation_msgs__srv__GetSnapshot_Request *)allocator.allocate(sizeof(web_navigation_msgs__srv__GetSnapshot_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(web_navigation_msgs__srv__GetSnapshot_Request));
  bool success = web_navigation_msgs__srv__GetSnapshot_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
web_navigation_msgs__srv__GetSnapshot_Request__destroy(web_navigation_msgs__srv__GetSnapshot_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    web_navigation_msgs__srv__GetSnapshot_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
web_navigation_msgs__srv__GetSnapshot_Request__Sequence__init(web_navigation_msgs__srv__GetSnapshot_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__GetSnapshot_Request * data = NULL;

  if (size) {
    data = (web_navigation_msgs__srv__GetSnapshot_Request *)allocator.zero_allocate(size, sizeof(web_navigation_msgs__srv__GetSnapshot_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = web_navigation_msgs__srv__GetSnapshot_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        web_navigation_msgs__srv__GetSnapshot_Request__fini(&data[i - 1]);
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
web_navigation_msgs__srv__GetSnapshot_Request__Sequence__fini(web_navigation_msgs__srv__GetSnapshot_Request__Sequence * array)
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
      web_navigation_msgs__srv__GetSnapshot_Request__fini(&array->data[i]);
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

web_navigation_msgs__srv__GetSnapshot_Request__Sequence *
web_navigation_msgs__srv__GetSnapshot_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__GetSnapshot_Request__Sequence * array = (web_navigation_msgs__srv__GetSnapshot_Request__Sequence *)allocator.allocate(sizeof(web_navigation_msgs__srv__GetSnapshot_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = web_navigation_msgs__srv__GetSnapshot_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
web_navigation_msgs__srv__GetSnapshot_Request__Sequence__destroy(web_navigation_msgs__srv__GetSnapshot_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    web_navigation_msgs__srv__GetSnapshot_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
web_navigation_msgs__srv__GetSnapshot_Request__Sequence__are_equal(const web_navigation_msgs__srv__GetSnapshot_Request__Sequence * lhs, const web_navigation_msgs__srv__GetSnapshot_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!web_navigation_msgs__srv__GetSnapshot_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
web_navigation_msgs__srv__GetSnapshot_Request__Sequence__copy(
  const web_navigation_msgs__srv__GetSnapshot_Request__Sequence * input,
  web_navigation_msgs__srv__GetSnapshot_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(web_navigation_msgs__srv__GetSnapshot_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    web_navigation_msgs__srv__GetSnapshot_Request * data =
      (web_navigation_msgs__srv__GetSnapshot_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!web_navigation_msgs__srv__GetSnapshot_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          web_navigation_msgs__srv__GetSnapshot_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!web_navigation_msgs__srv__GetSnapshot_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `state`
#include "web_navigation_msgs/msg/detail/navigation_state__functions.h"

bool
web_navigation_msgs__srv__GetSnapshot_Response__init(web_navigation_msgs__srv__GetSnapshot_Response * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!web_navigation_msgs__msg__NavigationState__init(&msg->state)) {
    web_navigation_msgs__srv__GetSnapshot_Response__fini(msg);
    return false;
  }
  return true;
}

void
web_navigation_msgs__srv__GetSnapshot_Response__fini(web_navigation_msgs__srv__GetSnapshot_Response * msg)
{
  if (!msg) {
    return;
  }
  // state
  web_navigation_msgs__msg__NavigationState__fini(&msg->state);
}

bool
web_navigation_msgs__srv__GetSnapshot_Response__are_equal(const web_navigation_msgs__srv__GetSnapshot_Response * lhs, const web_navigation_msgs__srv__GetSnapshot_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (!web_navigation_msgs__msg__NavigationState__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  return true;
}

bool
web_navigation_msgs__srv__GetSnapshot_Response__copy(
  const web_navigation_msgs__srv__GetSnapshot_Response * input,
  web_navigation_msgs__srv__GetSnapshot_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  if (!web_navigation_msgs__msg__NavigationState__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  return true;
}

web_navigation_msgs__srv__GetSnapshot_Response *
web_navigation_msgs__srv__GetSnapshot_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__GetSnapshot_Response * msg = (web_navigation_msgs__srv__GetSnapshot_Response *)allocator.allocate(sizeof(web_navigation_msgs__srv__GetSnapshot_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(web_navigation_msgs__srv__GetSnapshot_Response));
  bool success = web_navigation_msgs__srv__GetSnapshot_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
web_navigation_msgs__srv__GetSnapshot_Response__destroy(web_navigation_msgs__srv__GetSnapshot_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    web_navigation_msgs__srv__GetSnapshot_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
web_navigation_msgs__srv__GetSnapshot_Response__Sequence__init(web_navigation_msgs__srv__GetSnapshot_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__GetSnapshot_Response * data = NULL;

  if (size) {
    data = (web_navigation_msgs__srv__GetSnapshot_Response *)allocator.zero_allocate(size, sizeof(web_navigation_msgs__srv__GetSnapshot_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = web_navigation_msgs__srv__GetSnapshot_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        web_navigation_msgs__srv__GetSnapshot_Response__fini(&data[i - 1]);
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
web_navigation_msgs__srv__GetSnapshot_Response__Sequence__fini(web_navigation_msgs__srv__GetSnapshot_Response__Sequence * array)
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
      web_navigation_msgs__srv__GetSnapshot_Response__fini(&array->data[i]);
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

web_navigation_msgs__srv__GetSnapshot_Response__Sequence *
web_navigation_msgs__srv__GetSnapshot_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__GetSnapshot_Response__Sequence * array = (web_navigation_msgs__srv__GetSnapshot_Response__Sequence *)allocator.allocate(sizeof(web_navigation_msgs__srv__GetSnapshot_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = web_navigation_msgs__srv__GetSnapshot_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
web_navigation_msgs__srv__GetSnapshot_Response__Sequence__destroy(web_navigation_msgs__srv__GetSnapshot_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    web_navigation_msgs__srv__GetSnapshot_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
web_navigation_msgs__srv__GetSnapshot_Response__Sequence__are_equal(const web_navigation_msgs__srv__GetSnapshot_Response__Sequence * lhs, const web_navigation_msgs__srv__GetSnapshot_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!web_navigation_msgs__srv__GetSnapshot_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
web_navigation_msgs__srv__GetSnapshot_Response__Sequence__copy(
  const web_navigation_msgs__srv__GetSnapshot_Response__Sequence * input,
  web_navigation_msgs__srv__GetSnapshot_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(web_navigation_msgs__srv__GetSnapshot_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    web_navigation_msgs__srv__GetSnapshot_Response * data =
      (web_navigation_msgs__srv__GetSnapshot_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!web_navigation_msgs__srv__GetSnapshot_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          web_navigation_msgs__srv__GetSnapshot_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!web_navigation_msgs__srv__GetSnapshot_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
