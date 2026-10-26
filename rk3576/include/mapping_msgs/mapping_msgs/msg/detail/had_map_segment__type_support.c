// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mapping_msgs:msg/HADMapSegment.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mapping_msgs/msg/detail/had_map_segment__rosidl_typesupport_introspection_c.h"
#include "mapping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mapping_msgs/msg/detail/had_map_segment__functions.h"
#include "mapping_msgs/msg/detail/had_map_segment__struct.h"


// Include directives for member types
// Member `primitives`
#include "mapping_msgs/msg/map_primitive.h"
// Member `primitives`
#include "mapping_msgs/msg/detail/map_primitive__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mapping_msgs__msg__HADMapSegment__rosidl_typesupport_introspection_c__HADMapSegment_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mapping_msgs__msg__HADMapSegment__init(message_memory);
}

void mapping_msgs__msg__HADMapSegment__rosidl_typesupport_introspection_c__HADMapSegment_fini_function(void * message_memory)
{
  mapping_msgs__msg__HADMapSegment__fini(message_memory);
}

size_t mapping_msgs__msg__HADMapSegment__rosidl_typesupport_introspection_c__size_function__HADMapSegment__primitives(
  const void * untyped_member)
{
  const mapping_msgs__msg__MapPrimitive__Sequence * member =
    (const mapping_msgs__msg__MapPrimitive__Sequence *)(untyped_member);
  return member->size;
}

const void * mapping_msgs__msg__HADMapSegment__rosidl_typesupport_introspection_c__get_const_function__HADMapSegment__primitives(
  const void * untyped_member, size_t index)
{
  const mapping_msgs__msg__MapPrimitive__Sequence * member =
    (const mapping_msgs__msg__MapPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mapping_msgs__msg__HADMapSegment__rosidl_typesupport_introspection_c__get_function__HADMapSegment__primitives(
  void * untyped_member, size_t index)
{
  mapping_msgs__msg__MapPrimitive__Sequence * member =
    (mapping_msgs__msg__MapPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void mapping_msgs__msg__HADMapSegment__rosidl_typesupport_introspection_c__fetch_function__HADMapSegment__primitives(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mapping_msgs__msg__MapPrimitive * item =
    ((const mapping_msgs__msg__MapPrimitive *)
    mapping_msgs__msg__HADMapSegment__rosidl_typesupport_introspection_c__get_const_function__HADMapSegment__primitives(untyped_member, index));
  mapping_msgs__msg__MapPrimitive * value =
    (mapping_msgs__msg__MapPrimitive *)(untyped_value);
  *value = *item;
}

void mapping_msgs__msg__HADMapSegment__rosidl_typesupport_introspection_c__assign_function__HADMapSegment__primitives(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mapping_msgs__msg__MapPrimitive * item =
    ((mapping_msgs__msg__MapPrimitive *)
    mapping_msgs__msg__HADMapSegment__rosidl_typesupport_introspection_c__get_function__HADMapSegment__primitives(untyped_member, index));
  const mapping_msgs__msg__MapPrimitive * value =
    (const mapping_msgs__msg__MapPrimitive *)(untyped_value);
  *item = *value;
}

bool mapping_msgs__msg__HADMapSegment__rosidl_typesupport_introspection_c__resize_function__HADMapSegment__primitives(
  void * untyped_member, size_t size)
{
  mapping_msgs__msg__MapPrimitive__Sequence * member =
    (mapping_msgs__msg__MapPrimitive__Sequence *)(untyped_member);
  mapping_msgs__msg__MapPrimitive__Sequence__fini(member);
  return mapping_msgs__msg__MapPrimitive__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mapping_msgs__msg__HADMapSegment__rosidl_typesupport_introspection_c__HADMapSegment_message_member_array[2] = {
  {
    "primitives",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapping_msgs__msg__HADMapSegment, primitives),  // bytes offset in struct
    NULL,  // default value
    mapping_msgs__msg__HADMapSegment__rosidl_typesupport_introspection_c__size_function__HADMapSegment__primitives,  // size() function pointer
    mapping_msgs__msg__HADMapSegment__rosidl_typesupport_introspection_c__get_const_function__HADMapSegment__primitives,  // get_const(index) function pointer
    mapping_msgs__msg__HADMapSegment__rosidl_typesupport_introspection_c__get_function__HADMapSegment__primitives,  // get(index) function pointer
    mapping_msgs__msg__HADMapSegment__rosidl_typesupport_introspection_c__fetch_function__HADMapSegment__primitives,  // fetch(index, &value) function pointer
    mapping_msgs__msg__HADMapSegment__rosidl_typesupport_introspection_c__assign_function__HADMapSegment__primitives,  // assign(index, value) function pointer
    mapping_msgs__msg__HADMapSegment__rosidl_typesupport_introspection_c__resize_function__HADMapSegment__primitives  // resize(index) function pointer
  },
  {
    "preferred_primitive_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mapping_msgs__msg__HADMapSegment, preferred_primitive_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mapping_msgs__msg__HADMapSegment__rosidl_typesupport_introspection_c__HADMapSegment_message_members = {
  "mapping_msgs__msg",  // message namespace
  "HADMapSegment",  // message name
  2,  // number of fields
  sizeof(mapping_msgs__msg__HADMapSegment),
  mapping_msgs__msg__HADMapSegment__rosidl_typesupport_introspection_c__HADMapSegment_message_member_array,  // message members
  mapping_msgs__msg__HADMapSegment__rosidl_typesupport_introspection_c__HADMapSegment_init_function,  // function to initialize message memory (memory has to be allocated)
  mapping_msgs__msg__HADMapSegment__rosidl_typesupport_introspection_c__HADMapSegment_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mapping_msgs__msg__HADMapSegment__rosidl_typesupport_introspection_c__HADMapSegment_message_type_support_handle = {
  0,
  &mapping_msgs__msg__HADMapSegment__rosidl_typesupport_introspection_c__HADMapSegment_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mapping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mapping_msgs, msg, HADMapSegment)() {
  mapping_msgs__msg__HADMapSegment__rosidl_typesupport_introspection_c__HADMapSegment_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mapping_msgs, msg, MapPrimitive)();
  if (!mapping_msgs__msg__HADMapSegment__rosidl_typesupport_introspection_c__HADMapSegment_message_type_support_handle.typesupport_identifier) {
    mapping_msgs__msg__HADMapSegment__rosidl_typesupport_introspection_c__HADMapSegment_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mapping_msgs__msg__HADMapSegment__rosidl_typesupport_introspection_c__HADMapSegment_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
