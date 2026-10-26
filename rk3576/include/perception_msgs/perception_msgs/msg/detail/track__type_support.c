// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from perception_msgs:msg/Track.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "perception_msgs/msg/detail/track__rosidl_typesupport_introspection_c.h"
#include "perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "perception_msgs/msg/detail/track__functions.h"
#include "perception_msgs/msg/detail/track__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `vel`
#include "geometry_msgs/msg/vector3.h"
// Member `vel`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `associated`
#include "perception_msgs/msg/cluster.h"
// Member `associated`
#include "perception_msgs/msg/detail/cluster__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void perception_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  perception_msgs__msg__Track__init(message_memory);
}

void perception_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_fini_function(void * message_memory)
{
  perception_msgs__msg__Track__fini(message_memory);
}

size_t perception_msgs__msg__Track__rosidl_typesupport_introspection_c__size_function__Track__pos_cov(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * perception_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__pos_cov(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * perception_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__pos_cov(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void perception_msgs__msg__Track__rosidl_typesupport_introspection_c__fetch_function__Track__pos_cov(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    perception_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__pos_cov(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void perception_msgs__msg__Track__rosidl_typesupport_introspection_c__assign_function__Track__pos_cov(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    perception_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__pos_cov(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t perception_msgs__msg__Track__rosidl_typesupport_introspection_c__size_function__Track__vel_cov(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * perception_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__vel_cov(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * perception_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__vel_cov(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void perception_msgs__msg__Track__rosidl_typesupport_introspection_c__fetch_function__Track__vel_cov(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    perception_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__vel_cov(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void perception_msgs__msg__Track__rosidl_typesupport_introspection_c__assign_function__Track__vel_cov(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    perception_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__vel_cov(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t perception_msgs__msg__Track__rosidl_typesupport_introspection_c__size_function__Track__associated(
  const void * untyped_member)
{
  const perception_msgs__msg__Cluster__Sequence * member =
    (const perception_msgs__msg__Cluster__Sequence *)(untyped_member);
  return member->size;
}

const void * perception_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__associated(
  const void * untyped_member, size_t index)
{
  const perception_msgs__msg__Cluster__Sequence * member =
    (const perception_msgs__msg__Cluster__Sequence *)(untyped_member);
  return &member->data[index];
}

void * perception_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__associated(
  void * untyped_member, size_t index)
{
  perception_msgs__msg__Cluster__Sequence * member =
    (perception_msgs__msg__Cluster__Sequence *)(untyped_member);
  return &member->data[index];
}

void perception_msgs__msg__Track__rosidl_typesupport_introspection_c__fetch_function__Track__associated(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const perception_msgs__msg__Cluster * item =
    ((const perception_msgs__msg__Cluster *)
    perception_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__associated(untyped_member, index));
  perception_msgs__msg__Cluster * value =
    (perception_msgs__msg__Cluster *)(untyped_value);
  *value = *item;
}

void perception_msgs__msg__Track__rosidl_typesupport_introspection_c__assign_function__Track__associated(
  void * untyped_member, size_t index, const void * untyped_value)
{
  perception_msgs__msg__Cluster * item =
    ((perception_msgs__msg__Cluster *)
    perception_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__associated(untyped_member, index));
  const perception_msgs__msg__Cluster * value =
    (const perception_msgs__msg__Cluster *)(untyped_value);
  *item = *value;
}

bool perception_msgs__msg__Track__rosidl_typesupport_introspection_c__resize_function__Track__associated(
  void * untyped_member, size_t size)
{
  perception_msgs__msg__Cluster__Sequence * member =
    (perception_msgs__msg__Cluster__Sequence *)(untyped_member);
  perception_msgs__msg__Cluster__Sequence__fini(member);
  return perception_msgs__msg__Cluster__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember perception_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_member_array[7] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_msgs__msg__Track, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "age",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_msgs__msg__Track, age),  // bytes offset in struct
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
    offsetof(perception_msgs__msg__Track, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_msgs__msg__Track, vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_cov",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(perception_msgs__msg__Track, pos_cov),  // bytes offset in struct
    NULL,  // default value
    perception_msgs__msg__Track__rosidl_typesupport_introspection_c__size_function__Track__pos_cov,  // size() function pointer
    perception_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__pos_cov,  // get_const(index) function pointer
    perception_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__pos_cov,  // get(index) function pointer
    perception_msgs__msg__Track__rosidl_typesupport_introspection_c__fetch_function__Track__pos_cov,  // fetch(index, &value) function pointer
    perception_msgs__msg__Track__rosidl_typesupport_introspection_c__assign_function__Track__pos_cov,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel_cov",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(perception_msgs__msg__Track, vel_cov),  // bytes offset in struct
    NULL,  // default value
    perception_msgs__msg__Track__rosidl_typesupport_introspection_c__size_function__Track__vel_cov,  // size() function pointer
    perception_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__vel_cov,  // get_const(index) function pointer
    perception_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__vel_cov,  // get(index) function pointer
    perception_msgs__msg__Track__rosidl_typesupport_introspection_c__fetch_function__Track__vel_cov,  // fetch(index, &value) function pointer
    perception_msgs__msg__Track__rosidl_typesupport_introspection_c__assign_function__Track__vel_cov,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "associated",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_msgs__msg__Track, associated),  // bytes offset in struct
    NULL,  // default value
    perception_msgs__msg__Track__rosidl_typesupport_introspection_c__size_function__Track__associated,  // size() function pointer
    perception_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__associated,  // get_const(index) function pointer
    perception_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__associated,  // get(index) function pointer
    perception_msgs__msg__Track__rosidl_typesupport_introspection_c__fetch_function__Track__associated,  // fetch(index, &value) function pointer
    perception_msgs__msg__Track__rosidl_typesupport_introspection_c__assign_function__Track__associated,  // assign(index, value) function pointer
    perception_msgs__msg__Track__rosidl_typesupport_introspection_c__resize_function__Track__associated  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers perception_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_members = {
  "perception_msgs__msg",  // message namespace
  "Track",  // message name
  7,  // number of fields
  sizeof(perception_msgs__msg__Track),
  perception_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_member_array,  // message members
  perception_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_init_function,  // function to initialize message memory (memory has to be allocated)
  perception_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t perception_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_type_support_handle = {
  0,
  &perception_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, perception_msgs, msg, Track)() {
  perception_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  perception_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  perception_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, perception_msgs, msg, Cluster)();
  if (!perception_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_type_support_handle.typesupport_identifier) {
    perception_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &perception_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
