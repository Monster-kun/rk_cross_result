// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from web_navigation_msgs:msg/NavigationState.idl
// generated code does not contain a copyright notice
#include "web_navigation_msgs/msg/detail/navigation_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `manager_boot_id`
// Member `map_version`
// Member `map_name`
// Member `frame_id`
// Member `control_owner_label`
// Member `task_id`
// Member `ros_goal_uuid`
// Member `task_status_text`
// Member `request_id`
// Member `task_device_label`
// Member `error_code`
// Member `error_message`
// Member `sequence_state`
#include "rosidl_runtime_c/string_functions.h"
// Member `vehicle_pose`
// Member `effective_endpoint`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `linear_velocity`
// Member `angular_velocity`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `route`
#include "planning_msgs/msg/detail/global_path__functions.h"
// Member `sequence`
#include "web_navigation_msgs/msg/detail/sequence_waypoint__functions.h"

bool
web_navigation_msgs__msg__NavigationState__init(web_navigation_msgs__msg__NavigationState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    web_navigation_msgs__msg__NavigationState__fini(msg);
    return false;
  }
  // manager_boot_id
  if (!rosidl_runtime_c__String__init(&msg->manager_boot_id)) {
    web_navigation_msgs__msg__NavigationState__fini(msg);
    return false;
  }
  // state_revision
  // map_ready
  // map_version
  if (!rosidl_runtime_c__String__init(&msg->map_version)) {
    web_navigation_msgs__msg__NavigationState__fini(msg);
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__init(&msg->map_name)) {
    web_navigation_msgs__msg__NavigationState__fini(msg);
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__init(&msg->frame_id)) {
    web_navigation_msgs__msg__NavigationState__fini(msg);
    return false;
  }
  // vehicle_pose
  if (!geometry_msgs__msg__Pose__init(&msg->vehicle_pose)) {
    web_navigation_msgs__msg__NavigationState__fini(msg);
    return false;
  }
  // linear_velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->linear_velocity)) {
    web_navigation_msgs__msg__NavigationState__fini(msg);
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->angular_velocity)) {
    web_navigation_msgs__msg__NavigationState__fini(msg);
    return false;
  }
  // pose_fresh
  // navigation_synchronized
  // control_held
  // control_owner_label
  if (!rosidl_runtime_c__String__init(&msg->control_owner_label)) {
    web_navigation_msgs__msg__NavigationState__fini(msg);
    return false;
  }
  // control_epoch
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    web_navigation_msgs__msg__NavigationState__fini(msg);
    return false;
  }
  // ros_goal_uuid
  if (!rosidl_runtime_c__String__init(&msg->ros_goal_uuid)) {
    web_navigation_msgs__msg__NavigationState__fini(msg);
    return false;
  }
  // task_status
  // task_status_text
  if (!rosidl_runtime_c__String__init(&msg->task_status_text)) {
    web_navigation_msgs__msg__NavigationState__fini(msg);
    return false;
  }
  // request_id
  if (!rosidl_runtime_c__String__init(&msg->request_id)) {
    web_navigation_msgs__msg__NavigationState__fini(msg);
    return false;
  }
  // task_device_label
  if (!rosidl_runtime_c__String__init(&msg->task_device_label)) {
    web_navigation_msgs__msg__NavigationState__fini(msg);
    return false;
  }
  // requested_x
  // requested_y
  // effective_endpoint
  if (!geometry_msgs__msg__Pose__init(&msg->effective_endpoint)) {
    web_navigation_msgs__msg__NavigationState__fini(msg);
    return false;
  }
  // path_revision
  // route
  if (!planning_msgs__msg__GlobalPath__init(&msg->route)) {
    web_navigation_msgs__msg__NavigationState__fini(msg);
    return false;
  }
  // error_code
  if (!rosidl_runtime_c__String__init(&msg->error_code)) {
    web_navigation_msgs__msg__NavigationState__fini(msg);
    return false;
  }
  // error_message
  if (!rosidl_runtime_c__String__init(&msg->error_message)) {
    web_navigation_msgs__msg__NavigationState__fini(msg);
    return false;
  }
  // sequence
  if (!web_navigation_msgs__msg__SequenceWaypoint__Sequence__init(&msg->sequence, 0)) {
    web_navigation_msgs__msg__NavigationState__fini(msg);
    return false;
  }
  // sequence_index
  // sequence_state
  if (!rosidl_runtime_c__String__init(&msg->sequence_state)) {
    web_navigation_msgs__msg__NavigationState__fini(msg);
    return false;
  }
  // sequence_loop
  return true;
}

