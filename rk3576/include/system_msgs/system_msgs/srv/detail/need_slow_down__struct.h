// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from system_msgs:srv/NeedSlowDown.idl
// generated code does not contain a copyright notice

#ifndef SYSTEM_MSGS__SRV__DETAIL__NEED_SLOW_DOWN__STRUCT_H_
#define SYSTEM_MSGS__SRV__DETAIL__NEED_SLOW_DOWN__STRUCT_H_

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

/// Struct defined in srv/NeedSlowDown in the package system_msgs.
typedef struct system_msgs__srv__NeedSlowDown_Request
{
  geometry_msgs__msg__Pose pose;
} system_msgs__srv__NeedSlowDown_Request;

// Struct for a sequence of system_msgs__srv__NeedSlowDown_Request.
typedef struct system_msgs__srv__NeedSlowDown_Request__Sequence
{
  system_msgs__srv__NeedSlowDown_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} system_msgs__srv__NeedSlowDown_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/NeedSlowDown in the package system_msgs.
typedef struct system_msgs__srv__NeedSlowDown_Response
{
  bool slow_down;
  float slow_down_ratio;
} system_msgs__srv__NeedSlowDown_Response;

// Struct for a sequence of system_msgs__srv__NeedSlowDown_Response.
typedef struct system_msgs__srv__NeedSlowDown_Response__Sequence
{
  system_msgs__srv__NeedSlowDown_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} system_msgs__srv__NeedSlowDown_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SYSTEM_MSGS__SRV__DETAIL__NEED_SLOW_DOWN__STRUCT_H_
