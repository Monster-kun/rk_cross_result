// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from chassis_control_msgs:msg/PurepursuitViz.idl
// generated code does not contain a copyright notice

#ifndef CHASSIS_CONTROL_MSGS__MSG__DETAIL__PUREPURSUIT_VIZ__STRUCT_H_
#define CHASSIS_CONTROL_MSGS__MSG__DETAIL__PUREPURSUIT_VIZ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PurepursuitViz in the package chassis_control_msgs.
typedef struct chassis_control_msgs__msg__PurepursuitViz
{
  double aimpointx;
  double aimpointy;
  double velx;
  double vely;
  double velz;
  double ahead;
  double currentx;
  double currenty;
} chassis_control_msgs__msg__PurepursuitViz;

// Struct for a sequence of chassis_control_msgs__msg__PurepursuitViz.
typedef struct chassis_control_msgs__msg__PurepursuitViz__Sequence
{
  chassis_control_msgs__msg__PurepursuitViz * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chassis_control_msgs__msg__PurepursuitViz__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CHASSIS_CONTROL_MSGS__MSG__DETAIL__PUREPURSUIT_VIZ__STRUCT_H_
