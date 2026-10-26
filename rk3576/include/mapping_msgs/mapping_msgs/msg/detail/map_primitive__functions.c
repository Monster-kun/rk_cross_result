// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mapping_msgs:msg/MapPrimitive.idl
// generated code does not contain a copyright notice
#include "mapping_msgs/msg/detail/map_primitive__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `primitive_type`
#include "rosidl_runtime_c/string_functions.h"

bool
mapping_msgs__msg__MapPrimitive__init(mapping_msgs__msg__MapPrimitive * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // primitive_type
  if (!rosidl_runtime_c__String__init(&msg->primitive_type)) {
    mapping_msgs__msg__MapPrimitive__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->primitive_type, "");
    if (!success) {
      goto abort_init_0;
    }
  }
  return true;
abort_init_0:
  return false;
}

void
mapping_msgs__msg__MapPrimitive__fini(mapping_msgs__msg__MapPrimitive * msg)
{
  if (!msg) {
    return;
  }
  // id
  // primitive_type
  rosidl_runtime_c__String__fini(&msg->primitive_type);
}

bool
mapping_msgs__msg__MapPrimitive__are_equal(const mapping_msgs__msg__MapPrimitive * lhs, const mapping_msgs__msg__MapPrimitive * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // primitive_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->primitive_type), &(rhs->primitive_type)))
  {
    return false;
  }
  return true;
}

bool
mapping_msgs__msg__MapPrimitive__copy(
  const mapping_msgs__msg__MapPrimitive * input,
  mapping_msgs__msg__MapPrimitive * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // primitive_type
  if (!rosidl_runtime_c__String__copy(
      &(input->primitive_type), &(output->primitive_type)))
  {
    return false;
  }
  return true;
}

mapping_msgs__msg__MapPrimitive *
mapping_msgs__msg__MapPrimitive__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_msgs__msg__MapPrimitive * msg = (mapping_msgs__msg__MapPrimitive *)allocator.allocate(sizeof(mapping_msgs__msg__MapPrimitive), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mapping_msgs__msg__MapPrimitive));
  bool success = mapping_msgs__msg__MapPrimitive__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mapping_msgs__msg__MapPrimitive__destroy(mapping_msgs__msg__MapPrimitive * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mapping_msgs__msg__MapPrimitive__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mapping_msgs__msg__MapPrimitive__Sequence__init(mapping_msgs__msg__MapPrimitive__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_msgs__msg__MapPrimitive * data = NULL;

  if (size) {
    data = (mapping_msgs__msg__MapPrimitive *)allocator.zero_allocate(size, sizeof(mapping_msgs__msg__MapPrimitive), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mapping_msgs__msg__MapPrimitive__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mapping_msgs__msg__MapPrimitive__fini(&data[i - 1]);
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
mapping_msgs__msg__MapPrimitive__Sequence__fini(mapping_msgs__msg__MapPrimitive__Sequence * array)
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
      mapping_msgs__msg__MapPrimitive__fini(&array->data[i]);
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

mapping_msgs__msg__MapPrimitive__Sequence *
mapping_msgs__msg__MapPrimitive__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_msgs__msg__MapPrimitive__Sequence * array = (mapping_msgs__msg__MapPrimitive__Sequence *)allocator.allocate(sizeof(mapping_msgs__msg__MapPrimitive__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mapping_msgs__msg__MapPrimitive__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mapping_msgs__msg__MapPrimitive__Sequence__destroy(mapping_msgs__msg__MapPrimitive__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mapping_msgs__msg__MapPrimitive__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mapping_msgs__msg__MapPrimitive__Sequence__are_equal(const mapping_msgs__msg__MapPrimitive__Sequence * lhs, const mapping_msgs__msg__MapPrimitive__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mapping_msgs__msg__MapPrimitive__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mapping_msgs__msg__MapPrimitive__Sequence__copy(
  const mapping_msgs__msg__MapPrimitive__Sequence * input,
  mapping_msgs__msg__MapPrimitive__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mapping_msgs__msg__MapPrimitive);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mapping_msgs__msg__MapPrimitive * data =
      (mapping_msgs__msg__MapPrimitive *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mapping_msgs__msg__MapPrimitive__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mapping_msgs__msg__MapPrimitive__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mapping_msgs__msg__MapPrimitive__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
