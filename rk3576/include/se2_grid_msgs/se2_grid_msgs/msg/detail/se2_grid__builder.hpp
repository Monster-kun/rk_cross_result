// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from se2_grid_msgs:msg/SE2Grid.idl
// generated code does not contain a copyright notice

#ifndef SE2_GRID_MSGS__MSG__DETAIL__SE2_GRID__BUILDER_HPP_
#define SE2_GRID_MSGS__MSG__DETAIL__SE2_GRID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "se2_grid_msgs/msg/detail/se2_grid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace se2_grid_msgs
{

namespace msg
{

namespace builder
{

class Init_SE2Grid_start_index_col
{
public:
  explicit Init_SE2Grid_start_index_col(::se2_grid_msgs::msg::SE2Grid & msg)
  : msg_(msg)
  {}
  ::se2_grid_msgs::msg::SE2Grid start_index_col(::se2_grid_msgs::msg::SE2Grid::_start_index_col_type arg)
  {
    msg_.start_index_col = std::move(arg);
    return std::move(msg_);
  }

private:
  ::se2_grid_msgs::msg::SE2Grid msg_;
};

class Init_SE2Grid_start_index_row
{
public:
  explicit Init_SE2Grid_start_index_row(::se2_grid_msgs::msg::SE2Grid & msg)
  : msg_(msg)
  {}
  Init_SE2Grid_start_index_col start_index_row(::se2_grid_msgs::msg::SE2Grid::_start_index_row_type arg)
  {
    msg_.start_index_row = std::move(arg);
    return Init_SE2Grid_start_index_col(msg_);
  }

private:
  ::se2_grid_msgs::msg::SE2Grid msg_;
};

class Init_SE2Grid_data
{
public:
  explicit Init_SE2Grid_data(::se2_grid_msgs::msg::SE2Grid & msg)
  : msg_(msg)
  {}
  Init_SE2Grid_start_index_row data(::se2_grid_msgs::msg::SE2Grid::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_SE2Grid_start_index_row(msg_);
  }

private:
  ::se2_grid_msgs::msg::SE2Grid msg_;
};

class Init_SE2Grid_has_so2
{
public:
  explicit Init_SE2Grid_has_so2(::se2_grid_msgs::msg::SE2Grid & msg)
  : msg_(msg)
  {}
  Init_SE2Grid_data has_so2(::se2_grid_msgs::msg::SE2Grid::_has_so2_type arg)
  {
    msg_.has_so2 = std::move(arg);
    return Init_SE2Grid_data(msg_);
  }

private:
  ::se2_grid_msgs::msg::SE2Grid msg_;
};

class Init_SE2Grid_layers
{
public:
  explicit Init_SE2Grid_layers(::se2_grid_msgs::msg::SE2Grid & msg)
  : msg_(msg)
  {}
  Init_SE2Grid_has_so2 layers(::se2_grid_msgs::msg::SE2Grid::_layers_type arg)
  {
    msg_.layers = std::move(arg);
    return Init_SE2Grid_has_so2(msg_);
  }

private:
  ::se2_grid_msgs::msg::SE2Grid msg_;
};

class Init_SE2Grid_info
{
public:
  Init_SE2Grid_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SE2Grid_layers info(::se2_grid_msgs::msg::SE2Grid::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SE2Grid_layers(msg_);
  }

private:
  ::se2_grid_msgs::msg::SE2Grid msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::se2_grid_msgs::msg::SE2Grid>()
{
  return se2_grid_msgs::msg::builder::Init_SE2Grid_info();
}

}  // namespace se2_grid_msgs

#endif  // SE2_GRID_MSGS__MSG__DETAIL__SE2_GRID__BUILDER_HPP_
