// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from localization_msgs:srv/Relocation.idl
// generated code does not contain a copyright notice
#include "localization_msgs/srv/detail/relocation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `cloud`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"
// Member `map_name`
#include "rosidl_runtime_c/string_functions.h"

bool
localization_msgs__srv__Relocation_Request__init(localization_msgs__srv__Relocation_Request * msg)
{
  if (!msg) {
    return false;
  }
  // cloud
  if (!sensor_msgs__msg__PointCloud2__init(&msg->cloud)) {
    localization_msgs__srv__Relocation_Request__fini(msg);
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__init(&msg->map_name)) {
    localization_msgs__srv__Relocation_Request__fini(msg);
    return false;
  }
  // relocation_method
  return true;
}

void
localization_msgs__srv__Relocation_Request__fini(localization_msgs__srv__Relocation_Request * msg)
{
  if (!msg) {
    return;
  }
  // cloud
  sensor_msgs__msg__PointCloud2__fini(&msg->cloud);
  // map_name
  rosidl_runtime_c__String__fini(&msg->map_name);
  // relocation_method
}

bool
localization_msgs__srv__Relocation_Request__are_equal(const localization_msgs__srv__Relocation_Request * lhs, const localization_msgs__srv__Relocation_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cloud
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->cloud), &(rhs->cloud)))
  {
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map_name), &(rhs->map_name)))
  {
    return false;
  }
  // relocation_method
  if (lhs->relocation_method != rhs->relocation_method) {
    return false;
  }
  return true;
}

bool
localization_msgs__srv__Relocation_Request__copy(
  const localization_msgs__srv__Relocation_Request * input,
  localization_msgs__srv__Relocation_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // cloud
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->cloud), &(output->cloud)))
  {
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__copy(
      &(input->map_name), &(output->map_name)))
  {
    return false;
  }
  // relocation_method
  output->relocation_method = input->relocation_method;
  return true;
}

localization_msgs__srv__Relocation_Request *
localization_msgs__srv__Relocation_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  localization_msgs__srv__Relocation_Request * msg = (localization_msgs__srv__Relocation_Request *)allocator.allocate(sizeof(localization_msgs__srv__Relocation_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(localization_msgs__srv__Relocation_Request));
  bool success = localization_msgs__srv__Relocation_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
localization_msgs__srv__Relocation_Request__destroy(localization_msgs__srv__Relocation_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    localization_msgs__srv__Relocation_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
localization_msgs__srv__Relocation_Request__Sequence__init(localization_msgs__srv__Relocation_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  localization_msgs__srv__Relocation_Request * data = NULL;

  if (size) {
    data = (localization_msgs__srv__Relocation_Request *)allocator.zero_allocate(size, sizeof(localization_msgs__srv__Relocation_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = localization_msgs__srv__Relocation_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        localization_msgs__srv__Relocation_Request__fini(&data[i - 1]);
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
localization_msgs__srv__Relocation_Request__Sequence__fini(localization_msgs__srv__Relocation_Request__Sequence * array)
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
      localization_msgs__srv__Relocation_Request__fini(&array->data[i]);
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

localization_msgs__srv__Relocation_Request__Sequence *
localization_msgs__srv__Relocation_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  localization_msgs__srv__Relocation_Request__Sequence * array = (localization_msgs__srv__Relocation_Request__Sequence *)allocator.allocate(sizeof(localization_msgs__srv__Relocation_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = localization_msgs__srv__Relocation_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
localization_msgs__srv__Relocation_Request__Sequence__destroy(localization_msgs__srv__Relocation_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    localization_msgs__srv__Relocation_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
localization_msgs__srv__Relocation_Request__Sequence__are_equal(const localization_msgs__srv__Relocation_Request__Sequence * lhs, const localization_msgs__srv__Relocation_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!localization_msgs__srv__Relocation_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
localization_msgs__srv__Relocation_Request__Sequence__copy(
  const localization_msgs__srv__Relocation_Request__Sequence * input,
  localization_msgs__srv__Relocation_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(localization_msgs__srv__Relocation_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    localization_msgs__srv__Relocation_Request * data =
      (localization_msgs__srv__Relocation_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!localization_msgs__srv__Relocation_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          localization_msgs__srv__Relocation_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!localization_msgs__srv__Relocation_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `init_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
localization_msgs__srv__Relocation_Response__init(localization_msgs__srv__Relocation_Response * msg)
{
  if (!msg) {
    return false;
  }
  // init_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->init_pose)) {
    localization_msgs__srv__Relocation_Response__fini(msg);
    return false;
  }
  // success
  return true;
}

void
localization_msgs__srv__Relocation_Response__fini(localization_msgs__srv__Relocation_Response * msg)
{
  if (!msg) {
    return;
  }
  // init_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->init_pose);
  // success
}

bool
localization_msgs__srv__Relocation_Response__are_equal(const localization_msgs__srv__Relocation_Response * lhs, const localization_msgs__srv__Relocation_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // init_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->init_pose), &(rhs->init_pose)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
localization_msgs__srv__Relocation_Response__copy(
  const localization_msgs__srv__Relocation_Response * input,
  localization_msgs__srv__Relocation_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // init_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->init_pose), &(output->init_pose)))
  {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

localization_msgs__srv__Relocation_Response *
localization_msgs__srv__Relocation_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  localization_msgs__srv__Relocation_Response * msg = (localization_msgs__srv__Relocation_Response *)allocator.allocate(sizeof(localization_msgs__srv__Relocation_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(localization_msgs__srv__Relocation_Response));
  bool success = localization_msgs__srv__Relocation_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
localization_msgs__srv__Relocation_Response__destroy(localization_msgs__srv__Relocation_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    localization_msgs__srv__Relocation_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
localization_msgs__srv__Relocation_Response__Sequence__init(localization_msgs__srv__Relocation_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  localization_msgs__srv__Relocation_Response * data = NULL;

  if (size) {
    data = (localization_msgs__srv__Relocation_Response *)allocator.zero_allocate(size, sizeof(localization_msgs__srv__Relocation_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = localization_msgs__srv__Relocation_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        localization_msgs__srv__Relocation_Response__fini(&data[i - 1]);
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
localization_msgs__srv__Relocation_Response__Sequence__fini(localization_msgs__srv__Relocation_Response__Sequence * array)
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
      localization_msgs__srv__Relocation_Response__fini(&array->data[i]);
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

localization_msgs__srv__Relocation_Response__Sequence *
localization_msgs__srv__Relocation_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  localization_msgs__srv__Relocation_Response__Sequence * array = (localization_msgs__srv__Relocation_Response__Sequence *)allocator.allocate(sizeof(localization_msgs__srv__Relocation_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = localization_msgs__srv__Relocation_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
localization_msgs__srv__Relocation_Response__Sequence__destroy(localization_msgs__srv__Relocation_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    localization_msgs__srv__Relocation_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
localization_msgs__srv__Relocation_Response__Sequence__are_equal(const localization_msgs__srv__Relocation_Response__Sequence * lhs, const localization_msgs__srv__Relocation_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!localization_msgs__srv__Relocation_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
localization_msgs__srv__Relocation_Response__Sequence__copy(
  const localization_msgs__srv__Relocation_Response__Sequence * input,
  localization_msgs__srv__Relocation_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(localization_msgs__srv__Relocation_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    localization_msgs__srv__Relocation_Response * data =
      (localization_msgs__srv__Relocation_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!localization_msgs__srv__Relocation_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          localization_msgs__srv__Relocation_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!localization_msgs__srv__Relocation_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
