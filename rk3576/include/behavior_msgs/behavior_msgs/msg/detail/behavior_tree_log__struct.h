// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_msgs:msg/BehaviorTreeLog.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_MSGS__MSG__DETAIL__BEHAVIOR_TREE_LOG__STRUCT_H_
#define BEHAVIOR_MSGS__MSG__DETAIL__BEHAVIOR_TREE_LOG__STRUCT_H_

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
// Member 'event_log'
#include "behavior_msgs/msg/detail/behavior_tree_status_change__struct.h"

/// Struct defined in msg/BehaviorTreeLog in the package behavior_msgs.
typedef struct behavior_msgs__msg__BehaviorTreeLog
{
  /// ROS time that this log message was sent.
  builtin_interfaces__msg__Time timestamp;
  behavior_msgs__msg__BehaviorTreeStatusChange__Sequence event_log;
} behavior_msgs__msg__BehaviorTreeLog;

// Struct for a sequence of behavior_msgs__msg__BehaviorTreeLog.
typedef struct behavior_msgs__msg__BehaviorTreeLog__Sequence
{
  behavior_msgs__msg__BehaviorTreeLog * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_msgs__msg__BehaviorTreeLog__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_MSGS__MSG__DETAIL__BEHAVIOR_TREE_LOG__STRUCT_H_
