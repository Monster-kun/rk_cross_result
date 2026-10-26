// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from behavior_msgs:action/NavigateThroughPoses.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "behavior_msgs/action/detail/navigate_through_poses__rosidl_typesupport_introspection_c.h"
#include "behavior_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "behavior_msgs/action/detail/navigate_through_poses__functions.h"
#include "behavior_msgs/action/detail/navigate_through_poses__struct.h"


// Include directives for member types
// Member `goals`
// Member `goal_pose`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `goals`
// Member `goal_pose`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `task_id`
// Member `map_version`
// Member `behavior_tree`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_msgs__action__NavigateThroughPoses_Goal__rosidl_typesupport_introspection_c__NavigateThroughPoses_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_msgs__action__NavigateThroughPoses_Goal__init(message_memory);
}

void behavior_msgs__action__NavigateThroughPoses_Goal__rosidl_typesupport_introspection_c__NavigateThroughPoses_Goal_fini_function(void * message_memory)
{
  behavior_msgs__action__NavigateThroughPoses_Goal__fini(message_memory);
}

size_t behavior_msgs__action__NavigateThroughPoses_Goal__rosidl_typesupport_introspection_c__size_function__NavigateThroughPoses_Goal__goals(
  const void * untyped_member)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * behavior_msgs__action__NavigateThroughPoses_Goal__rosidl_typesupport_introspection_c__get_const_function__NavigateThroughPoses_Goal__goals(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * behavior_msgs__action__NavigateThroughPoses_Goal__rosidl_typesupport_introspection_c__get_function__NavigateThroughPoses_Goal__goals(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void behavior_msgs__action__NavigateThroughPoses_Goal__rosidl_typesupport_introspection_c__fetch_function__NavigateThroughPoses_Goal__goals(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__PoseStamped * item =
    ((const geometry_msgs__msg__PoseStamped *)
    behavior_msgs__action__NavigateThroughPoses_Goal__rosidl_typesupport_introspection_c__get_const_function__NavigateThroughPoses_Goal__goals(untyped_member, index));
  geometry_msgs__msg__PoseStamped * value =
    (geometry_msgs__msg__PoseStamped *)(untyped_value);
  *value = *item;
}

void behavior_msgs__action__NavigateThroughPoses_Goal__rosidl_typesupport_introspection_c__assign_function__NavigateThroughPoses_Goal__goals(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__PoseStamped * item =
    ((geometry_msgs__msg__PoseStamped *)
    behavior_msgs__action__NavigateThroughPoses_Goal__rosidl_typesupport_introspection_c__get_function__NavigateThroughPoses_Goal__goals(untyped_member, index));
  const geometry_msgs__msg__PoseStamped * value =
    (const geometry_msgs__msg__PoseStamped *)(untyped_value);
  *item = *value;
}

bool behavior_msgs__action__NavigateThroughPoses_Goal__rosidl_typesupport_introspection_c__resize_function__NavigateThroughPoses_Goal__goals(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__PoseStamped__Sequence__fini(member);
  return geometry_msgs__msg__PoseStamped__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_msgs__action__NavigateThroughPoses_Goal__rosidl_typesupport_introspection_c__NavigateThroughPoses_Goal_message_member_array[6] = {
  {
    "goals",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_msgs__action__NavigateThroughPoses_Goal, goals),  // bytes offset in struct
    NULL,  // default value
    behavior_msgs__action__NavigateThroughPoses_Goal__rosidl_typesupport_introspection_c__size_function__NavigateThroughPoses_Goal__goals,  // size() function pointer
    behavior_msgs__action__NavigateThroughPoses_Goal__rosidl_typesupport_introspection_c__get_const_function__NavigateThroughPoses_Goal__goals,  // get_const(index) function pointer
    behavior_msgs__action__NavigateThroughPoses_Goal__rosidl_typesupport_introspection_c__get_function__NavigateThroughPoses_Goal__goals,  // get(index) function pointer
    behavior_msgs__action__NavigateThroughPoses_Goal__rosidl_typesupport_introspection_c__fetch_function__NavigateThroughPoses_Goal__goals,  // fetch(index, &value) function pointer
    behavior_msgs__action__NavigateThroughPoses_Goal__rosidl_typesupport_introspection_c__assign_function__NavigateThroughPoses_Goal__goals,  // assign(index, value) function pointer
    behavior_msgs__action__NavigateThroughPoses_Goal__rosidl_typesupport_introspection_c__resize_function__NavigateThroughPoses_Goal__goals  // resize(index) function pointer
  },
  {
    "goal_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_msgs__action__NavigateThroughPoses_Goal, goal_pose),  // bytes offset in struct
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
    offsetof(behavior_msgs__action__NavigateThroughPoses_Goal, task_id),  // bytes offset in struct
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
    offsetof(behavior_msgs__action__NavigateThroughPoses_Goal, map_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "behavior_tree",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_msgs__action__NavigateThroughPoses_Goal, behavior_tree),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "loop_goals",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_msgs__action__NavigateThroughPoses_Goal, loop_goals),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_msgs__action__NavigateThroughPoses_Goal__rosidl_typesupport_introspection_c__NavigateThroughPoses_Goal_message_members = {
  "behavior_msgs__action",  // message namespace
  "NavigateThroughPoses_Goal",  // message name
  6,  // number of fields
  sizeof(behavior_msgs__action__NavigateThroughPoses_Goal),
  behavior_msgs__action__NavigateThroughPoses_Goal__rosidl_typesupport_introspection_c__NavigateThroughPoses_Goal_message_member_array,  // message members
  behavior_msgs__action__NavigateThroughPoses_Goal__rosidl_typesupport_introspection_c__NavigateThroughPoses_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_msgs__action__NavigateThroughPoses_Goal__rosidl_typesupport_introspection_c__NavigateThroughPoses_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_msgs__action__NavigateThroughPoses_Goal__rosidl_typesupport_introspection_c__NavigateThroughPoses_Goal_message_type_support_handle = {
  0,
  &behavior_msgs__action__NavigateThroughPoses_Goal__rosidl_typesupport_introspection_c__NavigateThroughPoses_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_msgs, action, NavigateThroughPoses_Goal)() {
  behavior_msgs__action__NavigateThroughPoses_Goal__rosidl_typesupport_introspection_c__NavigateThroughPoses_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  behavior_msgs__action__NavigateThroughPoses_Goal__rosidl_typesupport_introspection_c__NavigateThroughPoses_Goal_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!behavior_msgs__action__NavigateThroughPoses_Goal__rosidl_typesupport_introspection_c__NavigateThroughPoses_Goal_message_type_support_handle.typesupport_identifier) {
    behavior_msgs__action__NavigateThroughPoses_Goal__rosidl_typesupport_introspection_c__NavigateThroughPoses_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_msgs__action__NavigateThroughPoses_Goal__rosidl_typesupport_introspection_c__NavigateThroughPoses_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "behavior_msgs/action/detail/navigate_through_poses__rosidl_typesupport_introspection_c.h"
// already included above
// #include "behavior_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "behavior_msgs/action/detail/navigate_through_poses__functions.h"
// already included above
// #include "behavior_msgs/action/detail/navigate_through_poses__struct.h"


// Include directives for member types
// Member `error_msg`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_msgs__action__NavigateThroughPoses_Result__rosidl_typesupport_introspection_c__NavigateThroughPoses_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_msgs__action__NavigateThroughPoses_Result__init(message_memory);
}

void behavior_msgs__action__NavigateThroughPoses_Result__rosidl_typesupport_introspection_c__NavigateThroughPoses_Result_fini_function(void * message_memory)
{
  behavior_msgs__action__NavigateThroughPoses_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_msgs__action__NavigateThroughPoses_Result__rosidl_typesupport_introspection_c__NavigateThroughPoses_Result_message_member_array[2] = {
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_msgs__action__NavigateThroughPoses_Result, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_msgs__action__NavigateThroughPoses_Result, error_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_msgs__action__NavigateThroughPoses_Result__rosidl_typesupport_introspection_c__NavigateThroughPoses_Result_message_members = {
  "behavior_msgs__action",  // message namespace
  "NavigateThroughPoses_Result",  // message name
  2,  // number of fields
  sizeof(behavior_msgs__action__NavigateThroughPoses_Result),
  behavior_msgs__action__NavigateThroughPoses_Result__rosidl_typesupport_introspection_c__NavigateThroughPoses_Result_message_member_array,  // message members
  behavior_msgs__action__NavigateThroughPoses_Result__rosidl_typesupport_introspection_c__NavigateThroughPoses_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_msgs__action__NavigateThroughPoses_Result__rosidl_typesupport_introspection_c__NavigateThroughPoses_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_msgs__action__NavigateThroughPoses_Result__rosidl_typesupport_introspection_c__NavigateThroughPoses_Result_message_type_support_handle = {
  0,
  &behavior_msgs__action__NavigateThroughPoses_Result__rosidl_typesupport_introspection_c__NavigateThroughPoses_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_msgs, action, NavigateThroughPoses_Result)() {
  if (!behavior_msgs__action__NavigateThroughPoses_Result__rosidl_typesupport_introspection_c__NavigateThroughPoses_Result_message_type_support_handle.typesupport_identifier) {
    behavior_msgs__action__NavigateThroughPoses_Result__rosidl_typesupport_introspection_c__NavigateThroughPoses_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_msgs__action__NavigateThroughPoses_Result__rosidl_typesupport_introspection_c__NavigateThroughPoses_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "behavior_msgs/action/detail/navigate_through_poses__rosidl_typesupport_introspection_c.h"
// already included above
// #include "behavior_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "behavior_msgs/action/detail/navigate_through_poses__functions.h"
// already included above
// #include "behavior_msgs/action/detail/navigate_through_poses__struct.h"


// Include directives for member types
// Member `navigation_time`
#include "builtin_interfaces/msg/duration.h"
// Member `navigation_time`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_msgs__action__NavigateThroughPoses_Feedback__rosidl_typesupport_introspection_c__NavigateThroughPoses_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_msgs__action__NavigateThroughPoses_Feedback__init(message_memory);
}

void behavior_msgs__action__NavigateThroughPoses_Feedback__rosidl_typesupport_introspection_c__NavigateThroughPoses_Feedback_fini_function(void * message_memory)
{
  behavior_msgs__action__NavigateThroughPoses_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_msgs__action__NavigateThroughPoses_Feedback__rosidl_typesupport_introspection_c__NavigateThroughPoses_Feedback_message_member_array[3] = {
  {
    "navigation_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_msgs__action__NavigateThroughPoses_Feedback, navigation_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "number_of_recoveries",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_msgs__action__NavigateThroughPoses_Feedback, number_of_recoveries),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "number_of_goal_remaining",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_msgs__action__NavigateThroughPoses_Feedback, number_of_goal_remaining),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_msgs__action__NavigateThroughPoses_Feedback__rosidl_typesupport_introspection_c__NavigateThroughPoses_Feedback_message_members = {
  "behavior_msgs__action",  // message namespace
  "NavigateThroughPoses_Feedback",  // message name
  3,  // number of fields
  sizeof(behavior_msgs__action__NavigateThroughPoses_Feedback),
  behavior_msgs__action__NavigateThroughPoses_Feedback__rosidl_typesupport_introspection_c__NavigateThroughPoses_Feedback_message_member_array,  // message members
  behavior_msgs__action__NavigateThroughPoses_Feedback__rosidl_typesupport_introspection_c__NavigateThroughPoses_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_msgs__action__NavigateThroughPoses_Feedback__rosidl_typesupport_introspection_c__NavigateThroughPoses_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_msgs__action__NavigateThroughPoses_Feedback__rosidl_typesupport_introspection_c__NavigateThroughPoses_Feedback_message_type_support_handle = {
  0,
  &behavior_msgs__action__NavigateThroughPoses_Feedback__rosidl_typesupport_introspection_c__NavigateThroughPoses_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_msgs, action, NavigateThroughPoses_Feedback)() {
  behavior_msgs__action__NavigateThroughPoses_Feedback__rosidl_typesupport_introspection_c__NavigateThroughPoses_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!behavior_msgs__action__NavigateThroughPoses_Feedback__rosidl_typesupport_introspection_c__NavigateThroughPoses_Feedback_message_type_support_handle.typesupport_identifier) {
    behavior_msgs__action__NavigateThroughPoses_Feedback__rosidl_typesupport_introspection_c__NavigateThroughPoses_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_msgs__action__NavigateThroughPoses_Feedback__rosidl_typesupport_introspection_c__NavigateThroughPoses_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "behavior_msgs/action/detail/navigate_through_poses__rosidl_typesupport_introspection_c.h"
// already included above
// #include "behavior_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "behavior_msgs/action/detail/navigate_through_poses__functions.h"
// already included above
// #include "behavior_msgs/action/detail/navigate_through_poses__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "behavior_msgs/action/navigate_through_poses.h"
// Member `goal`
// already included above
// #include "behavior_msgs/action/detail/navigate_through_poses__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_msgs__action__NavigateThroughPoses_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_msgs__action__NavigateThroughPoses_SendGoal_Request__init(message_memory);
}

void behavior_msgs__action__NavigateThroughPoses_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Request_fini_function(void * message_memory)
{
  behavior_msgs__action__NavigateThroughPoses_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_msgs__action__NavigateThroughPoses_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_msgs__action__NavigateThroughPoses_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_msgs__action__NavigateThroughPoses_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_msgs__action__NavigateThroughPoses_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Request_message_members = {
  "behavior_msgs__action",  // message namespace
  "NavigateThroughPoses_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(behavior_msgs__action__NavigateThroughPoses_SendGoal_Request),
  behavior_msgs__action__NavigateThroughPoses_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Request_message_member_array,  // message members
  behavior_msgs__action__NavigateThroughPoses_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_msgs__action__NavigateThroughPoses_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_msgs__action__NavigateThroughPoses_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Request_message_type_support_handle = {
  0,
  &behavior_msgs__action__NavigateThroughPoses_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_msgs, action, NavigateThroughPoses_SendGoal_Request)() {
  behavior_msgs__action__NavigateThroughPoses_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  behavior_msgs__action__NavigateThroughPoses_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_msgs, action, NavigateThroughPoses_Goal)();
  if (!behavior_msgs__action__NavigateThroughPoses_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    behavior_msgs__action__NavigateThroughPoses_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_msgs__action__NavigateThroughPoses_SendGoal_Request__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "behavior_msgs/action/detail/navigate_through_poses__rosidl_typesupport_introspection_c.h"
// already included above
// #include "behavior_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "behavior_msgs/action/detail/navigate_through_poses__functions.h"
// already included above
// #include "behavior_msgs/action/detail/navigate_through_poses__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_msgs__action__NavigateThroughPoses_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_msgs__action__NavigateThroughPoses_SendGoal_Response__init(message_memory);
}

void behavior_msgs__action__NavigateThroughPoses_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Response_fini_function(void * message_memory)
{
  behavior_msgs__action__NavigateThroughPoses_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_msgs__action__NavigateThroughPoses_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_msgs__action__NavigateThroughPoses_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_msgs__action__NavigateThroughPoses_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_msgs__action__NavigateThroughPoses_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Response_message_members = {
  "behavior_msgs__action",  // message namespace
  "NavigateThroughPoses_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(behavior_msgs__action__NavigateThroughPoses_SendGoal_Response),
  behavior_msgs__action__NavigateThroughPoses_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Response_message_member_array,  // message members
  behavior_msgs__action__NavigateThroughPoses_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_msgs__action__NavigateThroughPoses_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_msgs__action__NavigateThroughPoses_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Response_message_type_support_handle = {
  0,
  &behavior_msgs__action__NavigateThroughPoses_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_msgs, action, NavigateThroughPoses_SendGoal_Response)() {
  behavior_msgs__action__NavigateThroughPoses_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!behavior_msgs__action__NavigateThroughPoses_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    behavior_msgs__action__NavigateThroughPoses_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_msgs__action__NavigateThroughPoses_SendGoal_Response__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "behavior_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "behavior_msgs/action/detail/navigate_through_poses__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers behavior_msgs__action__detail__navigate_through_poses__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_service_members = {
  "behavior_msgs__action",  // service namespace
  "NavigateThroughPoses_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // behavior_msgs__action__detail__navigate_through_poses__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // behavior_msgs__action__detail__navigate_through_poses__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t behavior_msgs__action__detail__navigate_through_poses__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_service_type_support_handle = {
  0,
  &behavior_msgs__action__detail__navigate_through_poses__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_msgs, action, NavigateThroughPoses_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_msgs, action, NavigateThroughPoses_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_msgs, action, NavigateThroughPoses_SendGoal)() {
  if (!behavior_msgs__action__detail__navigate_through_poses__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_service_type_support_handle.typesupport_identifier) {
    behavior_msgs__action__detail__navigate_through_poses__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)behavior_msgs__action__detail__navigate_through_poses__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_msgs, action, NavigateThroughPoses_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_msgs, action, NavigateThroughPoses_SendGoal_Response)()->data;
  }

  return &behavior_msgs__action__detail__navigate_through_poses__rosidl_typesupport_introspection_c__NavigateThroughPoses_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "behavior_msgs/action/detail/navigate_through_poses__rosidl_typesupport_introspection_c.h"
// already included above
// #include "behavior_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "behavior_msgs/action/detail/navigate_through_poses__functions.h"
// already included above
// #include "behavior_msgs/action/detail/navigate_through_poses__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_msgs__action__NavigateThroughPoses_GetResult_Request__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_msgs__action__NavigateThroughPoses_GetResult_Request__init(message_memory);
}

void behavior_msgs__action__NavigateThroughPoses_GetResult_Request__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_Request_fini_function(void * message_memory)
{
  behavior_msgs__action__NavigateThroughPoses_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_msgs__action__NavigateThroughPoses_GetResult_Request__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_msgs__action__NavigateThroughPoses_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_msgs__action__NavigateThroughPoses_GetResult_Request__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_Request_message_members = {
  "behavior_msgs__action",  // message namespace
  "NavigateThroughPoses_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(behavior_msgs__action__NavigateThroughPoses_GetResult_Request),
  behavior_msgs__action__NavigateThroughPoses_GetResult_Request__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_Request_message_member_array,  // message members
  behavior_msgs__action__NavigateThroughPoses_GetResult_Request__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_msgs__action__NavigateThroughPoses_GetResult_Request__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_msgs__action__NavigateThroughPoses_GetResult_Request__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_Request_message_type_support_handle = {
  0,
  &behavior_msgs__action__NavigateThroughPoses_GetResult_Request__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_msgs, action, NavigateThroughPoses_GetResult_Request)() {
  behavior_msgs__action__NavigateThroughPoses_GetResult_Request__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!behavior_msgs__action__NavigateThroughPoses_GetResult_Request__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    behavior_msgs__action__NavigateThroughPoses_GetResult_Request__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_msgs__action__NavigateThroughPoses_GetResult_Request__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "behavior_msgs/action/detail/navigate_through_poses__rosidl_typesupport_introspection_c.h"
// already included above
// #include "behavior_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "behavior_msgs/action/detail/navigate_through_poses__functions.h"
// already included above
// #include "behavior_msgs/action/detail/navigate_through_poses__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "behavior_msgs/action/navigate_through_poses.h"
// Member `result`
// already included above
// #include "behavior_msgs/action/detail/navigate_through_poses__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_msgs__action__NavigateThroughPoses_GetResult_Response__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_msgs__action__NavigateThroughPoses_GetResult_Response__init(message_memory);
}

void behavior_msgs__action__NavigateThroughPoses_GetResult_Response__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_Response_fini_function(void * message_memory)
{
  behavior_msgs__action__NavigateThroughPoses_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_msgs__action__NavigateThroughPoses_GetResult_Response__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_msgs__action__NavigateThroughPoses_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_msgs__action__NavigateThroughPoses_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_msgs__action__NavigateThroughPoses_GetResult_Response__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_Response_message_members = {
  "behavior_msgs__action",  // message namespace
  "NavigateThroughPoses_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(behavior_msgs__action__NavigateThroughPoses_GetResult_Response),
  behavior_msgs__action__NavigateThroughPoses_GetResult_Response__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_Response_message_member_array,  // message members
  behavior_msgs__action__NavigateThroughPoses_GetResult_Response__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_msgs__action__NavigateThroughPoses_GetResult_Response__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_msgs__action__NavigateThroughPoses_GetResult_Response__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_Response_message_type_support_handle = {
  0,
  &behavior_msgs__action__NavigateThroughPoses_GetResult_Response__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_msgs, action, NavigateThroughPoses_GetResult_Response)() {
  behavior_msgs__action__NavigateThroughPoses_GetResult_Response__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_msgs, action, NavigateThroughPoses_Result)();
  if (!behavior_msgs__action__NavigateThroughPoses_GetResult_Response__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    behavior_msgs__action__NavigateThroughPoses_GetResult_Response__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_msgs__action__NavigateThroughPoses_GetResult_Response__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "behavior_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "behavior_msgs/action/detail/navigate_through_poses__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers behavior_msgs__action__detail__navigate_through_poses__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_service_members = {
  "behavior_msgs__action",  // service namespace
  "NavigateThroughPoses_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // behavior_msgs__action__detail__navigate_through_poses__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // behavior_msgs__action__detail__navigate_through_poses__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t behavior_msgs__action__detail__navigate_through_poses__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_service_type_support_handle = {
  0,
  &behavior_msgs__action__detail__navigate_through_poses__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_msgs, action, NavigateThroughPoses_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_msgs, action, NavigateThroughPoses_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_msgs, action, NavigateThroughPoses_GetResult)() {
  if (!behavior_msgs__action__detail__navigate_through_poses__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_service_type_support_handle.typesupport_identifier) {
    behavior_msgs__action__detail__navigate_through_poses__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)behavior_msgs__action__detail__navigate_through_poses__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_msgs, action, NavigateThroughPoses_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_msgs, action, NavigateThroughPoses_GetResult_Response)()->data;
  }

  return &behavior_msgs__action__detail__navigate_through_poses__rosidl_typesupport_introspection_c__NavigateThroughPoses_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "behavior_msgs/action/detail/navigate_through_poses__rosidl_typesupport_introspection_c.h"
// already included above
// #include "behavior_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "behavior_msgs/action/detail/navigate_through_poses__functions.h"
// already included above
// #include "behavior_msgs/action/detail/navigate_through_poses__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "behavior_msgs/action/navigate_through_poses.h"
// Member `feedback`
// already included above
// #include "behavior_msgs/action/detail/navigate_through_poses__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_msgs__action__NavigateThroughPoses_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateThroughPoses_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_msgs__action__NavigateThroughPoses_FeedbackMessage__init(message_memory);
}

void behavior_msgs__action__NavigateThroughPoses_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateThroughPoses_FeedbackMessage_fini_function(void * message_memory)
{
  behavior_msgs__action__NavigateThroughPoses_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_msgs__action__NavigateThroughPoses_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateThroughPoses_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_msgs__action__NavigateThroughPoses_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_msgs__action__NavigateThroughPoses_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_msgs__action__NavigateThroughPoses_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateThroughPoses_FeedbackMessage_message_members = {
  "behavior_msgs__action",  // message namespace
  "NavigateThroughPoses_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(behavior_msgs__action__NavigateThroughPoses_FeedbackMessage),
  behavior_msgs__action__NavigateThroughPoses_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateThroughPoses_FeedbackMessage_message_member_array,  // message members
  behavior_msgs__action__NavigateThroughPoses_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateThroughPoses_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_msgs__action__NavigateThroughPoses_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateThroughPoses_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_msgs__action__NavigateThroughPoses_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateThroughPoses_FeedbackMessage_message_type_support_handle = {
  0,
  &behavior_msgs__action__NavigateThroughPoses_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateThroughPoses_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_msgs, action, NavigateThroughPoses_FeedbackMessage)() {
  behavior_msgs__action__NavigateThroughPoses_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateThroughPoses_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  behavior_msgs__action__NavigateThroughPoses_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateThroughPoses_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_msgs, action, NavigateThroughPoses_Feedback)();
  if (!behavior_msgs__action__NavigateThroughPoses_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateThroughPoses_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    behavior_msgs__action__NavigateThroughPoses_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateThroughPoses_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_msgs__action__NavigateThroughPoses_FeedbackMessage__rosidl_typesupport_introspection_c__NavigateThroughPoses_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
