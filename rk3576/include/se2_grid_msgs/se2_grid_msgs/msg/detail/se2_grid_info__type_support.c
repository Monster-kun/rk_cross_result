// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from se2_grid_msgs:msg/SE2GridInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "se2_grid_msgs/msg/detail/se2_grid_info__rosidl_typesupport_introspection_c.h"
#include "se2_grid_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "se2_grid_msgs/msg/detail/se2_grid_info__functions.h"
#include "se2_grid_msgs/msg/detail/se2_grid_info__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void se2_grid_msgs__msg__SE2GridInfo__rosidl_typesupport_introspection_c__SE2GridInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  se2_grid_msgs__msg__SE2GridInfo__init(message_memory);
}

void se2_grid_msgs__msg__SE2GridInfo__rosidl_typesupport_introspection_c__SE2GridInfo_fini_function(void * message_memory)
{
  se2_grid_msgs__msg__SE2GridInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember se2_grid_msgs__msg__SE2GridInfo__rosidl_typesupport_introspection_c__SE2GridInfo_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(se2_grid_msgs__msg__SE2GridInfo, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_resolution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(se2_grid_msgs__msg__SE2GridInfo, pos_resolution),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw_resolution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(se2_grid_msgs__msg__SE2GridInfo, yaw_resolution),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "length_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(se2_grid_msgs__msg__SE2GridInfo, length_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "length_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(se2_grid_msgs__msg__SE2GridInfo, length_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "length_yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(se2_grid_msgs__msg__SE2GridInfo, length_yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(se2_grid_msgs__msg__SE2GridInfo, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers se2_grid_msgs__msg__SE2GridInfo__rosidl_typesupport_introspection_c__SE2GridInfo_message_members = {
  "se2_grid_msgs__msg",  // message namespace
  "SE2GridInfo",  // message name
  7,  // number of fields
  sizeof(se2_grid_msgs__msg__SE2GridInfo),
  se2_grid_msgs__msg__SE2GridInfo__rosidl_typesupport_introspection_c__SE2GridInfo_message_member_array,  // message members
  se2_grid_msgs__msg__SE2GridInfo__rosidl_typesupport_introspection_c__SE2GridInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  se2_grid_msgs__msg__SE2GridInfo__rosidl_typesupport_introspection_c__SE2GridInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t se2_grid_msgs__msg__SE2GridInfo__rosidl_typesupport_introspection_c__SE2GridInfo_message_type_support_handle = {
  0,
  &se2_grid_msgs__msg__SE2GridInfo__rosidl_typesupport_introspection_c__SE2GridInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_se2_grid_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, se2_grid_msgs, msg, SE2GridInfo)() {
  se2_grid_msgs__msg__SE2GridInfo__rosidl_typesupport_introspection_c__SE2GridInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  se2_grid_msgs__msg__SE2GridInfo__rosidl_typesupport_introspection_c__SE2GridInfo_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!se2_grid_msgs__msg__SE2GridInfo__rosidl_typesupport_introspection_c__SE2GridInfo_message_type_support_handle.typesupport_identifier) {
    se2_grid_msgs__msg__SE2GridInfo__rosidl_typesupport_introspection_c__SE2GridInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &se2_grid_msgs__msg__SE2GridInfo__rosidl_typesupport_introspection_c__SE2GridInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
