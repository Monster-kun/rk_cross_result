// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from planning_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_H_
#define PLANNING_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Waypoint in the package planning_msgs.
typedef struct planning_msgs__msg__Waypoint
{
  geometry_msgs__msg__Point point;
  float time;
  float s;
  float theta;
  float kappa;
  float dkappa;
  float ddkappa;
  /// velocity
  float v;
  /// acceleration
  float a;
  /// jerk
  float j;
  /// angular velocity
  float w;
} planning_msgs__msg__Waypoint;

// Struct for a sequence of planning_msgs__msg__Waypoint.
typedef struct planning_msgs__msg__Waypoint__Sequence
{
  planning_msgs__msg__Waypoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planning_msgs__msg__Waypoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANNING_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_H_
