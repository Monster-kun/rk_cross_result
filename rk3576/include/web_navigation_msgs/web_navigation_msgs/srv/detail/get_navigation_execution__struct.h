// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from web_navigation_msgs:srv/GetNavigationExecution.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_NAVIGATION_EXECUTION__STRUCT_H_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_NAVIGATION_EXECUTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetNavigationExecution in the package web_navigation_msgs.
typedef struct web_navigation_msgs__srv__GetNavigationExecution_Request
{
  uint8_t structure_needs_at_least_one_member;
} web_navigation_msgs__srv__GetNavigationExecution_Request;

// Struct for a sequence of web_navigation_msgs__srv__GetNavigationExecution_Request.
typedef struct web_navigation_msgs__srv__GetNavigationExecution_Request__Sequence
{
  web_navigation_msgs__srv__GetNavigationExecution_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} web_navigation_msgs__srv__GetNavigationExecution_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'instance_id'
#include "rosidl_runtime_c/string.h"
// Member 'goals'
#include "web_navigation_msgs/msg/detail/navigation_execution__struct.h"

/// Struct defined in srv/GetNavigationExecution in the package web_navigation_msgs.
typedef struct web_navigation_msgs__srv__GetNavigationExecution_Response
{
  rosidl_runtime_c__String instance_id;
  bool active;
  /// Includes execution/BT cleanup after the goal has reached a terminal state.
  bool execution_running;
  /// Current and pending goals, captured under the same lock.
  web_navigation_msgs__msg__NavigationExecution__Sequence goals;
} web_navigation_msgs__srv__GetNavigationExecution_Response;

// Struct for a sequence of web_navigation_msgs__srv__GetNavigationExecution_Response.
typedef struct web_navigation_msgs__srv__GetNavigationExecution_Response__Sequence
{
  web_navigation_msgs__srv__GetNavigationExecution_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} web_navigation_msgs__srv__GetNavigationExecution_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_NAVIGATION_EXECUTION__STRUCT_H_
