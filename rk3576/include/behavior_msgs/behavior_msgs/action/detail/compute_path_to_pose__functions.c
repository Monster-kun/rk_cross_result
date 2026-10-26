// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from behavior_msgs:action/ComputePathToPose.idl
// generated code does not contain a copyright notice
#include "behavior_msgs/action/detail/compute_path_to_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `goal`
// Member `start`
// Member `through_goals`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `global_planner_id`
// Member `task_id`
// Member `ros_goal_uuid`
// Member `map_version`
// Member `planning_attempt_id`
#include "rosidl_runtime_c/string_functions.h"

bool
behavior_msgs__action__ComputePathToPose_Goal__init(behavior_msgs__action__ComputePathToPose_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // goal
  if (!geometry_msgs__msg__PoseStamped__init(&msg->goal)) {
    behavior_msgs__action__ComputePathToPose_Goal__fini(msg);
    return false;
  }
  // start
  if (!geometry_msgs__msg__PoseStamped__init(&msg->start)) {
    behavior_msgs__action__ComputePathToPose_Goal__fini(msg);
    return false;
  }
  // use_start
  // defer_publication
  // through_goals
  if (!geometry_msgs__msg__PoseStamped__Sequence__init(&msg->through_goals, 0)) {
    behavior_msgs__action__ComputePathToPose_Goal__fini(msg);
    return false;
  }
  // loop_goals
  // global_planner_id
  if (!rosidl_runtime_c__String__init(&msg->global_planner_id)) {
    behavior_msgs__action__ComputePathToPose_Goal__fini(msg);
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    behavior_msgs__action__ComputePathToPose_Goal__fini(msg);
    return false;
  }
  // ros_goal_uuid
  if (!rosidl_runtime_c__String__init(&msg->ros_goal_uuid)) {
    behavior_msgs__action__ComputePathToPose_Goal__fini(msg);
    return false;
  }
  // map_version
  if (!rosidl_runtime_c__String__init(&msg->map_version)) {
    behavior_msgs__action__ComputePathToPose_Goal__fini(msg);
    return false;
  }
  // planning_attempt_id
  if (!rosidl_runtime_c__String__init(&msg->planning_attempt_id)) {
    behavior_msgs__action__ComputePathToPose_Goal__fini(msg);
    return false;
  }
  return true;
}

void
behavior_msgs__action__ComputePathToPose_Goal__fini(behavior_msgs__action__ComputePathToPose_Goal * msg)
{
  if (!msg) {
    return;
  }
  // goal
  geometry_msgs__msg__PoseStamped__fini(&msg->goal);
  // start
  geometry_msgs__msg__PoseStamped__fini(&msg->start);
  // use_start
  // defer_publication
  // through_goals
  geometry_msgs__msg__PoseStamped__Sequence__fini(&msg->through_goals);
  // loop_goals
  // global_planner_id
  rosidl_runtime_c__String__fini(&msg->global_planner_id);
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
  // ros_goal_uuid
  rosidl_runtime_c__String__fini(&msg->ros_goal_uuid);
  // map_version
  rosidl_runtime_c__String__fini(&msg->map_version);
  // planning_attempt_id
  rosidl_runtime_c__String__fini(&msg->planning_attempt_id);
}

bool
behavior_msgs__action__ComputePathToPose_Goal__are_equal(const behavior_msgs__action__ComputePathToPose_Goal * lhs, const behavior_msgs__action__ComputePathToPose_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  // start
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->start), &(rhs->start)))
  {
    return false;
  }
  // use_start
  if (lhs->use_start != rhs->use_start) {
    return false;
  }
  // defer_publication
  if (lhs->defer_publication != rhs->defer_publication) {
    return false;
  }
  // through_goals
  if (!geometry_msgs__msg__PoseStamped__Sequence__are_equal(
      &(lhs->through_goals), &(rhs->through_goals)))
  {
    return false;
  }
  // loop_goals
  if (lhs->loop_goals != rhs->loop_goals) {
    return false;
  }
  // global_planner_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->global_planner_id), &(rhs->global_planner_id)))
  {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_id), &(rhs->task_id)))
  {
    return false;
  }
  // ros_goal_uuid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ros_goal_uuid), &(rhs->ros_goal_uuid)))
  {
    return false;
  }
  // map_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map_version), &(rhs->map_version)))
  {
    return false;
  }
  // planning_attempt_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->planning_attempt_id), &(rhs->planning_attempt_id)))
  {
    return false;
  }
  return true;
}

