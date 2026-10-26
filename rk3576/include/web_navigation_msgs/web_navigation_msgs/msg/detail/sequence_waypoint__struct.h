// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from web_navigation_msgs:msg/SequenceWaypoint.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__MSG__DETAIL__SEQUENCE_WAYPOINT__STRUCT_H_
#define WEB_NAVIGATION_MSGS__MSG__DETAIL__SEQUENCE_WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'annotation_id'
// Member 'name'
// Member 'lanelet_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SequenceWaypoint in the package web_navigation_msgs.
typedef struct web_navigation_msgs__msg__SequenceWaypoint
{
  rosidl_runtime_c__String annotation_id;
  rosidl_runtime_c__String name;
  double x;
  double y;
  rosidl_runtime_c__String lanelet_id;
  bool stop;
} web_navigation_msgs__msg__SequenceWaypoint;

// Struct for a sequence of web_navigation_msgs__msg__SequenceWaypoint.
typedef struct web_navigation_msgs__msg__SequenceWaypoint__Sequence
{
  web_navigation_msgs__msg__SequenceWaypoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} web_navigation_msgs__msg__SequenceWaypoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEB_NAVIGATION_MSGS__MSG__DETAIL__SEQUENCE_WAYPOINT__STRUCT_H_
