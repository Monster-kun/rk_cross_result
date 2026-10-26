// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mapping_msgs:msg/MapProjectorInfo.idl
// generated code does not contain a copyright notice

#ifndef MAPPING_MSGS__MSG__DETAIL__MAP_PROJECTOR_INFO__BUILDER_HPP_
#define MAPPING_MSGS__MSG__DETAIL__MAP_PROJECTOR_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mapping_msgs/msg/detail/map_projector_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mapping_msgs
{

namespace msg
{

namespace builder
{

class Init_MapProjectorInfo_map_origin
{
public:
  explicit Init_MapProjectorInfo_map_origin(::mapping_msgs::msg::MapProjectorInfo & msg)
  : msg_(msg)
  {}
  ::mapping_msgs::msg::MapProjectorInfo map_origin(::mapping_msgs::msg::MapProjectorInfo::_map_origin_type arg)
  {
    msg_.map_origin = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mapping_msgs::msg::MapProjectorInfo msg_;
};

class Init_MapProjectorInfo_mgrs_grid
{
public:
  explicit Init_MapProjectorInfo_mgrs_grid(::mapping_msgs::msg::MapProjectorInfo & msg)
  : msg_(msg)
  {}
  Init_MapProjectorInfo_map_origin mgrs_grid(::mapping_msgs::msg::MapProjectorInfo::_mgrs_grid_type arg)
  {
    msg_.mgrs_grid = std::move(arg);
    return Init_MapProjectorInfo_map_origin(msg_);
  }

private:
  ::mapping_msgs::msg::MapProjectorInfo msg_;
};

class Init_MapProjectorInfo_type
{
public:
  Init_MapProjectorInfo_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapProjectorInfo_mgrs_grid type(::mapping_msgs::msg::MapProjectorInfo::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_MapProjectorInfo_mgrs_grid(msg_);
  }

private:
  ::mapping_msgs::msg::MapProjectorInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mapping_msgs::msg::MapProjectorInfo>()
{
  return mapping_msgs::msg::builder::Init_MapProjectorInfo_type();
}

}  // namespace mapping_msgs

#endif  // MAPPING_MSGS__MSG__DETAIL__MAP_PROJECTOR_INFO__BUILDER_HPP_
