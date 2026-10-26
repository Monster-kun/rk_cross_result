// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from web_navigation_msgs:srv/GetTask.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_TASK__STRUCT_H_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'task_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetTask in the package web_navigation_msgs.
typedef struct web_navigation_msgs__srv__GetTask_Request
{
  rosidl_runtime_c__String task_id;
} web_navigation_msgs__srv__GetTask_Request;

// Struct for a sequence of web_navigation_msgs__srv__GetTask_Request.
typedef struct web_navigation_msgs__srv__GetTask_Request__Sequence
{
  web_navigation_msgs__srv__GetTask_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} web_navigation_msgs__srv__GetTask_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'task_id'
// Member 'request_id'
// Member 'ros_goal_uuid'
// Member 'map_version'
// Member 'frame_id'
// Member 'device_label'
// Member 'error_code'
// Member 'error_message'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'effective_endpoint'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/GetTask in the package web_navigation_msgs.
typedef struct web_navigation_msgs__srv__GetTask_Response
{
  bool found;
  rosidl_runtime_c__String task_id;
  rosidl_runtime_c__String request_id;
  rosidl_runtime_c__String ros_goal_uuid;
  rosidl_runtime_c__String map_version;
  rosidl_runtime_c__String frame_id;
  uint8_t status;
  double requested_x;
  double requested_y;
  geometry_msgs__msg__Pose effective_endpoint;
  rosidl_runtime_c__String device_label;
  rosidl_runtime_c__String error_code;
  rosidl_runtime_c__String error_message;
  int64_t updated_at;
} web_navigation_msgs__srv__GetTask_Response;

// Struct for a sequence of web_navigation_msgs__srv__GetTask_Response.
typedef struct web_navigation_msgs__srv__GetTask_Response__Sequence
{
  web_navigation_msgs__srv__GetTask_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} web_navigation_msgs__srv__GetTask_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_TASK__STRUCT_H_
