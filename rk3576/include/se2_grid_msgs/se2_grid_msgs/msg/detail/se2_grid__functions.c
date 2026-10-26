// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from se2_grid_msgs:msg/SE2Grid.idl
// generated code does not contain a copyright notice
#include "se2_grid_msgs/msg/detail/se2_grid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `info`
#include "se2_grid_msgs/msg/detail/se2_grid_info__functions.h"
// Member `layers`
#include "rosidl_runtime_c/string_functions.h"
// Member `has_so2`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `data`
#include "std_msgs/msg/detail/float32_multi_array__functions.h"

bool
se2_grid_msgs__msg__SE2Grid__init(se2_grid_msgs__msg__SE2Grid * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!se2_grid_msgs__msg__SE2GridInfo__init(&msg->info)) {
    se2_grid_msgs__msg__SE2Grid__fini(msg);
    return false;
  }
  // layers
  if (!rosidl_runtime_c__String__Sequence__init(&msg->layers, 0)) {
    se2_grid_msgs__msg__SE2Grid__fini(msg);
    return false;
  }
  // has_so2
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->has_so2, 0)) {
    se2_grid_msgs__msg__SE2Grid__fini(msg);
    return false;
  }
  // data
  if (!std_msgs__msg__Float32MultiArray__Sequence__init(&msg->data, 0)) {
    se2_grid_msgs__msg__SE2Grid__fini(msg);
    return false;
  }
  // start_index_row
  // start_index_col
  return true;
}

void
se2_grid_msgs__msg__SE2Grid__fini(se2_grid_msgs__msg__SE2Grid * msg)
{
  if (!msg) {
    return;
  }
  // info
  se2_grid_msgs__msg__SE2GridInfo__fini(&msg->info);
  // layers
  rosidl_runtime_c__String__Sequence__fini(&msg->layers);
  // has_so2
  rosidl_runtime_c__boolean__Sequence__fini(&msg->has_so2);
  // data
  std_msgs__msg__Float32MultiArray__Sequence__fini(&msg->data);
  // start_index_row
  // start_index_col
}

bool
se2_grid_msgs__msg__SE2Grid__are_equal(const se2_grid_msgs__msg__SE2Grid * lhs, const se2_grid_msgs__msg__SE2Grid * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!se2_grid_msgs__msg__SE2GridInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // layers
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->layers), &(rhs->layers)))
  {
    return false;
  }
  // has_so2
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->has_so2), &(rhs->has_so2)))
  {
    return false;
  }
  // data
  if (!std_msgs__msg__Float32MultiArray__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // start_index_row
  if (lhs->start_index_row != rhs->start_index_row) {
    return false;
  }
  // start_index_col
  if (lhs->start_index_col != rhs->start_index_col) {
    return false;
  }
  return true;
}

bool
se2_grid_msgs__msg__SE2Grid__copy(
  const se2_grid_msgs__msg__SE2Grid * input,
  se2_grid_msgs__msg__SE2Grid * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!se2_grid_msgs__msg__SE2GridInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // layers
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->layers), &(output->layers)))
  {
    return false;
  }
  // has_so2
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->has_so2), &(output->has_so2)))
  {
    return false;
  }
  // data
  if (!std_msgs__msg__Float32MultiArray__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // start_index_row
  output->start_index_row = input->start_index_row;
  // start_index_col
  output->start_index_col = input->start_index_col;
  return true;
}

se2_grid_msgs__msg__SE2Grid *
se2_grid_msgs__msg__SE2Grid__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  se2_grid_msgs__msg__SE2Grid * msg = (se2_grid_msgs__msg__SE2Grid *)allocator.allocate(sizeof(se2_grid_msgs__msg__SE2Grid), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(se2_grid_msgs__msg__SE2Grid));
  bool success = se2_grid_msgs__msg__SE2Grid__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
se2_grid_msgs__msg__SE2Grid__destroy(se2_grid_msgs__msg__SE2Grid * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    se2_grid_msgs__msg__SE2Grid__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
se2_grid_msgs__msg__SE2Grid__Sequence__init(se2_grid_msgs__msg__SE2Grid__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  se2_grid_msgs__msg__SE2Grid * data = NULL;

  if (size) {
    data = (se2_grid_msgs__msg__SE2Grid *)allocator.zero_allocate(size, sizeof(se2_grid_msgs__msg__SE2Grid), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = se2_grid_msgs__msg__SE2Grid__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        se2_grid_msgs__msg__SE2Grid__fini(&data[i - 1]);
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
se2_grid_msgs__msg__SE2Grid__Sequence__fini(se2_grid_msgs__msg__SE2Grid__Sequence * array)
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
      se2_grid_msgs__msg__SE2Grid__fini(&array->data[i]);
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

se2_grid_msgs__msg__SE2Grid__Sequence *
se2_grid_msgs__msg__SE2Grid__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  se2_grid_msgs__msg__SE2Grid__Sequence * array = (se2_grid_msgs__msg__SE2Grid__Sequence *)allocator.allocate(sizeof(se2_grid_msgs__msg__SE2Grid__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = se2_grid_msgs__msg__SE2Grid__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
se2_grid_msgs__msg__SE2Grid__Sequence__destroy(se2_grid_msgs__msg__SE2Grid__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    se2_grid_msgs__msg__SE2Grid__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
se2_grid_msgs__msg__SE2Grid__Sequence__are_equal(const se2_grid_msgs__msg__SE2Grid__Sequence * lhs, const se2_grid_msgs__msg__SE2Grid__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!se2_grid_msgs__msg__SE2Grid__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
se2_grid_msgs__msg__SE2Grid__Sequence__copy(
  const se2_grid_msgs__msg__SE2Grid__Sequence * input,
  se2_grid_msgs__msg__SE2Grid__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(se2_grid_msgs__msg__SE2Grid);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    se2_grid_msgs__msg__SE2Grid * data =
      (se2_grid_msgs__msg__SE2Grid *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!se2_grid_msgs__msg__SE2Grid__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          se2_grid_msgs__msg__SE2Grid__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!se2_grid_msgs__msg__SE2Grid__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