bool
behavior_msgs__action__ComputePathToPose_Goal__copy(
  const behavior_msgs__action__ComputePathToPose_Goal * input,
  behavior_msgs__action__ComputePathToPose_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // goal
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  // start
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->start), &(output->start)))
  {
    return false;
  }
  // use_start
  output->use_start = input->use_start;
  // defer_publication
  output->defer_publication = input->defer_publication;
  // through_goals
  if (!geometry_msgs__msg__PoseStamped__Sequence__copy(
      &(input->through_goals), &(output->through_goals)))
  {
    return false;
  }
  // loop_goals
  output->loop_goals = input->loop_goals;
  // global_planner_id
  if (!rosidl_runtime_c__String__copy(
      &(input->global_planner_id), &(output->global_planner_id)))
  {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__copy(
      &(input->task_id), &(output->task_id)))
  {
    return false;
  }
  // ros_goal_uuid
  if (!rosidl_runtime_c__String__copy(
      &(input->ros_goal_uuid), &(output->ros_goal_uuid)))
  {
    return false;
  }
  // map_version
  if (!rosidl_runtime_c__String__copy(
      &(input->map_version), &(output->map_version)))
  {
    return false;
  }
  // planning_attempt_id
  if (!rosidl_runtime_c__String__copy(
      &(input->planning_attempt_id), &(output->planning_attempt_id)))
  {
    return false;
  }
  return true;
}

