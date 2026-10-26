// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from web_navigation_msgs:srv/GetWebMap.idl
// generated code does not contain a copyright notice
#include "web_navigation_msgs/srv/detail/get_web_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `if_map_version`
#include "rosidl_runtime_c/string_functions.h"

bool
web_navigation_msgs__srv__GetWebMap_Request__init(web_navigation_msgs__srv__GetWebMap_Request * msg)
{
  if (!msg) {
    return false;
  }
  // if_map_version
  if (!rosidl_runtime_c__String__init(&msg->if_map_version)) {
    web_navigation_msgs__srv__GetWebMap_Request__fini(msg);
    return false;
  }
  return true;
}

void
web_navigation_msgs__srv__GetWebMap_Request__fini(web_navigation_msgs__srv__GetWebMap_Request * msg)
{
  if (!msg) {
    return;
  }
  // if_map_version
  rosidl_runtime_c__String__fini(&msg->if_map_version);
}

bool
web_navigation_msgs__srv__GetWebMap_Request__are_equal(const web_navigation_msgs__srv__GetWebMap_Request * lhs, const web_navigation_msgs__srv__GetWebMap_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // if_map_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->if_map_version), &(rhs->if_map_version)))
  {
    return false;
  }
  return true;
}

bool
web_navigation_msgs__srv__GetWebMap_Request__copy(
  const web_navigation_msgs__srv__GetWebMap_Request * input,
  web_navigation_msgs__srv__GetWebMap_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // if_map_version
  if (!rosidl_runtime_c__String__copy(
      &(input->if_map_version), &(output->if_map_version)))
  {
    return false;
  }
  return true;
}

