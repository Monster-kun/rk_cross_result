// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from web_navigation_msgs:srv/GetWebMap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "web_navigation_msgs/srv/detail/get_web_map__rosidl_typesupport_introspection_c.h"
#include "web_navigation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "web_navigation_msgs/srv/detail/get_web_map__functions.h"
#include "web_navigation_msgs/srv/detail/get_web_map__struct.h"


// Include directives for member types
// Member `if_map_version`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void web_navigation_msgs__srv__GetWebMap_Request__rosidl_typesupport_introspection_c__GetWebMap_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  web_navigation_msgs__srv__GetWebMap_Request__init(message_memory);
}

void web_navigation_msgs__srv__GetWebMap_Request__rosidl_typesupport_introspection_c__GetWebMap_Request_fini_function(void * message_memory)
{
  web_navigation_msgs__srv__GetWebMap_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember web_navigation_msgs__srv__GetWebMap_Request__rosidl_typesupport_introspection_c__GetWebMap_Request_message_member_array[1] = {
  {
    "if_map_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetWebMap_Request, if_map_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers web_navigation_msgs__srv__GetWebMap_Request__rosidl_typesupport_introspection_c__GetWebMap_Request_message_members = {
  "web_navigation_msgs__srv",  // message namespace
  "GetWebMap_Request",  // message name
  1,  // number of fields
  sizeof(web_navigation_msgs__srv__GetWebMap_Request),
  web_navigation_msgs__srv__GetWebMap_Request__rosidl_typesupport_introspection_c__GetWebMap_Request_message_member_array,  // message members
  web_navigation_msgs__srv__GetWebMap_Request__rosidl_typesupport_introspection_c__GetWebMap_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  web_navigation_msgs__srv__GetWebMap_Request__rosidl_typesupport_introspection_c__GetWebMap_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t web_navigation_msgs__srv__GetWebMap_Request__rosidl_typesupport_introspection_c__GetWebMap_Request_message_type_support_handle = {
  0,
  &web_navigation_msgs__srv__GetWebMap_Request__rosidl_typesupport_introspection_c__GetWebMap_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_web_navigation_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, srv, GetWebMap_Request)() {
  if (!web_navigation_msgs__srv__GetWebMap_Request__rosidl_typesupport_introspection_c__GetWebMap_Request_message_type_support_handle.typesupport_identifier) {
    web_navigation_msgs__srv__GetWebMap_Request__rosidl_typesupport_introspection_c__GetWebMap_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &web_navigation_msgs__srv__GetWebMap_Request__rosidl_typesupport_introspection_c__GetWebMap_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "web_navigation_msgs/srv/detail/get_web_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "web_navigation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "web_navigation_msgs/srv/detail/get_web_map__functions.h"
// already included above
// #include "web_navigation_msgs/srv/detail/get_web_map__struct.h"


// Include directives for member types
// Member `code`
// Member `message`
// Member `map_version`
// Member `map_name`
// Member `coordinate_revision`
// Member `frame_id`
// Member `unit`
// Member `geometry_json`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void web_navigation_msgs__srv__GetWebMap_Response__rosidl_typesupport_introspection_c__GetWebMap_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  web_navigation_msgs__srv__GetWebMap_Response__init(message_memory);
}

void web_navigation_msgs__srv__GetWebMap_Response__rosidl_typesupport_introspection_c__GetWebMap_Response_fini_function(void * message_memory)
{
  web_navigation_msgs__srv__GetWebMap_Response__fini(message_memory);
}

size_t web_navigation_msgs__srv__GetWebMap_Response__rosidl_typesupport_introspection_c__size_function__GetWebMap_Response__bounds(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * web_navigation_msgs__srv__GetWebMap_Response__rosidl_typesupport_introspection_c__get_const_function__GetWebMap_Response__bounds(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * web_navigation_msgs__srv__GetWebMap_Response__rosidl_typesupport_introspection_c__get_function__GetWebMap_Response__bounds(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void web_navigation_msgs__srv__GetWebMap_Response__rosidl_typesupport_introspection_c__fetch_function__GetWebMap_Response__bounds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    web_navigation_msgs__srv__GetWebMap_Response__rosidl_typesupport_introspection_c__get_const_function__GetWebMap_Response__bounds(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void web_navigation_msgs__srv__GetWebMap_Response__rosidl_typesupport_introspection_c__assign_function__GetWebMap_Response__bounds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    web_navigation_msgs__srv__GetWebMap_Response__rosidl_typesupport_introspection_c__get_function__GetWebMap_Response__bounds(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember web_navigation_msgs__srv__GetWebMap_Response__rosidl_typesupport_introspection_c__GetWebMap_Response_message_member_array[11] = {
  {
    "ready",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetWebMap_Response, ready),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "not_modified",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetWebMap_Response, not_modified),  // bytes offset in struct
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
    offsetof(web_navigation_msgs__srv__GetWebMap_Response, code),  // bytes offset in struct
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
    offsetof(web_navigation_msgs__srv__GetWebMap_Response, message),  // bytes offset in struct
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
    offsetof(web_navigation_msgs__srv__GetWebMap_Response, map_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetWebMap_Response, map_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "coordinate_revision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetWebMap_Response, coordinate_revision),  // bytes offset in struct
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
    offsetof(web_navigation_msgs__srv__GetWebMap_Response, frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetWebMap_Response, unit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetWebMap_Response, bounds),  // bytes offset in struct
    NULL,  // default value
    web_navigation_msgs__srv__GetWebMap_Response__rosidl_typesupport_introspection_c__size_function__GetWebMap_Response__bounds,  // size() function pointer
    web_navigation_msgs__srv__GetWebMap_Response__rosidl_typesupport_introspection_c__get_const_function__GetWebMap_Response__bounds,  // get_const(index) function pointer
    web_navigation_msgs__srv__GetWebMap_Response__rosidl_typesupport_introspection_c__get_function__GetWebMap_Response__bounds,  // get(index) function pointer
    web_navigation_msgs__srv__GetWebMap_Response__rosidl_typesupport_introspection_c__fetch_function__GetWebMap_Response__bounds,  // fetch(index, &value) function pointer
    web_navigation_msgs__srv__GetWebMap_Response__rosidl_typesupport_introspection_c__assign_function__GetWebMap_Response__bounds,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "geometry_json",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__GetWebMap_Response, geometry_json),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers web_navigation_msgs__srv__GetWebMap_Response__rosidl_typesupport_introspection_c__GetWebMap_Response_message_members = {
  "web_navigation_msgs__srv",  // message namespace
  "GetWebMap_Response",  // message name
  11,  // number of fields
  sizeof(web_navigation_msgs__srv__GetWebMap_Response),
  web_navigation_msgs__srv__GetWebMap_Response__rosidl_typesupport_introspection_c__GetWebMap_Response_message_member_array,  // message members
  web_navigation_msgs__srv__GetWebMap_Response__rosidl_typesupport_introspection_c__GetWebMap_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  web_navigation_msgs__srv__GetWebMap_Response__rosidl_typesupport_introspection_c__GetWebMap_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t web_navigation_msgs__srv__GetWebMap_Response__rosidl_typesupport_introspection_c__GetWebMap_Response_message_type_support_handle = {
  0,
  &web_navigation_msgs__srv__GetWebMap_Response__rosidl_typesupport_introspection_c__GetWebMap_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_web_navigation_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, srv, GetWebMap_Response)() {
  if (!web_navigation_msgs__srv__GetWebMap_Response__rosidl_typesupport_introspection_c__GetWebMap_Response_message_type_support_handle.typesupport_identifier) {
    web_navigation_msgs__srv__GetWebMap_Response__rosidl_typesupport_introspection_c__GetWebMap_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &web_navigation_msgs__srv__GetWebMap_Response__rosidl_typesupport_introspection_c__GetWebMap_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "web_navigation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "web_navigation_msgs/srv/detail/get_web_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers web_navigation_msgs__srv__detail__get_web_map__rosidl_typesupport_introspection_c__GetWebMap_service_members = {
  "web_navigation_msgs__srv",  // service namespace
  "GetWebMap",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // web_navigation_msgs__srv__detail__get_web_map__rosidl_typesupport_introspection_c__GetWebMap_Request_message_type_support_handle,
  NULL  // response message
  // web_navigation_msgs__srv__detail__get_web_map__rosidl_typesupport_introspection_c__GetWebMap_Response_message_type_support_handle
};

static rosidl_service_type_support_t web_navigation_msgs__srv__detail__get_web_map__rosidl_typesupport_introspection_c__GetWebMap_service_type_support_handle = {
  0,
  &web_navigation_msgs__srv__detail__get_web_map__rosidl_typesupport_introspection_c__GetWebMap_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, srv, GetWebMap_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, srv, GetWebMap_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_web_navigation_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, srv, GetWebMap)() {
  if (!web_navigation_msgs__srv__detail__get_web_map__rosidl_typesupport_introspection_c__GetWebMap_service_type_support_handle.typesupport_identifier) {
    web_navigation_msgs__srv__detail__get_web_map__rosidl_typesupport_introspection_c__GetWebMap_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)web_navigation_msgs__srv__detail__get_web_map__rosidl_typesupport_introspection_c__GetWebMap_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, srv, GetWebMap_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, srv, GetWebMap_Response)()->data;
  }

  return &web_navigation_msgs__srv__detail__get_web_map__rosidl_typesupport_introspection_c__GetWebMap_service_type_support_handle;
}
