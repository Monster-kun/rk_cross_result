// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from chassis_control_msgs:msg/PurepursuitViz.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "chassis_control_msgs/msg/detail/purepursuit_viz__rosidl_typesupport_introspection_c.h"
#include "chassis_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "chassis_control_msgs/msg/detail/purepursuit_viz__functions.h"
#include "chassis_control_msgs/msg/detail/purepursuit_viz__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void chassis_control_msgs__msg__PurepursuitViz__rosidl_typesupport_introspection_c__PurepursuitViz_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  chassis_control_msgs__msg__PurepursuitViz__init(message_memory);
}

void chassis_control_msgs__msg__PurepursuitViz__rosidl_typesupport_introspection_c__PurepursuitViz_fini_function(void * message_memory)
{
  chassis_control_msgs__msg__PurepursuitViz__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember chassis_control_msgs__msg__PurepursuitViz__rosidl_typesupport_introspection_c__PurepursuitViz_message_member_array[8] = {
  {
    "aimpointx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chassis_control_msgs__msg__PurepursuitViz, aimpointx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aimpointy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chassis_control_msgs__msg__PurepursuitViz, aimpointy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chassis_control_msgs__msg__PurepursuitViz, velx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vely",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chassis_control_msgs__msg__PurepursuitViz, vely),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chassis_control_msgs__msg__PurepursuitViz, velz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ahead",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chassis_control_msgs__msg__PurepursuitViz, ahead),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "currentx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chassis_control_msgs__msg__PurepursuitViz, currentx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "currenty",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chassis_control_msgs__msg__PurepursuitViz, currenty),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers chassis_control_msgs__msg__PurepursuitViz__rosidl_typesupport_introspection_c__PurepursuitViz_message_members = {
  "chassis_control_msgs__msg",  // message namespace
  "PurepursuitViz",  // message name
  8,  // number of fields
  sizeof(chassis_control_msgs__msg__PurepursuitViz),
  chassis_control_msgs__msg__PurepursuitViz__rosidl_typesupport_introspection_c__PurepursuitViz_message_member_array,  // message members
  chassis_control_msgs__msg__PurepursuitViz__rosidl_typesupport_introspection_c__PurepursuitViz_init_function,  // function to initialize message memory (memory has to be allocated)
  chassis_control_msgs__msg__PurepursuitViz__rosidl_typesupport_introspection_c__PurepursuitViz_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t chassis_control_msgs__msg__PurepursuitViz__rosidl_typesupport_introspection_c__PurepursuitViz_message_type_support_handle = {
  0,
  &chassis_control_msgs__msg__PurepursuitViz__rosidl_typesupport_introspection_c__PurepursuitViz_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_chassis_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chassis_control_msgs, msg, PurepursuitViz)() {
  if (!chassis_control_msgs__msg__PurepursuitViz__rosidl_typesupport_introspection_c__PurepursuitViz_message_type_support_handle.typesupport_identifier) {
    chassis_control_msgs__msg__PurepursuitViz__rosidl_typesupport_introspection_c__PurepursuitViz_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &chassis_control_msgs__msg__PurepursuitViz__rosidl_typesupport_introspection_c__PurepursuitViz_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