web_navigation_msgs__srv__GetWebMap_Request *
web_navigation_msgs__srv__GetWebMap_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__GetWebMap_Request * msg = (web_navigation_msgs__srv__GetWebMap_Request *)allocator.allocate(sizeof(web_navigation_msgs__srv__GetWebMap_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(web_navigation_msgs__srv__GetWebMap_Request));
  bool success = web_navigation_msgs__srv__GetWebMap_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
web_navigation_msgs__srv__GetWebMap_Request__destroy(web_navigation_msgs__srv__GetWebMap_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    web_navigation_msgs__srv__GetWebMap_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
web_navigation_msgs__srv__GetWebMap_Request__Sequence__init(web_navigation_msgs__srv__GetWebMap_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__GetWebMap_Request * data = NULL;

  if (size) {
    data = (web_navigation_msgs__srv__GetWebMap_Request *)allocator.zero_allocate(size, sizeof(web_navigation_msgs__srv__GetWebMap_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = web_navigation_msgs__srv__GetWebMap_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        web_navigation_msgs__srv__GetWebMap_Request__fini(&data[i - 1]);
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
web_navigation_msgs__srv__GetWebMap_Request__Sequence__fini(web_navigation_msgs__srv__GetWebMap_Request__Sequence * array)
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
      web_navigation_msgs__srv__GetWebMap_Request__fini(&array->data[i]);
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

web_navigation_msgs__srv__GetWebMap_Request__Sequence *
web_navigation_msgs__srv__GetWebMap_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__GetWebMap_Request__Sequence * array = (web_navigation_msgs__srv__GetWebMap_Request__Sequence *)allocator.allocate(sizeof(web_navigation_msgs__srv__GetWebMap_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = web_navigation_msgs__srv__GetWebMap_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
web_navigation_msgs__srv__GetWebMap_Request__Sequence__destroy(web_navigation_msgs__srv__GetWebMap_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    web_navigation_msgs__srv__GetWebMap_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
web_navigation_msgs__srv__GetWebMap_Request__Sequence__are_equal(const web_navigation_msgs__srv__GetWebMap_Request__Sequence * lhs, const web_navigation_msgs__srv__GetWebMap_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!web_navigation_msgs__srv__GetWebMap_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
web_navigation_msgs__srv__GetWebMap_Request__Sequence__copy(
  const web_navigation_msgs__srv__GetWebMap_Request__Sequence * input,
  web_navigation_msgs__srv__GetWebMap_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(web_navigation_msgs__srv__GetWebMap_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    web_navigation_msgs__srv__GetWebMap_Request * data =
      (web_navigation_msgs__srv__GetWebMap_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!web_navigation_msgs__srv__GetWebMap_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          web_navigation_msgs__srv__GetWebMap_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!web_navigation_msgs__srv__GetWebMap_Request__copy(
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
// Member `map_name`
// Member `coordinate_revision`
// Member `frame_id`
// Member `unit`
// Member `geometry_json`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
web_navigation_msgs__srv__GetWebMap_Response__init(web_navigation_msgs__srv__GetWebMap_Response * msg)
{
  if (!msg) {
    return false;
  }
  // ready
  // not_modified
  // code
  if (!rosidl_runtime_c__String__init(&msg->code)) {
    web_navigation_msgs__srv__GetWebMap_Response__fini(msg);
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    web_navigation_msgs__srv__GetWebMap_Response__fini(msg);
    return false;
  }
  // map_version
  if (!rosidl_runtime_c__String__init(&msg->map_version)) {
    web_navigation_msgs__srv__GetWebMap_Response__fini(msg);
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__init(&msg->map_name)) {
    web_navigation_msgs__srv__GetWebMap_Response__fini(msg);
    return false;
  }
  // coordinate_revision
  if (!rosidl_runtime_c__String__init(&msg->coordinate_revision)) {
    web_navigation_msgs__srv__GetWebMap_Response__fini(msg);
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__init(&msg->frame_id)) {
    web_navigation_msgs__srv__GetWebMap_Response__fini(msg);
    return false;
  }
  // unit
  if (!rosidl_runtime_c__String__init(&msg->unit)) {
    web_navigation_msgs__srv__GetWebMap_Response__fini(msg);
    return false;
  }
  // bounds
  // geometry_json
  if (!rosidl_runtime_c__String__init(&msg->geometry_json)) {
    web_navigation_msgs__srv__GetWebMap_Response__fini(msg);
    return false;
  }
  return true;
}

void
web_navigation_msgs__srv__GetWebMap_Response__fini(web_navigation_msgs__srv__GetWebMap_Response * msg)
{
  if (!msg) {
    return;
  }
  // ready
  // not_modified
  // code
  rosidl_runtime_c__String__fini(&msg->code);
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // map_version
  rosidl_runtime_c__String__fini(&msg->map_version);
  // map_name
  rosidl_runtime_c__String__fini(&msg->map_name);
  // coordinate_revision
  rosidl_runtime_c__String__fini(&msg->coordinate_revision);
  // frame_id
  rosidl_runtime_c__String__fini(&msg->frame_id);
  // unit
  rosidl_runtime_c__String__fini(&msg->unit);
  // bounds
  // geometry_json
  rosidl_runtime_c__String__fini(&msg->geometry_json);
}

bool
web_navigation_msgs__srv__GetWebMap_Response__are_equal(const web_navigation_msgs__srv__GetWebMap_Response * lhs, const web_navigation_msgs__srv__GetWebMap_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ready
  if (lhs->ready != rhs->ready) {
    return false;
  }
  // not_modified
  if (lhs->not_modified != rhs->not_modified) {
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
  // map_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map_name), &(rhs->map_name)))
  {
    return false;
  }
  // coordinate_revision
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->coordinate_revision), &(rhs->coordinate_revision)))
  {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_id), &(rhs->frame_id)))
  {
    return false;
  }
  // unit
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->unit), &(rhs->unit)))
  {
    return false;
  }
  // bounds
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->bounds[i] != rhs->bounds[i]) {
      return false;
    }
  }
  // geometry_json
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->geometry_json), &(rhs->geometry_json)))
  {
    return false;
  }
  return true;
}

bool
web_navigation_msgs__srv__GetWebMap_Response__copy(
  const web_navigation_msgs__srv__GetWebMap_Response * input,
  web_navigation_msgs__srv__GetWebMap_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // ready
  output->ready = input->ready;
  // not_modified
  output->not_modified = input->not_modified;
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
  // map_name
  if (!rosidl_runtime_c__String__copy(
      &(input->map_name), &(output->map_name)))
  {
    return false;
  }
  // coordinate_revision
  if (!rosidl_runtime_c__String__copy(
      &(input->coordinate_revision), &(output->coordinate_revision)))
  {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_id), &(output->frame_id)))
  {
    return false;
  }
  // unit
  if (!rosidl_runtime_c__String__copy(
      &(input->unit), &(output->unit)))
  {
    return false;
  }
  // bounds
  for (size_t i = 0; i < 4; ++i) {
    output->bounds[i] = input->bounds[i];
  }
  // geometry_json
  if (!rosidl_runtime_c__String__copy(
      &(input->geometry_json), &(output->geometry_json)))
  {
    return false;
  }
  return true;
}

