// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_msgs:msg/BehaviorTreeStatusChange.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_MSGS__MSG__DETAIL__BEHAVIOR_TREE_STATUS_CHANGE__BUILDER_HPP_
#define BEHAVIOR_MSGS__MSG__DETAIL__BEHAVIOR_TREE_STATUS_CHANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_msgs/msg/detail/behavior_tree_status_change__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_msgs
{

namespace msg
{

namespace builder
{

class Init_BehaviorTreeStatusChange_current_status
{
public:
  explicit Init_BehaviorTreeStatusChange_current_status(::behavior_msgs::msg::BehaviorTreeStatusChange & msg)
  : msg_(msg)
  {}
  ::behavior_msgs::msg::BehaviorTreeStatusChange current_status(::behavior_msgs::msg::BehaviorTreeStatusChange::_current_status_type arg)
  {
    msg_.current_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::msg::BehaviorTreeStatusChange msg_;
};

class Init_BehaviorTreeStatusChange_previous_status
{
public:
  explicit Init_BehaviorTreeStatusChange_previous_status(::behavior_msgs::msg::BehaviorTreeStatusChange & msg)
  : msg_(msg)
  {}
  Init_BehaviorTreeStatusChange_current_status previous_status(::behavior_msgs::msg::BehaviorTreeStatusChange::_previous_status_type arg)
  {
    msg_.previous_status = std::move(arg);
    return Init_BehaviorTreeStatusChange_current_status(msg_);
  }

private:
  ::behavior_msgs::msg::BehaviorTreeStatusChange msg_;
};

class Init_BehaviorTreeStatusChange_uid
{
public:
  explicit Init_BehaviorTreeStatusChange_uid(::behavior_msgs::msg::BehaviorTreeStatusChange & msg)
  : msg_(msg)
  {}
  Init_BehaviorTreeStatusChange_previous_status uid(::behavior_msgs::msg::BehaviorTreeStatusChange::_uid_type arg)
  {
    msg_.uid = std::move(arg);
    return Init_BehaviorTreeStatusChange_previous_status(msg_);
  }

private:
  ::behavior_msgs::msg::BehaviorTreeStatusChange msg_;
};

class Init_BehaviorTreeStatusChange_node_name
{
public:
  explicit Init_BehaviorTreeStatusChange_node_name(::behavior_msgs::msg::BehaviorTreeStatusChange & msg)
  : msg_(msg)
  {}
  Init_BehaviorTreeStatusChange_uid node_name(::behavior_msgs::msg::BehaviorTreeStatusChange::_node_name_type arg)
  {
    msg_.node_name = std::move(arg);
    return Init_BehaviorTreeStatusChange_uid(msg_);
  }

private:
  ::behavior_msgs::msg::BehaviorTreeStatusChange msg_;
};

class Init_BehaviorTreeStatusChange_timestamp
{
public:
  Init_BehaviorTreeStatusChange_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BehaviorTreeStatusChange_node_name timestamp(::behavior_msgs::msg::BehaviorTreeStatusChange::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_BehaviorTreeStatusChange_node_name(msg_);
  }

private:
  ::behavior_msgs::msg::BehaviorTreeStatusChange msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::msg::BehaviorTreeStatusChange>()
{
  return behavior_msgs::msg::builder::Init_BehaviorTreeStatusChange_timestamp();
}

}  // namespace behavior_msgs

#endif  // BEHAVIOR_MSGS__MSG__DETAIL__BEHAVIOR_TREE_STATUS_CHANGE__BUILDER_HPP_
