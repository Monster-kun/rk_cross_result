// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from perception_msgs:msg/Cluster.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MSGS__MSG__DETAIL__CLUSTER__BUILDER_HPP_
#define PERCEPTION_MSGS__MSG__DETAIL__CLUSTER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "perception_msgs/msg/detail/cluster__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace perception_msgs
{

namespace msg
{

namespace builder
{

class Init_Cluster_centroid
{
public:
  explicit Init_Cluster_centroid(::perception_msgs::msg::Cluster & msg)
  : msg_(msg)
  {}
  ::perception_msgs::msg::Cluster centroid(::perception_msgs::msg::Cluster::_centroid_type arg)
  {
    msg_.centroid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::perception_msgs::msg::Cluster msg_;
};

class Init_Cluster_size
{
public:
  explicit Init_Cluster_size(::perception_msgs::msg::Cluster & msg)
  : msg_(msg)
  {}
  Init_Cluster_centroid size(::perception_msgs::msg::Cluster::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_Cluster_centroid(msg_);
  }

private:
  ::perception_msgs::msg::Cluster msg_;
};

class Init_Cluster_max_pt
{
public:
  explicit Init_Cluster_max_pt(::perception_msgs::msg::Cluster & msg)
  : msg_(msg)
  {}
  Init_Cluster_size max_pt(::perception_msgs::msg::Cluster::_max_pt_type arg)
  {
    msg_.max_pt = std::move(arg);
    return Init_Cluster_size(msg_);
  }

private:
  ::perception_msgs::msg::Cluster msg_;
};

class Init_Cluster_min_pt
{
public:
  explicit Init_Cluster_min_pt(::perception_msgs::msg::Cluster & msg)
  : msg_(msg)
  {}
  Init_Cluster_max_pt min_pt(::perception_msgs::msg::Cluster::_min_pt_type arg)
  {
    msg_.min_pt = std::move(arg);
    return Init_Cluster_max_pt(msg_);
  }

private:
  ::perception_msgs::msg::Cluster msg_;
};

class Init_Cluster_id
{
public:
  explicit Init_Cluster_id(::perception_msgs::msg::Cluster & msg)
  : msg_(msg)
  {}
  Init_Cluster_min_pt id(::perception_msgs::msg::Cluster::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Cluster_min_pt(msg_);
  }

private:
  ::perception_msgs::msg::Cluster msg_;
};

class Init_Cluster_is_human
{
public:
  Init_Cluster_is_human()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Cluster_id is_human(::perception_msgs::msg::Cluster::_is_human_type arg)
  {
    msg_.is_human = std::move(arg);
    return Init_Cluster_id(msg_);
  }

private:
  ::perception_msgs::msg::Cluster msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::perception_msgs::msg::Cluster>()
{
  return perception_msgs::msg::builder::Init_Cluster_is_human();
}

}  // namespace perception_msgs

#endif  // PERCEPTION_MSGS__MSG__DETAIL__CLUSTER__BUILDER_HPP_