web_navigation_msgs__srv__GetWebMap_Response *
web_navigation_msgs__srv__GetWebMap_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__GetWebMap_Response * msg = (web_navigation_msgs__srv__GetWebMap_Response *)allocator.allocate(sizeof(web_navigation_msgs__srv__GetWebMap_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(web_navigation_msgs__srv__GetWebMap_Response));
  bool success = web_navigation_msgs__srv__GetWebMap_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
web_navigation_msgs__srv__GetWebMap_Response__destroy(web_navigation_msgs__srv__GetWebMap_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    web_navigation_msgs__srv__GetWebMap_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
web_navigation_msgs__srv__GetWebMap_Response__Sequence__init(web_navigation_msgs__srv__GetWebMap_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__GetWebMap_Response * data = NULL;

  if (size) {
    data = (web_navigation_msgs__srv__GetWebMap_Response *)allocator.zero_allocate(size, sizeof(web_navigation_msgs__srv__GetWebMap_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = web_navigation_msgs__srv__GetWebMap_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        web_navigation_msgs__srv__GetWebMap_Response__fini(&data[i - 1]);
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
web_navigation_msgs__srv__GetWebMap_Response__Sequence__fini(web_navigation_msgs__srv__GetWebMap_Response__Sequence * array)
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
      web_navigation_msgs__srv__GetWebMap_Response__fini(&array->data[i]);
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

web_navigation_msgs__srv__GetWebMap_Response__Sequence *
web_navigation_msgs__srv__GetWebMap_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__srv__GetWebMap_Response__Sequence * array = (web_navigation_msgs__srv__GetWebMap_Response__Sequence *)allocator.allocate(sizeof(web_navigation_msgs__srv__GetWebMap_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = web_navigation_msgs__srv__GetWebMap_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
web_navigation_msgs__srv__GetWebMap_Response__Sequence__destroy(web_navigation_msgs__srv__GetWebMap_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    web_navigation_msgs__srv__GetWebMap_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
web_navigation_msgs__srv__GetWebMap_Response__Sequence__are_equal(const web_navigation_msgs__srv__GetWebMap_Response__Sequence * lhs, const web_navigation_msgs__srv__GetWebMap_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!web_navigation_msgs__srv__GetWebMap_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
web_navigation_msgs__srv__GetWebMap_Response__Sequence__copy(
  const web_navigation_msgs__srv__GetWebMap_Response__Sequence * input,
  web_navigation_msgs__srv__GetWebMap_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(web_navigation_msgs__srv__GetWebMap_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    web_navigation_msgs__srv__GetWebMap_Response * data =
      (web_navigation_msgs__srv__GetWebMap_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!web_navigation_msgs__srv__GetWebMap_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          web_navigation_msgs__srv__GetWebMap_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!web_navigation_msgs__srv__GetWebMap_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
