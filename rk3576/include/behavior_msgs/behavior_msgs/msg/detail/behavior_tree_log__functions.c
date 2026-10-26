// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from behavior_msgs:msg/BehaviorTreeLog.idl
// generated code does not contain a copyright notice
#include "behavior_msgs/msg/detail/behavior_tree_log__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `event_log`
#include "behavior_msgs/msg/detail/behavior_tree_status_change__functions.h"

bool
behavior_msgs__msg__BehaviorTreeLog__init(behavior_msgs__msg__BehaviorTreeLog * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    behavior_msgs__msg__BehaviorTreeLog__fini(msg);
    return false;
  }
  // event_log
  if (!behavior_msgs__msg__BehaviorTreeStatusChange__Sequence__init(&msg->event_log, 0)) {
    behavior_msgs__msg__BehaviorTreeLog__fini(msg);
    return false;
  }
  return true;
}

void
behavior_msgs__msg__BehaviorTreeLog__fini(behavior_msgs__msg__BehaviorTreeLog * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // event_log
  behavior_msgs__msg__BehaviorTreeStatusChange__Sequence__fini(&msg->event_log);
}

bool
behavior_msgs__msg__BehaviorTreeLog__are_equal(const behavior_msgs__msg__BehaviorTreeLog * lhs, const behavior_msgs__msg__BehaviorTreeLog * rhs)
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
  // event_log
  if (!behavior_msgs__msg__BehaviorTreeStatusChange__Sequence__are_equal(
      &(lhs->event_log), &(rhs->event_log)))
  {
    return false;
  }
  return true;
}

bool
behavior_msgs__msg__BehaviorTreeLog__copy(
  const behavior_msgs__msg__BehaviorTreeLog * input,
  behavior_msgs__msg__BehaviorTreeLog * output)
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
  // event_log
  if (!behavior_msgs__msg__BehaviorTreeStatusChange__Sequence__copy(
      &(input->event_log), &(output->event_log)))
  {
    return false;
  }
  return true;
}

behavior_msgs__msg__BehaviorTreeLog *
behavior_msgs__msg__BehaviorTreeLog__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__msg__BehaviorTreeLog * msg = (behavior_msgs__msg__BehaviorTreeLog *)allocator.allocate(sizeof(behavior_msgs__msg__BehaviorTreeLog), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_msgs__msg__BehaviorTreeLog));
  bool success = behavior_msgs__msg__BehaviorTreeLog__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_msgs__msg__BehaviorTreeLog__destroy(behavior_msgs__msg__BehaviorTreeLog * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_msgs__msg__BehaviorTreeLog__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_msgs__msg__BehaviorTreeLog__Sequence__init(behavior_msgs__msg__BehaviorTreeLog__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__msg__BehaviorTreeLog * data = NULL;

  if (size) {
    data = (behavior_msgs__msg__BehaviorTreeLog *)allocator.zero_allocate(size, sizeof(behavior_msgs__msg__BehaviorTreeLog), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_msgs__msg__BehaviorTreeLog__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_msgs__msg__BehaviorTreeLog__fini(&data[i - 1]);
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
behavior_msgs__msg__BehaviorTreeLog__Sequence__fini(behavior_msgs__msg__BehaviorTreeLog__Sequence * array)
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
      behavior_msgs__msg__BehaviorTreeLog__fini(&array->data[i]);
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

behavior_msgs__msg__BehaviorTreeLog__Sequence *
behavior_msgs__msg__BehaviorTreeLog__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__msg__BehaviorTreeLog__Sequence * array = (behavior_msgs__msg__BehaviorTreeLog__Sequence *)allocator.allocate(sizeof(behavior_msgs__msg__BehaviorTreeLog__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_msgs__msg__BehaviorTreeLog__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_msgs__msg__BehaviorTreeLog__Sequence__destroy(behavior_msgs__msg__BehaviorTreeLog__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_msgs__msg__BehaviorTreeLog__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_msgs__msg__BehaviorTreeLog__Sequence__are_equal(const behavior_msgs__msg__BehaviorTreeLog__Sequence * lhs, const behavior_msgs__msg__BehaviorTreeLog__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_msgs__msg__BehaviorTreeLog__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_msgs__msg__BehaviorTreeLog__Sequence__copy(
  const behavior_msgs__msg__BehaviorTreeLog__Sequence * input,
  behavior_msgs__msg__BehaviorTreeLog__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_msgs__msg__BehaviorTreeLog);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_msgs__msg__BehaviorTreeLog * data =
      (behavior_msgs__msg__BehaviorTreeLog *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_msgs__msg__BehaviorTreeLog__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_msgs__msg__BehaviorTreeLog__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_msgs__msg__BehaviorTreeLog__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
