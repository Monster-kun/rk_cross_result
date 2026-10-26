// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from perception_msgs:msg/ClusterArray.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MSGS__MSG__DETAIL__CLUSTER_ARRAY__BUILDER_HPP_
#define PERCEPTION_MSGS__MSG__DETAIL__CLUSTER_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "perception_msgs/msg/detail/cluster_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace perception_msgs
{

namespace msg
{

namespace builder
{

class Init_ClusterArray_clusters
{
public:
  explicit Init_ClusterArray_clusters(::perception_msgs::msg::ClusterArray & msg)
  : msg_(msg)
  {}
  ::perception_msgs::msg::ClusterArray clusters(::perception_msgs::msg::ClusterArray::_clusters_type arg)
  {
    msg_.clusters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::perception_msgs::msg::ClusterArray msg_;
};

class Init_ClusterArray_header
{
public:
  Init_ClusterArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClusterArray_clusters header(::perception_msgs::msg::ClusterArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ClusterArray_clusters(msg_);
  }

private:
  ::perception_msgs::msg::ClusterArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::perception_msgs::msg::ClusterArray>()
{
  return perception_msgs::msg::builder::Init_ClusterArray_header();
}

}  // namespace perception_msgs

#endif  // PERCEPTION_MSGS__MSG__DETAIL__CLUSTER_ARRAY__BUILDER_HPP_
