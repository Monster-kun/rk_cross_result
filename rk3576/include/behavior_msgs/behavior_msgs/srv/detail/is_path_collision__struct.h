// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_msgs:srv/IsPathCollision.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_MSGS__SRV__DETAIL__IS_PATH_COLLISION__STRUCT_H_
#define BEHAVIOR_MSGS__SRV__DETAIL__IS_PATH_COLLISION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/IsPathCollision in the package behavior_msgs.
typedef struct behavior_msgs__srv__IsPathCollision_Request
{
  float check_distance;
} behavior_msgs__srv__IsPathCollision_Request;

// Struct for a sequence of behavior_msgs__srv__IsPathCollision_Request.
typedef struct behavior_msgs__srv__IsPathCollision_Request__Sequence
{
  behavior_msgs__srv__IsPathCollision_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__srv__IsPathCollision_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/IsPathCollision in the package behavior_msgs.
typedef struct behavior_msgs__srv__IsPathCollision_Response
{
  bool is_valid;
} behavior_msgs__srv__IsPathCollision_Response;

// Struct for a sequence of behavior_msgs__srv__IsPathCollision_Response.
typedef struct behavior_msgs__srv__IsPathCollision_Response__Sequence
{
  behavior_msgs__srv__IsPathCollision_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__srv__IsPathCollision_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_MSGS__SRV__DETAIL__IS_PATH_COLLISION__STRUCT_H_
