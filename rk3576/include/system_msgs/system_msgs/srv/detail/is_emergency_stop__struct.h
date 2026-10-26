// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from system_msgs:srv/IsEmergencyStop.idl
// generated code does not contain a copyright notice

#ifndef SYSTEM_MSGS__SRV__DETAIL__IS_EMERGENCY_STOP__STRUCT_H_
#define SYSTEM_MSGS__SRV__DETAIL__IS_EMERGENCY_STOP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'input'
#include "std_msgs/msg/detail/empty__struct.h"

/// Struct defined in srv/IsEmergencyStop in the package system_msgs.
typedef struct system_msgs__srv__IsEmergencyStop_Request
{
  std_msgs__msg__Empty input;
} system_msgs__srv__IsEmergencyStop_Request;

// Struct for a sequence of system_msgs__srv__IsEmergencyStop_Request.
typedef struct system_msgs__srv__IsEmergencyStop_Request__Sequence
{
  system_msgs__srv__IsEmergencyStop_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} system_msgs__srv__IsEmergencyStop_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/IsEmergencyStop in the package system_msgs.
typedef struct system_msgs__srv__IsEmergencyStop_Response
{
  bool is_emergency_stop;
} system_msgs__srv__IsEmergencyStop_Response;

// Struct for a sequence of system_msgs__srv__IsEmergencyStop_Response.
typedef struct system_msgs__srv__IsEmergencyStop_Response__Sequence
{
  system_msgs__srv__IsEmergencyStop_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} system_msgs__srv__IsEmergencyStop_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SYSTEM_MSGS__SRV__DETAIL__IS_EMERGENCY_STOP__STRUCT_H_
