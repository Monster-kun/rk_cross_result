// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from chassis_control_msgs:msg/PurepursuitViz.idl
// generated code does not contain a copyright notice
#include "chassis_control_msgs/msg/detail/purepursuit_viz__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
chassis_control_msgs__msg__PurepursuitViz__init(chassis_control_msgs__msg__PurepursuitViz * msg)
{
  if (!msg) {
    return false;
  }
  // aimpointx
  // aimpointy
  // velx
  // vely
  // velz
  // ahead
  // currentx
  // currenty
  return true;
}

void
chassis_control_msgs__msg__PurepursuitViz__fini(chassis_control_msgs__msg__PurepursuitViz * msg)
{
  if (!msg) {
    return;
  }
  // aimpointx
  // aimpointy
  // velx
  // vely
  // velz
  // ahead
  // currentx
  // currenty
}

bool
chassis_control_msgs__msg__PurepursuitViz__are_equal(const chassis_control_msgs__msg__PurepursuitViz * lhs, const chassis_control_msgs__msg__PurepursuitViz * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // aimpointx
  if (lhs->aimpointx != rhs->aimpointx) {
    return false;
  }
  // aimpointy
  if (lhs->aimpointy != rhs->aimpointy) {
    return false;
  }
  // velx
  if (lhs->velx != rhs->velx) {
    return false;
  }
  // vely
  if (lhs->vely != rhs->vely) {
    return false;
  }
  // velz
  if (lhs->velz != rhs->velz) {
    return false;
  }
  // ahead
  if (lhs->ahead != rhs->ahead) {
    return false;
  }
  // currentx
  if (lhs->currentx != rhs->currentx) {
    return false;
  }
  // currenty
  if (lhs->currenty != rhs->currenty) {
    return false;
  }
  return true;
}

bool
chassis_control_msgs__msg__PurepursuitViz__copy(
  const chassis_control_msgs__msg__PurepursuitViz * input,
  chassis_control_msgs__msg__PurepursuitViz * output)
{
  if (!input || !output) {
    return false;
  }
  // aimpointx
  output->aimpointx = input->aimpointx;
  // aimpointy
  output->aimpointy = input->aimpointy;
  // velx
  output->velx = input->velx;
  // vely
  output->vely = input->vely;
  // velz
  output->velz = input->velz;
  // ahead
  output->ahead = input->ahead;
  // currentx
  output->currentx = input->currentx;
  // currenty
  output->currenty = input->currenty;
  return true;
}

chassis_control_msgs__msg__PurepursuitViz *
chassis_control_msgs__msg__PurepursuitViz__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chassis_control_msgs__msg__PurepursuitViz * msg = (chassis_control_msgs__msg__PurepursuitViz *)allocator.allocate(sizeof(chassis_control_msgs__msg__PurepursuitViz), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chassis_control_msgs__msg__PurepursuitViz));
  bool success = chassis_control_msgs__msg__PurepursuitViz__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
chassis_control_msgs__msg__PurepursuitViz__destroy(chassis_control_msgs__msg__PurepursuitViz * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    chassis_control_msgs__msg__PurepursuitViz__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
chassis_control_msgs__msg__PurepursuitViz__Sequence__init(chassis_control_msgs__msg__PurepursuitViz__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chassis_control_msgs__msg__PurepursuitViz * data = NULL;

  if (size) {
    data = (chassis_control_msgs__msg__PurepursuitViz *)allocator.zero_allocate(size, sizeof(chassis_control_msgs__msg__PurepursuitViz), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chassis_control_msgs__msg__PurepursuitViz__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chassis_control_msgs__msg__PurepursuitViz__fini(&data[i - 1]);
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
chassis_control_msgs__msg__PurepursuitViz__Sequence__fini(chassis_control_msgs__msg__PurepursuitViz__Sequence * array)
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
      chassis_control_msgs__msg__PurepursuitViz__fini(&array->data[i]);
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

chassis_control_msgs__msg__PurepursuitViz__Sequence *
chassis_control_msgs__msg__PurepursuitViz__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chassis_control_msgs__msg__PurepursuitViz__Sequence * array = (chassis_control_msgs__msg__PurepursuitViz__Sequence *)allocator.allocate(sizeof(chassis_control_msgs__msg__PurepursuitViz__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = chassis_control_msgs__msg__PurepursuitViz__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
chassis_control_msgs__msg__PurepursuitViz__Sequence__destroy(chassis_control_msgs__msg__PurepursuitViz__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    chassis_control_msgs__msg__PurepursuitViz__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
chassis_control_msgs__msg__PurepursuitViz__Sequence__are_equal(const chassis_control_msgs__msg__PurepursuitViz__Sequence * lhs, const chassis_control_msgs__msg__PurepursuitViz__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!chassis_control_msgs__msg__PurepursuitViz__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
chassis_control_msgs__msg__PurepursuitViz__Sequence__copy(
  const chassis_control_msgs__msg__PurepursuitViz__Sequence * input,
  chassis_control_msgs__msg__PurepursuitViz__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(chassis_control_msgs__msg__PurepursuitViz);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    chassis_control_msgs__msg__PurepursuitViz * data =
      (chassis_control_msgs__msg__PurepursuitViz *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!chassis_control_msgs__msg__PurepursuitViz__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          chassis_control_msgs__msg__PurepursuitViz__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!chassis_control_msgs__msg__PurepursuitViz__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
