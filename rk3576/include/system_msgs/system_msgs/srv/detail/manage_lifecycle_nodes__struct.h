// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from system_msgs:srv/ManageLifecycleNodes.idl
// generated code does not contain a copyright notice

#ifndef SYSTEM_MSGS__SRV__DETAIL__MANAGE_LIFECYCLE_NODES__STRUCT_H_
#define SYSTEM_MSGS__SRV__DETAIL__MANAGE_LIFECYCLE_NODES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STARTUP'.
enum
{
  system_msgs__srv__ManageLifecycleNodes_Request__STARTUP = 0
};

/// Constant 'PAUSE'.
enum
{
  system_msgs__srv__ManageLifecycleNodes_Request__PAUSE = 1
};

/// Constant 'RESUME'.
enum
{
  system_msgs__srv__ManageLifecycleNodes_Request__RESUME = 2
};

/// Constant 'RESET'.
enum
{
  system_msgs__srv__ManageLifecycleNodes_Request__RESET = 3
};

/// Constant 'SHUTDOWN'.
enum
{
  system_msgs__srv__ManageLifecycleNodes_Request__SHUTDOWN = 4
};

/// Struct defined in srv/ManageLifecycleNodes in the package system_msgs.
typedef struct system_msgs__srv__ManageLifecycleNodes_Request
{
  uint8_t command;
} system_msgs__srv__ManageLifecycleNodes_Request;

// Struct for a sequence of system_msgs__srv__ManageLifecycleNodes_Request.
typedef struct system_msgs__srv__ManageLifecycleNodes_Request__Sequence
{
  system_msgs__srv__ManageLifecycleNodes_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} system_msgs__srv__ManageLifecycleNodes_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ManageLifecycleNodes in the package system_msgs.
typedef struct system_msgs__srv__ManageLifecycleNodes_Response
{
  bool success;
} system_msgs__srv__ManageLifecycleNodes_Response;

// Struct for a sequence of system_msgs__srv__ManageLifecycleNodes_Response.
typedef struct system_msgs__srv__ManageLifecycleNodes_Response__Sequence
{
  system_msgs__srv__ManageLifecycleNodes_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} system_msgs__srv__ManageLifecycleNodes_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SYSTEM_MSGS__SRV__DETAIL__MANAGE_LIFECYCLE_NODES__STRUCT_H_
