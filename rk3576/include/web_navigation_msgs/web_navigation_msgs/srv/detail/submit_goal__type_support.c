// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from web_navigation_msgs:srv/SubmitGoal.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "web_navigation_msgs/srv/detail/submit_goal__rosidl_typesupport_introspection_c.h"
#include "web_navigation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "web_navigation_msgs/srv/detail/submit_goal__functions.h"
#include "web_navigation_msgs/srv/detail/submit_goal__struct.h"


// Include directives for member types
// Member `request_id`
// Member `session_id`
// Member `device_label`
// Member `manager_boot_id`
// Member `lease_token`
// Member `map_version`
// Member `frame_id`
// Member `selected_layer_id`
// Member `expected_active_task_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `sequence`
#include "web_navigation_msgs/msg/sequence_waypoint.h"
// Member `sequence`
#include "web_navigation_msgs/msg/detail/sequence_waypoint__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void web_navigation_msgs__srv__SubmitGoal_Request__rosidl_typesupport_introspection_c__SubmitGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  web_navigation_msgs__srv__SubmitGoal_Request__init(message_memory);
}

void web_navigation_msgs__srv__SubmitGoal_Request__rosidl_typesupport_introspection_c__SubmitGoal_Request_fini_function(void * message_memory)
{
  web_navigation_msgs__srv__SubmitGoal_Request__fini(message_memory);
}

size_t web_navigation_msgs__srv__SubmitGoal_Request__rosidl_typesupport_introspection_c__size_function__SubmitGoal_Request__sequence(
  const void * untyped_member)
{
  const web_navigation_msgs__msg__SequenceWaypoint__Sequence * member =
    (const web_navigation_msgs__msg__SequenceWaypoint__Sequence *)(untyped_member);
  return member->size;
}

