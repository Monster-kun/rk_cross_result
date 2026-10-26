// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from se2_grid_msgs:msg/SE2Grid.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "se2_grid_msgs/msg/detail/se2_grid__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace se2_grid_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SE2Grid_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) se2_grid_msgs::msg::SE2Grid(_init);
}

void SE2Grid_fini_function(void * message_memory)
{
  auto typed_message = static_cast<se2_grid_msgs::msg::SE2Grid *>(message_memory);
  typed_message->~SE2Grid();
}

size_t size_function__SE2Grid__layers(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SE2Grid__layers(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SE2Grid__layers(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SE2Grid__layers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SE2Grid__layers(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SE2Grid__layers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SE2Grid__layers(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SE2Grid__layers(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SE2Grid__has_so2(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__SE2Grid__has_so2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__SE2Grid__has_so2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__SE2Grid__has_so2(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SE2Grid__data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std_msgs::msg::Float32MultiArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SE2Grid__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std_msgs::msg::Float32MultiArray> *>(untyped_member);
  return &member[index];
}

void * get_function__SE2Grid__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std_msgs::msg::Float32MultiArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__SE2Grid__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std_msgs::msg::Float32MultiArray *>(
    get_const_function__SE2Grid__data(untyped_member, index));
  auto & value = *reinterpret_cast<std_msgs::msg::Float32MultiArray *>(untyped_value);
  value = item;
}

void assign_function__SE2Grid__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std_msgs::msg::Float32MultiArray *>(
    get_function__SE2Grid__data(untyped_member, index));
  const auto & value = *reinterpret_cast<const std_msgs::msg::Float32MultiArray *>(untyped_value);
  item = value;
}

void resize_function__SE2Grid__data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std_msgs::msg::Float32MultiArray> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SE2Grid_message_member_array[6] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<se2_grid_msgs::msg::SE2GridInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(se2_grid_msgs::msg::SE2Grid, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "layers",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(se2_grid_msgs::msg::SE2Grid, layers),  // bytes offset in struct
    nullptr,  // default value
    size_function__SE2Grid__layers,  // size() function pointer
    get_const_function__SE2Grid__layers,  // get_const(index) function pointer
    get_function__SE2Grid__layers,  // get(index) function pointer
    fetch_function__SE2Grid__layers,  // fetch(index, &value) function pointer
    assign_function__SE2Grid__layers,  // assign(index, value) function pointer
    resize_function__SE2Grid__layers  // resize(index) function pointer
  },
  {
    "has_so2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(se2_grid_msgs::msg::SE2Grid, has_so2),  // bytes offset in struct
    nullptr,  // default value
    size_function__SE2Grid__has_so2,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__SE2Grid__has_so2,  // fetch(index, &value) function pointer
    assign_function__SE2Grid__has_so2,  // assign(index, value) function pointer
    resize_function__SE2Grid__has_so2  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Float32MultiArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(se2_grid_msgs::msg::SE2Grid, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__SE2Grid__data,  // size() function pointer
    get_const_function__SE2Grid__data,  // get_const(index) function pointer
    get_function__SE2Grid__data,  // get(index) function pointer
    fetch_function__SE2Grid__data,  // fetch(index, &value) function pointer
    assign_function__SE2Grid__data,  // assign(index, value) function pointer
    resize_function__SE2Grid__data  // resize(index) function pointer
  },
  {
    "start_index_row",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(se2_grid_msgs::msg::SE2Grid, start_index_row),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "start_index_col",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(se2_grid_msgs::msg::SE2Grid, start_index_col),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SE2Grid_message_members = {
  "se2_grid_msgs::msg",  // message namespace
  "SE2Grid",  // message name
  6,  // number of fields
  sizeof(se2_grid_msgs::msg::SE2Grid),
  SE2Grid_message_member_array,  // message members
  SE2Grid_init_function,  // function to initialize message memory (memory has to be allocated)
  SE2Grid_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SE2Grid_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SE2Grid_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace se2_grid_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<se2_grid_msgs::msg::SE2Grid>()
{
  return &::se2_grid_msgs::msg::rosidl_typesupport_introspection_cpp::SE2Grid_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, se2_grid_msgs, msg, SE2Grid)() {
  return &::se2_grid_msgs::msg::rosidl_typesupport_introspection_cpp::SE2Grid_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
