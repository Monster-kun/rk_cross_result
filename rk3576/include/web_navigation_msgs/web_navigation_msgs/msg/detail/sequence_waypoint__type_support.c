// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from web_navigation_msgs:msg/SequenceWaypoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "web_navigation_msgs/msg/detail/sequence_waypoint__rosidl_typesupport_introspection_c.h"
#include "web_navigation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "web_navigation_msgs/msg/detail/sequence_waypoint__functions.h"
#include "web_navigation_msgs/msg/detail/sequence_waypoint__struct.h"


// Include directives for member types
// Member `annotation_id`
// Member `name`
// Member `lanelet_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void web_navigation_msgs__msg__SequenceWaypoint__rosidl_typesupport_introspection_c__SequenceWaypoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  web_navigation_msgs__msg__SequenceWaypoint__init(message_memory);
}

void web_navigation_msgs__msg__SequenceWaypoint__rosidl_typesupport_introspection_c__SequenceWaypoint_fini_function(void * message_memory)
{
  web_navigation_msgs__msg__SequenceWaypoint__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember web_navigation_msgs__msg__SequenceWaypoint__rosidl_typesupport_introspection_c__SequenceWaypoint_message_member_array[6] = {
  {
    "annotation_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__msg__SequenceWaypoint, annotation_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__msg__SequenceWaypoint, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__msg__SequenceWaypoint, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__msg__SequenceWaypoint, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lanelet_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__msg__SequenceWaypoint, lanelet_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__msg__SequenceWaypoint, stop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers web_navigation_msgs__msg__SequenceWaypoint__rosidl_typesupport_introspection_c__SequenceWaypoint_message_members = {
  "web_navigation_msgs__msg",  // message namespace
  "SequenceWaypoint",  // message name
  6,  // number of fields
  sizeof(web_navigation_msgs__msg__SequenceWaypoint),
  web_navigation_msgs__msg__SequenceWaypoint__rosidl_typesupport_introspection_c__SequenceWaypoint_message_member_array,  // message members
  web_navigation_msgs__msg__SequenceWaypoint__rosidl_typesupport_introspection_c__SequenceWaypoint_init_function,  // function to initialize message memory (memory has to be allocated)
  web_navigation_msgs__msg__SequenceWaypoint__rosidl_typesupport_introspection_c__SequenceWaypoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t web_navigation_msgs__msg__SequenceWaypoint__rosidl_typesupport_introspection_c__SequenceWaypoint_message_type_support_handle = {
  0,
  &web_navigation_msgs__msg__SequenceWaypoint__rosidl_typesupport_introspection_c__SequenceWaypoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_web_navigation_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, msg, SequenceWaypoint)() {
  if (!web_navigation_msgs__msg__SequenceWaypoint__rosidl_typesupport_introspection_c__SequenceWaypoint_message_type_support_handle.typesupport_identifier) {
    web_navigation_msgs__msg__SequenceWaypoint__rosidl_typesupport_introspection_c__SequenceWaypoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &web_navigation_msgs__msg__SequenceWaypoint__rosidl_typesupport_introspection_c__SequenceWaypoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
