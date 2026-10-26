// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from system_msgs:srv/IsEmergencyStop.idl
// generated code does not contain a copyright notice

#ifndef SYSTEM_MSGS__SRV__DETAIL__IS_EMERGENCY_STOP__BUILDER_HPP_
#define SYSTEM_MSGS__SRV__DETAIL__IS_EMERGENCY_STOP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "system_msgs/srv/detail/is_emergency_stop__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace system_msgs
{

namespace srv
{

namespace builder
{

class Init_IsEmergencyStop_Request_input
{
public:
  Init_IsEmergencyStop_Request_input()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::system_msgs::srv::IsEmergencyStop_Request input(::system_msgs::srv::IsEmergencyStop_Request::_input_type arg)
  {
    msg_.input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::system_msgs::srv::IsEmergencyStop_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::system_msgs::srv::IsEmergencyStop_Request>()
{
  return system_msgs::srv::builder::Init_IsEmergencyStop_Request_input();
}

}  // namespace system_msgs


namespace system_msgs
{

namespace srv
{

namespace builder
{

class Init_IsEmergencyStop_Response_is_emergency_stop
{
public:
  Init_IsEmergencyStop_Response_is_emergency_stop()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::system_msgs::srv::IsEmergencyStop_Response is_emergency_stop(::system_msgs::srv::IsEmergencyStop_Response::_is_emergency_stop_type arg)
  {
    msg_.is_emergency_stop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::system_msgs::srv::IsEmergencyStop_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::system_msgs::srv::IsEmergencyStop_Response>()
{
  return system_msgs::srv::builder::Init_IsEmergencyStop_Response_is_emergency_stop();
}

}  // namespace system_msgs

#endif  // SYSTEM_MSGS__SRV__DETAIL__IS_EMERGENCY_STOP__BUILDER_HPP_
