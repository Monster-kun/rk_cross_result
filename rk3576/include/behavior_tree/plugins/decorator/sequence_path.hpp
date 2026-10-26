#pragma once

#include <chrono>
#include <optional>
#include <string>
#include <vector>

#include <behaviortree_cpp/decorator_node.h>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <localization_msgs/msg/pose_vel_acc_ang.hpp>
#include <planning_msgs/msg/global_path.hpp>
#include <rclcpp/rclcpp.hpp>
#include <visualization_msgs/msg/marker.hpp>
#include <web_navigation_msgs/msg/planning_event.hpp>

namespace behavior_tree
{
// Keep the visit queue in the BT. Its child plans exactly one destination per request.
class SequencePath : public BT::DecoratorNode
{
public:
  SequencePath(const std::string & name, const BT::NodeConfiguration & config);
  static BT::PortsList providedPorts();
  void halt() override;

private:
  using Path = planning_msgs::msg::GlobalPath;

  BT::NodeStatus tick() override;
  std::optional<size_t> nextGoal() const;
  geometry_msgs::msg::Pose currentLegEndpoint() const;
  void startPlanning(size_t index, bool as_next, bool from_current_pose = false);
  void publishPath();
  void publishEvent(uint8_t status, const std::string & error = "");
  bool nextLegRequiresStop(const Path & current, const Path & next) const;
  bool stoppedLongEnough();

  rclcpp::Node::SharedPtr node_;
  rclcpp::CallbackGroup::SharedPtr callback_group_;
  rclcpp::executors::SingleThreadedExecutor executor_;
  rclcpp::Subscription<localization_msgs::msg::PoseVelAccAng>::SharedPtr pose_subscriber_;
  rclcpp::Publisher<Path>::SharedPtr path_publisher_;
  rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr marker_publisher_;
  rclcpp::Publisher<web_navigation_msgs::msg::PlanningEvent>::SharedPtr event_publisher_;
  geometry_msgs::msg::Pose pose_;
  bool pose_received_{false};
  bool loop_{false};
  bool planning_{false};
  bool initialized_{false};
  bool planning_as_next_{false};
  bool next_leg_requires_stop_{false};
  bool stop_transition_pending_{false};
  bool stopped_timer_running_{false};
  size_t index_{0};
  size_t planned_index_{0};
  uint32_t revision_{0};
  double reached_distance_{0.5};
  double handover_distance_{1.5};
  double turn_angle_threshold_{1.5707963267948966};
  double stopped_linear_speed_{0.05};
  double stopped_angular_speed_{0.05};
  double stop_confirm_duration_{0.5};
  double linear_speed_{0.0};
  double angular_speed_{0.0};
  std::string goal_uuid_;
  std::chrono::steady_clock::time_point pose_received_at_;
  std::chrono::steady_clock::time_point stopped_since_;
  geometry_msgs::msg::PoseStamped latest_pose_;
  std::vector<geometry_msgs::msg::PoseStamped> targets_;
  Path current_leg_;
  Path active_path_;
  std::optional<Path> next_leg_;
};
}  // namespace behavior_tree
