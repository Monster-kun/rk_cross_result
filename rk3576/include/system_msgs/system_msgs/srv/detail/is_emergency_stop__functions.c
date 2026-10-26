// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from system_msgs:srv/IsEmergencyStop.idl
// generated code does not contain a copyright notice
#include "system_msgs/srv/detail/is_emergency_stop__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `input`
#include "std_msgs/msg/detail/empty__functions.h"

bool
system_msgs__srv__IsEmergencyStop_Request__init(system_msgs__srv__IsEmergencyStop_Request * msg)
{
  if (!msg) {
    return false;
  }
  // input
  if (!std_msgs__msg__Empty__init(&msg->input)) {
    system_msgs__srv__IsEmergencyStop_Request__fini(msg);
    return false;
  }
  return true;
}

void
system_msgs__srv__IsEmergencyStop_Request__fini(system_msgs__srv__IsEmergencyStop_Request * msg)
{
  if (!msg) {
    return;
  }
  // input
  std_msgs__msg__Empty__fini(&msg->input);
}

bool
system_msgs__srv__IsEmergencyStop_Request__are_equal(const system_msgs__srv__IsEmergencyStop_Request * lhs, const system_msgs__srv__IsEmergencyStop_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // input
  if (!std_msgs__msg__Empty__are_equal(
      &(lhs->input), &(rhs->input)))
  {
    return false;
  }
  return true;
}

bool
system_msgs__srv__IsEmergencyStop_Request__copy(
  const system_msgs__srv__IsEmergencyStop_Request * input,
  system_msgs__srv__IsEmergencyStop_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // input
  if (!std_msgs__msg__Empty__copy(
      &(input->input), &(output->input)))
  {
    return false;
  }
  return true;
}

