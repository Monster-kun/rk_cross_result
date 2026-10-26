#pragma once

#include <chrono>
#include <memory>
#include <optional>
#include <string>
#include <vector>

#include <controller_manager_msgs/srv/list_controllers.hpp>
#include <action_msgs/srv/cancel_goal.hpp>
#include <action_msgs/msg/goal_status.hpp>
#include <controller_manager_msgs/srv/switch_controller.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <localization_msgs/msg/pose_vel_acc_ang.hpp>
#include <mapping_msgs/msg/had_map_bin.hpp>
#include <planning_msgs/msg/global_path.hpp>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include <sqlite3.h>
#include <web_navigation_core/map_model.hpp>
#include <web_navigation_msgs/msg/navigation_state.hpp>
#include <web_navigation_msgs/msg/planning_event.hpp>
#include <web_navigation_msgs/msg/rviz_goal_feedback.hpp>
#include <web_navigation_msgs/srv/cancel_task.hpp>
#include <web_navigation_msgs/srv/control_lease.hpp>
#include <web_navigation_msgs/srv/get_request.hpp>
#include <web_navigation_msgs/srv/get_task.hpp>
#include <web_navigation_msgs/srv/get_snapshot.hpp>
#include <web_navigation_msgs/srv/get_web_map.hpp>
#include <web_navigation_msgs/srv/get_navigation_execution.hpp>
#include <web_navigation_msgs/srv/submit_goal.hpp>
#include <web_navigation_msgs/srv/validate_target.hpp>
#include "behavior_msgs/action/navigate_through_poses.hpp"

namespace web_navigation_manager
{
class WebNavigationManager : public rclcpp_lifecycle::LifecycleNode
{
  using NavigateThroughPoses = behavior_msgs::action::NavigateThroughPoses;
  using NavigationGoalHandle = rclcpp_action::ClientGoalHandle<NavigateThroughPoses>;
  using NavigationResult = NavigateThroughPoses::Impl::GetResultService;
  using ControlLease = web_navigation_msgs::srv::ControlLease;
  using ValidateTarget = web_navigation_msgs::srv::ValidateTarget;
  using SubmitGoal = web_navigation_msgs::srv::SubmitGoal;
  using CancelTask = web_navigation_msgs::srv::CancelTask;
  using GetSnapshot = web_navigation_msgs::srv::GetSnapshot;
  using GetRequest = web_navigation_msgs::srv::GetRequest;
  using GetTask = web_navigation_msgs::srv::GetTask;
  using GetWebMap = web_navigation_msgs::srv::GetWebMap;
  using GetNavigationExecution = web_navigation_msgs::srv::GetNavigationExecution;
  using NavigationState = web_navigation_msgs::msg::NavigationState;
  using SequenceWaypoint = web_navigation_msgs::msg::SequenceWaypoint;

public:
  explicit WebNavigationManager(const rclcpp::NodeOptions & options = rclcpp::NodeOptions());
  ~WebNavigationManager() override;

private:
  using CallbackReturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;
  CallbackReturn on_configure(const rclcpp_lifecycle::State & state) override;
  CallbackReturn on_activate(const rclcpp_lifecycle::State & state) override;
  CallbackReturn on_deactivate(const rclcpp_lifecycle::State & state) override;
  CallbackReturn on_cleanup(const rclcpp_lifecycle::State & state) override;
  CallbackReturn on_shutdown(const rclcpp_lifecycle::State & state) override;

  void onMap(const mapping_msgs::msg::HADMapBin::SharedPtr message);
  void cancelForMapChange();
  void onLocalization(const localization_msgs::msg::PoseVelAccAng::SharedPtr message);
  void onPlanningEvent(const web_navigation_msgs::msg::PlanningEvent::SharedPtr message);
  void onTimer();
  void pollNavigationExecution();
  void observeNavigationResult();
  void clearExecutionRequests();

