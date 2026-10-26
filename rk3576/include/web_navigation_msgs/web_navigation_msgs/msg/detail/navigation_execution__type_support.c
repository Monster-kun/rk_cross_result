// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from web_navigation_msgs:msg/NavigationExecution.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "web_navigation_msgs/msg/detail/navigation_execution__rosidl_typesupport_introspection_c.h"
#include "web_navigation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "web_navigation_msgs/msg/detail/navigation_execution__functions.h"
#include "web_navigation_msgs/msg/detail/navigation_execution__struct.h"


// Include directives for member types
// Member `ros_goal_uuid`
// Member `task_id`
// Member `map_version`
#include "rosidl_runtime_c/string_functions.h"
// Member `goals`
// Member `endpoint`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `goals`
// Member `endpoint`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void web_navigation_msgs__msg__NavigationExecution__rosidl_typesupport_introspection_c__NavigationExecution_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  web_navigation_msgs__msg__NavigationExecution__init(message_memory);
}

void web_navigation_msgs__msg__NavigationExecution__rosidl_typesupport_introspection_c__NavigationExecution_fini_function(void * message_memory)
{
  web_navigation_msgs__msg__NavigationExecution__fini(message_memory);
}

size_t web_navigation_msgs__msg__NavigationExecution__rosidl_typesupport_introspection_c__size_function__NavigationExecution__goals(
  const void * untyped_member)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * web_navigation_msgs__msg__NavigationExecution__rosidl_typesupport_introspection_c__get_const_function__NavigationExecution__goals(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * web_navigation_msgs__msg__NavigationExecution__rosidl_typesupport_introspection_c__get_function__NavigationExecution__goals(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void web_navigation_msgs__msg__NavigationExecution__rosidl_typesupport_introspection_c__fetch_function__NavigationExecution__goals(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__PoseStamped * item =
    ((const geometry_msgs__msg__PoseStamped *)
    web_navigation_msgs__msg__NavigationExecution__rosidl_typesupport_introspection_c__get_const_function__NavigationExecution__goals(untyped_member, index));
  geometry_msgs__msg__PoseStamped * value =
    (geometry_msgs__msg__PoseStamped *)(untyped_value);
  *value = *item;
}

void web_navigation_msgs__msg__NavigationExecution__rosidl_typesupport_introspection_c__assign_function__NavigationExecution__goals(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__PoseStamped * item =
    ((geometry_msgs__msg__PoseStamped *)
    web_navigation_msgs__msg__NavigationExecution__rosidl_typesupport_introspection_c__get_function__NavigationExecution__goals(untyped_member, index));
  const geometry_msgs__msg__PoseStamped * value =
    (const geometry_msgs__msg__PoseStamped *)(untyped_value);
  *item = *value;
}

bool web_navigation_msgs__msg__NavigationExecution__rosidl_typesupport_introspection_c__resize_function__NavigationExecution__goals(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__PoseStamped__Sequence__fini(member);
  return geometry_msgs__msg__PoseStamped__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember web_navigation_msgs__msg__NavigationExecution__rosidl_typesupport_introspection_c__NavigationExecution_message_member_array[6] = {
  {
    "ros_goal_uuid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__msg__NavigationExecution, ros_goal_uuid),  // bytes offset in struct
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
    offsetof(web_navigation_msgs__msg__NavigationExecution, task_id),  // bytes offset in struct
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
    offsetof(web_navigation_msgs__msg__NavigationExecution, map_version),  // bytes offset in struct
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
    offsetof(web_navigation_msgs__msg__NavigationExecution, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goals",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__msg__NavigationExecution, goals),  // bytes offset in struct
    NULL,  // default value
    web_navigation_msgs__msg__NavigationExecution__rosidl_typesupport_introspection_c__size_function__NavigationExecution__goals,  // size() function pointer
    web_navigation_msgs__msg__NavigationExecution__rosidl_typesupport_introspection_c__get_const_function__NavigationExecution__goals,  // get_const(index) function pointer
    web_navigation_msgs__msg__NavigationExecution__rosidl_typesupport_introspection_c__get_function__NavigationExecution__goals,  // get(index) function pointer
    web_navigation_msgs__msg__NavigationExecution__rosidl_typesupport_introspection_c__fetch_function__NavigationExecution__goals,  // fetch(index, &value) function pointer
    web_navigation_msgs__msg__NavigationExecution__rosidl_typesupport_introspection_c__assign_function__NavigationExecution__goals,  // assign(index, value) function pointer
    web_navigation_msgs__msg__NavigationExecution__rosidl_typesupport_introspection_c__resize_function__NavigationExecution__goals  // resize(index) function pointer
  },
  {
    "endpoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__msg__NavigationExecution, endpoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers web_navigation_msgs__msg__NavigationExecution__rosidl_typesupport_introspection_c__NavigationExecution_message_members = {
  "web_navigation_msgs__msg",  // message namespace
  "NavigationExecution",  // message name
  6,  // number of fields
  sizeof(web_navigation_msgs__msg__NavigationExecution),
  web_navigation_msgs__msg__NavigationExecution__rosidl_typesupport_introspection_c__NavigationExecution_message_member_array,  // message members
  web_navigation_msgs__msg__NavigationExecution__rosidl_typesupport_introspection_c__NavigationExecution_init_function,  // function to initialize message memory (memory has to be allocated)
  web_navigation_msgs__msg__NavigationExecution__rosidl_typesupport_introspection_c__NavigationExecution_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t web_navigation_msgs__msg__NavigationExecution__rosidl_typesupport_introspection_c__NavigationExecution_message_type_support_handle = {
  0,
  &web_navigation_msgs__msg__NavigationExecution__rosidl_typesupport_introspection_c__NavigationExecution_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_web_navigation_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, msg, NavigationExecution)() {
  web_navigation_msgs__msg__NavigationExecution__rosidl_typesupport_introspection_c__NavigationExecution_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  web_navigation_msgs__msg__NavigationExecution__rosidl_typesupport_introspection_c__NavigationExecution_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!web_navigation_msgs__msg__NavigationExecution__rosidl_typesupport_introspection_c__NavigationExecution_message_type_support_handle.typesupport_identifier) {
    web_navigation_msgs__msg__NavigationExecution__rosidl_typesupport_introspection_c__NavigationExecution_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &web_navigation_msgs__msg__NavigationExecution__rosidl_typesupport_introspection_c__NavigationExecution_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
