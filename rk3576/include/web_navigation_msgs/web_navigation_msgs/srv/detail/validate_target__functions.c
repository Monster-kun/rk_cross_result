// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from web_navigation_msgs:srv/ValidateTarget.idl
// generated code does not contain a copyright notice
#include "web_navigation_msgs/srv/detail/validate_target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `map_version`
// Member `frame_id`
// Member `selected_layer_id`
#include "rosidl_runtime_c/string_functions.h"

bool
web_navigation_msgs__srv__ValidateTarget_Request__init(web_navigation_msgs__srv__ValidateTarget_Request * msg)
{
  if (!msg) {
    return false;
  }
  // map_version
  if (!rosidl_runtime_c__String__init(&msg->map_version)) {
    web_navigation_msgs__srv__ValidateTarget_Request__fini(msg);
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__init(&msg->frame_id)) {
    web_navigation_msgs__srv__ValidateTarget_Request__fini(msg);
    return false;
  }
  // x
  // y
  // selected_layer_id
  if (!rosidl_runtime_c__String__init(&msg->selected_layer_id)) {
    web_navigation_msgs__srv__ValidateTarget_Request__fini(msg);
    return false;
  }
  // suggest_nearest
  return true;
}

void
web_navigation_msgs__srv__ValidateTarget_Request__fini(web_navigation_msgs__srv__ValidateTarget_Request * msg)
{
  if (!msg) {
    return;
  }
  // map_version
  rosidl_runtime_c__String__fini(&msg->map_version);
  // frame_id
  rosidl_runtime_c__String__fini(&msg->frame_id);
  // x
  // y
  // selected_layer_id
  rosidl_runtime_c__String__fini(&msg->selected_layer_id);
  // suggest_nearest
}

