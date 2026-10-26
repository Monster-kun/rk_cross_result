// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from planning_msgs:msg/GlobalPath.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_MSGS__MSG__DETAIL__GLOBAL_PATH__STRUCT_H_
#define PLANNING_MSGS__MSG__DETAIL__GLOBAL_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'main_trajectory'
#include "planning_msgs/msg/detail/trajectory__struct.h"
// Member 'left_bound'
// Member 'right_bound'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'left_bound_s'
// Member 'right_bound_s'
// Member 'checkpoint_indices'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/GlobalPath in the package planning_msgs.
typedef struct planning_msgs__msg__GlobalPath
{
  std_msgs__msg__Header header;
  planning_msgs__msg__Trajectory main_trajectory;
  geometry_msgs__msg__Point__Sequence left_bound;
  geometry_msgs__msg__Point__Sequence right_bound;
  /// Path progress (metres from the first trajectory waypoint) for each boundary point.
  /// These keep each boundary point attached to its position along the route.
  rosidl_runtime_c__double__Sequence left_bound_s;
  rosidl_runtime_c__double__Sequence right_bound_s;
  /// Ordered intermediate endpoints that must be reached before the final goal.
  rosidl_runtime_c__uint32__Sequence checkpoint_indices;
  /// Repeat the closed suffix beginning at loop_start_index without ending FollowPath.
  bool loop;
  uint32_t loop_start_index;
  /// Bounds are resampled independently; their cycle offsets are not waypoint indices.
  uint32_t loop_left_bound_start_index;
  uint32_t loop_right_bound_start_index;
} planning_msgs__msg__GlobalPath;

// Struct for a sequence of planning_msgs__msg__GlobalPath.
typedef struct planning_msgs__msg__GlobalPath__Sequence
{
  planning_msgs__msg__GlobalPath * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planning_msgs__msg__GlobalPath__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANNING_MSGS__MSG__DETAIL__GLOBAL_PATH__STRUCT_H_
