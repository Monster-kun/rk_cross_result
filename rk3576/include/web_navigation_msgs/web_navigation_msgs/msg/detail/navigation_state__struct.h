// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from web_navigation_msgs:msg/NavigationState.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__MSG__DETAIL__NAVIGATION_STATE__STRUCT_H_
#define WEB_NAVIGATION_MSGS__MSG__DETAIL__NAVIGATION_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'IDLE'.
enum
{
  web_navigation_msgs__msg__NavigationState__IDLE = 0
};

/// Constant 'ACCEPTED'.
enum
{
  web_navigation_msgs__msg__NavigationState__ACCEPTED = 1
};

/// Constant 'PLANNING'.
enum
{
  web_navigation_msgs__msg__NavigationState__PLANNING = 2
};

/// Constant 'EXECUTING'.
enum
{
  web_navigation_msgs__msg__NavigationState__EXECUTING = 3
};

/// Constant 'CANCELING'.
enum
{
  web_navigation_msgs__msg__NavigationState__CANCELING = 4
};

/// Constant 'SUCCEEDED'.
enum
{
  web_navigation_msgs__msg__NavigationState__SUCCEEDED = 5
};

/// Constant 'FAILED'.
enum
{
  web_navigation_msgs__msg__NavigationState__FAILED = 6
};

/// Constant 'CANCELED'.
enum
{
  web_navigation_msgs__msg__NavigationState__CANCELED = 7
};

/// Constant 'REJECTED'.
enum
{
  web_navigation_msgs__msg__NavigationState__REJECTED = 8
};

/// Constant 'CANCEL_FAILED'.
enum
{
  web_navigation_msgs__msg__NavigationState__CANCEL_FAILED = 9
};

/// Constant 'UNKNOWN'.
enum
{
  web_navigation_msgs__msg__NavigationState__UNKNOWN = 10
};

/// Constant 'STOPPING'.
enum
{
  web_navigation_msgs__msg__NavigationState__STOPPING = 11
};

/// Constant 'WAITING'.
enum
{
  web_navigation_msgs__msg__NavigationState__WAITING = 12
};

/// Constant 'PAUSED'.
enum
{
  web_navigation_msgs__msg__NavigationState__PAUSED = 13
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'manager_boot_id'
// Member 'map_version'
// Member 'map_name'
// Member 'frame_id'
// Member 'control_owner_label'
// Member 'task_id'
// Member 'ros_goal_uuid'
// Member 'task_status_text'
// Member 'request_id'
// Member 'task_device_label'
// Member 'error_code'
// Member 'error_message'
// Member 'sequence_state'
#include "rosidl_runtime_c/string.h"
// Member 'vehicle_pose'
// Member 'effective_endpoint'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'linear_velocity'
// Member 'angular_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'route'
#include "planning_msgs/msg/detail/global_path__struct.h"
// Member 'sequence'
#include "web_navigation_msgs/msg/detail/sequence_waypoint__struct.h"

/// Struct defined in msg/NavigationState in the package web_navigation_msgs.
typedef struct web_navigation_msgs__msg__NavigationState
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String manager_boot_id;
  uint64_t state_revision;
  bool map_ready;
  rosidl_runtime_c__String map_version;
  rosidl_runtime_c__String map_name;
  rosidl_runtime_c__String frame_id;
  geometry_msgs__msg__Pose vehicle_pose;
  geometry_msgs__msg__Vector3 linear_velocity;
  geometry_msgs__msg__Vector3 angular_velocity;
  bool pose_fresh;
  bool navigation_synchronized;
  bool control_held;
  rosidl_runtime_c__String control_owner_label;
  uint64_t control_epoch;
  rosidl_runtime_c__String task_id;
  rosidl_runtime_c__String ros_goal_uuid;
  uint8_t task_status;
  rosidl_runtime_c__String task_status_text;
  rosidl_runtime_c__String request_id;
  rosidl_runtime_c__String task_device_label;
  double requested_x;
  double requested_y;
  geometry_msgs__msg__Pose effective_endpoint;
  uint32_t path_revision;
  planning_msgs__msg__GlobalPath route;
  rosidl_runtime_c__String error_code;
  rosidl_runtime_c__String error_message;
  web_navigation_msgs__msg__SequenceWaypoint__Sequence sequence;
  uint32_t sequence_index;
  rosidl_runtime_c__String sequence_state;
  bool sequence_loop;
} web_navigation_msgs__msg__NavigationState;

// Struct for a sequence of web_navigation_msgs__msg__NavigationState.
typedef struct web_navigation_msgs__msg__NavigationState__Sequence
{
  web_navigation_msgs__msg__NavigationState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} web_navigation_msgs__msg__NavigationState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEB_NAVIGATION_MSGS__MSG__DETAIL__NAVIGATION_STATE__STRUCT_H_
