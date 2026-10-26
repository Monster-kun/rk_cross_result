// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from behavior_msgs:action/ComputePathToPose.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_MSGS__ACTION__DETAIL__COMPUTE_PATH_TO_POSE__STRUCT_HPP_
#define BEHAVIOR_MSGS__ACTION__DETAIL__COMPUTE_PATH_TO_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'goal'
// Member 'start'
// Member 'through_goals'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__behavior_msgs__action__ComputePathToPose_Goal __attribute__((deprecated))
#else
# define DEPRECATED__behavior_msgs__action__ComputePathToPose_Goal __declspec(deprecated)
#endif

namespace behavior_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputePathToPose_Goal_
{
  using Type = ComputePathToPose_Goal_<ContainerAllocator>;

  explicit ComputePathToPose_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal(_init),
    start(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->use_start = false;
      this->defer_publication = false;
      this->loop_goals = false;
      this->global_planner_id = "";
      this->task_id = "";
      this->ros_goal_uuid = "";
      this->map_version = "";
      this->planning_attempt_id = "";
    }
  }

  explicit ComputePathToPose_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal(_alloc, _init),
    start(_alloc, _init),
    global_planner_id(_alloc),
    task_id(_alloc),
    ros_goal_uuid(_alloc),
    map_version(_alloc),
    planning_attempt_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->use_start = false;
      this->defer_publication = false;
      this->loop_goals = false;
      this->global_planner_id = "";
      this->task_id = "";
      this->ros_goal_uuid = "";
      this->map_version = "";
      this->planning_attempt_id = "";
    }
  }

  // field types and members
  using _goal_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _goal_type goal;
  using _start_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _start_type start;
  using _use_start_type =
    bool;
  _use_start_type use_start;
  using _defer_publication_type =
    bool;
  _defer_publication_type defer_publication;
  using _through_goals_type =
    std::vector<geometry_msgs::msg::PoseStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PoseStamped_<ContainerAllocator>>>;
  _through_goals_type through_goals;
  using _loop_goals_type =
    bool;
  _loop_goals_type loop_goals;
  using _global_planner_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _global_planner_id_type global_planner_id;
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;
  using _ros_goal_uuid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ros_goal_uuid_type ros_goal_uuid;
  using _map_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_version_type map_version;
  using _planning_attempt_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _planning_attempt_id_type planning_attempt_id;

  // setters for named parameter idiom
  Type & set__goal(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }
  Type & set__start(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->start = _arg;
    return *this;
  }
  Type & set__use_start(
    const bool & _arg)
  {
    this->use_start = _arg;
    return *this;
  }
  Type & set__defer_publication(
    const bool & _arg)
  {
    this->defer_publication = _arg;
    return *this;
  }
  Type & set__through_goals(
    const std::vector<geometry_msgs::msg::PoseStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PoseStamped_<ContainerAllocator>>> & _arg)
  {
    this->through_goals = _arg;
    return *this;
  }
  Type & set__loop_goals(
    const bool & _arg)
  {
    this->loop_goals = _arg;
    return *this;
  }
  Type & set__global_planner_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->global_planner_id = _arg;
    return *this;
  }
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__ros_goal_uuid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ros_goal_uuid = _arg;
    return *this;
  }
  Type & set__map_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map_version = _arg;
    return *this;
  }
  Type & set__planning_attempt_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->planning_attempt_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_msgs::action::ComputePathToPose_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_msgs::action::ComputePathToPose_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_msgs::action::ComputePathToPose_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_msgs::action::ComputePathToPose_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_msgs::action::ComputePathToPose_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_msgs::action::ComputePathToPose_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_msgs::action::ComputePathToPose_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_msgs::action::ComputePathToPose_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_msgs__action__ComputePathToPose_Goal
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_msgs__action__ComputePathToPose_Goal
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputePathToPose_Goal_ & other) const
  {
    if (this->goal != other.goal) {
      return false;
    }
    if (this->start != other.start) {
      return false;
    }
    if (this->use_start != other.use_start) {
      return false;
    }
    if (this->defer_publication != other.defer_publication) {
      return false;
    }
    if (this->through_goals != other.through_goals) {
      return false;
    }
    if (this->loop_goals != other.loop_goals) {
      return false;
    }
    if (this->global_planner_id != other.global_planner_id) {
      return false;
    }
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->ros_goal_uuid != other.ros_goal_uuid) {
      return false;
    }
    if (this->map_version != other.map_version) {
      return false;
    }
    if (this->planning_attempt_id != other.planning_attempt_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputePathToPose_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputePathToPose_Goal_

// alias to use template instance with default allocator
using ComputePathToPose_Goal =
  behavior_msgs::action::ComputePathToPose_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace behavior_msgs


// Include directives for member types
// Member 'path'
#include "planning_msgs/msg/detail/global_path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__behavior_msgs__action__ComputePathToPose_Result __attribute__((deprecated))
#else
# define DEPRECATED__behavior_msgs__action__ComputePathToPose_Result __declspec(deprecated)
#endif

namespace behavior_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputePathToPose_Result_
{
  using Type = ComputePathToPose_Result_<ContainerAllocator>;

  explicit ComputePathToPose_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0;
      this->error_msg = "";
    }
  }

  explicit ComputePathToPose_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path(_alloc, _init),
    error_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0;
      this->error_msg = "";
    }
  }

  // field types and members
  using _path_type =
    planning_msgs::msg::GlobalPath_<ContainerAllocator>;
  _path_type path;
  using _error_code_type =
    uint16_t;
  _error_code_type error_code;
  using _error_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_msg_type error_msg;

  // setters for named parameter idiom
  Type & set__path(
    const planning_msgs::msg::GlobalPath_<ContainerAllocator> & _arg)
  {
    this->path = _arg;
    return *this;
  }
  Type & set__error_code(
    const uint16_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__error_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_msgs::action::ComputePathToPose_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_msgs::action::ComputePathToPose_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_msgs::action::ComputePathToPose_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_msgs::action::ComputePathToPose_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_msgs::action::ComputePathToPose_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_msgs::action::ComputePathToPose_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_msgs::action::ComputePathToPose_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_msgs::action::ComputePathToPose_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_msgs__action__ComputePathToPose_Result
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_msgs__action__ComputePathToPose_Result
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputePathToPose_Result_ & other) const
  {
    if (this->path != other.path) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->error_msg != other.error_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputePathToPose_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputePathToPose_Result_

// alias to use template instance with default allocator
using ComputePathToPose_Result =
  behavior_msgs::action::ComputePathToPose_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace behavior_msgs


#ifndef _WIN32
# define DEPRECATED__behavior_msgs__action__ComputePathToPose_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__behavior_msgs__action__ComputePathToPose_Feedback __declspec(deprecated)
#endif

namespace behavior_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputePathToPose_Feedback_
{
  using Type = ComputePathToPose_Feedback_<ContainerAllocator>;

  explicit ComputePathToPose_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ComputePathToPose_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    behavior_msgs::action::ComputePathToPose_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_msgs::action::ComputePathToPose_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_msgs::action::ComputePathToPose_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_msgs::action::ComputePathToPose_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_msgs::action::ComputePathToPose_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_msgs::action::ComputePathToPose_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_msgs::action::ComputePathToPose_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_msgs::action::ComputePathToPose_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_msgs__action__ComputePathToPose_Feedback
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_msgs__action__ComputePathToPose_Feedback
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputePathToPose_Feedback_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputePathToPose_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputePathToPose_Feedback_

// alias to use template instance with default allocator
using ComputePathToPose_Feedback =
  behavior_msgs::action::ComputePathToPose_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace behavior_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "behavior_msgs/action/detail/compute_path_to_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__behavior_msgs__action__ComputePathToPose_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__behavior_msgs__action__ComputePathToPose_SendGoal_Request __declspec(deprecated)
#endif

namespace behavior_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputePathToPose_SendGoal_Request_
{
  using Type = ComputePathToPose_SendGoal_Request_<ContainerAllocator>;

  explicit ComputePathToPose_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ComputePathToPose_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    behavior_msgs::action::ComputePathToPose_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const behavior_msgs::action::ComputePathToPose_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_msgs::action::ComputePathToPose_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_msgs::action::ComputePathToPose_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_msgs::action::ComputePathToPose_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_msgs::action::ComputePathToPose_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_msgs::action::ComputePathToPose_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_msgs::action::ComputePathToPose_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_msgs::action::ComputePathToPose_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_msgs::action::ComputePathToPose_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_msgs__action__ComputePathToPose_SendGoal_Request
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_msgs__action__ComputePathToPose_SendGoal_Request
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputePathToPose_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputePathToPose_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputePathToPose_SendGoal_Request_

// alias to use template instance with default allocator
using ComputePathToPose_SendGoal_Request =
  behavior_msgs::action::ComputePathToPose_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace behavior_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__behavior_msgs__action__ComputePathToPose_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__behavior_msgs__action__ComputePathToPose_SendGoal_Response __declspec(deprecated)
#endif

namespace behavior_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputePathToPose_SendGoal_Response_
{
  using Type = ComputePathToPose_SendGoal_Response_<ContainerAllocator>;

  explicit ComputePathToPose_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ComputePathToPose_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_msgs::action::ComputePathToPose_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_msgs::action::ComputePathToPose_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_msgs::action::ComputePathToPose_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_msgs::action::ComputePathToPose_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_msgs::action::ComputePathToPose_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_msgs::action::ComputePathToPose_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_msgs::action::ComputePathToPose_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_msgs::action::ComputePathToPose_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_msgs__action__ComputePathToPose_SendGoal_Response
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_msgs__action__ComputePathToPose_SendGoal_Response
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputePathToPose_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputePathToPose_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputePathToPose_SendGoal_Response_

// alias to use template instance with default allocator
using ComputePathToPose_SendGoal_Response =
  behavior_msgs::action::ComputePathToPose_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace behavior_msgs

namespace behavior_msgs
{

namespace action
{

struct ComputePathToPose_SendGoal
{
  using Request = behavior_msgs::action::ComputePathToPose_SendGoal_Request;
  using Response = behavior_msgs::action::ComputePathToPose_SendGoal_Response;
};

}  // namespace action

}  // namespace behavior_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__behavior_msgs__action__ComputePathToPose_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__behavior_msgs__action__ComputePathToPose_GetResult_Request __declspec(deprecated)
#endif

namespace behavior_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputePathToPose_GetResult_Request_
{
  using Type = ComputePathToPose_GetResult_Request_<ContainerAllocator>;

  explicit ComputePathToPose_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ComputePathToPose_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_msgs::action::ComputePathToPose_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_msgs::action::ComputePathToPose_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_msgs::action::ComputePathToPose_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_msgs::action::ComputePathToPose_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_msgs::action::ComputePathToPose_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_msgs::action::ComputePathToPose_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_msgs::action::ComputePathToPose_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_msgs::action::ComputePathToPose_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_msgs__action__ComputePathToPose_GetResult_Request
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_msgs__action__ComputePathToPose_GetResult_Request
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputePathToPose_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputePathToPose_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputePathToPose_GetResult_Request_

// alias to use template instance with default allocator
using ComputePathToPose_GetResult_Request =
  behavior_msgs::action::ComputePathToPose_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace behavior_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "behavior_msgs/action/detail/compute_path_to_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__behavior_msgs__action__ComputePathToPose_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__behavior_msgs__action__ComputePathToPose_GetResult_Response __declspec(deprecated)
#endif

namespace behavior_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputePathToPose_GetResult_Response_
{
  using Type = ComputePathToPose_GetResult_Response_<ContainerAllocator>;

  explicit ComputePathToPose_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ComputePathToPose_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    behavior_msgs::action::ComputePathToPose_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const behavior_msgs::action::ComputePathToPose_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_msgs::action::ComputePathToPose_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_msgs::action::ComputePathToPose_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_msgs::action::ComputePathToPose_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_msgs::action::ComputePathToPose_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_msgs::action::ComputePathToPose_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_msgs::action::ComputePathToPose_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_msgs::action::ComputePathToPose_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_msgs::action::ComputePathToPose_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_msgs__action__ComputePathToPose_GetResult_Response
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_msgs__action__ComputePathToPose_GetResult_Response
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputePathToPose_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputePathToPose_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputePathToPose_GetResult_Response_

// alias to use template instance with default allocator
using ComputePathToPose_GetResult_Response =
  behavior_msgs::action::ComputePathToPose_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace behavior_msgs

namespace behavior_msgs
{

namespace action
{

struct ComputePathToPose_GetResult
{
  using Request = behavior_msgs::action::ComputePathToPose_GetResult_Request;
  using Response = behavior_msgs::action::ComputePathToPose_GetResult_Response;
};

}  // namespace action

}  // namespace behavior_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "behavior_msgs/action/detail/compute_path_to_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__behavior_msgs__action__ComputePathToPose_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__behavior_msgs__action__ComputePathToPose_FeedbackMessage __declspec(deprecated)
#endif

namespace behavior_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ComputePathToPose_FeedbackMessage_
{
  using Type = ComputePathToPose_FeedbackMessage_<ContainerAllocator>;

  explicit ComputePathToPose_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ComputePathToPose_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    behavior_msgs::action::ComputePathToPose_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const behavior_msgs::action::ComputePathToPose_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    behavior_msgs::action::ComputePathToPose_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const behavior_msgs::action::ComputePathToPose_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      behavior_msgs::action::ComputePathToPose_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<behavior_msgs::action::ComputePathToPose_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      behavior_msgs::action::ComputePathToPose_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<behavior_msgs::action::ComputePathToPose_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<behavior_msgs::action::ComputePathToPose_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<behavior_msgs::action::ComputePathToPose_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__behavior_msgs__action__ComputePathToPose_FeedbackMessage
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__behavior_msgs__action__ComputePathToPose_FeedbackMessage
    std::shared_ptr<behavior_msgs::action::ComputePathToPose_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputePathToPose_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputePathToPose_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputePathToPose_FeedbackMessage_

// alias to use template instance with default allocator
using ComputePathToPose_FeedbackMessage =
  behavior_msgs::action::ComputePathToPose_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace behavior_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace behavior_msgs
{

namespace action
{

struct ComputePathToPose
{
  /// The goal message defined in the action definition.
  using Goal = behavior_msgs::action::ComputePathToPose_Goal;
  /// The result message defined in the action definition.
  using Result = behavior_msgs::action::ComputePathToPose_Result;
  /// The feedback message defined in the action definition.
  using Feedback = behavior_msgs::action::ComputePathToPose_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = behavior_msgs::action::ComputePathToPose_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = behavior_msgs::action::ComputePathToPose_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = behavior_msgs::action::ComputePathToPose_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ComputePathToPose ComputePathToPose;

}  // namespace action

}  // namespace behavior_msgs

#endif  // BEHAVIOR_MSGS__ACTION__DETAIL__COMPUTE_PATH_TO_POSE__STRUCT_HPP_
