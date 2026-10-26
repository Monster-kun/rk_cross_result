// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from web_navigation_msgs:msg/RvizGoalFeedback.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__MSG__DETAIL__RVIZ_GOAL_FEEDBACK__STRUCT_H_
#define WEB_NAVIGATION_MSGS__MSG__DETAIL__RVIZ_GOAL_FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STAGED'.
enum
{
  web_navigation_msgs__msg__RvizGoalFeedback__STAGED = 0
};

/// Constant 'ACCEPTED'.
enum
{
  web_navigation_msgs__msg__RvizGoalFeedback__ACCEPTED = 1
};

/// Constant 'REJECTED'.
enum
{
  web_navigation_msgs__msg__RvizGoalFeedback__REJECTED = 2
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'manager_boot_id'
// Member 'request_id'
// Member 'task_id'
// Member 'code'
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RvizGoalFeedback in the package web_navigation_msgs.
typedef struct web_navigation_msgs__msg__RvizGoalFeedback
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String manager_boot_id;
  uint8_t status;
  rosidl_runtime_c__String request_id;
  rosidl_runtime_c__String task_id;
  rosidl_runtime_c__String code;
  rosidl_runtime_c__String message;
  uint32_t staged_waypoints;
} web_navigation_msgs__msg__RvizGoalFeedback;

// Struct for a sequence of web_navigation_msgs__msg__RvizGoalFeedback.
typedef struct web_navigation_msgs__msg__RvizGoalFeedback__Sequence
{
  web_navigation_msgs__msg__RvizGoalFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} web_navigation_msgs__msg__RvizGoalFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEB_NAVIGATION_MSGS__MSG__DETAIL__RVIZ_GOAL_FEEDBACK__STRUCT_H_