system_msgs__srv__IsEmergencyStop_Request *
system_msgs__srv__IsEmergencyStop_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  system_msgs__srv__IsEmergencyStop_Request * msg = (system_msgs__srv__IsEmergencyStop_Request *)allocator.allocate(sizeof(system_msgs__srv__IsEmergencyStop_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(system_msgs__srv__IsEmergencyStop_Request));
  bool success = system_msgs__srv__IsEmergencyStop_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
system_msgs__srv__IsEmergencyStop_Request__destroy(system_msgs__srv__IsEmergencyStop_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    system_msgs__srv__IsEmergencyStop_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
system_msgs__srv__IsEmergencyStop_Request__Sequence__init(system_msgs__srv__IsEmergencyStop_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  system_msgs__srv__IsEmergencyStop_Request * data = NULL;

  if (size) {
    data = (system_msgs__srv__IsEmergencyStop_Request *)allocator.zero_allocate(size, sizeof(system_msgs__srv__IsEmergencyStop_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = system_msgs__srv__IsEmergencyStop_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        system_msgs__srv__IsEmergencyStop_Request__fini(&data[i - 1]);
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
system_msgs__srv__IsEmergencyStop_Request__Sequence__fini(system_msgs__srv__IsEmergencyStop_Request__Sequence * array)
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
      system_msgs__srv__IsEmergencyStop_Request__fini(&array->data[i]);
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

system_msgs__srv__IsEmergencyStop_Request__Sequence *
system_msgs__srv__IsEmergencyStop_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  system_msgs__srv__IsEmergencyStop_Request__Sequence * array = (system_msgs__srv__IsEmergencyStop_Request__Sequence *)allocator.allocate(sizeof(system_msgs__srv__IsEmergencyStop_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = system_msgs__srv__IsEmergencyStop_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
system_msgs__srv__IsEmergencyStop_Request__Sequence__destroy(system_msgs__srv__IsEmergencyStop_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    system_msgs__srv__IsEmergencyStop_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
system_msgs__srv__IsEmergencyStop_Request__Sequence__are_equal(const system_msgs__srv__IsEmergencyStop_Request__Sequence * lhs, const system_msgs__srv__IsEmergencyStop_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!system_msgs__srv__IsEmergencyStop_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
system_msgs__srv__IsEmergencyStop_Request__Sequence__copy(
  const system_msgs__srv__IsEmergencyStop_Request__Sequence * input,
  system_msgs__srv__IsEmergencyStop_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(system_msgs__srv__IsEmergencyStop_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    system_msgs__srv__IsEmergencyStop_Request * data =
      (system_msgs__srv__IsEmergencyStop_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!system_msgs__srv__IsEmergencyStop_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          system_msgs__srv__IsEmergencyStop_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!system_msgs__srv__IsEmergencyStop_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
system_msgs__srv__IsEmergencyStop_Response__init(system_msgs__srv__IsEmergencyStop_Response * msg)
{
  if (!msg) {
    return false;
  }
  // is_emergency_stop
  return true;
}

void
system_msgs__srv__IsEmergencyStop_Response__fini(system_msgs__srv__IsEmergencyStop_Response * msg)
{
  if (!msg) {
    return;
  }
  // is_emergency_stop
}

bool
system_msgs__srv__IsEmergencyStop_Response__are_equal(const system_msgs__srv__IsEmergencyStop_Response * lhs, const system_msgs__srv__IsEmergencyStop_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_emergency_stop
  if (lhs->is_emergency_stop != rhs->is_emergency_stop) {
    return false;
  }
  return true;
}

bool
system_msgs__srv__IsEmergencyStop_Response__copy(
  const system_msgs__srv__IsEmergencyStop_Response * input,
  system_msgs__srv__IsEmergencyStop_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // is_emergency_stop
  output->is_emergency_stop = input->is_emergency_stop;
  return true;
}

system_msgs__srv__IsEmergencyStop_Response *
system_msgs__srv__IsEmergencyStop_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  system_msgs__srv__IsEmergencyStop_Response * msg = (system_msgs__srv__IsEmergencyStop_Response *)allocator.allocate(sizeof(system_msgs__srv__IsEmergencyStop_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(system_msgs__srv__IsEmergencyStop_Response));
  bool success = system_msgs__srv__IsEmergencyStop_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
system_msgs__srv__IsEmergencyStop_Response__destroy(system_msgs__srv__IsEmergencyStop_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    system_msgs__srv__IsEmergencyStop_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
system_msgs__srv__IsEmergencyStop_Response__Sequence__init(system_msgs__srv__IsEmergencyStop_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  system_msgs__srv__IsEmergencyStop_Response * data = NULL;

  if (size) {
    data = (system_msgs__srv__IsEmergencyStop_Response *)allocator.zero_allocate(size, sizeof(system_msgs__srv__IsEmergencyStop_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = system_msgs__srv__IsEmergencyStop_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        system_msgs__srv__IsEmergencyStop_Response__fini(&data[i - 1]);
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
system_msgs__srv__IsEmergencyStop_Response__Sequence__fini(system_msgs__srv__IsEmergencyStop_Response__Sequence * array)
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
      system_msgs__srv__IsEmergencyStop_Response__fini(&array->data[i]);
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

system_msgs__srv__IsEmergencyStop_Response__Sequence *
system_msgs__srv__IsEmergencyStop_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  system_msgs__srv__IsEmergencyStop_Response__Sequence * array = (system_msgs__srv__IsEmergencyStop_Response__Sequence *)allocator.allocate(sizeof(system_msgs__srv__IsEmergencyStop_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = system_msgs__srv__IsEmergencyStop_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
system_msgs__srv__IsEmergencyStop_Response__Sequence__destroy(system_msgs__srv__IsEmergencyStop_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    system_msgs__srv__IsEmergencyStop_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
system_msgs__srv__IsEmergencyStop_Response__Sequence__are_equal(const system_msgs__srv__IsEmergencyStop_Response__Sequence * lhs, const system_msgs__srv__IsEmergencyStop_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!system_msgs__srv__IsEmergencyStop_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
system_msgs__srv__IsEmergencyStop_Response__Sequence__copy(
  const system_msgs__srv__IsEmergencyStop_Response__Sequence * input,
  system_msgs__srv__IsEmergencyStop_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(system_msgs__srv__IsEmergencyStop_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    system_msgs__srv__IsEmergencyStop_Response * data =
      (system_msgs__srv__IsEmergencyStop_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!system_msgs__srv__IsEmergencyStop_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          system_msgs__srv__IsEmergencyStop_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!system_msgs__srv__IsEmergencyStop_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
