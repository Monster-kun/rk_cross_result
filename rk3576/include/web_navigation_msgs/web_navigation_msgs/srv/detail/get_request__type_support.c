// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from web_navigation_msgs:srv/GetRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "web_navigation_msgs/srv/detail/get_request__rosidl_typesupport_introspection_c.h"
#include "web_navigation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "web_navigation_msgs/srv/detail/get_request__functions.h"
#include "web_navigation_msgs/srv/detail/get_request__struct.h"


// Include directives for member types
// Member `request_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void web_navigation_msgs__srv__GetRequest_Request__rosidl_typesupport_introspection_c__GetRequest_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  web_navigation_msgs__srv__GetRequest_Request__init(message_memory);
}

void web_navigation_msgs__srv__GetRequest_Request__rosidl_typesupport_introspection_c__GetRequest_Request_fini_function(void * message_memory)
{
  web_navigation_msgs__srv__GetRequest_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember web_navigation_msgs__srv__GetRequest_Request__rosidl_typesupport_introspection_c__GetRequest_Request_message_member_array[1] = {
  {
    "request_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetRequest_Request, request_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers web_navigation_msgs__srv__GetRequest_Request__rosidl_typesupport_introspection_c__GetRequest_Request_message_members = {
  "web_navigation_msgs__srv",  // message namespace
  "GetRequest_Request",  // message name
  1,  // number of fields
  sizeof(web_navigation_msgs__srv__GetRequest_Request),
  web_navigation_msgs__srv__GetRequest_Request__rosidl_typesupport_introspection_c__GetRequest_Request_message_member_array,  // message members
  web_navigation_msgs__srv__GetRequest_Request__rosidl_typesupport_introspection_c__GetRequest_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  web_navigation_msgs__srv__GetRequest_Request__rosidl_typesupport_introspection_c__GetRequest_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t web_navigation_msgs__srv__GetRequest_Request__rosidl_typesupport_introspection_c__GetRequest_Request_message_type_support_handle = {
  0,
  &web_navigation_msgs__srv__GetRequest_Request__rosidl_typesupport_introspection_c__GetRequest_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_web_navigation_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, srv, GetRequest_Request)() {
  if (!web_navigation_msgs__srv__GetRequest_Request__rosidl_typesupport_introspection_c__GetRequest_Request_message_type_support_handle.typesupport_identifier) {
    web_navigation_msgs__srv__GetRequest_Request__rosidl_typesupport_introspection_c__GetRequest_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &web_navigation_msgs__srv__GetRequest_Request__rosidl_typesupport_introspection_c__GetRequest_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "web_navigation_msgs/srv/detail/get_request__rosidl_typesupport_introspection_c.h"
// already included above
// #include "web_navigation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "web_navigation_msgs/srv/detail/get_request__functions.h"
// already included above
// #include "web_navigation_msgs/srv/detail/get_request__struct.h"


// Include directives for member types
// Member `code`
// Member `message`
// Member `task_id`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void web_navigation_msgs__srv__GetRequest_Response__rosidl_typesupport_introspection_c__GetRequest_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  web_navigation_msgs__srv__GetRequest_Response__init(message_memory);
}

void web_navigation_msgs__srv__GetRequest_Response__rosidl_typesupport_introspection_c__GetRequest_Response_fini_function(void * message_memory)
{
  web_navigation_msgs__srv__GetRequest_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember web_navigation_msgs__srv__GetRequest_Response__rosidl_typesupport_introspection_c__GetRequest_Response_message_member_array[7] = {
  {
    "found",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetRequest_Response, found),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetRequest_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetRequest_Response, code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetRequest_Response, message),  // bytes offset in struct
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
    offsetof(web_navigation_msgs__srv__GetRequest_Response, task_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "task_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetRequest_Response, task_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state_revision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetRequest_Response, state_revision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers web_navigation_msgs__srv__GetRequest_Response__rosidl_typesupport_introspection_c__GetRequest_Response_message_members = {
  "web_navigation_msgs__srv",  // message namespace
  "GetRequest_Response",  // message name
  7,  // number of fields
  sizeof(web_navigation_msgs__srv__GetRequest_Response),
  web_navigation_msgs__srv__GetRequest_Response__rosidl_typesupport_introspection_c__GetRequest_Response_message_member_array,  // message members
  web_navigation_msgs__srv__GetRequest_Response__rosidl_typesupport_introspection_c__GetRequest_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  web_navigation_msgs__srv__GetRequest_Response__rosidl_typesupport_introspection_c__GetRequest_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t web_navigation_msgs__srv__GetRequest_Response__rosidl_typesupport_introspection_c__GetRequest_Response_message_type_support_handle = {
  0,
  &web_navigation_msgs__srv__GetRequest_Response__rosidl_typesupport_introspection_c__GetRequest_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_web_navigation_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, srv, GetRequest_Response)() {
  if (!web_navigation_msgs__srv__GetRequest_Response__rosidl_typesupport_introspection_c__GetRequest_Response_message_type_support_handle.typesupport_identifier) {
    web_navigation_msgs__srv__GetRequest_Response__rosidl_typesupport_introspection_c__GetRequest_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &web_navigation_msgs__srv__GetRequest_Response__rosidl_typesupport_introspection_c__GetRequest_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "web_navigation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "web_navigation_msgs/srv/detail/get_request__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers web_navigation_msgs__srv__detail__get_request__rosidl_typesupport_introspection_c__GetRequest_service_members = {
  "web_navigation_msgs__srv",  // service namespace
  "GetRequest",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // web_navigation_msgs__srv__detail__get_request__rosidl_typesupport_introspection_c__GetRequest_Request_message_type_support_handle,
  NULL  // response message
  // web_navigation_msgs__srv__detail__get_request__rosidl_typesupport_introspection_c__GetRequest_Response_message_type_support_handle
};

static rosidl_service_type_support_t web_navigation_msgs__srv__detail__get_request__rosidl_typesupport_introspection_c__GetRequest_service_type_support_handle = {
  0,
  &web_navigation_msgs__srv__detail__get_request__rosidl_typesupport_introspection_c__GetRequest_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, srv, GetRequest_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, srv, GetRequest_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_web_navigation_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, srv, GetRequest)() {
  if (!web_navigation_msgs__srv__detail__get_request__rosidl_typesupport_introspection_c__GetRequest_service_type_support_handle.typesupport_identifier) {
    web_navigation_msgs__srv__detail__get_request__rosidl_typesupport_introspection_c__GetRequest_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)web_navigation_msgs__srv__detail__get_request__rosidl_typesupport_introspection_c__GetRequest_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, srv, GetRequest_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, srv, GetRequest_Response)()->data;
  }

  return &web_navigation_msgs__srv__detail__get_request__rosidl_typesupport_introspection_c__GetRequest_service_type_support_handle;
}
