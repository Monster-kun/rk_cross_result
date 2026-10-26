/**
* @author: Junfeng Guo
* @date: 2023-12-08
*/
#pragma once
#ifndef LOCAL_PLANNER_SERVER_H_
#define LOCAL_PLANNER_SERVER_H_

/* system headers */
#include <unordered_map>
#include <iostream>
#include <vector>
#include <chrono>
#include <memory>
#include <mutex>
#include <deque>

/* ros headers */
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include "pluginlib/class_loader.hpp"
#include "pluginlib/class_list_macros.hpp"
#include "planning_msgs/msg/trajectory.hpp"
#include "localization_msgs/msg/pose_vel_acc_ang.hpp"
#include <visualization_msgs/msg/marker.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include "behavior_msgs/action/follow_path.hpp"
#include "behavior_msgs/action/follow_point.hpp"
#include "behavior_msgs/srv/select_planner.hpp"
#include "system_msgs/srv/is_emergency_stop.hpp"

#include <tf2/utils.h>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include "tf2_ros/transform_listener.h"
#include "tf2_ros/buffer.h"
#include <pcl_ros/transforms.hpp>
#include <pcl_conversions/pcl_conversions.h>

/* local headers */
#include "local_planner_server/plugins/planner_selector.hpp"
#include "local_planner/local_planner.h"
#include "system_utils/node_utils.hpp"
#include "system_utils/simple_action_server.hpp"
#include "utils/math/normalization.hpp"
#include "planning_basic_data/robot_state.hpp"

namespace local_planner_server {
class LocalPlannerServer : public rclcpp_lifecycle::LifecycleNode 
{
using MSF_Status = localization_msgs::msg::PoseVelAccAng;
using Pose = geometry_msgs::msg::Pose;
using GlobalPath = planning_msgs::msg::GlobalPath;
using Trajectory = planning_msgs::msg::Trajectory;
using PointCloud2 = sensor_msgs::msg::PointCloud2;
using SelectPlannerSrv = behavior_msgs::srv::SelectPlanner;
using FollowPath = behavior_msgs::action::FollowPath;
using FollowPathActionServer = system_utils::SimpleActionServer<FollowPath>;
using FollowPoint = behavior_msgs::action::FollowPoint;
using FollowPointActionServer = system_utils::SimpleActionServer<FollowPoint>;
public:
    /**
     * @brief Construct a Local Planner Server object
     * @param options Node options for this node
    */
    explicit LocalPlannerServer(const rclcpp::NodeOptions& options = rclcpp::NodeOptions());

    /**
     * @brief Destroy the Local Planner Server object
    */
    ~LocalPlannerServer();

    /**
    * @brief Make plan by global path
    * @param current_pose Current pose of the vehicle
    * @param point_cloud Point cloud
    * @param global_path Global path
    * @param planner_id ID of the planner
    * @return Local plan
    */
    planning_msgs::msg::Trajectory MakeLocalPlanByPath(
        const MSF_Status &current_pose,
        const PointCloud2 &point_cloud,
        const GlobalPath& global_path,
        const std::string& planner_id);    
    /**
     * @brief Make plan by goal point
     * @param current_pose Current pose of the vehicle
     * @param point_cloud Point cloud
     * @param goal_pose Goal pose of the vehicle
     * @param planner_id ID of the planner
     * @return Local plan
    */
    planning_msgs::msg::Trajectory MakeLocalPlanByGoal(
        const MSF_Status &current_pose,
        const PointCloud2 &point_cloud,
        const Pose& goal_pose,
        const std::string& planner_id);

    using LocalPlannerMap = std::unordered_map<std::string, local_planner::LocalPlanner::Ptr>;
    using PlannerSelectorMap = std::unordered_map<std::string, local_planner_server::PlannerSelector::Ptr>;

protected:
    //////////////// functions ////////////////
    /**
     * @brief Configure member variables and initializes planner
     * @param state Lifecycle node state
     * @return Callback return status
    */
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn 
    on_configure(const rclcpp_lifecycle::State& state) override;

    /**
     * @brief Activate planner
     * @param state Lifecycle node state
     * @return Callback return status
    */
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
    on_activate(const rclcpp_lifecycle::State& state) override;

    /**
     * @brief Deactivate planner
     * @param state Lifecycle node state
     * @return Callback return status
    */
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
    on_deactivate(const rclcpp_lifecycle::State& state) override;

    /**
     * @brief Cleanup planner
     * @param state Lifecycle node state
     * @return Callback return status
    */
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
    on_cleanup(const rclcpp_lifecycle::State& state) override;

    /**
     * @brief Shutdown planner
     * @param state Lifecycle node state
     * @return Callback return status
    */
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
    on_shutdown(const rclcpp_lifecycle::State& state) override;

    /**
     * @brief Compute local plan by global path
    */
    void ComputePlanByPath();

    /**
     * @brief Compute local plan by goal pose
    */
    void ComputePlanByPoint();
    
    /**
     * @brief Select the planner to use
     * @param request Request to select the planner
     * @param response Response to select the planner
    */
    void SelectPlanner(
        const std::shared_ptr<SelectPlannerSrv::Request> request,
        std::shared_ptr<SelectPlannerSrv::Response> response);

