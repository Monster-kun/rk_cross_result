// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from web_navigation_msgs:srv/ControlLease.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__CONTROL_LEASE__STRUCT_H_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__CONTROL_LEASE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ACQUIRE'.
enum
{
  web_navigation_msgs__srv__ControlLease_Request__ACQUIRE = 0
};

/// Constant 'RENEW'.
enum
{
  web_navigation_msgs__srv__ControlLease_Request__RENEW = 1
};

/// Constant 'RELEASE'.
enum
{
  web_navigation_msgs__srv__ControlLease_Request__RELEASE = 2
};

/// Constant 'VALIDATE'.
enum
{
  web_navigation_msgs__srv__ControlLease_Request__VALIDATE = 3
};

// Include directives for member types
// Member 'session_id'
// Member 'device_label'
// Member 'manager_boot_id'
// Member 'lease_token'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ControlLease in the package web_navigation_msgs.
typedef struct web_navigation_msgs__srv__ControlLease_Request
{
  uint8_t operation;
  rosidl_runtime_c__String session_id;
  rosidl_runtime_c__String device_label;
  rosidl_runtime_c__String manager_boot_id;
  rosidl_runtime_c__String lease_token;
  uint64_t control_epoch;
} web_navigation_msgs__srv__ControlLease_Request;

// Struct for a sequence of web_navigation_msgs__srv__ControlLease_Request.
typedef struct web_navigation_msgs__srv__ControlLease_Request__Sequence
{
  web_navigation_msgs__srv__ControlLease_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} web_navigation_msgs__srv__ControlLease_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'code'
// Member 'message'
// Member 'manager_boot_id'
// Member 'lease_token'
// Member 'owner_label'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ControlLease in the package web_navigation_msgs.
typedef struct web_navigation_msgs__srv__ControlLease_Response
{
  bool success;
  rosidl_runtime_c__String code;
  rosidl_runtime_c__String message;
  rosidl_runtime_c__String manager_boot_id;
  rosidl_runtime_c__String lease_token;
  uint64_t control_epoch;
  uint32_t lease_ttl_ms;
  bool control_held;
  rosidl_runtime_c__String owner_label;
} web_navigation_msgs__srv__ControlLease_Response;

// Struct for a sequence of web_navigation_msgs__srv__ControlLease_Response.
typedef struct web_navigation_msgs__srv__ControlLease_Response__Sequence
{
  web_navigation_msgs__srv__ControlLease_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} web_navigation_msgs__srv__ControlLease_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__CONTROL_LEASE__STRUCT_H_