  void controlLease(const std::shared_ptr<ControlLease::Request> request,
    std::shared_ptr<ControlLease::Response> response);
  void validateTarget(const std::shared_ptr<ValidateTarget::Request> request,
    std::shared_ptr<ValidateTarget::Response> response);
  void submitGoal(const std::shared_ptr<SubmitGoal::Request> request,
    std::shared_ptr<SubmitGoal::Response> response);
  void submitGoalImpl(const std::shared_ptr<SubmitGoal::Request> request,
    std::shared_ptr<SubmitGoal::Response> response, bool from_rviz);
  void onRvizPose(const geometry_msgs::msg::PoseStamped::SharedPtr message, bool waypoint);
  void rvizFeedback(uint8_t status, const std::string & code, const std::string & message,
    const std::string & request_id = "", const std::string & task_id = "");
  void clearRvizWaypoints(const std::string & reason);
  void cancelTask(const std::shared_ptr<CancelTask::Request> request,
    std::shared_ptr<CancelTask::Response> response);
  void getSnapshot(const std::shared_ptr<GetSnapshot::Request> request,
    std::shared_ptr<GetSnapshot::Response> response);
  void getRequest(const std::shared_ptr<GetRequest::Request> request,
    std::shared_ptr<GetRequest::Response> response);
  void getTask(const std::shared_ptr<GetTask::Request> request,
    std::shared_ptr<GetTask::Response> response);
  void getWebMap(const std::shared_ptr<GetWebMap::Request> request,
    std::shared_ptr<GetWebMap::Response> response);
  void sequenceCommand(const SubmitGoal::Request & request, SubmitGoal::Response & response,
    const std::string & fingerprint);
  bool saveSequence(const std::string & task_id, const std::string & map_name,
    const std::vector<SequenceWaypoint> & points);
  bool persistSequence();
  void loadSequence();
  void startSequenceSegment();
  bool finishSequence(uint8_t status, const std::string & code, const std::string & message);
  void trackSequenceProgress();
  bool sequenceLoops() const;
  bool sequenceContinuous() const;

  bool commandAuthorized(const std::string & session_id, const std::string & boot_id,
    const std::string & token, uint64_t epoch, std::string * code, std::string * message);
  bool isTaskActive() const;
  bool isPoseFresh() const;
  bool isStopped() const;
  bool validateMapFrame(const std::string & version, const std::string & frame,
    std::string * code, std::string * message) const;
  void sendNavigationGoal(const geometry_msgs::msg::PoseStamped & goal,
    const std::string & task_id, const std::string & map_version);
  void sendNavigationRequest(const NavigateThroughPoses::Goal & goal);
  void goalResponse(const NavigationGoalHandle::SharedPtr goal_handle);
  void actionFeedback(const NavigationGoalHandle::SharedPtr goal_handle,
    const std::shared_ptr<const NavigateThroughPoses::Feedback> feedback);
  void actionResult(const NavigationGoalHandle::WrappedResult & result);
  void requestHaltController();
  void clearHaltRequests();
  void recoverNavigationTask();
  void clearRecoveryRequests();
  void failRecovery(const std::string & code, const std::string & message);
  void startPendingReplacement();
  void finalizeTask(uint8_t status, const std::string & code, const std::string & message);
  void setTaskStatus(uint8_t status, const std::string & code = "",
    const std::string & message = "");
  void publishState();
  NavigationState makeSnapshot() const;
  void releaseLease(const std::string & reason);
  std::string makeId();
  std::string submitFingerprint(const SubmitGoal::Request & request) const;
  bool initDatabase();
  bool executeSql(const char * sql);
  void persistTask();
  bool persistTaskRecord(const std::string & task_id, const std::string & request_id,
    uint8_t status, const std::string & map_version, const std::string & device_label,
    double x, double y, const geometry_msgs::msg::Pose & endpoint,
    const std::string & ros_goal_uuid, const std::string & error_code,
    const std::string & error_message);
  bool persistRequest(const std::string & request_id, const std::string & fingerprint,
    bool accepted, const std::string & code, const std::string & message,
    const std::string & task_id);
  bool findRequest(const std::string & request_id, const std::string & fingerprint,
    bool * found, bool * accepted, std::string * code, std::string * message,
    std::string * task_id, uint8_t * status, uint64_t * revision);

  rclcpp::Subscription<mapping_msgs::msg::HADMapBin>::SharedPtr map_subscriber_;
  rclcpp::Subscription<localization_msgs::msg::PoseVelAccAng>::SharedPtr localization_subscriber_;
  rclcpp::Subscription<web_navigation_msgs::msg::PlanningEvent>::SharedPtr planning_event_subscriber_;
  rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr rviz_goal_subscriber_;
  rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr rviz_waypoint_subscriber_;
  rclcpp_lifecycle::LifecyclePublisher<web_navigation_msgs::msg::RvizGoalFeedback>::SharedPtr rviz_feedback_publisher_;
  std::vector<SequenceWaypoint> rviz_waypoints_;
  rclcpp_lifecycle::LifecyclePublisher<NavigationState>::SharedPtr state_publisher_;
  rclcpp::Service<ControlLease>::SharedPtr control_lease_service_;
  rclcpp::Service<ValidateTarget>::SharedPtr validate_target_service_;
  rclcpp::Service<SubmitGoal>::SharedPtr submit_goal_service_;
  rclcpp::Service<CancelTask>::SharedPtr cancel_task_service_;
  rclcpp::Service<GetSnapshot>::SharedPtr snapshot_service_;
  rclcpp::Service<GetRequest>::SharedPtr request_service_;
  rclcpp::Service<GetTask>::SharedPtr task_service_;
  rclcpp::Service<GetWebMap>::SharedPtr map_service_;
  rclcpp_action::Client<NavigateThroughPoses>::SharedPtr navigation_client_;
  rclcpp::Client<action_msgs::srv::CancelGoal>::SharedPtr recovery_cancel_client_;
  rclcpp::Client<NavigationResult>::SharedPtr recovery_result_client_;
  rclcpp::Client<GetNavigationExecution>::SharedPtr execution_client_;
  rclcpp::Client<controller_manager_msgs::srv::ListControllers>::SharedPtr list_controllers_client_;
  rclcpp::Client<controller_manager_msgs::srv::SwitchController>::SharedPtr switch_controller_client_;
  rclcpp::TimerBase::SharedPtr timer_;

