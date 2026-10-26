// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from behavior_msgs:msg/BehaviorTreeStatusChange.idl
// generated code does not contain a copyright notice
#include "behavior_msgs/msg/detail/behavior_tree_status_change__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `node_name`
// Member `previous_status`
// Member `current_status`
#include "rosidl_runtime_c/string_functions.h"

bool
behavior_msgs__msg__BehaviorTreeStatusChange__init(behavior_msgs__msg__BehaviorTreeStatusChange * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    behavior_msgs__msg__BehaviorTreeStatusChange__fini(msg);
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__init(&msg->node_name)) {
    behavior_msgs__msg__BehaviorTreeStatusChange__fini(msg);
    return false;
  }
  // uid
  // previous_status
  if (!rosidl_runtime_c__String__init(&msg->previous_status)) {
    behavior_msgs__msg__BehaviorTreeStatusChange__fini(msg);
    return false;
  }
  // current_status
  if (!rosidl_runtime_c__String__init(&msg->current_status)) {
    behavior_msgs__msg__BehaviorTreeStatusChange__fini(msg);
    return false;
  }
  return true;
}

void
behavior_msgs__msg__BehaviorTreeStatusChange__fini(behavior_msgs__msg__BehaviorTreeStatusChange * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // node_name
  rosidl_runtime_c__String__fini(&msg->node_name);
  // uid
  // previous_status
  rosidl_runtime_c__String__fini(&msg->previous_status);
  // current_status
  rosidl_runtime_c__String__fini(&msg->current_status);
}

bool
behavior_msgs__msg__BehaviorTreeStatusChange__are_equal(const behavior_msgs__msg__BehaviorTreeStatusChange * lhs, const behavior_msgs__msg__BehaviorTreeStatusChange * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node_name), &(rhs->node_name)))
  {
    return false;
  }
  // uid
  if (lhs->uid != rhs->uid) {
    return false;
  }
  // previous_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->previous_status), &(rhs->previous_status)))
  {
    return false;
  }
  // current_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_status), &(rhs->current_status)))
  {
    return false;
  }
  return true;
}

bool
behavior_msgs__msg__BehaviorTreeStatusChange__copy(
  const behavior_msgs__msg__BehaviorTreeStatusChange * input,
  behavior_msgs__msg__BehaviorTreeStatusChange * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__copy(
      &(input->node_name), &(output->node_name)))
  {
    return false;
  }
  // uid
  output->uid = input->uid;
  // previous_status
  if (!rosidl_runtime_c__String__copy(
      &(input->previous_status), &(output->previous_status)))
  {
    return false;
  }
  // current_status
  if (!rosidl_runtime_c__String__copy(
      &(input->current_status), &(output->current_status)))
  {
    return false;
  }
  return true;
}

behavior_msgs__msg__BehaviorTreeStatusChange *
behavior_msgs__msg__BehaviorTreeStatusChange__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__msg__BehaviorTreeStatusChange * msg = (behavior_msgs__msg__BehaviorTreeStatusChange *)allocator.allocate(sizeof(behavior_msgs__msg__BehaviorTreeStatusChange), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_msgs__msg__BehaviorTreeStatusChange));
  bool success = behavior_msgs__msg__BehaviorTreeStatusChange__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_msgs__msg__BehaviorTreeStatusChange__destroy(behavior_msgs__msg__BehaviorTreeStatusChange * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_msgs__msg__BehaviorTreeStatusChange__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_msgs__msg__BehaviorTreeStatusChange__Sequence__init(behavior_msgs__msg__BehaviorTreeStatusChange__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__msg__BehaviorTreeStatusChange * data = NULL;

  if (size) {
    data = (behavior_msgs__msg__BehaviorTreeStatusChange *)allocator.zero_allocate(size, sizeof(behavior_msgs__msg__BehaviorTreeStatusChange), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_msgs__msg__BehaviorTreeStatusChange__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_msgs__msg__BehaviorTreeStatusChange__fini(&data[i - 1]);
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
behavior_msgs__msg__BehaviorTreeStatusChange__Sequence__fini(behavior_msgs__msg__BehaviorTreeStatusChange__Sequence * array)
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
      behavior_msgs__msg__BehaviorTreeStatusChange__fini(&array->data[i]);
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

behavior_msgs__msg__BehaviorTreeStatusChange__Sequence *
behavior_msgs__msg__BehaviorTreeStatusChange__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__msg__BehaviorTreeStatusChange__Sequence * array = (behavior_msgs__msg__BehaviorTreeStatusChange__Sequence *)allocator.allocate(sizeof(behavior_msgs__msg__BehaviorTreeStatusChange__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_msgs__msg__BehaviorTreeStatusChange__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_msgs__msg__BehaviorTreeStatusChange__Sequence__destroy(behavior_msgs__msg__BehaviorTreeStatusChange__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_msgs__msg__BehaviorTreeStatusChange__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_msgs__msg__BehaviorTreeStatusChange__Sequence__are_equal(const behavior_msgs__msg__BehaviorTreeStatusChange__Sequence * lhs, const behavior_msgs__msg__BehaviorTreeStatusChange__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_msgs__msg__BehaviorTreeStatusChange__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_msgs__msg__BehaviorTreeStatusChange__Sequence__copy(
  const behavior_msgs__msg__BehaviorTreeStatusChange__Sequence * input,
  behavior_msgs__msg__BehaviorTreeStatusChange__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_msgs__msg__BehaviorTreeStatusChange);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_msgs__msg__BehaviorTreeStatusChange * data =
      (behavior_msgs__msg__BehaviorTreeStatusChange *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_msgs__msg__BehaviorTreeStatusChange__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_msgs__msg__BehaviorTreeStatusChange__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_msgs__msg__BehaviorTreeStatusChange__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