const void * web_navigation_msgs__srv__SubmitGoal_Request__rosidl_typesupport_introspection_c__get_const_function__SubmitGoal_Request__sequence(
  const void * untyped_member, size_t index)
{
  const web_navigation_msgs__msg__SequenceWaypoint__Sequence * member =
    (const web_navigation_msgs__msg__SequenceWaypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * web_navigation_msgs__srv__SubmitGoal_Request__rosidl_typesupport_introspection_c__get_function__SubmitGoal_Request__sequence(
  void * untyped_member, size_t index)
{
  web_navigation_msgs__msg__SequenceWaypoint__Sequence * member =
    (web_navigation_msgs__msg__SequenceWaypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void web_navigation_msgs__srv__SubmitGoal_Request__rosidl_typesupport_introspection_c__fetch_function__SubmitGoal_Request__sequence(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const web_navigation_msgs__msg__SequenceWaypoint * item =
    ((const web_navigation_msgs__msg__SequenceWaypoint *)
    web_navigation_msgs__srv__SubmitGoal_Request__rosidl_typesupport_introspection_c__get_const_function__SubmitGoal_Request__sequence(untyped_member, index));
  web_navigation_msgs__msg__SequenceWaypoint * value =
    (web_navigation_msgs__msg__SequenceWaypoint *)(untyped_value);
  *value = *item;
}

void web_navigation_msgs__srv__SubmitGoal_Request__rosidl_typesupport_introspection_c__assign_function__SubmitGoal_Request__sequence(
  void * untyped_member, size_t index, const void * untyped_value)
{
  web_navigation_msgs__msg__SequenceWaypoint * item =
    ((web_navigation_msgs__msg__SequenceWaypoint *)
    web_navigation_msgs__srv__SubmitGoal_Request__rosidl_typesupport_introspection_c__get_function__SubmitGoal_Request__sequence(untyped_member, index));
  const web_navigation_msgs__msg__SequenceWaypoint * value =
    (const web_navigation_msgs__msg__SequenceWaypoint *)(untyped_value);
  *item = *value;
}

bool web_navigation_msgs__srv__SubmitGoal_Request__rosidl_typesupport_introspection_c__resize_function__SubmitGoal_Request__sequence(
  void * untyped_member, size_t size)
{
  web_navigation_msgs__msg__SequenceWaypoint__Sequence * member =
    (web_navigation_msgs__msg__SequenceWaypoint__Sequence *)(untyped_member);
  web_navigation_msgs__msg__SequenceWaypoint__Sequence__fini(member);
  return web_navigation_msgs__msg__SequenceWaypoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember web_navigation_msgs__srv__SubmitGoal_Request__rosidl_typesupport_introspection_c__SubmitGoal_Request_message_member_array[15] = {
  {
    "operation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__SubmitGoal_Request, operation),  // bytes offset in struct
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
    offsetof(web_navigation_msgs__srv__SubmitGoal_Request, request_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "session_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__SubmitGoal_Request, session_id),  // bytes offset in struct
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
    offsetof(web_navigation_msgs__srv__SubmitGoal_Request, device_label),  // bytes offset in struct
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
    offsetof(web_navigation_msgs__srv__SubmitGoal_Request, manager_boot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lease_token",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__SubmitGoal_Request, lease_token),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "control_epoch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__SubmitGoal_Request, control_epoch),  // bytes offset in struct
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
    offsetof(web_navigation_msgs__srv__SubmitGoal_Request, map_version),  // bytes offset in struct
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
    offsetof(web_navigation_msgs__srv__SubmitGoal_Request, frame_id),  // bytes offset in struct
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
    offsetof(web_navigation_msgs__srv__SubmitGoal_Request, x),  // bytes offset in struct
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
    offsetof(web_navigation_msgs__srv__SubmitGoal_Request, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "selected_layer_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__SubmitGoal_Request, selected_layer_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "expected_active_task_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__SubmitGoal_Request, expected_active_task_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "expected_state_revision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__SubmitGoal_Request, expected_state_revision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__SubmitGoal_Request, sequence),  // bytes offset in struct
    NULL,  // default value
    web_navigation_msgs__srv__SubmitGoal_Request__rosidl_typesupport_introspection_c__size_function__SubmitGoal_Request__sequence,  // size() function pointer
    web_navigation_msgs__srv__SubmitGoal_Request__rosidl_typesupport_introspection_c__get_const_function__SubmitGoal_Request__sequence,  // get_const(index) function pointer
    web_navigation_msgs__srv__SubmitGoal_Request__rosidl_typesupport_introspection_c__get_function__SubmitGoal_Request__sequence,  // get(index) function pointer
    web_navigation_msgs__srv__SubmitGoal_Request__rosidl_typesupport_introspection_c__fetch_function__SubmitGoal_Request__sequence,  // fetch(index, &value) function pointer
    web_navigation_msgs__srv__SubmitGoal_Request__rosidl_typesupport_introspection_c__assign_function__SubmitGoal_Request__sequence,  // assign(index, value) function pointer
    web_navigation_msgs__srv__SubmitGoal_Request__rosidl_typesupport_introspection_c__resize_function__SubmitGoal_Request__sequence  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers web_navigation_msgs__srv__SubmitGoal_Request__rosidl_typesupport_introspection_c__SubmitGoal_Request_message_members = {
  "web_navigation_msgs__srv",  // message namespace
  "SubmitGoal_Request",  // message name
  15,  // number of fields
  sizeof(web_navigation_msgs__srv__SubmitGoal_Request),
  web_navigation_msgs__srv__SubmitGoal_Request__rosidl_typesupport_introspection_c__SubmitGoal_Request_message_member_array,  // message members
  web_navigation_msgs__srv__SubmitGoal_Request__rosidl_typesupport_introspection_c__SubmitGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  web_navigation_msgs__srv__SubmitGoal_Request__rosidl_typesupport_introspection_c__SubmitGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t web_navigation_msgs__srv__SubmitGoal_Request__rosidl_typesupport_introspection_c__SubmitGoal_Request_message_type_support_handle = {
  0,
  &web_navigation_msgs__srv__SubmitGoal_Request__rosidl_typesupport_introspection_c__SubmitGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_web_navigation_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, srv, SubmitGoal_Request)() {
  web_navigation_msgs__srv__SubmitGoal_Request__rosidl_typesupport_introspection_c__SubmitGoal_Request_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, msg, SequenceWaypoint)();
  if (!web_navigation_msgs__srv__SubmitGoal_Request__rosidl_typesupport_introspection_c__SubmitGoal_Request_message_type_support_handle.typesupport_identifier) {
    web_navigation_msgs__srv__SubmitGoal_Request__rosidl_typesupport_introspection_c__SubmitGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &web_navigation_msgs__srv__SubmitGoal_Request__rosidl_typesupport_introspection_c__SubmitGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "web_navigation_msgs/srv/detail/submit_goal__rosidl_typesupport_introspection_c.h"
// already included above
// #include "web_navigation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "web_navigation_msgs/srv/detail/submit_goal__functions.h"
// already included above
// #include "web_navigation_msgs/srv/detail/submit_goal__struct.h"


// Include directives for member types
// Member `code`
// Member `message`
// Member `request_id`
// Member `task_id`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void web_navigation_msgs__srv__SubmitGoal_Response__rosidl_typesupport_introspection_c__SubmitGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  web_navigation_msgs__srv__SubmitGoal_Response__init(message_memory);
}

void web_navigation_msgs__srv__SubmitGoal_Response__rosidl_typesupport_introspection_c__SubmitGoal_Response_fini_function(void * message_memory)
{
  web_navigation_msgs__srv__SubmitGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember web_navigation_msgs__srv__SubmitGoal_Response__rosidl_typesupport_introspection_c__SubmitGoal_Response_message_member_array[7] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(web_navigation_msgs__srv__SubmitGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(web_navigation_msgs__srv__SubmitGoal_Response, code),  // bytes offset in struct
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
    offsetof(web_navigation_msgs__srv__SubmitGoal_Response, message),  // bytes offset in struct
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
    offsetof(web_navigation_msgs__srv__SubmitGoal_Response, request_id),  // bytes offset in struct
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
    offsetof(web_navigation_msgs__srv__SubmitGoal_Response, task_id),  // bytes offset in struct
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
    offsetof(web_navigation_msgs__srv__SubmitGoal_Response, task_status),  // bytes offset in struct
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
    offsetof(web_navigation_msgs__srv__SubmitGoal_Response, state_revision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers web_navigation_msgs__srv__SubmitGoal_Response__rosidl_typesupport_introspection_c__SubmitGoal_Response_message_members = {
  "web_navigation_msgs__srv",  // message namespace
  "SubmitGoal_Response",  // message name
  7,  // number of fields
  sizeof(web_navigation_msgs__srv__SubmitGoal_Response),
  web_navigation_msgs__srv__SubmitGoal_Response__rosidl_typesupport_introspection_c__SubmitGoal_Response_message_member_array,  // message members
  web_navigation_msgs__srv__SubmitGoal_Response__rosidl_typesupport_introspection_c__SubmitGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  web_navigation_msgs__srv__SubmitGoal_Response__rosidl_typesupport_introspection_c__SubmitGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t web_navigation_msgs__srv__SubmitGoal_Response__rosidl_typesupport_introspection_c__SubmitGoal_Response_message_type_support_handle = {
  0,
  &web_navigation_msgs__srv__SubmitGoal_Response__rosidl_typesupport_introspection_c__SubmitGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_web_navigation_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, srv, SubmitGoal_Response)() {
  if (!web_navigation_msgs__srv__SubmitGoal_Response__rosidl_typesupport_introspection_c__SubmitGoal_Response_message_type_support_handle.typesupport_identifier) {
    web_navigation_msgs__srv__SubmitGoal_Response__rosidl_typesupport_introspection_c__SubmitGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &web_navigation_msgs__srv__SubmitGoal_Response__rosidl_typesupport_introspection_c__SubmitGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "web_navigation_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "web_navigation_msgs/srv/detail/submit_goal__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers web_navigation_msgs__srv__detail__submit_goal__rosidl_typesupport_introspection_c__SubmitGoal_service_members = {
  "web_navigation_msgs__srv",  // service namespace
  "SubmitGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // web_navigation_msgs__srv__detail__submit_goal__rosidl_typesupport_introspection_c__SubmitGoal_Request_message_type_support_handle,
  NULL  // response message
  // web_navigation_msgs__srv__detail__submit_goal__rosidl_typesupport_introspection_c__SubmitGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t web_navigation_msgs__srv__detail__submit_goal__rosidl_typesupport_introspection_c__SubmitGoal_service_type_support_handle = {
  0,
  &web_navigation_msgs__srv__detail__submit_goal__rosidl_typesupport_introspection_c__SubmitGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, srv, SubmitGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, srv, SubmitGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_web_navigation_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, srv, SubmitGoal)() {
  if (!web_navigation_msgs__srv__detail__submit_goal__rosidl_typesupport_introspection_c__SubmitGoal_service_type_support_handle.typesupport_identifier) {
    web_navigation_msgs__srv__detail__submit_goal__rosidl_typesupport_introspection_c__SubmitGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)web_navigation_msgs__srv__detail__submit_goal__rosidl_typesupport_introspection_c__SubmitGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, srv, SubmitGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, web_navigation_msgs, srv, SubmitGoal_Response)()->data;
  }

  return &web_navigation_msgs__srv__detail__submit_goal__rosidl_typesupport_introspection_c__SubmitGoal_service_type_support_handle;
}
