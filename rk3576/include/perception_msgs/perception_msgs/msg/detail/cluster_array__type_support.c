// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from perception_msgs:msg/ClusterArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "perception_msgs/msg/detail/cluster_array__rosidl_typesupport_introspection_c.h"
#include "perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "perception_msgs/msg/detail/cluster_array__functions.h"
#include "perception_msgs/msg/detail/cluster_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `clusters`
#include "perception_msgs/msg/cluster.h"
// Member `clusters`
#include "perception_msgs/msg/detail/cluster__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void perception_msgs__msg__ClusterArray__rosidl_typesupport_introspection_c__ClusterArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  perception_msgs__msg__ClusterArray__init(message_memory);
}

void perception_msgs__msg__ClusterArray__rosidl_typesupport_introspection_c__ClusterArray_fini_function(void * message_memory)
{
  perception_msgs__msg__ClusterArray__fini(message_memory);
}

size_t perception_msgs__msg__ClusterArray__rosidl_typesupport_introspection_c__size_function__ClusterArray__clusters(
  const void * untyped_member)
{
  const perception_msgs__msg__Cluster__Sequence * member =
    (const perception_msgs__msg__Cluster__Sequence *)(untyped_member);
  return member->size;
}

const void * perception_msgs__msg__ClusterArray__rosidl_typesupport_introspection_c__get_const_function__ClusterArray__clusters(
  const void * untyped_member, size_t index)
{
  const perception_msgs__msg__Cluster__Sequence * member =
    (const perception_msgs__msg__Cluster__Sequence *)(untyped_member);
  return &member->data[index];
}

void * perception_msgs__msg__ClusterArray__rosidl_typesupport_introspection_c__get_function__ClusterArray__clusters(
  void * untyped_member, size_t index)
{
  perception_msgs__msg__Cluster__Sequence * member =
    (perception_msgs__msg__Cluster__Sequence *)(untyped_member);
  return &member->data[index];
}

void perception_msgs__msg__ClusterArray__rosidl_typesupport_introspection_c__fetch_function__ClusterArray__clusters(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const perception_msgs__msg__Cluster * item =
    ((const perception_msgs__msg__Cluster *)
    perception_msgs__msg__ClusterArray__rosidl_typesupport_introspection_c__get_const_function__ClusterArray__clusters(untyped_member, index));
  perception_msgs__msg__Cluster * value =
    (perception_msgs__msg__Cluster *)(untyped_value);
  *value = *item;
}

void perception_msgs__msg__ClusterArray__rosidl_typesupport_introspection_c__assign_function__ClusterArray__clusters(
  void * untyped_member, size_t index, const void * untyped_value)
{
  perception_msgs__msg__Cluster * item =
    ((perception_msgs__msg__Cluster *)
    perception_msgs__msg__ClusterArray__rosidl_typesupport_introspection_c__get_function__ClusterArray__clusters(untyped_member, index));
  const perception_msgs__msg__Cluster * value =
    (const perception_msgs__msg__Cluster *)(untyped_value);
  *item = *value;
}

bool perception_msgs__msg__ClusterArray__rosidl_typesupport_introspection_c__resize_function__ClusterArray__clusters(
  void * untyped_member, size_t size)
{
  perception_msgs__msg__Cluster__Sequence * member =
    (perception_msgs__msg__Cluster__Sequence *)(untyped_member);
  perception_msgs__msg__Cluster__Sequence__fini(member);
  return perception_msgs__msg__Cluster__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember perception_msgs__msg__ClusterArray__rosidl_typesupport_introspection_c__ClusterArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_msgs__msg__ClusterArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "clusters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_msgs__msg__ClusterArray, clusters),  // bytes offset in struct
    NULL,  // default value
    perception_msgs__msg__ClusterArray__rosidl_typesupport_introspection_c__size_function__ClusterArray__clusters,  // size() function pointer
    perception_msgs__msg__ClusterArray__rosidl_typesupport_introspection_c__get_const_function__ClusterArray__clusters,  // get_const(index) function pointer
    perception_msgs__msg__ClusterArray__rosidl_typesupport_introspection_c__get_function__ClusterArray__clusters,  // get(index) function pointer
    perception_msgs__msg__ClusterArray__rosidl_typesupport_introspection_c__fetch_function__ClusterArray__clusters,  // fetch(index, &value) function pointer
    perception_msgs__msg__ClusterArray__rosidl_typesupport_introspection_c__assign_function__ClusterArray__clusters,  // assign(index, value) function pointer
    perception_msgs__msg__ClusterArray__rosidl_typesupport_introspection_c__resize_function__ClusterArray__clusters  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers perception_msgs__msg__ClusterArray__rosidl_typesupport_introspection_c__ClusterArray_message_members = {
  "perception_msgs__msg",  // message namespace
  "ClusterArray",  // message name
  2,  // number of fields
  sizeof(perception_msgs__msg__ClusterArray),
  perception_msgs__msg__ClusterArray__rosidl_typesupport_introspection_c__ClusterArray_message_member_array,  // message members
  perception_msgs__msg__ClusterArray__rosidl_typesupport_introspection_c__ClusterArray_init_function,  // function to initialize message memory (memory has to be allocated)
  perception_msgs__msg__ClusterArray__rosidl_typesupport_introspection_c__ClusterArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t perception_msgs__msg__ClusterArray__rosidl_typesupport_introspection_c__ClusterArray_message_type_support_handle = {
  0,
  &perception_msgs__msg__ClusterArray__rosidl_typesupport_introspection_c__ClusterArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, perception_msgs, msg, ClusterArray)() {
  perception_msgs__msg__ClusterArray__rosidl_typesupport_introspection_c__ClusterArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  perception_msgs__msg__ClusterArray__rosidl_typesupport_introspection_c__ClusterArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, perception_msgs, msg, Cluster)();
  if (!perception_msgs__msg__ClusterArray__rosidl_typesupport_introspection_c__ClusterArray_message_type_support_handle.typesupport_identifier) {
    perception_msgs__msg__ClusterArray__rosidl_typesupport_introspection_c__ClusterArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &perception_msgs__msg__ClusterArray__rosidl_typesupport_introspection_c__ClusterArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
