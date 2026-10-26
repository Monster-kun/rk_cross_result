// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from perception_msgs:msg/DetectedObject.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT__STRUCT_H_
#define PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT__STRUCT_H_

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
// Member 'dimensions'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/DetectedObject in the package perception_msgs.
typedef struct perception_msgs__msg__DetectedObject
{
  std_msgs__msg__Header header;
  /// centriod and orientation of the object
  geometry_msgs__msg__Pose pose;
  /// dimensions of the object
  geometry_msgs__msg__Vector3 dimensions;
} perception_msgs__msg__DetectedObject;

// Struct for a sequence of perception_msgs__msg__DetectedObject.
typedef struct perception_msgs__msg__DetectedObject__Sequence
{
  perception_msgs__msg__DetectedObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} perception_msgs__msg__DetectedObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT__STRUCT_H_
