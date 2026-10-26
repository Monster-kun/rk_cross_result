// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from web_navigation_msgs:srv/GetWebMap.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_WEB_MAP__STRUCT_H_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_WEB_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'if_map_version'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetWebMap in the package web_navigation_msgs.
typedef struct web_navigation_msgs__srv__GetWebMap_Request
{
  rosidl_runtime_c__String if_map_version;
} web_navigation_msgs__srv__GetWebMap_Request;

// Struct for a sequence of web_navigation_msgs__srv__GetWebMap_Request.
typedef struct web_navigation_msgs__srv__GetWebMap_Request__Sequence
{
  web_navigation_msgs__srv__GetWebMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} web_navigation_msgs__srv__GetWebMap_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'code'
// Member 'message'
// Member 'map_version'
// Member 'map_name'
// Member 'coordinate_revision'
// Member 'frame_id'
// Member 'unit'
// Member 'geometry_json'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetWebMap in the package web_navigation_msgs.
typedef struct web_navigation_msgs__srv__GetWebMap_Response
{
  bool ready;
  bool not_modified;
  rosidl_runtime_c__String code;
  rosidl_runtime_c__String message;
  rosidl_runtime_c__String map_version;
  rosidl_runtime_c__String map_name;
  rosidl_runtime_c__String coordinate_revision;
  rosidl_runtime_c__String frame_id;
  rosidl_runtime_c__String unit;
  double bounds[4];
  rosidl_runtime_c__String geometry_json;
} web_navigation_msgs__srv__GetWebMap_Response;

// Struct for a sequence of web_navigation_msgs__srv__GetWebMap_Response.
typedef struct web_navigation_msgs__srv__GetWebMap_Response__Sequence
{
  web_navigation_msgs__srv__GetWebMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} web_navigation_msgs__srv__GetWebMap_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_WEB_MAP__STRUCT_H_
