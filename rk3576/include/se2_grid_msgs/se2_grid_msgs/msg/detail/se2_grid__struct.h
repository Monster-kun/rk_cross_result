// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from se2_grid_msgs:msg/SE2Grid.idl
// generated code does not contain a copyright notice

#ifndef SE2_GRID_MSGS__MSG__DETAIL__SE2_GRID__STRUCT_H_
#define SE2_GRID_MSGS__MSG__DETAIL__SE2_GRID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "se2_grid_msgs/msg/detail/se2_grid_info__struct.h"
// Member 'layers'
#include "rosidl_runtime_c/string.h"
// Member 'has_so2'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'data'
#include "std_msgs/msg/detail/float32_multi_array__struct.h"

/// Struct defined in msg/SE2Grid in the package se2_grid_msgs.
typedef struct se2_grid_msgs__msg__SE2Grid
{
  se2_grid_msgs__msg__SE2GridInfo info;
  /// layer names.
  rosidl_runtime_c__String__Sequence layers;
  /// if has SO(2) info.
  rosidl_runtime_c__boolean__Sequence has_so2;
  /// Grid map data.
  std_msgs__msg__Float32MultiArray__Sequence data;
  /// Row start index (default 0).
  uint16_t start_index_row;
  /// Column start index (default 0).
  uint16_t start_index_col;
} se2_grid_msgs__msg__SE2Grid;

// Struct for a sequence of se2_grid_msgs__msg__SE2Grid.
typedef struct se2_grid_msgs__msg__SE2Grid__Sequence
{
  se2_grid_msgs__msg__SE2Grid * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} se2_grid_msgs__msg__SE2Grid__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SE2_GRID_MSGS__MSG__DETAIL__SE2_GRID__STRUCT_H_