behavior_msgs__action__ComputePathToPose_Goal *
behavior_msgs__action__ComputePathToPose_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__action__ComputePathToPose_Goal * msg = (behavior_msgs__action__ComputePathToPose_Goal *)allocator.allocate(sizeof(behavior_msgs__action__ComputePathToPose_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_msgs__action__ComputePathToPose_Goal));
  bool success = behavior_msgs__action__ComputePathToPose_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_msgs__action__ComputePathToPose_Goal__destroy(behavior_msgs__action__ComputePathToPose_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_msgs__action__ComputePathToPose_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_msgs__action__ComputePathToPose_Goal__Sequence__init(behavior_msgs__action__ComputePathToPose_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__action__ComputePathToPose_Goal * data = NULL;

  if (size) {
    data = (behavior_msgs__action__ComputePathToPose_Goal *)allocator.zero_allocate(size, sizeof(behavior_msgs__action__ComputePathToPose_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_msgs__action__ComputePathToPose_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_msgs__action__ComputePathToPose_Goal__fini(&data[i - 1]);
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
behavior_msgs__action__ComputePathToPose_Goal__Sequence__fini(behavior_msgs__action__ComputePathToPose_Goal__Sequence * array)
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
      behavior_msgs__action__ComputePathToPose_Goal__fini(&array->data[i]);
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

behavior_msgs__action__ComputePathToPose_Goal__Sequence *
behavior_msgs__action__ComputePathToPose_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__action__ComputePathToPose_Goal__Sequence * array = (behavior_msgs__action__ComputePathToPose_Goal__Sequence *)allocator.allocate(sizeof(behavior_msgs__action__ComputePathToPose_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_msgs__action__ComputePathToPose_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_msgs__action__ComputePathToPose_Goal__Sequence__destroy(behavior_msgs__action__ComputePathToPose_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_msgs__action__ComputePathToPose_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_msgs__action__ComputePathToPose_Goal__Sequence__are_equal(const behavior_msgs__action__ComputePathToPose_Goal__Sequence * lhs, const behavior_msgs__action__ComputePathToPose_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_msgs__action__ComputePathToPose_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_msgs__action__ComputePathToPose_Goal__Sequence__copy(
  const behavior_msgs__action__ComputePathToPose_Goal__Sequence * input,
  behavior_msgs__action__ComputePathToPose_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_msgs__action__ComputePathToPose_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_msgs__action__ComputePathToPose_Goal * data =
      (behavior_msgs__action__ComputePathToPose_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_msgs__action__ComputePathToPose_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_msgs__action__ComputePathToPose_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_msgs__action__ComputePathToPose_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `path`
#include "planning_msgs/msg/detail/global_path__functions.h"
// Member `error_msg`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
behavior_msgs__action__ComputePathToPose_Result__init(behavior_msgs__action__ComputePathToPose_Result * msg)
{
  if (!msg) {
    return false;
  }
  // path
  if (!planning_msgs__msg__GlobalPath__init(&msg->path)) {
    behavior_msgs__action__ComputePathToPose_Result__fini(msg);
    return false;
  }
  // error_code
  // error_msg
  if (!rosidl_runtime_c__String__init(&msg->error_msg)) {
    behavior_msgs__action__ComputePathToPose_Result__fini(msg);
    return false;
  }
  return true;
}

void
behavior_msgs__action__ComputePathToPose_Result__fini(behavior_msgs__action__ComputePathToPose_Result * msg)
{
  if (!msg) {
    return;
  }
  // path
  planning_msgs__msg__GlobalPath__fini(&msg->path);
  // error_code
  // error_msg
  rosidl_runtime_c__String__fini(&msg->error_msg);
}

bool
behavior_msgs__action__ComputePathToPose_Result__are_equal(const behavior_msgs__action__ComputePathToPose_Result * lhs, const behavior_msgs__action__ComputePathToPose_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // path
  if (!planning_msgs__msg__GlobalPath__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  // error_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_msg), &(rhs->error_msg)))
  {
    return false;
  }
  return true;
}

bool
behavior_msgs__action__ComputePathToPose_Result__copy(
  const behavior_msgs__action__ComputePathToPose_Result * input,
  behavior_msgs__action__ComputePathToPose_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // path
  if (!planning_msgs__msg__GlobalPath__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  // error_code
  output->error_code = input->error_code;
  // error_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->error_msg), &(output->error_msg)))
  {
    return false;
  }
  return true;
}

behavior_msgs__action__ComputePathToPose_Result *
behavior_msgs__action__ComputePathToPose_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__action__ComputePathToPose_Result * msg = (behavior_msgs__action__ComputePathToPose_Result *)allocator.allocate(sizeof(behavior_msgs__action__ComputePathToPose_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_msgs__action__ComputePathToPose_Result));
  bool success = behavior_msgs__action__ComputePathToPose_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_msgs__action__ComputePathToPose_Result__destroy(behavior_msgs__action__ComputePathToPose_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_msgs__action__ComputePathToPose_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_msgs__action__ComputePathToPose_Result__Sequence__init(behavior_msgs__action__ComputePathToPose_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__action__ComputePathToPose_Result * data = NULL;

  if (size) {
    data = (behavior_msgs__action__ComputePathToPose_Result *)allocator.zero_allocate(size, sizeof(behavior_msgs__action__ComputePathToPose_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_msgs__action__ComputePathToPose_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_msgs__action__ComputePathToPose_Result__fini(&data[i - 1]);
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
behavior_msgs__action__ComputePathToPose_Result__Sequence__fini(behavior_msgs__action__ComputePathToPose_Result__Sequence * array)
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
      behavior_msgs__action__ComputePathToPose_Result__fini(&array->data[i]);
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

behavior_msgs__action__ComputePathToPose_Result__Sequence *
behavior_msgs__action__ComputePathToPose_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__action__ComputePathToPose_Result__Sequence * array = (behavior_msgs__action__ComputePathToPose_Result__Sequence *)allocator.allocate(sizeof(behavior_msgs__action__ComputePathToPose_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_msgs__action__ComputePathToPose_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_msgs__action__ComputePathToPose_Result__Sequence__destroy(behavior_msgs__action__ComputePathToPose_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_msgs__action__ComputePathToPose_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_msgs__action__ComputePathToPose_Result__Sequence__are_equal(const behavior_msgs__action__ComputePathToPose_Result__Sequence * lhs, const behavior_msgs__action__ComputePathToPose_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_msgs__action__ComputePathToPose_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_msgs__action__ComputePathToPose_Result__Sequence__copy(
  const behavior_msgs__action__ComputePathToPose_Result__Sequence * input,
  behavior_msgs__action__ComputePathToPose_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_msgs__action__ComputePathToPose_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_msgs__action__ComputePathToPose_Result * data =
      (behavior_msgs__action__ComputePathToPose_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_msgs__action__ComputePathToPose_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_msgs__action__ComputePathToPose_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_msgs__action__ComputePathToPose_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
behavior_msgs__action__ComputePathToPose_Feedback__init(behavior_msgs__action__ComputePathToPose_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
behavior_msgs__action__ComputePathToPose_Feedback__fini(behavior_msgs__action__ComputePathToPose_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
behavior_msgs__action__ComputePathToPose_Feedback__are_equal(const behavior_msgs__action__ComputePathToPose_Feedback * lhs, const behavior_msgs__action__ComputePathToPose_Feedback * rhs)
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
behavior_msgs__action__ComputePathToPose_Feedback__copy(
  const behavior_msgs__action__ComputePathToPose_Feedback * input,
  behavior_msgs__action__ComputePathToPose_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

behavior_msgs__action__ComputePathToPose_Feedback *
behavior_msgs__action__ComputePathToPose_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__action__ComputePathToPose_Feedback * msg = (behavior_msgs__action__ComputePathToPose_Feedback *)allocator.allocate(sizeof(behavior_msgs__action__ComputePathToPose_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_msgs__action__ComputePathToPose_Feedback));
  bool success = behavior_msgs__action__ComputePathToPose_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_msgs__action__ComputePathToPose_Feedback__destroy(behavior_msgs__action__ComputePathToPose_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_msgs__action__ComputePathToPose_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_msgs__action__ComputePathToPose_Feedback__Sequence__init(behavior_msgs__action__ComputePathToPose_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__action__ComputePathToPose_Feedback * data = NULL;

  if (size) {
    data = (behavior_msgs__action__ComputePathToPose_Feedback *)allocator.zero_allocate(size, sizeof(behavior_msgs__action__ComputePathToPose_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_msgs__action__ComputePathToPose_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_msgs__action__ComputePathToPose_Feedback__fini(&data[i - 1]);
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
behavior_msgs__action__ComputePathToPose_Feedback__Sequence__fini(behavior_msgs__action__ComputePathToPose_Feedback__Sequence * array)
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
      behavior_msgs__action__ComputePathToPose_Feedback__fini(&array->data[i]);
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

behavior_msgs__action__ComputePathToPose_Feedback__Sequence *
behavior_msgs__action__ComputePathToPose_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__action__ComputePathToPose_Feedback__Sequence * array = (behavior_msgs__action__ComputePathToPose_Feedback__Sequence *)allocator.allocate(sizeof(behavior_msgs__action__ComputePathToPose_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_msgs__action__ComputePathToPose_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_msgs__action__ComputePathToPose_Feedback__Sequence__destroy(behavior_msgs__action__ComputePathToPose_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_msgs__action__ComputePathToPose_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_msgs__action__ComputePathToPose_Feedback__Sequence__are_equal(const behavior_msgs__action__ComputePathToPose_Feedback__Sequence * lhs, const behavior_msgs__action__ComputePathToPose_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_msgs__action__ComputePathToPose_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_msgs__action__ComputePathToPose_Feedback__Sequence__copy(
  const behavior_msgs__action__ComputePathToPose_Feedback__Sequence * input,
  behavior_msgs__action__ComputePathToPose_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_msgs__action__ComputePathToPose_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_msgs__action__ComputePathToPose_Feedback * data =
      (behavior_msgs__action__ComputePathToPose_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_msgs__action__ComputePathToPose_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_msgs__action__ComputePathToPose_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_msgs__action__ComputePathToPose_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "behavior_msgs/action/detail/compute_path_to_pose__functions.h"

bool
behavior_msgs__action__ComputePathToPose_SendGoal_Request__init(behavior_msgs__action__ComputePathToPose_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    behavior_msgs__action__ComputePathToPose_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!behavior_msgs__action__ComputePathToPose_Goal__init(&msg->goal)) {
    behavior_msgs__action__ComputePathToPose_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
behavior_msgs__action__ComputePathToPose_SendGoal_Request__fini(behavior_msgs__action__ComputePathToPose_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  behavior_msgs__action__ComputePathToPose_Goal__fini(&msg->goal);
}

bool
behavior_msgs__action__ComputePathToPose_SendGoal_Request__are_equal(const behavior_msgs__action__ComputePathToPose_SendGoal_Request * lhs, const behavior_msgs__action__ComputePathToPose_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!behavior_msgs__action__ComputePathToPose_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
behavior_msgs__action__ComputePathToPose_SendGoal_Request__copy(
  const behavior_msgs__action__ComputePathToPose_SendGoal_Request * input,
  behavior_msgs__action__ComputePathToPose_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!behavior_msgs__action__ComputePathToPose_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

behavior_msgs__action__ComputePathToPose_SendGoal_Request *
behavior_msgs__action__ComputePathToPose_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__action__ComputePathToPose_SendGoal_Request * msg = (behavior_msgs__action__ComputePathToPose_SendGoal_Request *)allocator.allocate(sizeof(behavior_msgs__action__ComputePathToPose_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_msgs__action__ComputePathToPose_SendGoal_Request));
  bool success = behavior_msgs__action__ComputePathToPose_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_msgs__action__ComputePathToPose_SendGoal_Request__destroy(behavior_msgs__action__ComputePathToPose_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_msgs__action__ComputePathToPose_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_msgs__action__ComputePathToPose_SendGoal_Request__Sequence__init(behavior_msgs__action__ComputePathToPose_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__action__ComputePathToPose_SendGoal_Request * data = NULL;

  if (size) {
    data = (behavior_msgs__action__ComputePathToPose_SendGoal_Request *)allocator.zero_allocate(size, sizeof(behavior_msgs__action__ComputePathToPose_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_msgs__action__ComputePathToPose_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_msgs__action__ComputePathToPose_SendGoal_Request__fini(&data[i - 1]);
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
behavior_msgs__action__ComputePathToPose_SendGoal_Request__Sequence__fini(behavior_msgs__action__ComputePathToPose_SendGoal_Request__Sequence * array)
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
      behavior_msgs__action__ComputePathToPose_SendGoal_Request__fini(&array->data[i]);
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

behavior_msgs__action__ComputePathToPose_SendGoal_Request__Sequence *
behavior_msgs__action__ComputePathToPose_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__action__ComputePathToPose_SendGoal_Request__Sequence * array = (behavior_msgs__action__ComputePathToPose_SendGoal_Request__Sequence *)allocator.allocate(sizeof(behavior_msgs__action__ComputePathToPose_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_msgs__action__ComputePathToPose_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_msgs__action__ComputePathToPose_SendGoal_Request__Sequence__destroy(behavior_msgs__action__ComputePathToPose_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_msgs__action__ComputePathToPose_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_msgs__action__ComputePathToPose_SendGoal_Request__Sequence__are_equal(const behavior_msgs__action__ComputePathToPose_SendGoal_Request__Sequence * lhs, const behavior_msgs__action__ComputePathToPose_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_msgs__action__ComputePathToPose_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_msgs__action__ComputePathToPose_SendGoal_Request__Sequence__copy(
  const behavior_msgs__action__ComputePathToPose_SendGoal_Request__Sequence * input,
  behavior_msgs__action__ComputePathToPose_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_msgs__action__ComputePathToPose_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_msgs__action__ComputePathToPose_SendGoal_Request * data =
      (behavior_msgs__action__ComputePathToPose_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_msgs__action__ComputePathToPose_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_msgs__action__ComputePathToPose_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_msgs__action__ComputePathToPose_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
behavior_msgs__action__ComputePathToPose_SendGoal_Response__init(behavior_msgs__action__ComputePathToPose_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    behavior_msgs__action__ComputePathToPose_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
behavior_msgs__action__ComputePathToPose_SendGoal_Response__fini(behavior_msgs__action__ComputePathToPose_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
behavior_msgs__action__ComputePathToPose_SendGoal_Response__are_equal(const behavior_msgs__action__ComputePathToPose_SendGoal_Response * lhs, const behavior_msgs__action__ComputePathToPose_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
behavior_msgs__action__ComputePathToPose_SendGoal_Response__copy(
  const behavior_msgs__action__ComputePathToPose_SendGoal_Response * input,
  behavior_msgs__action__ComputePathToPose_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

behavior_msgs__action__ComputePathToPose_SendGoal_Response *
behavior_msgs__action__ComputePathToPose_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__action__ComputePathToPose_SendGoal_Response * msg = (behavior_msgs__action__ComputePathToPose_SendGoal_Response *)allocator.allocate(sizeof(behavior_msgs__action__ComputePathToPose_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_msgs__action__ComputePathToPose_SendGoal_Response));
  bool success = behavior_msgs__action__ComputePathToPose_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_msgs__action__ComputePathToPose_SendGoal_Response__destroy(behavior_msgs__action__ComputePathToPose_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_msgs__action__ComputePathToPose_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_msgs__action__ComputePathToPose_SendGoal_Response__Sequence__init(behavior_msgs__action__ComputePathToPose_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__action__ComputePathToPose_SendGoal_Response * data = NULL;

  if (size) {
    data = (behavior_msgs__action__ComputePathToPose_SendGoal_Response *)allocator.zero_allocate(size, sizeof(behavior_msgs__action__ComputePathToPose_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_msgs__action__ComputePathToPose_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_msgs__action__ComputePathToPose_SendGoal_Response__fini(&data[i - 1]);
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
behavior_msgs__action__ComputePathToPose_SendGoal_Response__Sequence__fini(behavior_msgs__action__ComputePathToPose_SendGoal_Response__Sequence * array)
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
      behavior_msgs__action__ComputePathToPose_SendGoal_Response__fini(&array->data[i]);
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

behavior_msgs__action__ComputePathToPose_SendGoal_Response__Sequence *
behavior_msgs__action__ComputePathToPose_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__action__ComputePathToPose_SendGoal_Response__Sequence * array = (behavior_msgs__action__ComputePathToPose_SendGoal_Response__Sequence *)allocator.allocate(sizeof(behavior_msgs__action__ComputePathToPose_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_msgs__action__ComputePathToPose_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_msgs__action__ComputePathToPose_SendGoal_Response__Sequence__destroy(behavior_msgs__action__ComputePathToPose_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_msgs__action__ComputePathToPose_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_msgs__action__ComputePathToPose_SendGoal_Response__Sequence__are_equal(const behavior_msgs__action__ComputePathToPose_SendGoal_Response__Sequence * lhs, const behavior_msgs__action__ComputePathToPose_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_msgs__action__ComputePathToPose_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_msgs__action__ComputePathToPose_SendGoal_Response__Sequence__copy(
  const behavior_msgs__action__ComputePathToPose_SendGoal_Response__Sequence * input,
  behavior_msgs__action__ComputePathToPose_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_msgs__action__ComputePathToPose_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_msgs__action__ComputePathToPose_SendGoal_Response * data =
      (behavior_msgs__action__ComputePathToPose_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_msgs__action__ComputePathToPose_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_msgs__action__ComputePathToPose_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_msgs__action__ComputePathToPose_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
behavior_msgs__action__ComputePathToPose_GetResult_Request__init(behavior_msgs__action__ComputePathToPose_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    behavior_msgs__action__ComputePathToPose_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
behavior_msgs__action__ComputePathToPose_GetResult_Request__fini(behavior_msgs__action__ComputePathToPose_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
behavior_msgs__action__ComputePathToPose_GetResult_Request__are_equal(const behavior_msgs__action__ComputePathToPose_GetResult_Request * lhs, const behavior_msgs__action__ComputePathToPose_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
behavior_msgs__action__ComputePathToPose_GetResult_Request__copy(
  const behavior_msgs__action__ComputePathToPose_GetResult_Request * input,
  behavior_msgs__action__ComputePathToPose_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

behavior_msgs__action__ComputePathToPose_GetResult_Request *
behavior_msgs__action__ComputePathToPose_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__action__ComputePathToPose_GetResult_Request * msg = (behavior_msgs__action__ComputePathToPose_GetResult_Request *)allocator.allocate(sizeof(behavior_msgs__action__ComputePathToPose_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_msgs__action__ComputePathToPose_GetResult_Request));
  bool success = behavior_msgs__action__ComputePathToPose_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_msgs__action__ComputePathToPose_GetResult_Request__destroy(behavior_msgs__action__ComputePathToPose_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_msgs__action__ComputePathToPose_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_msgs__action__ComputePathToPose_GetResult_Request__Sequence__init(behavior_msgs__action__ComputePathToPose_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__action__ComputePathToPose_GetResult_Request * data = NULL;

  if (size) {
    data = (behavior_msgs__action__ComputePathToPose_GetResult_Request *)allocator.zero_allocate(size, sizeof(behavior_msgs__action__ComputePathToPose_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_msgs__action__ComputePathToPose_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_msgs__action__ComputePathToPose_GetResult_Request__fini(&data[i - 1]);
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
behavior_msgs__action__ComputePathToPose_GetResult_Request__Sequence__fini(behavior_msgs__action__ComputePathToPose_GetResult_Request__Sequence * array)
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
      behavior_msgs__action__ComputePathToPose_GetResult_Request__fini(&array->data[i]);
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

behavior_msgs__action__ComputePathToPose_GetResult_Request__Sequence *
behavior_msgs__action__ComputePathToPose_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__action__ComputePathToPose_GetResult_Request__Sequence * array = (behavior_msgs__action__ComputePathToPose_GetResult_Request__Sequence *)allocator.allocate(sizeof(behavior_msgs__action__ComputePathToPose_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_msgs__action__ComputePathToPose_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_msgs__action__ComputePathToPose_GetResult_Request__Sequence__destroy(behavior_msgs__action__ComputePathToPose_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_msgs__action__ComputePathToPose_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_msgs__action__ComputePathToPose_GetResult_Request__Sequence__are_equal(const behavior_msgs__action__ComputePathToPose_GetResult_Request__Sequence * lhs, const behavior_msgs__action__ComputePathToPose_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_msgs__action__ComputePathToPose_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_msgs__action__ComputePathToPose_GetResult_Request__Sequence__copy(
  const behavior_msgs__action__ComputePathToPose_GetResult_Request__Sequence * input,
  behavior_msgs__action__ComputePathToPose_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_msgs__action__ComputePathToPose_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_msgs__action__ComputePathToPose_GetResult_Request * data =
      (behavior_msgs__action__ComputePathToPose_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_msgs__action__ComputePathToPose_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_msgs__action__ComputePathToPose_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_msgs__action__ComputePathToPose_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "behavior_msgs/action/detail/compute_path_to_pose__functions.h"

bool
behavior_msgs__action__ComputePathToPose_GetResult_Response__init(behavior_msgs__action__ComputePathToPose_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!behavior_msgs__action__ComputePathToPose_Result__init(&msg->result)) {
    behavior_msgs__action__ComputePathToPose_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
behavior_msgs__action__ComputePathToPose_GetResult_Response__fini(behavior_msgs__action__ComputePathToPose_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  behavior_msgs__action__ComputePathToPose_Result__fini(&msg->result);
}

bool
behavior_msgs__action__ComputePathToPose_GetResult_Response__are_equal(const behavior_msgs__action__ComputePathToPose_GetResult_Response * lhs, const behavior_msgs__action__ComputePathToPose_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!behavior_msgs__action__ComputePathToPose_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
behavior_msgs__action__ComputePathToPose_GetResult_Response__copy(
  const behavior_msgs__action__ComputePathToPose_GetResult_Response * input,
  behavior_msgs__action__ComputePathToPose_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!behavior_msgs__action__ComputePathToPose_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

behavior_msgs__action__ComputePathToPose_GetResult_Response *
behavior_msgs__action__ComputePathToPose_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__action__ComputePathToPose_GetResult_Response * msg = (behavior_msgs__action__ComputePathToPose_GetResult_Response *)allocator.allocate(sizeof(behavior_msgs__action__ComputePathToPose_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_msgs__action__ComputePathToPose_GetResult_Response));
  bool success = behavior_msgs__action__ComputePathToPose_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_msgs__action__ComputePathToPose_GetResult_Response__destroy(behavior_msgs__action__ComputePathToPose_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_msgs__action__ComputePathToPose_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_msgs__action__ComputePathToPose_GetResult_Response__Sequence__init(behavior_msgs__action__ComputePathToPose_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__action__ComputePathToPose_GetResult_Response * data = NULL;

  if (size) {
    data = (behavior_msgs__action__ComputePathToPose_GetResult_Response *)allocator.zero_allocate(size, sizeof(behavior_msgs__action__ComputePathToPose_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_msgs__action__ComputePathToPose_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_msgs__action__ComputePathToPose_GetResult_Response__fini(&data[i - 1]);
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
behavior_msgs__action__ComputePathToPose_GetResult_Response__Sequence__fini(behavior_msgs__action__ComputePathToPose_GetResult_Response__Sequence * array)
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
      behavior_msgs__action__ComputePathToPose_GetResult_Response__fini(&array->data[i]);
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

behavior_msgs__action__ComputePathToPose_GetResult_Response__Sequence *
behavior_msgs__action__ComputePathToPose_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__action__ComputePathToPose_GetResult_Response__Sequence * array = (behavior_msgs__action__ComputePathToPose_GetResult_Response__Sequence *)allocator.allocate(sizeof(behavior_msgs__action__ComputePathToPose_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_msgs__action__ComputePathToPose_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_msgs__action__ComputePathToPose_GetResult_Response__Sequence__destroy(behavior_msgs__action__ComputePathToPose_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_msgs__action__ComputePathToPose_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_msgs__action__ComputePathToPose_GetResult_Response__Sequence__are_equal(const behavior_msgs__action__ComputePathToPose_GetResult_Response__Sequence * lhs, const behavior_msgs__action__ComputePathToPose_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_msgs__action__ComputePathToPose_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_msgs__action__ComputePathToPose_GetResult_Response__Sequence__copy(
  const behavior_msgs__action__ComputePathToPose_GetResult_Response__Sequence * input,
  behavior_msgs__action__ComputePathToPose_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_msgs__action__ComputePathToPose_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_msgs__action__ComputePathToPose_GetResult_Response * data =
      (behavior_msgs__action__ComputePathToPose_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_msgs__action__ComputePathToPose_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_msgs__action__ComputePathToPose_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_msgs__action__ComputePathToPose_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "behavior_msgs/action/detail/compute_path_to_pose__functions.h"

bool
behavior_msgs__action__ComputePathToPose_FeedbackMessage__init(behavior_msgs__action__ComputePathToPose_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    behavior_msgs__action__ComputePathToPose_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!behavior_msgs__action__ComputePathToPose_Feedback__init(&msg->feedback)) {
    behavior_msgs__action__ComputePathToPose_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
behavior_msgs__action__ComputePathToPose_FeedbackMessage__fini(behavior_msgs__action__ComputePathToPose_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  behavior_msgs__action__ComputePathToPose_Feedback__fini(&msg->feedback);
}

bool
behavior_msgs__action__ComputePathToPose_FeedbackMessage__are_equal(const behavior_msgs__action__ComputePathToPose_FeedbackMessage * lhs, const behavior_msgs__action__ComputePathToPose_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!behavior_msgs__action__ComputePathToPose_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
behavior_msgs__action__ComputePathToPose_FeedbackMessage__copy(
  const behavior_msgs__action__ComputePathToPose_FeedbackMessage * input,
  behavior_msgs__action__ComputePathToPose_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!behavior_msgs__action__ComputePathToPose_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

behavior_msgs__action__ComputePathToPose_FeedbackMessage *
behavior_msgs__action__ComputePathToPose_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__action__ComputePathToPose_FeedbackMessage * msg = (behavior_msgs__action__ComputePathToPose_FeedbackMessage *)allocator.allocate(sizeof(behavior_msgs__action__ComputePathToPose_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_msgs__action__ComputePathToPose_FeedbackMessage));
  bool success = behavior_msgs__action__ComputePathToPose_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_msgs__action__ComputePathToPose_FeedbackMessage__destroy(behavior_msgs__action__ComputePathToPose_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_msgs__action__ComputePathToPose_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_msgs__action__ComputePathToPose_FeedbackMessage__Sequence__init(behavior_msgs__action__ComputePathToPose_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__action__ComputePathToPose_FeedbackMessage * data = NULL;

  if (size) {
    data = (behavior_msgs__action__ComputePathToPose_FeedbackMessage *)allocator.zero_allocate(size, sizeof(behavior_msgs__action__ComputePathToPose_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_msgs__action__ComputePathToPose_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_msgs__action__ComputePathToPose_FeedbackMessage__fini(&data[i - 1]);
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
behavior_msgs__action__ComputePathToPose_FeedbackMessage__Sequence__fini(behavior_msgs__action__ComputePathToPose_FeedbackMessage__Sequence * array)
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
      behavior_msgs__action__ComputePathToPose_FeedbackMessage__fini(&array->data[i]);
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

behavior_msgs__action__ComputePathToPose_FeedbackMessage__Sequence *
behavior_msgs__action__ComputePathToPose_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_msgs__action__ComputePathToPose_FeedbackMessage__Sequence * array = (behavior_msgs__action__ComputePathToPose_FeedbackMessage__Sequence *)allocator.allocate(sizeof(behavior_msgs__action__ComputePathToPose_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_msgs__action__ComputePathToPose_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_msgs__action__ComputePathToPose_FeedbackMessage__Sequence__destroy(behavior_msgs__action__ComputePathToPose_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_msgs__action__ComputePathToPose_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_msgs__action__ComputePathToPose_FeedbackMessage__Sequence__are_equal(const behavior_msgs__action__ComputePathToPose_FeedbackMessage__Sequence * lhs, const behavior_msgs__action__ComputePathToPose_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_msgs__action__ComputePathToPose_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_msgs__action__ComputePathToPose_FeedbackMessage__Sequence__copy(
  const behavior_msgs__action__ComputePathToPose_FeedbackMessage__Sequence * input,
  behavior_msgs__action__ComputePathToPose_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_msgs__action__ComputePathToPose_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_msgs__action__ComputePathToPose_FeedbackMessage * data =
      (behavior_msgs__action__ComputePathToPose_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_msgs__action__ComputePathToPose_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_msgs__action__ComputePathToPose_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_msgs__action__ComputePathToPose_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
