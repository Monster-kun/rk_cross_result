// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from web_navigation_msgs:srv/GetTask.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "web_navigation_msgs/srv/detail/get_task__rosidl_typesupport_introspection_c.h"
#include "web_navigation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "web_navigation_msgs/srv/detail/get_task__functions.h"
#include "web_navigation_msgs/srv/detail/get_task__struct.h"


// Include directives for member types
// Member `task_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void web_navigation_msgs__srv__GetTask_Request__rosidl_typesupport_introspection_c__GetTask_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  web_navigation_msgs__srv__GetTask_Request__init(message_memory);
}

void web_navigation_msgs__srv__GetTask_Request__rosidl_typesupport_introspection_c__GetTask_Request_fini_function(void * message_memory)
{
  web_navigation_msgs__srv__GetTask_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember web_navigation_msgs__srv__GetTask_Request__rosidl_typesupport_introspection_c__GetTask_Request_message_member_array[1] = {
  {
    "task_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetTask_Request, task_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers web_navigation_msgs__srv__GetTask_Request__rosidl_typesupport_introspection_c__GetTask_Request_message_members = {
  "web_navigation_msgs__srv",  // message namespace
  "GetTask_Request",  // message name
  1,  // number of fields
  sizeof(web_navigation_msgs__srv__GetTask_Request),
  web_navigation_msgs__srv__GetTask_Request__rosidl_typesupport_introspection_c__GetTask_Request_message_member_array,  // message members
  web_navigation_msgs__srv__GetTask_Request__rosidl_typesupport_introspection_c__GetTask_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  web_navigation_msgs__srv__GetTask_Request__rosidl_typesupport_introspection_c__GetTask_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t web_navigation_msgs__srv__GetTask_Request__rosidl_typesupport_introspection_c__GetTask_Request_message_type_support_handle = {
  0,
  &web_navigation_msgs__srv__GetTask_Request__rosidl_typesupport_introspection_c__GetTask_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_web_navigation_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, srv, GetTask_Request)() {
  if (!web_navigation_msgs__srv__GetTask_Request__rosidl_typesupport_introspection_c__GetTask_Request_message_type_support_handle.typesupport_identifier) {
    web_navigation_msgs__srv__GetTask_Request__rosidl_typesupport_introspection_c__GetTask_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &web_navigation_msgs__srv__GetTask_Request__rosidl_typesupport_introspection_c__GetTask_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "web_navigation_msgs/srv/detail/get_task__rosidl_typesupport_introspection_c.h"
// already included above
// #include "web_navigation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "web_navigation_msgs/srv/detail/get_task__functions.h"
// already included above
// #include "web_navigation_msgs/srv/detail/get_task__struct.h"


// Include directives for member types
// Member `task_id`
// Member `request_id`
// Member `ros_goal_uuid`
// Member `map_version`
// Member `frame_id`
// Member `device_label`
// Member `error_code`
// Member `error_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `effective_endpoint`
#include "geometry_msgs/msg/pose.h"
// Member `effective_endpoint`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void web_navigation_msgs__srv__GetTask_Response__rosidl_typesupport_introspection_c__GetTask_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  web_navigation_msgs__srv__GetTask_Response__init(message_memory);
}

void web_navigation_msgs__srv__GetTask_Response__rosidl_typesupport_introspection_c__GetTask_Response_fini_function(void * message_memory)
{
  web_navigation_msgs__srv__GetTask_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember web_navigation_msgs__srv__GetTask_Response__rosidl_typesupport_introspection_c__GetTask_Response_message_member_array[14] = {
  {
    "found",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetTask_Response, found),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "task_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetTask_Response, task_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetTask_Response, request_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ros_goal_uuid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetTask_Response, ros_goal_uuid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetTask_Response, map_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetTask_Response, frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetTask_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "requested_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetTask_Response, requested_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "requested_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetTask_Response, requested_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "effective_endpoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetTask_Response, effective_endpoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "device_label",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetTask_Response, device_label),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetTask_Response, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetTask_Response, error_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "updated_at",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetTask_Response, updated_at),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers web_navigation_msgs__srv__GetTask_Response__rosidl_typesupport_introspection_c__GetTask_Response_message_members = {
  "web_navigation_msgs__srv",  // message namespace
  "GetTask_Response",  // message name
  14,  // number of fields
  sizeof(web_navigation_msgs__srv__GetTask_Response),
  web_navigation_msgs__srv__GetTask_Response__rosidl_typesupport_introspection_c__GetTask_Response_message_member_array,  // message members
  web_navigation_msgs__srv__GetTask_Response__rosidl_typesupport_introspection_c__GetTask_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  web_navigation_msgs__srv__GetTask_Response__rosidl_typesupport_introspection_c__GetTask_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t web_navigation_msgs__srv__GetTask_Response__rosidl_typesupport_introspection_c__GetTask_Response_message_type_support_handle = {
  0,
  &web_navigation_msgs__srv__GetTask_Response__rosidl_typesupport_introspection_c__GetTask_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_web_navigation_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, srv, GetTask_Response)() {
  web_navigation_msgs__srv__GetTask_Response__rosidl_typesupport_introspection_c__GetTask_Response_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!web_navigation_msgs__srv__GetTask_Response__rosidl_typesupport_introspection_c__GetTask_Response_message_type_support_handle.typesupport_identifier) {
    web_navigation_msgs__srv__GetTask_Response__rosidl_typesupport_introspection_c__GetTask_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &web_navigation_msgs__srv__GetTask_Response__rosidl_typesupport_introspection_c__GetTask_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "web_navigation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "web_navigation_msgs/srv/detail/get_task__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers web_navigation_msgs__srv__detail__get_task__rosidl_typesupport_introspection_c__GetTask_service_members = {
  "web_navigation_msgs__srv",  // service namespace
  "GetTask",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // web_navigation_msgs__srv__detail__get_task__rosidl_typesupport_introspection_c__GetTask_Request_message_type_support_handle,
  NULL  // response message
  // web_navigation_msgs__srv__detail__get_task__rosidl_typesupport_introspection_c__GetTask_Response_message_type_support_handle
};

static rosidl_service_type_support_t web_navigation_msgs__srv__detail__get_task__rosidl_typesupport_introspection_c__GetTask_service_type_support_handle = {
  0,
  &web_navigation_msgs__srv__detail__get_task__rosidl_typesupport_introspection_c__GetTask_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, srv, GetTask_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, srv, GetTask_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_web_navigation_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, srv, GetTask)() {
  if (!web_navigation_msgs__srv__detail__get_task__rosidl_typesupport_introspection_c__GetTask_service_type_support_handle.typesupport_identifier) {
    web_navigation_msgs__srv__detail__get_task__rosidl_typesupport_introspection_c__GetTask_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)web_navigation_msgs__srv__detail__get_task__rosidl_typesupport_introspection_c__GetTask_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, srv, GetTask_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, srv, GetTask_Response)()->data;
  }

  return &web_navigation_msgs__srv__detail__get_task__rosidl_typesupport_introspection_c__GetTask_service_type_support_handle;
}
