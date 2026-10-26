// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from planning_msgs:msg/MincoTraj.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "planning_msgs/msg/detail/minco_traj__rosidl_typesupport_introspection_c.h"
#include "planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "planning_msgs/msg/detail/minco_traj__functions.h"
#include "planning_msgs/msg/detail/minco_traj__struct.h"


// Include directives for member types
// Member `start_time`
#include "builtin_interfaces/msg/time.h"
// Member `start_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `head_x`
// Member `head_y`
// Member `tail_x`
// Member `tail_y`
#include "geometry_msgs/msg/vector3.h"
// Member `head_x`
// Member `head_y`
// Member `tail_x`
// Member `tail_y`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `t_pts`
// Member `yaw_pts`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `pos_pts`
#include "geometry_msgs/msg/point.h"
// Member `pos_pts`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `waypoints`
#include "planning_msgs/msg/waypoint.h"
// Member `waypoints`
#include "planning_msgs/msg/detail/waypoint__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__MincoTraj_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  planning_msgs__msg__MincoTraj__init(message_memory);
}

void planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__MincoTraj_fini_function(void * message_memory)
{
  planning_msgs__msg__MincoTraj__fini(message_memory);
}

size_t planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__size_function__MincoTraj__t_pts(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__get_const_function__MincoTraj__t_pts(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__get_function__MincoTraj__t_pts(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__fetch_function__MincoTraj__t_pts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__get_const_function__MincoTraj__t_pts(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__assign_function__MincoTraj__t_pts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__get_function__MincoTraj__t_pts(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__resize_function__MincoTraj__t_pts(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__size_function__MincoTraj__pos_pts(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__get_const_function__MincoTraj__pos_pts(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__get_function__MincoTraj__pos_pts(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__fetch_function__MincoTraj__pos_pts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__get_const_function__MincoTraj__pos_pts(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__assign_function__MincoTraj__pos_pts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__get_function__MincoTraj__pos_pts(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__resize_function__MincoTraj__pos_pts(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__size_function__MincoTraj__yaw_pts(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__get_const_function__MincoTraj__yaw_pts(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__get_function__MincoTraj__yaw_pts(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__fetch_function__MincoTraj__yaw_pts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__get_const_function__MincoTraj__yaw_pts(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__assign_function__MincoTraj__yaw_pts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__get_function__MincoTraj__yaw_pts(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__resize_function__MincoTraj__yaw_pts(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__size_function__MincoTraj__waypoints(
  const void * untyped_member)
{
  const planning_msgs__msg__Waypoint__Sequence * member =
    (const planning_msgs__msg__Waypoint__Sequence *)(untyped_member);
  return member->size;
}

const void * planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__get_const_function__MincoTraj__waypoints(
  const void * untyped_member, size_t index)
{
  const planning_msgs__msg__Waypoint__Sequence * member =
    (const planning_msgs__msg__Waypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__get_function__MincoTraj__waypoints(
  void * untyped_member, size_t index)
{
  planning_msgs__msg__Waypoint__Sequence * member =
    (planning_msgs__msg__Waypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__fetch_function__MincoTraj__waypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const planning_msgs__msg__Waypoint * item =
    ((const planning_msgs__msg__Waypoint *)
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__get_const_function__MincoTraj__waypoints(untyped_member, index));
  planning_msgs__msg__Waypoint * value =
    (planning_msgs__msg__Waypoint *)(untyped_value);
  *value = *item;
}

void planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__assign_function__MincoTraj__waypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  planning_msgs__msg__Waypoint * item =
    ((planning_msgs__msg__Waypoint *)
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__get_function__MincoTraj__waypoints(untyped_member, index));
  const planning_msgs__msg__Waypoint * value =
    (const planning_msgs__msg__Waypoint *)(untyped_value);
  *item = *value;
}

bool planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__resize_function__MincoTraj__waypoints(
  void * untyped_member, size_t size)
{
  planning_msgs__msg__Waypoint__Sequence * member =
    (planning_msgs__msg__Waypoint__Sequence *)(untyped_member);
  planning_msgs__msg__Waypoint__Sequence__fini(member);
  return planning_msgs__msg__Waypoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__MincoTraj_message_member_array[12] = {
  {
    "start_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_msgs__msg__MincoTraj, start_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_msgs__msg__MincoTraj, end_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "use_init",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_msgs__msg__MincoTraj, use_init),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_msgs__msg__MincoTraj, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "head_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_msgs__msg__MincoTraj, head_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "head_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_msgs__msg__MincoTraj, head_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tail_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_msgs__msg__MincoTraj, tail_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tail_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_msgs__msg__MincoTraj, tail_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t_pts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_msgs__msg__MincoTraj, t_pts),  // bytes offset in struct
    NULL,  // default value
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__size_function__MincoTraj__t_pts,  // size() function pointer
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__get_const_function__MincoTraj__t_pts,  // get_const(index) function pointer
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__get_function__MincoTraj__t_pts,  // get(index) function pointer
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__fetch_function__MincoTraj__t_pts,  // fetch(index, &value) function pointer
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__assign_function__MincoTraj__t_pts,  // assign(index, value) function pointer
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__resize_function__MincoTraj__t_pts  // resize(index) function pointer
  },
  {
    "pos_pts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_msgs__msg__MincoTraj, pos_pts),  // bytes offset in struct
    NULL,  // default value
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__size_function__MincoTraj__pos_pts,  // size() function pointer
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__get_const_function__MincoTraj__pos_pts,  // get_const(index) function pointer
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__get_function__MincoTraj__pos_pts,  // get(index) function pointer
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__fetch_function__MincoTraj__pos_pts,  // fetch(index, &value) function pointer
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__assign_function__MincoTraj__pos_pts,  // assign(index, value) function pointer
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__resize_function__MincoTraj__pos_pts  // resize(index) function pointer
  },
  {
    "yaw_pts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_msgs__msg__MincoTraj, yaw_pts),  // bytes offset in struct
    NULL,  // default value
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__size_function__MincoTraj__yaw_pts,  // size() function pointer
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__get_const_function__MincoTraj__yaw_pts,  // get_const(index) function pointer
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__get_function__MincoTraj__yaw_pts,  // get(index) function pointer
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__fetch_function__MincoTraj__yaw_pts,  // fetch(index, &value) function pointer
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__assign_function__MincoTraj__yaw_pts,  // assign(index, value) function pointer
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__resize_function__MincoTraj__yaw_pts  // resize(index) function pointer
  },
  {
    "waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_msgs__msg__MincoTraj, waypoints),  // bytes offset in struct
    NULL,  // default value
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__size_function__MincoTraj__waypoints,  // size() function pointer
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__get_const_function__MincoTraj__waypoints,  // get_const(index) function pointer
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__get_function__MincoTraj__waypoints,  // get(index) function pointer
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__fetch_function__MincoTraj__waypoints,  // fetch(index, &value) function pointer
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__assign_function__MincoTraj__waypoints,  // assign(index, value) function pointer
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__resize_function__MincoTraj__waypoints  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__MincoTraj_message_members = {
  "planning_msgs__msg",  // message namespace
  "MincoTraj",  // message name
  12,  // number of fields
  sizeof(planning_msgs__msg__MincoTraj),
  planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__MincoTraj_message_member_array,  // message members
  planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__MincoTraj_init_function,  // function to initialize message memory (memory has to be allocated)
  planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__MincoTraj_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__MincoTraj_message_type_support_handle = {
  0,
  &planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__MincoTraj_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_msgs, msg, MincoTraj)() {
  planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__MincoTraj_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__MincoTraj_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__MincoTraj_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__MincoTraj_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__MincoTraj_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__MincoTraj_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__MincoTraj_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_msgs, msg, Waypoint)();
  if (!planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__MincoTraj_message_type_support_handle.typesupport_identifier) {
    planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__MincoTraj_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &planning_msgs__msg__MincoTraj__rosidl_typesupport_introspection_c__MincoTraj_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
