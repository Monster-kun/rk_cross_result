// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from web_navigation_msgs:msg/RvizGoalFeedback.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "web_navigation_msgs/msg/detail/rviz_goal_feedback__rosidl_typesupport_introspection_c.h"
#include "web_navigation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "web_navigation_msgs/msg/detail/rviz_goal_feedback__functions.h"
#include "web_navigation_msgs/msg/detail/rviz_goal_feedback__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `manager_boot_id`
// Member `request_id`
// Member `task_id`
// Member `code`
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void web_navigation_msgs__msg__RvizGoalFeedback__rosidl_typesupport_introspection_c__RvizGoalFeedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  web_navigation_msgs__msg__RvizGoalFeedback__init(message_memory);
}

void web_navigation_msgs__msg__RvizGoalFeedback__rosidl_typesupport_introspection_c__RvizGoalFeedback_fini_function(void * message_memory)
{
  web_navigation_msgs__msg__RvizGoalFeedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember web_navigation_msgs__msg__RvizGoalFeedback__rosidl_typesupport_introspection_c__RvizGoalFeedback_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__msg__RvizGoalFeedback, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "manager_boot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__msg__RvizGoalFeedback, manager_boot_id),  // bytes offset in struct
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
    offsetof(web_navigation_msgs__msg__RvizGoalFeedback, status),  // bytes offset in struct
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
    offsetof(web_navigation_msgs__msg__RvizGoalFeedback, request_id),  // bytes offset in struct
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
    offsetof(web_navigation_msgs__msg__RvizGoalFeedback, task_id),  // bytes offset in struct
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
    offsetof(web_navigation_msgs__msg__RvizGoalFeedback, code),  // bytes offset in struct
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
    offsetof(web_navigation_msgs__msg__RvizGoalFeedback, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "staged_waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__msg__RvizGoalFeedback, staged_waypoints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers web_navigation_msgs__msg__RvizGoalFeedback__rosidl_typesupport_introspection_c__RvizGoalFeedback_message_members = {
  "web_navigation_msgs__msg",  // message namespace
  "RvizGoalFeedback",  // message name
  8,  // number of fields
  sizeof(web_navigation_msgs__msg__RvizGoalFeedback),
  web_navigation_msgs__msg__RvizGoalFeedback__rosidl_typesupport_introspection_c__RvizGoalFeedback_message_member_array,  // message members
  web_navigation_msgs__msg__RvizGoalFeedback__rosidl_typesupport_introspection_c__RvizGoalFeedback_init_function,  // function to initialize message memory (memory has to be allocated)
  web_navigation_msgs__msg__RvizGoalFeedback__rosidl_typesupport_introspection_c__RvizGoalFeedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t web_navigation_msgs__msg__RvizGoalFeedback__rosidl_typesupport_introspection_c__RvizGoalFeedback_message_type_support_handle = {
  0,
  &web_navigation_msgs__msg__RvizGoalFeedback__rosidl_typesupport_introspection_c__RvizGoalFeedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_web_navigation_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, msg, RvizGoalFeedback)() {
  web_navigation_msgs__msg__RvizGoalFeedback__rosidl_typesupport_introspection_c__RvizGoalFeedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!web_navigation_msgs__msg__RvizGoalFeedback__rosidl_typesupport_introspection_c__RvizGoalFeedback_message_type_support_handle.typesupport_identifier) {
    web_navigation_msgs__msg__RvizGoalFeedback__rosidl_typesupport_introspection_c__RvizGoalFeedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &web_navigation_msgs__msg__RvizGoalFeedback__rosidl_typesupport_introspection_c__RvizGoalFeedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
