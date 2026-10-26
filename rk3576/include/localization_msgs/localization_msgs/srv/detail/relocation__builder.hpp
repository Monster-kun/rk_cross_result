// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from localization_msgs:srv/Relocation.idl
// generated code does not contain a copyright notice

#ifndef LOCALIZATION_MSGS__SRV__DETAIL__RELOCATION__BUILDER_HPP_
#define LOCALIZATION_MSGS__SRV__DETAIL__RELOCATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "localization_msgs/srv/detail/relocation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace localization_msgs
{

namespace srv
{

namespace builder
{

class Init_Relocation_Request_relocation_method
{
public:
  explicit Init_Relocation_Request_relocation_method(::localization_msgs::srv::Relocation_Request & msg)
  : msg_(msg)
  {}
  ::localization_msgs::srv::Relocation_Request relocation_method(::localization_msgs::srv::Relocation_Request::_relocation_method_type arg)
  {
    msg_.relocation_method = std::move(arg);
    return std::move(msg_);
  }

private:
  ::localization_msgs::srv::Relocation_Request msg_;
};

class Init_Relocation_Request_map_name
{
public:
  explicit Init_Relocation_Request_map_name(::localization_msgs::srv::Relocation_Request & msg)
  : msg_(msg)
  {}
  Init_Relocation_Request_relocation_method map_name(::localization_msgs::srv::Relocation_Request::_map_name_type arg)
  {
    msg_.map_name = std::move(arg);
    return Init_Relocation_Request_relocation_method(msg_);
  }

private:
  ::localization_msgs::srv::Relocation_Request msg_;
};

class Init_Relocation_Request_cloud
{
public:
  Init_Relocation_Request_cloud()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Relocation_Request_map_name cloud(::localization_msgs::srv::Relocation_Request::_cloud_type arg)
  {
    msg_.cloud = std::move(arg);
    return Init_Relocation_Request_map_name(msg_);
  }

private:
  ::localization_msgs::srv::Relocation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::localization_msgs::srv::Relocation_Request>()
{
  return localization_msgs::srv::builder::Init_Relocation_Request_cloud();
}

}  // namespace localization_msgs


namespace localization_msgs
{

namespace srv
{

namespace builder
{

class Init_Relocation_Response_success
{
public:
  explicit Init_Relocation_Response_success(::localization_msgs::srv::Relocation_Response & msg)
  : msg_(msg)
  {}
  ::localization_msgs::srv::Relocation_Response success(::localization_msgs::srv::Relocation_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::localization_msgs::srv::Relocation_Response msg_;
};

class Init_Relocation_Response_init_pose
{
public:
  Init_Relocation_Response_init_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Relocation_Response_success init_pose(::localization_msgs::srv::Relocation_Response::_init_pose_type arg)
  {
    msg_.init_pose = std::move(arg);
    return Init_Relocation_Response_success(msg_);
  }

private:
  ::localization_msgs::srv::Relocation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::localization_msgs::srv::Relocation_Response>()
{
  return localization_msgs::srv::builder::Init_Relocation_Response_init_pose();
}

}  // namespace localization_msgs

#endif  // LOCALIZATION_MSGS__SRV__DETAIL__RELOCATION__BUILDER_HPP_
