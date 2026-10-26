// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from planning_msgs:msg/LaneletSegment.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_MSGS__MSG__DETAIL__LANELET_SEGMENT__STRUCT_H_
#define PLANNING_MSGS__MSG__DETAIL__LANELET_SEGMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'preferred_primitive'
// Member 'primitives'
// Member 'left_bound'
// Member 'right_bound'
#include "planning_msgs/msg/detail/lanelet_primitive__struct.h"

/// Struct defined in msg/LaneletSegment in the package planning_msgs.
typedef struct planning_msgs__msg__LaneletSegment
{
  planning_msgs__msg__LaneletPrimitive preferred_primitive;
  planning_msgs__msg__LaneletPrimitive__Sequence primitives;
  planning_msgs__msg__LaneletPrimitive left_bound;
  planning_msgs__msg__LaneletPrimitive right_bound;
  bool is_inverted;
} planning_msgs__msg__LaneletSegment;

// Struct for a sequence of planning_msgs__msg__LaneletSegment.
typedef struct planning_msgs__msg__LaneletSegment__Sequence
{
  planning_msgs__msg__LaneletSegment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planning_msgs__msg__LaneletSegment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANNING_MSGS__MSG__DETAIL__LANELET_SEGMENT__STRUCT_H_
