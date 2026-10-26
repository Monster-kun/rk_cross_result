// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from chassis_control_msgs:msg/Crsf.idl
// generated code does not contain a copyright notice

#ifndef CHASSIS_CONTROL_MSGS__MSG__DETAIL__CRSF__STRUCT_H_
#define CHASSIS_CONTROL_MSGS__MSG__DETAIL__CRSF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Crsf in the package chassis_control_msgs.
typedef struct chassis_control_msgs__msg__Crsf
{
  int16_t ch1;
  int16_t ch2;
  int16_t ch3;
  int16_t ch4;
  int16_t ch5;
  int16_t ch6;
  int16_t ch7;
  int16_t ch8;
  int16_t ch9;
  int16_t ch10;
  int16_t ch11;
  int16_t ch12;
  int16_t ch13;
  int16_t ch14;
  int16_t ch15;
  int16_t ch16;
} chassis_control_msgs__msg__Crsf;

// Struct for a sequence of chassis_control_msgs__msg__Crsf.
typedef struct chassis_control_msgs__msg__Crsf__Sequence
{
  chassis_control_msgs__msg__Crsf * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chassis_control_msgs__msg__Crsf__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CHASSIS_CONTROL_MSGS__MSG__DETAIL__CRSF__STRUCT_H_
