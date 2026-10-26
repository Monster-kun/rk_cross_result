// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from web_navigation_msgs:msg/PlanningEvent.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__MSG__DETAIL__PLANNING_EVENT__STRUCT_H_
#define WEB_NAVIGATION_MSGS__MSG__DETAIL__PLANNING_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STARTED'.
enum
{
  web_navigation_msgs__msg__PlanningEvent__STARTED = 0
};

/// Constant 'SUCCEEDED'.
enum
{
  web_navigation_msgs__msg__PlanningEvent__SUCCEEDED = 1
};

/// Constant 'FAILED'.
enum
{
  web_navigation_msgs__msg__PlanningEvent__FAILED = 2
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'task_id'
// Member 'ros_goal_uuid'
// Member 'map_version'
// Member 'planning_attempt_id'
// Member 'error_code'
// Member 'error_message'
#include "rosidl_runtime_c/string.h"
// Member 'effective_endpoint'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'path'
#include "planning_msgs/msg/detail/global_path__struct.h"

/// Struct defined in msg/PlanningEvent in the package web_navigation_msgs.
typedef struct web_navigation_msgs__msg__PlanningEvent
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String task_id;
  rosidl_runtime_c__String ros_goal_uuid;
  rosidl_runtime_c__String map_version;
  rosidl_runtime_c__String planning_attempt_id;
  uint8_t status;
  uint32_t path_revision;
  geometry_msgs__msg__Pose effective_endpoint;
  rosidl_runtime_c__String error_code;
  rosidl_runtime_c__String error_message;
  planning_msgs__msg__GlobalPath path;
} web_navigation_msgs__msg__PlanningEvent;

// Struct for a sequence of web_navigation_msgs__msg__PlanningEvent.
typedef struct web_navigation_msgs__msg__PlanningEvent__Sequence
{
  web_navigation_msgs__msg__PlanningEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} web_navigation_msgs__msg__PlanningEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEB_NAVIGATION_MSGS__MSG__DETAIL__PLANNING_EVENT__STRUCT_H_
