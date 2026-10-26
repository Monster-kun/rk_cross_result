// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from web_navigation_msgs:srv/CancelTask.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__CANCEL_TASK__STRUCT_H_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__CANCEL_TASK__STRUCT_H_

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
// Member 'task_id'
// Member 'session_id'
// Member 'manager_boot_id'
// Member 'lease_token'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CancelTask in the package web_navigation_msgs.
typedef struct web_navigation_msgs__srv__CancelTask_Request
{
  rosidl_runtime_c__String request_id;
  rosidl_runtime_c__String task_id;
  rosidl_runtime_c__String session_id;
  rosidl_runtime_c__String manager_boot_id;
  rosidl_runtime_c__String lease_token;
  uint64_t control_epoch;
  uint64_t expected_state_revision;
} web_navigation_msgs__srv__CancelTask_Request;

// Struct for a sequence of web_navigation_msgs__srv__CancelTask_Request.
typedef struct web_navigation_msgs__srv__CancelTask_Request__Sequence
{
  web_navigation_msgs__srv__CancelTask_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} web_navigation_msgs__srv__CancelTask_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'code'
// Member 'message'
// Member 'request_id'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CancelTask in the package web_navigation_msgs.
typedef struct web_navigation_msgs__srv__CancelTask_Response
{
  bool accepted;
  rosidl_runtime_c__String code;
  rosidl_runtime_c__String message;
  rosidl_runtime_c__String request_id;
  uint8_t task_status;
  uint64_t state_revision;
} web_navigation_msgs__srv__CancelTask_Response;

// Struct for a sequence of web_navigation_msgs__srv__CancelTask_Response.
typedef struct web_navigation_msgs__srv__CancelTask_Response__Sequence
{
  web_navigation_msgs__srv__CancelTask_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} web_navigation_msgs__srv__CancelTask_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__CANCEL_TASK__STRUCT_H_
