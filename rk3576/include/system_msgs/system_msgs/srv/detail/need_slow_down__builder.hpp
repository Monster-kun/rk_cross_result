// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from system_msgs:srv/NeedSlowDown.idl
// generated code does not contain a copyright notice

#ifndef SYSTEM_MSGS__SRV__DETAIL__NEED_SLOW_DOWN__BUILDER_HPP_
#define SYSTEM_MSGS__SRV__DETAIL__NEED_SLOW_DOWN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "system_msgs/srv/detail/need_slow_down__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace system_msgs
{

namespace srv
{

namespace builder
{

class Init_NeedSlowDown_Request_pose
{
public:
  Init_NeedSlowDown_Request_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::system_msgs::srv::NeedSlowDown_Request pose(::system_msgs::srv::NeedSlowDown_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::system_msgs::srv::NeedSlowDown_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::system_msgs::srv::NeedSlowDown_Request>()
{
  return system_msgs::srv::builder::Init_NeedSlowDown_Request_pose();
}

}  // namespace system_msgs


namespace system_msgs
{

namespace srv
{

namespace builder
{

class Init_NeedSlowDown_Response_slow_down_ratio
{
public:
  explicit Init_NeedSlowDown_Response_slow_down_ratio(::system_msgs::srv::NeedSlowDown_Response & msg)
  : msg_(msg)
  {}
  ::system_msgs::srv::NeedSlowDown_Response slow_down_ratio(::system_msgs::srv::NeedSlowDown_Response::_slow_down_ratio_type arg)
  {
    msg_.slow_down_ratio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::system_msgs::srv::NeedSlowDown_Response msg_;
};

class Init_NeedSlowDown_Response_slow_down
{
public:
  Init_NeedSlowDown_Response_slow_down()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NeedSlowDown_Response_slow_down_ratio slow_down(::system_msgs::srv::NeedSlowDown_Response::_slow_down_type arg)
  {
    msg_.slow_down = std::move(arg);
    return Init_NeedSlowDown_Response_slow_down_ratio(msg_);
  }

private:
  ::system_msgs::srv::NeedSlowDown_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::system_msgs::srv::NeedSlowDown_Response>()
{
  return system_msgs::srv::builder::Init_NeedSlowDown_Response_slow_down();
}

}  // namespace system_msgs

#endif  // SYSTEM_MSGS__SRV__DETAIL__NEED_SLOW_DOWN__BUILDER_HPP_
