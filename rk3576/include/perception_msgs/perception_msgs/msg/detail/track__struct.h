// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from perception_msgs:msg/Track.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MSGS__MSG__DETAIL__TRACK__STRUCT_H_
#define PERCEPTION_MSGS__MSG__DETAIL__TRACK__STRUCT_H_

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
// Member 'vel'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'associated'
#include "perception_msgs/msg/detail/cluster__struct.h"

/// Struct defined in msg/Track in the package perception_msgs.
typedef struct perception_msgs__msg__Track
{
  int32_t id;
  double age;
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Vector3 vel;
  double pos_cov[9];
  double vel_cov[9];
  perception_msgs__msg__Cluster__Sequence associated;
} perception_msgs__msg__Track;

// Struct for a sequence of perception_msgs__msg__Track.
typedef struct perception_msgs__msg__Track__Sequence
{
  perception_msgs__msg__Track * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} perception_msgs__msg__Track__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PERCEPTION_MSGS__MSG__DETAIL__TRACK__STRUCT_H_
