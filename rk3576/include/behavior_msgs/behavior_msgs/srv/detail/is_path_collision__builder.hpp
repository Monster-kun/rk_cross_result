// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_msgs:srv/IsPathCollision.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_MSGS__SRV__DETAIL__IS_PATH_COLLISION__BUILDER_HPP_
#define BEHAVIOR_MSGS__SRV__DETAIL__IS_PATH_COLLISION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_msgs/srv/detail/is_path_collision__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_msgs
{

namespace srv
{

namespace builder
{

class Init_IsPathCollision_Request_check_distance
{
public:
  Init_IsPathCollision_Request_check_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::behavior_msgs::srv::IsPathCollision_Request check_distance(::behavior_msgs::srv::IsPathCollision_Request::_check_distance_type arg)
  {
    msg_.check_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::srv::IsPathCollision_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::srv::IsPathCollision_Request>()
{
  return behavior_msgs::srv::builder::Init_IsPathCollision_Request_check_distance();
}

}  // namespace behavior_msgs


namespace behavior_msgs
{

namespace srv
{

namespace builder
{

class Init_IsPathCollision_Response_is_valid
{
public:
  Init_IsPathCollision_Response_is_valid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::behavior_msgs::srv::IsPathCollision_Response is_valid(::behavior_msgs::srv::IsPathCollision_Response::_is_valid_type arg)
  {
    msg_.is_valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::srv::IsPathCollision_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::srv::IsPathCollision_Response>()
{
  return behavior_msgs::srv::builder::Init_IsPathCollision_Response_is_valid();
}

}  // namespace behavior_msgs

#endif  // BEHAVIOR_MSGS__SRV__DETAIL__IS_PATH_COLLISION__BUILDER_HPP_
