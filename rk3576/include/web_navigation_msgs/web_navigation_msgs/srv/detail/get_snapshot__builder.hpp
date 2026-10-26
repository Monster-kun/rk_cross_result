// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from web_navigation_msgs:srv/GetSnapshot.idl
// generated code does not contain a copyright notice

#ifndef WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_SNAPSHOT__BUILDER_HPP_
#define WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_SNAPSHOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "web_navigation_msgs/srv/detail/get_snapshot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace web_navigation_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::web_navigation_msgs::srv::GetSnapshot_Request>()
{
  return ::web_navigation_msgs::srv::GetSnapshot_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace web_navigation_msgs


namespace web_navigation_msgs
{

namespace srv
{

namespace builder
{

class Init_GetSnapshot_Response_state
{
public:
  Init_GetSnapshot_Response_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::web_navigation_msgs::srv::GetSnapshot_Response state(::web_navigation_msgs::srv::GetSnapshot_Response::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::web_navigation_msgs::srv::GetSnapshot_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::web_navigation_msgs::srv::GetSnapshot_Response>()
{
  return web_navigation_msgs::srv::builder::Init_GetSnapshot_Response_state();
}

}  // namespace web_navigation_msgs

#endif  // WEB_NAVIGATION_MSGS__SRV__DETAIL__GET_SNAPSHOT__BUILDER_HPP_
