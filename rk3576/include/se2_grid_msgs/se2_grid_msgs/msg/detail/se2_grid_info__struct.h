// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from se2_grid_msgs:msg/SE2GridInfo.idl
// generated code does not contain a copyright notice

#ifndef SE2_GRID_MSGS__MSG__DETAIL__SE2_GRID_INFO__STRUCT_H_
#define SE2_GRID_MSGS__MSG__DETAIL__SE2_GRID_INFO__STRUCT_H_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/SE2GridInfo in the package se2_grid_msgs.
typedef struct se2_grid_msgs__msg__SE2GridInfo
{
  std_msgs__msg__Header header;
  /// Resolution of the grid in position.
  double pos_resolution;
  /// Resolution of the grid in yaw.
  double yaw_resolution;
  /// Length in x-direction.
  double length_x;
  /// Length in y-direction.
  double length_y;
  /// Length in yaw-direction.
  double length_yaw;
  /// Pose of the se2 grid center in the frame defined in `header`.
  geometry_msgs__msg__Pose pose;
} se2_grid_msgs__msg__SE2GridInfo;

// Struct for a sequence of se2_grid_msgs__msg__SE2GridInfo.
typedef struct se2_grid_msgs__msg__SE2GridInfo__Sequence
{
  se2_grid_msgs__msg__SE2GridInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} se2_grid_msgs__msg__SE2GridInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SE2_GRID_MSGS__MSG__DETAIL__SE2_GRID_INFO__STRUCT_H_
