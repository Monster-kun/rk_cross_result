// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from chassis_control_msgs:msg/Canframe.idl
// generated code does not contain a copyright notice

#ifndef CHASSIS_CONTROL_MSGS__MSG__DETAIL__CANFRAME__STRUCT_H_
#define CHASSIS_CONTROL_MSGS__MSG__DETAIL__CANFRAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Canframe in the package chassis_control_msgs.
/**
  * ID is the pivot frame ID
 */
typedef struct chassis_control_msgs__msg__Canframe
{
  int32_t id;
  /// m/s
  float dricmd;
  /// rad
  float pivcmd;
} chassis_control_msgs__msg__Canframe;

// Struct for a sequence of chassis_control_msgs__msg__Canframe.
typedef struct chassis_control_msgs__msg__Canframe__Sequence
{
  chassis_control_msgs__msg__Canframe * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chassis_control_msgs__msg__Canframe__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CHASSIS_CONTROL_MSGS__MSG__DETAIL__CANFRAME__STRUCT_H_
