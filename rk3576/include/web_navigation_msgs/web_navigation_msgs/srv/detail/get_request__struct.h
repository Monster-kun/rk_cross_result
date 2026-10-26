// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from web_navigation_msgs:srv/GetRequest.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_REQUEST__STRUCT_H_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetRequest in the package web_navigation_msgs.
typedef struct web_navigation_msgs__srv__GetRequest_Request
{
  rosidl_runtime_c__String request_id;
} web_navigation_msgs__srv__GetRequest_Request;

// Struct for a sequence of web_navigation_msgs__srv__GetRequest_Request.
typedef struct web_navigation_msgs__srv__GetRequest_Request__Sequence
{
  web_navigation_msgs__srv__GetRequest_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} web_navigation_msgs__srv__GetRequest_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'code'
// Member 'message'
// Member 'task_id'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetRequest in the package web_navigation_msgs.
typedef struct web_navigation_msgs__srv__GetRequest_Response
{
  bool found;
  bool accepted;
  rosidl_runtime_c__String code;
  rosidl_runtime_c__String message;
  rosidl_runtime_c__String task_id;
  uint8_t task_status;
  uint64_t state_revision;
} web_navigation_msgs__srv__GetRequest_Response;

// Struct for a sequence of web_navigation_msgs__srv__GetRequest_Response.
typedef struct web_navigation_msgs__srv__GetRequest_Response__Sequence
{
  web_navigation_msgs__srv__GetRequest_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} web_navigation_msgs__srv__GetRequest_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_REQUEST__STRUCT_H_
