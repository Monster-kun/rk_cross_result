// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from web_navigation_msgs:msg/NavigationExecution.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__MSG__DETAIL__NAVIGATION_EXECUTION__STRUCT_H_
#define WEB_NAVIGATION_MSGS__MSG__DETAIL__NAVIGATION_EXECUTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ros_goal_uuid'
// Member 'task_id'
// Member 'map_version'
#include "rosidl_runtime_c/string.h"
// Member 'goals'
// Member 'endpoint'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in msg/NavigationExecution in the package web_navigation_msgs.
/**
  * One active goal in the navigator's atomic execution snapshot.
 */
typedef struct web_navigation_msgs__msg__NavigationExecution
{
  rosidl_runtime_c__String ros_goal_uuid;
  rosidl_runtime_c__String task_id;
  rosidl_runtime_c__String map_version;
  uint8_t status;
  geometry_msgs__msg__PoseStamped__Sequence goals;
  geometry_msgs__msg__PoseStamped endpoint;
} web_navigation_msgs__msg__NavigationExecution;

// Struct for a sequence of web_navigation_msgs__msg__NavigationExecution.
typedef struct web_navigation_msgs__msg__NavigationExecution__Sequence
{
  web_navigation_msgs__msg__NavigationExecution * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} web_navigation_msgs__msg__NavigationExecution__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEB_NAVIGATION_MSGS__MSG__DETAIL__NAVIGATION_EXECUTION__STRUCT_H_
