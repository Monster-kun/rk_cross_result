// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from planning_msgs:msg/MincoTraj.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_MSGS__MSG__DETAIL__MINCO_TRAJ__STRUCT_H_
#define PLANNING_MSGS__MSG__DETAIL__MINCO_TRAJ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'head_x'
// Member 'head_y'
// Member 'tail_x'
// Member 'tail_y'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 't_pts'
// Member 'yaw_pts'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'pos_pts'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'waypoints'
#include "planning_msgs/msg/detail/waypoint__struct.h"

/// Struct defined in msg/MincoTraj in the package planning_msgs.
typedef struct planning_msgs__msg__MincoTraj
{
  builtin_interfaces__msg__Time start_time;
  double end_time;
  /// if true, use the normal trajectory
  bool use_init;
  /// target angle
  double yaw;
  /// minco trajectory
  geometry_msgs__msg__Vector3 head_x;
  geometry_msgs__msg__Vector3 head_y;
  geometry_msgs__msg__Vector3 tail_x;
  geometry_msgs__msg__Vector3 tail_y;
  rosidl_runtime_c__double__Sequence t_pts;
  geometry_msgs__msg__Point__Sequence pos_pts;
  rosidl_runtime_c__double__Sequence yaw_pts;
  /// normal trajectory
  planning_msgs__msg__Waypoint__Sequence waypoints;
} planning_msgs__msg__MincoTraj;

// Struct for a sequence of planning_msgs__msg__MincoTraj.
typedef struct planning_msgs__msg__MincoTraj__Sequence
{
  planning_msgs__msg__MincoTraj * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planning_msgs__msg__MincoTraj__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANNING_MSGS__MSG__DETAIL__MINCO_TRAJ__STRUCT_H_
