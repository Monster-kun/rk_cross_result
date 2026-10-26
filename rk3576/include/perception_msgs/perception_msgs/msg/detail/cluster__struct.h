// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from perception_msgs:msg/Cluster.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MSGS__MSG__DETAIL__CLUSTER__STRUCT_H_
#define PERCEPTION_MSGS__MSG__DETAIL__CLUSTER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'min_pt'
// Member 'max_pt'
// Member 'centroid'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/Cluster in the package perception_msgs.
typedef struct perception_msgs__msg__Cluster
{
  bool is_human;
  int32_t id;
  geometry_msgs__msg__Point min_pt;
  geometry_msgs__msg__Point max_pt;
  geometry_msgs__msg__Vector3 size;
  geometry_msgs__msg__Point centroid;
} perception_msgs__msg__Cluster;

// Struct for a sequence of perception_msgs__msg__Cluster.
typedef struct perception_msgs__msg__Cluster__Sequence
{
  perception_msgs__msg__Cluster * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} perception_msgs__msg__Cluster__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PERCEPTION_MSGS__MSG__DETAIL__CLUSTER__STRUCT_H_