  struct PendingReplacement
  {
    std::string task_id;
    std::string request_id;
    std::string fingerprint;
    std::string map_version;
    std::string device_label;
    std::string map_name;
    std::string selected_layer_id;
    std::vector<SequenceWaypoint> sequence;
    geometry_msgs::msg::PoseStamped goal;
  };
  std::optional<PendingReplacement> pending_replacement_;
  std::vector<SequenceWaypoint> sequence_;
  size_t sequence_index_{0};
  size_t sequence_segment_end_{0};
  std::string sequence_state_;
  std::string sequence_map_name_;
  uint64_t navigation_generation_{0};
  double waypoint_reached_distance_{0.5};

  web_navigation_core::MapModel map_model_;
  std::vector<web_navigation_msgs::msg::PlanningEvent::SharedPtr> pending_planning_events_;
  localization_msgs::msg::PoseVelAccAng current_localization_;
  NavigationGoalHandle::SharedPtr navigation_goal_handle_;
  sqlite3 * database_{nullptr};

  bool active_{false};
  bool navigation_synchronized_{false};
  bool navigation_goal_pending_{false};
  bool navigation_execution_idle_{false};
  int64_t execution_request_{-1};
  int64_t observed_result_request_{-1};
  uint64_t execution_query_generation_{0};
  std::string navigation_instance_id_;
  std::chrono::steady_clock::time_point execution_requested_at_;
  std::chrono::steady_clock::time_point execution_received_at_;
  bool goal_resolution_allow_lane_change_{true};
  bool goal_resolution_allow_lane_invert_{true};
  bool map_ready_{false};
  bool pose_received_{false};
  bool halt_confirmed_{false};
  bool halt_request_in_flight_{false};
  bool action_result_received_{false};
  bool stopped_timer_running_{false};
  bool result_success_{false};
  bool result_canceled_{false};
  bool result_failed_{false};
  std::string result_error_code_;
  std::string result_error_message_;
  bool recovery_in_progress_{false};
  bool recovery_stopping_{false};
  uint64_t recovery_generation_{0};
  int64_t recovery_cancel_request_{-1};
  int64_t recovery_result_request_{-1};
  uint64_t halt_generation_{0};
  int64_t halt_list_request_{-1};
  int64_t halt_switch_request_{-1};
  std::chrono::steady_clock::time_point last_pose_time_;
  std::chrono::steady_clock::time_point lease_expiry_;
  std::chrono::steady_clock::time_point stopped_since_;
  std::chrono::steady_clock::time_point task_result_time_;
  std::chrono::steady_clock::time_point cancel_started_time_;

  std::string manager_boot_id_;
  std::string lease_session_id_;
  std::string lease_device_label_;
  std::string lease_token_;
  uint64_t control_epoch_{0};
  uint64_t state_revision_{0};
  std::string task_id_;
  std::string request_id_;
  std::string ros_goal_uuid_;
  std::string task_map_version_;
  std::string task_device_label_;
  uint8_t task_status_{NavigationState::IDLE};
  std::string error_code_;
  std::string error_message_;
  double requested_x_{0.0};
  double requested_y_{0.0};
  geometry_msgs::msg::Pose effective_endpoint_;
  planning_msgs::msg::GlobalPath route_;
  uint32_t path_revision_{0};
  std::string navigation_action_name_;
  std::string map_topic_;
  std::string localization_topic_;
  std::string task_db_path_;
  std::string behavior_tree_file_;
  double stopped_linear_speed_{0.05};
  double stopped_angular_speed_{0.05};
  int lease_ttl_ms_{8000};
  int localization_stale_ms_{1000};
  int cancel_timeout_ms_{5000};
  int stop_confirm_duration_ms_{500};
};
}  // namespace web_navigation_manager
