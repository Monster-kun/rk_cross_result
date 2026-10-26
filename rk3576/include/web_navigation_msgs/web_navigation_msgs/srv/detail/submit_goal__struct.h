// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from web_navigation_msgs:srv/SubmitGoal.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__SUBMIT_GOAL__STRUCT_H_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__SUBMIT_GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SUBMIT'.
enum
{
  web_navigation_msgs__srv__SubmitGoal_Request__SUBMIT = 0
};

/// Constant 'REPLACE'.
enum
{
  web_navigation_msgs__srv__SubmitGoal_Request__REPLACE = 1
};

/// Constant 'CONTINUE'.
enum
{
  web_navigation_msgs__srv__SubmitGoal_Request__CONTINUE = 2
};

/// Constant 'RETRY'.
enum
{
  web_navigation_msgs__srv__SubmitGoal_Request__RETRY = 3
};

/// Constant 'SKIP'.
enum
{
  web_navigation_msgs__srv__SubmitGoal_Request__SKIP = 4
};

// Include directives for member types
// Member 'request_id'
// Member 'session_id'
// Member 'device_label'
// Member 'manager_boot_id'
// Member 'lease_token'
// Member 'map_version'
// Member 'frame_id'
// Member 'selected_layer_id'
// Member 'expected_active_task_id'
#include "rosidl_runtime_c/string.h"
// Member 'sequence'
#include "web_navigation_msgs/msg/detail/sequence_waypoint__struct.h"

/// Struct defined in srv/SubmitGoal in the package web_navigation_msgs.
typedef struct web_navigation_msgs__srv__SubmitGoal_Request
{
  uint8_t operation;
  rosidl_runtime_c__String request_id;
  rosidl_runtime_c__String session_id;
  rosidl_runtime_c__String device_label;
  rosidl_runtime_c__String manager_boot_id;
  rosidl_runtime_c__String lease_token;
  uint64_t control_epoch;
  rosidl_runtime_c__String map_version;
  rosidl_runtime_c__String frame_id;
  double x;
  double y;
  rosidl_runtime_c__String selected_layer_id;
  rosidl_runtime_c__String expected_active_task_id;
  uint64_t expected_state_revision;
  web_navigation_msgs__msg__SequenceWaypoint__Sequence sequence;
} web_navigation_msgs__srv__SubmitGoal_Request;

// Struct for a sequence of web_navigation_msgs__srv__SubmitGoal_Request.
typedef struct web_navigation_msgs__srv__SubmitGoal_Request__Sequence
{
  web_navigation_msgs__srv__SubmitGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} web_navigation_msgs__srv__SubmitGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'code'
// Member 'message'
// Member 'request_id'
// Member 'task_id'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SubmitGoal in the package web_navigation_msgs.
typedef struct web_navigation_msgs__srv__SubmitGoal_Response
{
  bool accepted;
  rosidl_runtime_c__String code;
  rosidl_runtime_c__String message;
  rosidl_runtime_c__String request_id;
  rosidl_runtime_c__String task_id;
  uint8_t task_status;
  uint64_t state_revision;
} web_navigation_msgs__srv__SubmitGoal_Response;

// Struct for a sequence of web_navigation_msgs__srv__SubmitGoal_Response.
typedef struct web_navigation_msgs__srv__SubmitGoal_Response__Sequence
{
  web_navigation_msgs__srv__SubmitGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} web_navigation_msgs__srv__SubmitGoal_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__SUBMIT_GOAL__STRUCT_H_
