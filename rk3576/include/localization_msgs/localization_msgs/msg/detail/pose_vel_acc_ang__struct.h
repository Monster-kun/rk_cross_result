// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from localization_msgs:msg/PoseVelAccAng.idl
// generated code does not contain a copyright notice

#ifndef LOCALIZATION_MSGS__MSG__DETAIL__POSE_VEL_ACC_ANG__STRUCT_H_
#define LOCALIZATION_MSGS__MSG__DETAIL__POSE_VEL_ACC_ANG__STRUCT_H_

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
// Member 'linear_velocity'
// Member 'linear_acceleration'
// Member 'angular_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/PoseVelAccAng in the package localization_msgs.
typedef struct localization_msgs__msg__PoseVelAccAng
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Vector3 linear_velocity;
  geometry_msgs__msg__Vector3 linear_acceleration;
  geometry_msgs__msg__Vector3 angular_velocity;
} localization_msgs__msg__PoseVelAccAng;

// Struct for a sequence of localization_msgs__msg__PoseVelAccAng.
typedef struct localization_msgs__msg__PoseVelAccAng__Sequence
{
  localization_msgs__msg__PoseVelAccAng * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} localization_msgs__msg__PoseVelAccAng__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LOCALIZATION_MSGS__MSG__DETAIL__POSE_VEL_ACC_ANG__STRUCT_H_
