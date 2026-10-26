// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_msgs:srv/SelectPlanner.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_MSGS__SRV__DETAIL__SELECT_PLANNER__STRUCT_H_
#define BEHAVIOR_MSGS__SRV__DETAIL__SELECT_PLANNER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'planner_selector_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SelectPlanner in the package behavior_msgs.
typedef struct behavior_msgs__srv__SelectPlanner_Request
{
  rosidl_runtime_c__String planner_selector_id;
} behavior_msgs__srv__SelectPlanner_Request;

// Struct for a sequence of behavior_msgs__srv__SelectPlanner_Request.
typedef struct behavior_msgs__srv__SelectPlanner_Request__Sequence
{
  behavior_msgs__srv__SelectPlanner_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__srv__SelectPlanner_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'local_planner_id'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SelectPlanner in the package behavior_msgs.
typedef struct behavior_msgs__srv__SelectPlanner_Response
{
  rosidl_runtime_c__String local_planner_id;
} behavior_msgs__srv__SelectPlanner_Response;

// Struct for a sequence of behavior_msgs__srv__SelectPlanner_Response.
typedef struct behavior_msgs__srv__SelectPlanner_Response__Sequence
{
  behavior_msgs__srv__SelectPlanner_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__srv__SelectPlanner_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_MSGS__SRV__DETAIL__SELECT_PLANNER__STRUCT_H_