    /**
    * @brief Find the valid controller ID name for the given request
    *
    * @param p_name The requested controller name
    * @param planner_name Reference to the name to use for control if any valid available
    * @return bool Whether it found a valid controller to use
    */
    bool FindPlannerId(const std::string & p_name, std::string & planner_name);

    /**
     * @brief Check if the vehicle is reaching the goal
     * @param pose point to check
     * @param check_mode mode to check (distance, angle or all), default is distance
     * @return true if the vehicle is reaching the goal
    */
    bool IsGoalReached(
        const Pose& current_pose,
        const Pose& goal_pose, 
        const std::string& check_mode = "distance");
    /**
     * @brief check if emergency stop required
     * @return true if emergency stop required
    */
    bool IsEmergencyStop();

    /**
     * @brief check if robot is stuck
     * @return true if robot is stuck
    */
    bool IsRobotStuck();

    /**
     * @brief Update global path if new one coming
     */
    void UpdateGlobalPath();

    /**
     * @brief Update goal if new one coming
     */
    void UpdateGoal();

    /**
     * @brief Update the current pose to a custom data
     * @param current_pose current pose
    */
    // void UpdateStatus(const MSF_Status::ConstSharedPtr current_pose);
    void UpdateStatus(const MSF_Status &current_pose);

    /**
     * @brief publish local plan
     * @param local_plan local plan
    */
    void PublishLocalPlan(const planning_msgs::msg::Trajectory& local_plan);

    /**
     * @brief publish local plan in rviz
     * @param local_plan local plan
    */
    void PublishLocalPlanRviz(const planning_msgs::msg::Trajectory& local_plan);

    //TODO: these callback functions will be removed later
    /**
     * @brief Callback msf status and point cloud
     * @param msg point cloud message
    */
    void CallbackPointCloud(const PointCloud2::ConstSharedPtr msg);
    /**
     * @brief Callback function for goal pose
     * @param msg msf status message
    */
    void CallbackMSFStatus(const MSF_Status::ConstSharedPtr msg);

    //////////////// variables ////////////////
    //Publisher and Timer
    rclcpp_lifecycle::LifecyclePublisher<Trajectory>::SharedPtr local_plan_publisher_;
    rclcpp_lifecycle::LifecyclePublisher<visualization_msgs::msg::Marker>::SharedPtr local_plan_publisher_rviz_;
    rclcpp_lifecycle::LifecyclePublisher<sensor_msgs::msg::PointCloud2>::SharedPtr global_cloud_pub_;
    rclcpp::Subscription<MSF_Status>::SharedPtr msf_status_subscriber_;
    rclcpp::Subscription<PointCloud2>::SharedPtr point_cloud_subscriber_;
    rclcpp::Service<SelectPlannerSrv>::SharedPtr select_planner_service_;

    //action server
    std::unique_ptr<FollowPathActionServer> follow_path_action_server_;
    std::unique_ptr<FollowPointActionServer> follow_point_action_server_;
    rclcpp::Client<system_msgs::srv::IsEmergencyStop>::SharedPtr collision_monitor_client_;

    //mutex
    std::mutex data_lock_;
    std::mutex gp_lock_;

    //Scenario Selector
    pluginlib::ClassLoader<local_planner_server::PlannerSelector> planner_selector_loader_;
    PlannerSelectorMap planner_selectors_;
    std::vector<std::string> default_planner_selector_ids_; //default selector name
    std::vector<std::string> default_planner_selector_types_; //default selector plugin type
    std::vector<std::string> planner_selector_ids_; //selector name
    std::vector<std::string> planner_selector_types_; //selector plugin type
    std::string current_planner_selector_;

    //Planner
    pluginlib::ClassLoader<local_planner::LocalPlanner> lp_loader_;
    LocalPlannerMap local_planners_;
    std::vector<std::string> default_ids_; //default planner name
    std::vector<std::string> default_types_; //default planner plugin type
    std::vector<std::string> planner_ids_; //planner name
    std::vector<std::string> planner_types_; //planner plugin type
    std::string all_planner_ids_, current_planner_;
    std::string last_local_planner_error_code_;
    std::string last_local_planner_error_message_;
    
    bool plan_ = true;
    bool update_ = true;
    bool localization_received_ = false;
    bool pointcloud_received_ = false;

    GlobalPath current_path_;
    GlobalPath interrupted_path_;
    size_t interrupted_checkpoint_{0};
    bool resume_checkpoint_{false};
    Pose current_goal_;
    std::string progress_checking_mode_;
    double local_planner_frequency_;
    double last_velocity_;
    Eigen::Vector3d last_vel3d_;
    std::string lidar_topic_;
    MSF_Status current_pose_;
    PointCloud2 point_cloud_;

    planning_basic_data::RobotState robot_state_;
    double current_time_, previous_time_, stuck_threshold_, stuck_duration_;
    bool first_cb_ = true;
    //stuck checking
    std::deque<MSF_Status> msf_status_buffer_;
    std::deque<MSF_Status>::size_type msf_buffer_size_;

    std::shared_ptr<tf2_ros::Buffer> tf_buffer_;
    std::shared_ptr<tf2_ros::TransformListener> tf_listener_;
};
}
#endif //LOCAL_PLANNER_SERVER_H_
