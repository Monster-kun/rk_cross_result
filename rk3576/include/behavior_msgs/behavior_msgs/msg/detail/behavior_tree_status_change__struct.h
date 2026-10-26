// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_msgs:msg/BehaviorTreeStatusChange.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_MSGS__MSG__DETAIL__BEHAVIOR_TREE_STATUS_CHANGE__STRUCT_H_
#define BEHAVIOR_MSGS__MSG__DETAIL__BEHAVIOR_TREE_STATUS_CHANGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'node_name'
// Member 'previous_status'
// Member 'current_status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/BehaviorTreeStatusChange in the package behavior_msgs.
typedef struct behavior_msgs__msg__BehaviorTreeStatusChange
{
  /// internal behavior tree event timestamp. Typically this is wall clock time
  builtin_interfaces__msg__Time timestamp;
  rosidl_runtime_c__String node_name;
  /// unique ID for this node
  uint16_t uid;
  /// IDLE, RUNNING, SUCCESS or FAILURE
  rosidl_runtime_c__String previous_status;
  /// IDLE, RUNNING, SUCCESS or FAILURE
  rosidl_runtime_c__String current_status;
} behavior_msgs__msg__BehaviorTreeStatusChange;

// Struct for a sequence of behavior_msgs__msg__BehaviorTreeStatusChange.
typedef struct behavior_msgs__msg__BehaviorTreeStatusChange__Sequence
{
  behavior_msgs__msg__BehaviorTreeStatusChange * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__msg__BehaviorTreeStatusChange__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_MSGS__MSG__DETAIL__BEHAVIOR_TREE_STATUS_CHANGE__STRUCT_H_
