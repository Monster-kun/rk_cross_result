// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from planning_msgs:msg/LaneletPrimitive.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_MSGS__MSG__DETAIL__LANELET_PRIMITIVE__STRUCT_H_
#define PLANNING_MSGS__MSG__DETAIL__LANELET_PRIMITIVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'primitive_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LaneletPrimitive in the package planning_msgs.
typedef struct planning_msgs__msg__LaneletPrimitive
{
  int64_t id;
  rosidl_runtime_c__String primitive_type;
} planning_msgs__msg__LaneletPrimitive;

// Struct for a sequence of planning_msgs__msg__LaneletPrimitive.
typedef struct planning_msgs__msg__LaneletPrimitive__Sequence
{
  planning_msgs__msg__LaneletPrimitive * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planning_msgs__msg__LaneletPrimitive__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANNING_MSGS__MSG__DETAIL__LANELET_PRIMITIVE__STRUCT_H_
