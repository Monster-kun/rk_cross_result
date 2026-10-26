// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from perception_msgs:msg/Track.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "perception_msgs/msg/detail/track__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace perception_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Track_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) perception_msgs::msg::Track(_init);
}

void Track_fini_function(void * message_memory)
{
  auto typed_message = static_cast<perception_msgs::msg::Track *>(message_memory);
  typed_message->~Track();
}

size_t size_function__Track__pos_cov(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__Track__pos_cov(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__Track__pos_cov(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void fetch_function__Track__pos_cov(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Track__pos_cov(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Track__pos_cov(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Track__pos_cov(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__Track__vel_cov(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__Track__vel_cov(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__Track__vel_cov(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void fetch_function__Track__vel_cov(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Track__vel_cov(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Track__vel_cov(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Track__vel_cov(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__Track__associated(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<perception_msgs::msg::Cluster> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Track__associated(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<perception_msgs::msg::Cluster> *>(untyped_member);
  return &member[index];
}

void * get_function__Track__associated(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<perception_msgs::msg::Cluster> *>(untyped_member);
  return &member[index];
}

void fetch_function__Track__associated(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const perception_msgs::msg::Cluster *>(
    get_const_function__Track__associated(untyped_member, index));
  auto & value = *reinterpret_cast<perception_msgs::msg::Cluster *>(untyped_value);
  value = item;
}

void assign_function__Track__associated(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<perception_msgs::msg::Cluster *>(
    get_function__Track__associated(untyped_member, index));
  const auto & value = *reinterpret_cast<const perception_msgs::msg::Cluster *>(untyped_value);
  item = value;
}

void resize_function__Track__associated(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<perception_msgs::msg::Cluster> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Track_message_member_array[7] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_msgs::msg::Track, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "age",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_msgs::msg::Track, age),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_msgs::msg::Track, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vel",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_msgs::msg::Track, vel),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pos_cov",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(perception_msgs::msg::Track, pos_cov),  // bytes offset in struct
    nullptr,  // default value
    size_function__Track__pos_cov,  // size() function pointer
    get_const_function__Track__pos_cov,  // get_const(index) function pointer
    get_function__Track__pos_cov,  // get(index) function pointer
    fetch_function__Track__pos_cov,  // fetch(index, &value) function pointer
    assign_function__Track__pos_cov,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vel_cov",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(perception_msgs::msg::Track, vel_cov),  // bytes offset in struct
    nullptr,  // default value
    size_function__Track__vel_cov,  // size() function pointer
    get_const_function__Track__vel_cov,  // get_const(index) function pointer
    get_function__Track__vel_cov,  // get(index) function pointer
    fetch_function__Track__vel_cov,  // fetch(index, &value) function pointer
    assign_function__Track__vel_cov,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "associated",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<perception_msgs::msg::Cluster>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_msgs::msg::Track, associated),  // bytes offset in struct
    nullptr,  // default value
    size_function__Track__associated,  // size() function pointer
    get_const_function__Track__associated,  // get_const(index) function pointer
    get_function__Track__associated,  // get(index) function pointer
    fetch_function__Track__associated,  // fetch(index, &value) function pointer
    assign_function__Track__associated,  // assign(index, value) function pointer
    resize_function__Track__associated  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Track_message_members = {
  "perception_msgs::msg",  // message namespace
  "Track",  // message name
  7,  // number of fields
  sizeof(perception_msgs::msg::Track),
  Track_message_member_array,  // message members
  Track_init_function,  // function to initialize message memory (memory has to be allocated)
  Track_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Track_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Track_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace perception_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<perception_msgs::msg::Track>()
{
  return &::perception_msgs::msg::rosidl_typesupport_introspection_cpp::Track_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, perception_msgs, msg, Track)() {
  return &::perception_msgs::msg::rosidl_typesupport_introspection_cpp::Track_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
