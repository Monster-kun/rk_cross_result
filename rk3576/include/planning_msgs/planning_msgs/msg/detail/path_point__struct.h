// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from planning_msgs:msg/PathPoint.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_H_
#define PLANNING_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/PathPoint in the package planning_msgs.
/**
  * Represents a pose from a lanelet map, contains twist information.
 */
typedef struct planning_msgs__msg__PathPoint
{
  geometry_msgs__msg__Pose pose;
  float longitudinal_velocity_mps;
  float lateral_velocity_mps;
  float heading_rate_rps;
  /// Denotes that the point is final, doesn't need further updates.
  bool is_final;
} planning_msgs__msg__PathPoint;

// Struct for a sequence of planning_msgs__msg__PathPoint.
typedef struct planning_msgs__msg__PathPoint__Sequence
{
  planning_msgs__msg__PathPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planning_msgs__msg__PathPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANNING_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_H_
