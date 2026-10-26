// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from web_navigation_msgs:srv/ValidateTarget.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__VALIDATE_TARGET__STRUCT_H_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__VALIDATE_TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'map_version'
// Member 'frame_id'
// Member 'selected_layer_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ValidateTarget in the package web_navigation_msgs.
typedef struct web_navigation_msgs__srv__ValidateTarget_Request
{
  rosidl_runtime_c__String map_version;
  rosidl_runtime_c__String frame_id;
  double x;
  double y;
  rosidl_runtime_c__String selected_layer_id;
  bool suggest_nearest;
} web_navigation_msgs__srv__ValidateTarget_Request;

// Struct for a sequence of web_navigation_msgs__srv__ValidateTarget_Request.
typedef struct web_navigation_msgs__srv__ValidateTarget_Request__Sequence
{
  web_navigation_msgs__srv__ValidateTarget_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} web_navigation_msgs__srv__ValidateTarget_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'code'
// Member 'message'
// Member 'map_version'
// Member 'lanelet_ids'
// Member 'lanelet_id'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ValidateTarget in the package web_navigation_msgs.
typedef struct web_navigation_msgs__srv__ValidateTarget_Response
{
  bool valid;
  rosidl_runtime_c__String code;
  rosidl_runtime_c__String message;
  rosidl_runtime_c__String map_version;
  rosidl_runtime_c__String__Sequence lanelet_ids;
  double x;
  double y;
  rosidl_runtime_c__String lanelet_id;
} web_navigation_msgs__srv__ValidateTarget_Response;

// Struct for a sequence of web_navigation_msgs__srv__ValidateTarget_Response.
typedef struct web_navigation_msgs__srv__ValidateTarget_Response__Sequence
{
  web_navigation_msgs__srv__ValidateTarget_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} web_navigation_msgs__srv__ValidateTarget_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__VALIDATE_TARGET__STRUCT_H_