bool
web_navigation_msgs__srv__ValidateTarget_Request__are_equal(const web_navigation_msgs__srv__ValidateTarget_Request * lhs, const web_navigation_msgs__srv__ValidateTarget_Request * rhs)
{
  if (!lhs || !rhs) {
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
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // selected_layer_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->selected_layer_id), &(rhs->selected_layer_id)))
  {
    return false;
  }
  // suggest_nearest
  if (lhs->suggest_nearest != rhs->suggest_nearest) {
    return false;
  }
  return true;
}

bool
web_navigation_msgs__srv__ValidateTarget_Request__copy(
  const web_navigation_msgs__srv__ValidateTarget_Request * input,
  web_navigation_msgs__srv__ValidateTarget_Request * output)
{
  if (!input || !output) {
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
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // selected_layer_id
  if (!rosidl_runtime_c__String__copy(
      &(input->selected_layer_id), &(output->selected_layer_id)))
  {
    return false;
  }
  // suggest_nearest
  output->suggest_nearest = input->suggest_nearest;
  return true;
}

web_navigation_msgs__srv__ValidateTarget_Request *
web_navigation_msgs__srv__ValidateTarget_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__ValidateTarget_Request * msg = (web_navigation_msgs__srv__ValidateTarget_Request *)allocator.allocate(sizeof(web_navigation_msgs__srv__ValidateTarget_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(web_navigation_msgs__srv__ValidateTarget_Request));
  bool success = web_navigation_msgs__srv__ValidateTarget_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
web_navigation_msgs__srv__ValidateTarget_Request__destroy(web_navigation_msgs__srv__ValidateTarget_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    web_navigation_msgs__srv__ValidateTarget_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
web_navigation_msgs__srv__ValidateTarget_Request__Sequence__init(web_navigation_msgs__srv__ValidateTarget_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__ValidateTarget_Request * data = NULL;

  if (size) {
    data = (web_navigation_msgs__srv__ValidateTarget_Request *)allocator.zero_allocate(size, sizeof(web_navigation_msgs__srv__ValidateTarget_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = web_navigation_msgs__srv__ValidateTarget_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        web_navigation_msgs__srv__ValidateTarget_Request__fini(&data[i - 1]);
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
web_navigation_msgs__srv__ValidateTarget_Request__Sequence__fini(web_navigation_msgs__srv__ValidateTarget_Request__Sequence * array)
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
      web_navigation_msgs__srv__ValidateTarget_Request__fini(&array->data[i]);
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

web_navigation_msgs__srv__ValidateTarget_Request__Sequence *
web_navigation_msgs__srv__ValidateTarget_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__ValidateTarget_Request__Sequence * array = (web_navigation_msgs__srv__ValidateTarget_Request__Sequence *)allocator.allocate(sizeof(web_navigation_msgs__srv__ValidateTarget_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = web_navigation_msgs__srv__ValidateTarget_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
web_navigation_msgs__srv__ValidateTarget_Request__Sequence__destroy(web_navigation_msgs__srv__ValidateTarget_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    web_navigation_msgs__srv__ValidateTarget_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
web_navigation_msgs__srv__ValidateTarget_Request__Sequence__are_equal(const web_navigation_msgs__srv__ValidateTarget_Request__Sequence * lhs, const web_navigation_msgs__srv__ValidateTarget_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!web_navigation_msgs__srv__ValidateTarget_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
web_navigation_msgs__srv__ValidateTarget_Request__Sequence__copy(
  const web_navigation_msgs__srv__ValidateTarget_Request__Sequence * input,
  web_navigation_msgs__srv__ValidateTarget_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(web_navigation_msgs__srv__ValidateTarget_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    web_navigation_msgs__srv__ValidateTarget_Request * data =
      (web_navigation_msgs__srv__ValidateTarget_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!web_navigation_msgs__srv__ValidateTarget_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          web_navigation_msgs__srv__ValidateTarget_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!web_navigation_msgs__srv__ValidateTarget_Request__copy(
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
// Member `map_version`
// Member `lanelet_ids`
// Member `lanelet_id`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
web_navigation_msgs__srv__ValidateTarget_Response__init(web_navigation_msgs__srv__ValidateTarget_Response * msg)
{
  if (!msg) {
    return false;
  }
  // valid
  // code
  if (!rosidl_runtime_c__String__init(&msg->code)) {
    web_navigation_msgs__srv__ValidateTarget_Response__fini(msg);
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    web_navigation_msgs__srv__ValidateTarget_Response__fini(msg);
    return false;
  }
  // map_version
  if (!rosidl_runtime_c__String__init(&msg->map_version)) {
    web_navigation_msgs__srv__ValidateTarget_Response__fini(msg);
    return false;
  }
  // lanelet_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->lanelet_ids, 0)) {
    web_navigation_msgs__srv__ValidateTarget_Response__fini(msg);
    return false;
  }
  // x
  // y
  // lanelet_id
  if (!rosidl_runtime_c__String__init(&msg->lanelet_id)) {
    web_navigation_msgs__srv__ValidateTarget_Response__fini(msg);
    return false;
  }
  return true;
}

void
web_navigation_msgs__srv__ValidateTarget_Response__fini(web_navigation_msgs__srv__ValidateTarget_Response * msg)
{
  if (!msg) {
    return;
  }
  // valid
  // code
  rosidl_runtime_c__String__fini(&msg->code);
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // map_version
  rosidl_runtime_c__String__fini(&msg->map_version);
  // lanelet_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->lanelet_ids);
  // x
  // y
  // lanelet_id
  rosidl_runtime_c__String__fini(&msg->lanelet_id);
}

bool
web_navigation_msgs__srv__ValidateTarget_Response__are_equal(const web_navigation_msgs__srv__ValidateTarget_Response * lhs, const web_navigation_msgs__srv__ValidateTarget_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // valid
  if (lhs->valid != rhs->valid) {
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
  // map_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map_version), &(rhs->map_version)))
  {
    return false;
  }
  // lanelet_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->lanelet_ids), &(rhs->lanelet_ids)))
  {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // lanelet_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->lanelet_id), &(rhs->lanelet_id)))
  {
    return false;
  }
  return true;
}

bool
web_navigation_msgs__srv__ValidateTarget_Response__copy(
  const web_navigation_msgs__srv__ValidateTarget_Response * input,
  web_navigation_msgs__srv__ValidateTarget_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // valid
  output->valid = input->valid;
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
  // map_version
  if (!rosidl_runtime_c__String__copy(
      &(input->map_version), &(output->map_version)))
  {
    return false;
  }
  // lanelet_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->lanelet_ids), &(output->lanelet_ids)))
  {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // lanelet_id
  if (!rosidl_runtime_c__String__copy(
      &(input->lanelet_id), &(output->lanelet_id)))
  {
    return false;
  }
  return true;
}

web_navigation_msgs__srv__ValidateTarget_Response *
web_navigation_msgs__srv__ValidateTarget_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__ValidateTarget_Response * msg = (web_navigation_msgs__srv__ValidateTarget_Response *)allocator.allocate(sizeof(web_navigation_msgs__srv__ValidateTarget_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(web_navigation_msgs__srv__ValidateTarget_Response));
  bool success = web_navigation_msgs__srv__ValidateTarget_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
web_navigation_msgs__srv__ValidateTarget_Response__destroy(web_navigation_msgs__srv__ValidateTarget_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    web_navigation_msgs__srv__ValidateTarget_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
web_navigation_msgs__srv__ValidateTarget_Response__Sequence__init(web_navigation_msgs__srv__ValidateTarget_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__ValidateTarget_Response * data = NULL;

  if (size) {
    data = (web_navigation_msgs__srv__ValidateTarget_Response *)allocator.zero_allocate(size, sizeof(web_navigation_msgs__srv__ValidateTarget_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = web_navigation_msgs__srv__ValidateTarget_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        web_navigation_msgs__srv__ValidateTarget_Response__fini(&data[i - 1]);
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
web_navigation_msgs__srv__ValidateTarget_Response__Sequence__fini(web_navigation_msgs__srv__ValidateTarget_Response__Sequence * array)
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
      web_navigation_msgs__srv__ValidateTarget_Response__fini(&array->data[i]);
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

web_navigation_msgs__srv__ValidateTarget_Response__Sequence *
web_navigation_msgs__srv__ValidateTarget_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__ValidateTarget_Response__Sequence * array = (web_navigation_msgs__srv__ValidateTarget_Response__Sequence *)allocator.allocate(sizeof(web_navigation_msgs__srv__ValidateTarget_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = web_navigation_msgs__srv__ValidateTarget_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
web_navigation_msgs__srv__ValidateTarget_Response__Sequence__destroy(web_navigation_msgs__srv__ValidateTarget_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    web_navigation_msgs__srv__ValidateTarget_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
web_navigation_msgs__srv__ValidateTarget_Response__Sequence__are_equal(const web_navigation_msgs__srv__ValidateTarget_Response__Sequence * lhs, const web_navigation_msgs__srv__ValidateTarget_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!web_navigation_msgs__srv__ValidateTarget_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
web_navigation_msgs__srv__ValidateTarget_Response__Sequence__copy(
  const web_navigation_msgs__srv__ValidateTarget_Response__Sequence * input,
  web_navigation_msgs__srv__ValidateTarget_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(web_navigation_msgs__srv__ValidateTarget_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    web_navigation_msgs__srv__ValidateTarget_Response * data =
      (web_navigation_msgs__srv__ValidateTarget_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!web_navigation_msgs__srv__ValidateTarget_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          web_navigation_msgs__srv__ValidateTarget_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!web_navigation_msgs__srv__ValidateTarget_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
