// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from system_msgs:srv/NeedSlowDown.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "system_msgs/srv/detail/need_slow_down__rosidl_typesupport_introspection_c.h"
#include "system_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "system_msgs/srv/detail/need_slow_down__functions.h"
#include "system_msgs/srv/detail/need_slow_down__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void system_msgs__srv__NeedSlowDown_Request__rosidl_typesupport_introspection_c__NeedSlowDown_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  system_msgs__srv__NeedSlowDown_Request__init(message_memory);
}

void system_msgs__srv__NeedSlowDown_Request__rosidl_typesupport_introspection_c__NeedSlowDown_Request_fini_function(void * message_memory)
{
  system_msgs__srv__NeedSlowDown_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember system_msgs__srv__NeedSlowDown_Request__rosidl_typesupport_introspection_c__NeedSlowDown_Request_message_member_array[1] = {
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(system_msgs__srv__NeedSlowDown_Request, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers system_msgs__srv__NeedSlowDown_Request__rosidl_typesupport_introspection_c__NeedSlowDown_Request_message_members = {
  "system_msgs__srv",  // message namespace
  "NeedSlowDown_Request",  // message name
  1,  // number of fields
  sizeof(system_msgs__srv__NeedSlowDown_Request),
  system_msgs__srv__NeedSlowDown_Request__rosidl_typesupport_introspection_c__NeedSlowDown_Request_message_member_array,  // message members
  system_msgs__srv__NeedSlowDown_Request__rosidl_typesupport_introspection_c__NeedSlowDown_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  system_msgs__srv__NeedSlowDown_Request__rosidl_typesupport_introspection_c__NeedSlowDown_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t system_msgs__srv__NeedSlowDown_Request__rosidl_typesupport_introspection_c__NeedSlowDown_Request_message_type_support_handle = {
  0,
  &system_msgs__srv__NeedSlowDown_Request__rosidl_typesupport_introspection_c__NeedSlowDown_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_system_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, system_msgs, srv, NeedSlowDown_Request)() {
  system_msgs__srv__NeedSlowDown_Request__rosidl_typesupport_introspection_c__NeedSlowDown_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!system_msgs__srv__NeedSlowDown_Request__rosidl_typesupport_introspection_c__NeedSlowDown_Request_message_type_support_handle.typesupport_identifier) {
    system_msgs__srv__NeedSlowDown_Request__rosidl_typesupport_introspection_c__NeedSlowDown_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &system_msgs__srv__NeedSlowDown_Request__rosidl_typesupport_introspection_c__NeedSlowDown_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "system_msgs/srv/detail/need_slow_down__rosidl_typesupport_introspection_c.h"
// already included above
// #include "system_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "system_msgs/srv/detail/need_slow_down__functions.h"
// already included above
// #include "system_msgs/srv/detail/need_slow_down__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void system_msgs__srv__NeedSlowDown_Response__rosidl_typesupport_introspection_c__NeedSlowDown_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  system_msgs__srv__NeedSlowDown_Response__init(message_memory);
}

void system_msgs__srv__NeedSlowDown_Response__rosidl_typesupport_introspection_c__NeedSlowDown_Response_fini_function(void * message_memory)
{
  system_msgs__srv__NeedSlowDown_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember system_msgs__srv__NeedSlowDown_Response__rosidl_typesupport_introspection_c__NeedSlowDown_Response_message_member_array[2] = {
  {
    "slow_down",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(system_msgs__srv__NeedSlowDown_Response, slow_down),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "slow_down_ratio",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(system_msgs__srv__NeedSlowDown_Response, slow_down_ratio),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers system_msgs__srv__NeedSlowDown_Response__rosidl_typesupport_introspection_c__NeedSlowDown_Response_message_members = {
  "system_msgs__srv",  // message namespace
  "NeedSlowDown_Response",  // message name
  2,  // number of fields
  sizeof(system_msgs__srv__NeedSlowDown_Response),
  system_msgs__srv__NeedSlowDown_Response__rosidl_typesupport_introspection_c__NeedSlowDown_Response_message_member_array,  // message members
  system_msgs__srv__NeedSlowDown_Response__rosidl_typesupport_introspection_c__NeedSlowDown_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  system_msgs__srv__NeedSlowDown_Response__rosidl_typesupport_introspection_c__NeedSlowDown_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t system_msgs__srv__NeedSlowDown_Response__rosidl_typesupport_introspection_c__NeedSlowDown_Response_message_type_support_handle = {
  0,
  &system_msgs__srv__NeedSlowDown_Response__rosidl_typesupport_introspection_c__NeedSlowDown_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_system_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, system_msgs, srv, NeedSlowDown_Response)() {
  if (!system_msgs__srv__NeedSlowDown_Response__rosidl_typesupport_introspection_c__NeedSlowDown_Response_message_type_support_handle.typesupport_identifier) {
    system_msgs__srv__NeedSlowDown_Response__rosidl_typesupport_introspection_c__NeedSlowDown_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &system_msgs__srv__NeedSlowDown_Response__rosidl_typesupport_introspection_c__NeedSlowDown_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "system_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "system_msgs/srv/detail/need_slow_down__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers system_msgs__srv__detail__need_slow_down__rosidl_typesupport_introspection_c__NeedSlowDown_service_members = {
  "system_msgs__srv",  // service namespace
  "NeedSlowDown",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // system_msgs__srv__detail__need_slow_down__rosidl_typesupport_introspection_c__NeedSlowDown_Request_message_type_support_handle,
  NULL  // response message
  // system_msgs__srv__detail__need_slow_down__rosidl_typesupport_introspection_c__NeedSlowDown_Response_message_type_support_handle
};

static rosidl_service_type_support_t system_msgs__srv__detail__need_slow_down__rosidl_typesupport_introspection_c__NeedSlowDown_service_type_support_handle = {
  0,
  &system_msgs__srv__detail__need_slow_down__rosidl_typesupport_introspection_c__NeedSlowDown_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, system_msgs, srv, NeedSlowDown_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, system_msgs, srv, NeedSlowDown_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_system_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, system_msgs, srv, NeedSlowDown)() {
  if (!system_msgs__srv__detail__need_slow_down__rosidl_typesupport_introspection_c__NeedSlowDown_service_type_support_handle.typesupport_identifier) {
    system_msgs__srv__detail__need_slow_down__rosidl_typesupport_introspection_c__NeedSlowDown_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)system_msgs__srv__detail__need_slow_down__rosidl_typesupport_introspection_c__NeedSlowDown_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, system_msgs, srv, NeedSlowDown_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, system_msgs, srv, NeedSlowDown_Response)()->data;
  }

  return &system_msgs__srv__detail__need_slow_down__rosidl_typesupport_introspection_c__NeedSlowDown_service_type_support_handle;
}
