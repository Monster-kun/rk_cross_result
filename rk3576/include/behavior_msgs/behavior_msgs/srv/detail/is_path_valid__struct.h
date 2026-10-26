// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_msgs:srv/IsPathValid.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_MSGS__SRV__DETAIL__IS_PATH_VALID__STRUCT_H_
#define BEHAVIOR_MSGS__SRV__DETAIL__IS_PATH_VALID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/IsPathValid in the package behavior_msgs.
typedef struct behavior_msgs__srv__IsPathValid_Request
{
  float check_distance;
} behavior_msgs__srv__IsPathValid_Request;

// Struct for a sequence of behavior_msgs__srv__IsPathValid_Request.
typedef struct behavior_msgs__srv__IsPathValid_Request__Sequence
{
  behavior_msgs__srv__IsPathValid_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__srv__IsPathValid_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/IsPathValid in the package behavior_msgs.
typedef struct behavior_msgs__srv__IsPathValid_Response
{
  bool is_valid;
} behavior_msgs__srv__IsPathValid_Response;

// Struct for a sequence of behavior_msgs__srv__IsPathValid_Response.
typedef struct behavior_msgs__srv__IsPathValid_Response__Sequence
{
  behavior_msgs__srv__IsPathValid_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__srv__IsPathValid_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_MSGS__SRV__DETAIL__IS_PATH_VALID__STRUCT_H_
