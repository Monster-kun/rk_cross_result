// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from planning_msgs:msg/Path.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_MSGS__MSG__DETAIL__PATH__STRUCT_H_
#define PLANNING_MSGS__MSG__DETAIL__PATH__STRUCT_H_

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
// Member 'points'
#include "planning_msgs/msg/detail/path_point__struct.h"
// Member 'left_bound'
// Member 'right_bound'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Path in the package planning_msgs.
/**
  * Contains a PathPoint path and left and right bound.
 */
typedef struct planning_msgs__msg__Path
{
  std_msgs__msg__Header header;
  planning_msgs__msg__PathPoint__Sequence points;
  geometry_msgs__msg__Point__Sequence left_bound;
  geometry_msgs__msg__Point__Sequence right_bound;
} planning_msgs__msg__Path;

// Struct for a sequence of planning_msgs__msg__Path.
typedef struct planning_msgs__msg__Path__Sequence
{
  planning_msgs__msg__Path * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planning_msgs__msg__Path__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANNING_MSGS__MSG__DETAIL__PATH__STRUCT_H_