void
web_navigation_msgs__msg__NavigationState__fini(web_navigation_msgs__msg__NavigationState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // manager_boot_id
  rosidl_runtime_c__String__fini(&msg->manager_boot_id);
  // state_revision
  // map_ready
  // map_version
  rosidl_runtime_c__String__fini(&msg->map_version);
  // map_name
  rosidl_runtime_c__String__fini(&msg->map_name);
  // frame_id
  rosidl_runtime_c__String__fini(&msg->frame_id);
  // vehicle_pose
  geometry_msgs__msg__Pose__fini(&msg->vehicle_pose);
  // linear_velocity
  geometry_msgs__msg__Vector3__fini(&msg->linear_velocity);
  // angular_velocity
  geometry_msgs__msg__Vector3__fini(&msg->angular_velocity);
  // pose_fresh
  // navigation_synchronized
  // control_held
  // control_owner_label
  rosidl_runtime_c__String__fini(&msg->control_owner_label);
  // control_epoch
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
  // ros_goal_uuid
  rosidl_runtime_c__String__fini(&msg->ros_goal_uuid);
  // task_status
  // task_status_text
  rosidl_runtime_c__String__fini(&msg->task_status_text);
  // request_id
  rosidl_runtime_c__String__fini(&msg->request_id);
  // task_device_label
  rosidl_runtime_c__String__fini(&msg->task_device_label);
  // requested_x
  // requested_y
  // effective_endpoint
  geometry_msgs__msg__Pose__fini(&msg->effective_endpoint);
  // path_revision
  // route
  planning_msgs__msg__GlobalPath__fini(&msg->route);
  // error_code
  rosidl_runtime_c__String__fini(&msg->error_code);
  // error_message
  rosidl_runtime_c__String__fini(&msg->error_message);
  // sequence
  web_navigation_msgs__msg__SequenceWaypoint__Sequence__fini(&msg->sequence);
  // sequence_index
  // sequence_state
  rosidl_runtime_c__String__fini(&msg->sequence_state);
  // sequence_loop
}

bool
web_navigation_msgs__msg__NavigationState__are_equal(const web_navigation_msgs__msg__NavigationState * lhs, const web_navigation_msgs__msg__NavigationState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // manager_boot_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->manager_boot_id), &(rhs->manager_boot_id)))
  {
    return false;
  }
  // state_revision
  if (lhs->state_revision != rhs->state_revision) {
    return false;
  }
  // map_ready
  if (lhs->map_ready != rhs->map_ready) {
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
  // frame_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_id), &(rhs->frame_id)))
  {
    return false;
  }
  // vehicle_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->vehicle_pose), &(rhs->vehicle_pose)))
  {
    return false;
  }
  // linear_velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->linear_velocity), &(rhs->linear_velocity)))
  {
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->angular_velocity), &(rhs->angular_velocity)))
  {
    return false;
  }
  // pose_fresh
  if (lhs->pose_fresh != rhs->pose_fresh) {
    return false;
  }
  // navigation_synchronized
  if (lhs->navigation_synchronized != rhs->navigation_synchronized) {
    return false;
  }
  // control_held
  if (lhs->control_held != rhs->control_held) {
    return false;
  }
  // control_owner_label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->control_owner_label), &(rhs->control_owner_label)))
  {
    return false;
  }
  // control_epoch
  if (lhs->control_epoch != rhs->control_epoch) {
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
  // task_status
  if (lhs->task_status != rhs->task_status) {
    return false;
  }
  // task_status_text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_status_text), &(rhs->task_status_text)))
  {
    return false;
  }
  // request_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->request_id), &(rhs->request_id)))
  {
    return false;
  }
  // task_device_label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_device_label), &(rhs->task_device_label)))
  {
    return false;
  }
  // requested_x
  if (lhs->requested_x != rhs->requested_x) {
    return false;
  }
  // requested_y
  if (lhs->requested_y != rhs->requested_y) {
    return false;
  }
  // effective_endpoint
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->effective_endpoint), &(rhs->effective_endpoint)))
  {
    return false;
  }
  // path_revision
  if (lhs->path_revision != rhs->path_revision) {
    return false;
  }
  // route
  if (!planning_msgs__msg__GlobalPath__are_equal(
      &(lhs->route), &(rhs->route)))
  {
    return false;
  }
  // error_code
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_code), &(rhs->error_code)))
  {
    return false;
  }
  // error_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_message), &(rhs->error_message)))
  {
    return false;
  }
  // sequence
  if (!web_navigation_msgs__msg__SequenceWaypoint__Sequence__are_equal(
      &(lhs->sequence), &(rhs->sequence)))
  {
    return false;
  }
  // sequence_index
  if (lhs->sequence_index != rhs->sequence_index) {
    return false;
  }
  // sequence_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sequence_state), &(rhs->sequence_state)))
  {
    return false;
  }
  // sequence_loop
  if (lhs->sequence_loop != rhs->sequence_loop) {
    return false;
  }
  return true;
}

