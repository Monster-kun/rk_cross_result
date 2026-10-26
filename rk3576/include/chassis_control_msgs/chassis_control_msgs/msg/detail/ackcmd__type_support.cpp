// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from chassis_control_msgs:msg/Ackcmd.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "chassis_control_msgs/msg/detail/ackcmd__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace chassis_control_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Ackcmd_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) chassis_control_msgs::msg::Ackcmd(_init);
}

void Ackcmd_fini_function(void * message_memory)
{
  auto typed_message = static_cast<chassis_control_msgs::msg::Ackcmd *>(message_memory);
  typed_message->~Ackcmd();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Ackcmd_message_member_array[2] = {
  {
    "vel",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chassis_control_msgs::msg::Ackcmd, vel),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "steer",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chassis_control_msgs::msg::Ackcmd, steer),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Ackcmd_message_members = {
  "chassis_control_msgs::msg",  // message namespace
  "Ackcmd",  // message name
  2,  // number of fields
  sizeof(chassis_control_msgs::msg::Ackcmd),
  Ackcmd_message_member_array,  // message members
  Ackcmd_init_function,  // function to initialize message memory (memory has to be allocated)
  Ackcmd_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Ackcmd_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Ackcmd_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace chassis_control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<chassis_control_msgs::msg::Ackcmd>()
{
  return &::chassis_control_msgs::msg::rosidl_typesupport_introspection_cpp::Ackcmd_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, chassis_control_msgs, msg, Ackcmd)() {
  return &::chassis_control_msgs::msg::rosidl_typesupport_introspection_cpp::Ackcmd_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
