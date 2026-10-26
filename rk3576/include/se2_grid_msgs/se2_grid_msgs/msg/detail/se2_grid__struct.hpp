// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from se2_grid_msgs:msg/SE2Grid.idl
// generated code does not contain a copyright notice

#ifndef SE2_GRID_MSGS__MSG__DETAIL__SE2_GRID__STRUCT_HPP_
#define SE2_GRID_MSGS__MSG__DETAIL__SE2_GRID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'info'
#include "se2_grid_msgs/msg/detail/se2_grid_info__struct.hpp"
// Member 'data'
#include "std_msgs/msg/detail/float32_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__se2_grid_msgs__msg__SE2Grid __attribute__((deprecated))
#else
# define DEPRECATED__se2_grid_msgs__msg__SE2Grid __declspec(deprecated)
#endif

namespace se2_grid_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SE2Grid_
{
  using Type = SE2Grid_<ContainerAllocator>;

  explicit SE2Grid_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_index_row = 0;
      this->start_index_col = 0;
    }
  }

  explicit SE2Grid_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_index_row = 0;
      this->start_index_col = 0;
    }
  }

  // field types and members
  using _info_type =
    se2_grid_msgs::msg::SE2GridInfo_<ContainerAllocator>;
  _info_type info;
  using _layers_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _layers_type layers;
  using _has_so2_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _has_so2_type has_so2;
  using _data_type =
    std::vector<std_msgs::msg::Float32MultiArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std_msgs::msg::Float32MultiArray_<ContainerAllocator>>>;
  _data_type data;
  using _start_index_row_type =
    uint16_t;
  _start_index_row_type start_index_row;
  using _start_index_col_type =
    uint16_t;
  _start_index_col_type start_index_col;

  // setters for named parameter idiom
  Type & set__info(
    const se2_grid_msgs::msg::SE2GridInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__layers(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->layers = _arg;
    return *this;
  }
  Type & set__has_so2(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->has_so2 = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<std_msgs::msg::Float32MultiArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std_msgs::msg::Float32MultiArray_<ContainerAllocator>>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__start_index_row(
    const uint16_t & _arg)
  {
    this->start_index_row = _arg;
    return *this;
  }
  Type & set__start_index_col(
    const uint16_t & _arg)
  {
    this->start_index_col = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    se2_grid_msgs::msg::SE2Grid_<ContainerAllocator> *;
  using ConstRawPtr =
    const se2_grid_msgs::msg::SE2Grid_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<se2_grid_msgs::msg::SE2Grid_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<se2_grid_msgs::msg::SE2Grid_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      se2_grid_msgs::msg::SE2Grid_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<se2_grid_msgs::msg::SE2Grid_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      se2_grid_msgs::msg::SE2Grid_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<se2_grid_msgs::msg::SE2Grid_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<se2_grid_msgs::msg::SE2Grid_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<se2_grid_msgs::msg::SE2Grid_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__se2_grid_msgs__msg__SE2Grid
    std::shared_ptr<se2_grid_msgs::msg::SE2Grid_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__se2_grid_msgs__msg__SE2Grid
    std::shared_ptr<se2_grid_msgs::msg::SE2Grid_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SE2Grid_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->layers != other.layers) {
      return false;
    }
    if (this->has_so2 != other.has_so2) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->start_index_row != other.start_index_row) {
      return false;
    }
    if (this->start_index_col != other.start_index_col) {
      return false;
    }
    return true;
  }
  bool operator!=(const SE2Grid_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SE2Grid_

// alias to use template instance with default allocator
using SE2Grid =
  se2_grid_msgs::msg::SE2Grid_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace se2_grid_msgs

#endif  // SE2_GRID_MSGS__MSG__DETAIL__SE2_GRID__STRUCT_HPP_