bool
web_navigation_msgs__msg__NavigationState__copy(
  const web_navigation_msgs__msg__NavigationState * input,
  web_navigation_msgs__msg__NavigationState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // manager_boot_id
  if (!rosidl_runtime_c__String__copy(
      &(input->manager_boot_id), &(output->manager_boot_id)))
  {
    return false;
  }
  // state_revision
  output->state_revision = input->state_revision;
  // map_ready
  output->map_ready = input->map_ready;
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
  // frame_id
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_id), &(output->frame_id)))
  {
    return false;
  }
  // vehicle_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->vehicle_pose), &(output->vehicle_pose)))
  {
    return false;
  }
  // linear_velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->linear_velocity), &(output->linear_velocity)))
  {
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->angular_velocity), &(output->angular_velocity)))
  {
    return false;
  }
  // pose_fresh
  output->pose_fresh = input->pose_fresh;
  // navigation_synchronized
  output->navigation_synchronized = input->navigation_synchronized;
  // control_held
  output->control_held = input->control_held;
  // control_owner_label
  if (!rosidl_runtime_c__String__copy(
      &(input->control_owner_label), &(output->control_owner_label)))
  {
    return false;
  }
  // control_epoch
  output->control_epoch = input->control_epoch;
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
  // task_status
  output->task_status = input->task_status;
  // task_status_text
  if (!rosidl_runtime_c__String__copy(
      &(input->task_status_text), &(output->task_status_text)))
  {
    return false;
  }
  // request_id
  if (!rosidl_runtime_c__String__copy(
      &(input->request_id), &(output->request_id)))
  {
    return false;
  }
  // task_device_label
  if (!rosidl_runtime_c__String__copy(
      &(input->task_device_label), &(output->task_device_label)))
  {
    return false;
  }
  // requested_x
  output->requested_x = input->requested_x;
  // requested_y
  output->requested_y = input->requested_y;
  // effective_endpoint
  if (!geometry_msgs__msg__Pose__copy(
      &(input->effective_endpoint), &(output->effective_endpoint)))
  {
    return false;
  }
  // path_revision
  output->path_revision = input->path_revision;
  // route
  if (!planning_msgs__msg__GlobalPath__copy(
      &(input->route), &(output->route)))
  {
    return false;
  }
  // error_code
  if (!rosidl_runtime_c__String__copy(
      &(input->error_code), &(output->error_code)))
  {
    return false;
  }
  // error_message
  if (!rosidl_runtime_c__String__copy(
      &(input->error_message), &(output->error_message)))
  {
    return false;
  }
  // sequence
  if (!web_navigation_msgs__msg__SequenceWaypoint__Sequence__copy(
      &(input->sequence), &(output->sequence)))
  {
    return false;
  }
  // sequence_index
  output->sequence_index = input->sequence_index;
  // sequence_state
  if (!rosidl_runtime_c__String__copy(
      &(input->sequence_state), &(output->sequence_state)))
  {
    return false;
  }
  // sequence_loop
  output->sequence_loop = input->sequence_loop;
  return true;
}

web_navigation_msgs__msg__NavigationState *
web_navigation_msgs__msg__NavigationState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__msg__NavigationState * msg = (web_navigation_msgs__msg__NavigationState *)allocator.allocate(sizeof(web_navigation_msgs__msg__NavigationState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(web_navigation_msgs__msg__NavigationState));
  bool success = web_navigation_msgs__msg__NavigationState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
web_navigation_msgs__msg__NavigationState__destroy(web_navigation_msgs__msg__NavigationState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    web_navigation_msgs__msg__NavigationState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
web_navigation_msgs__msg__NavigationState__Sequence__init(web_navigation_msgs__msg__NavigationState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__msg__NavigationState * data = NULL;

  if (size) {
    data = (web_navigation_msgs__msg__NavigationState *)allocator.zero_allocate(size, sizeof(web_navigation_msgs__msg__NavigationState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = web_navigation_msgs__msg__NavigationState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        web_navigation_msgs__msg__NavigationState__fini(&data[i - 1]);
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
web_navigation_msgs__msg__NavigationState__Sequence__fini(web_navigation_msgs__msg__NavigationState__Sequence * array)
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
      web_navigation_msgs__msg__NavigationState__fini(&array->data[i]);
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

web_navigation_msgs__msg__NavigationState__Sequence *
web_navigation_msgs__msg__NavigationState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  web_navigation_msgs__msg__NavigationState__Sequence * array = (web_navigation_msgs__msg__NavigationState__Sequence *)allocator.allocate(sizeof(web_navigation_msgs__msg__NavigationState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = web_navigation_msgs__msg__NavigationState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
web_navigation_msgs__msg__NavigationState__Sequence__destroy(web_navigation_msgs__msg__NavigationState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    web_navigation_msgs__msg__NavigationState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
web_navigation_msgs__msg__NavigationState__Sequence__are_equal(const web_navigation_msgs__msg__NavigationState__Sequence * lhs, const web_navigation_msgs__msg__NavigationState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!web_navigation_msgs__msg__NavigationState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
web_navigation_msgs__msg__NavigationState__Sequence__copy(
  const web_navigation_msgs__msg__NavigationState__Sequence * input,
  web_navigation_msgs__msg__NavigationState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(web_navigation_msgs__msg__NavigationState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    web_navigation_msgs__msg__NavigationState * data =
      (web_navigation_msgs__msg__NavigationState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!web_navigation_msgs__msg__NavigationState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          web_navigation_msgs__msg__NavigationState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!web_navigation_msgs__msg__NavigationState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
