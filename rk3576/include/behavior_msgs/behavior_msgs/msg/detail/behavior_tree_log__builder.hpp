// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_msgs:msg/BehaviorTreeLog.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_MSGS__MSG__DETAIL__BEHAVIOR_TREE_LOG__BUILDER_HPP_
#define BEHAVIOR_MSGS__MSG__DETAIL__BEHAVIOR_TREE_LOG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_msgs/msg/detail/behavior_tree_log__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_msgs
{

namespace msg
{

namespace builder
{

class Init_BehaviorTreeLog_event_log
{
public:
  explicit Init_BehaviorTreeLog_event_log(::behavior_msgs::msg::BehaviorTreeLog & msg)
  : msg_(msg)
  {}
  ::behavior_msgs::msg::BehaviorTreeLog event_log(::behavior_msgs::msg::BehaviorTreeLog::_event_log_type arg)
  {
    msg_.event_log = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_msgs::msg::BehaviorTreeLog msg_;
};

class Init_BehaviorTreeLog_timestamp
{
public:
  Init_BehaviorTreeLog_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BehaviorTreeLog_event_log timestamp(::behavior_msgs::msg::BehaviorTreeLog::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_BehaviorTreeLog_event_log(msg_);
  }

private:
  ::behavior_msgs::msg::BehaviorTreeLog msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_msgs::msg::BehaviorTreeLog>()
{
  return behavior_msgs::msg::builder::Init_BehaviorTreeLog_timestamp();
}

}  // namespace behavior_msgs

#endif  // BEHAVIOR_MSGS__MSG__DETAIL__BEHAVIOR_TREE_LOG__BUILDER_HPP_
