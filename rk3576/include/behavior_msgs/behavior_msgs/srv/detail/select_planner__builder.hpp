// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_msgs:srv/SelectPlanner.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_MSGS__SRV__DETAIL__SELECT_PLANNER__BUILDER_HPP_
#define BEHAVIOR_MSGS__SRV__DETAIL__SELECT_PLANNER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_msgs/srv/detail/select_planner__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_msgs
{

namespace srv
{

namespace builder
{

class Init_SelectPlanner_Request_planner_selector_id
{
public:
  Init_SelectPlanner_Request_planner_selector_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::behavior_msgs::srv::SelectPlanner_Request planner_selector_id(::behavior_msgs::srv::SelectPlanner_Request::_planner_selector_id_type arg)
  {
    msg_.planner_selector_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::srv::SelectPlanner_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::srv::SelectPlanner_Request>()
{
  return behavior_msgs::srv::builder::Init_SelectPlanner_Request_planner_selector_id();
}

}  // namespace behavior_msgs


namespace behavior_msgs
{

namespace srv
{

namespace builder
{

class Init_SelectPlanner_Response_local_planner_id
{
public:
  Init_SelectPlanner_Response_local_planner_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::behavior_msgs::srv::SelectPlanner_Response local_planner_id(::behavior_msgs::srv::SelectPlanner_Response::_local_planner_id_type arg)
  {
    msg_.local_planner_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::srv::SelectPlanner_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::srv::SelectPlanner_Response>()
{
  return behavior_msgs::srv::builder::Init_SelectPlanner_Response_local_planner_id();
}

}  // namespace behavior_msgs

#endif  // BEHAVIOR_MSGS__SRV__DETAIL__SELECT_PLANNER__BUILDER_HPP_
