/**
 * @file stop_or_avoid_scenario_selector.hpp
 * @author Junfeng Guo
 * @brief select the scenario for stop and avoid
 * @version 0.1
 * @date 2024-07-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#pragma once
#ifndef STOP_OR_AVOID_SCENARIO_SELECTOR_HPP_
#define STOP_OR_AVOID_SCENARIO_SELECTOR_HPP_

#include <string>
#include <deque>
#include "eigen3/Eigen/Core"
#include "eigen3/Eigen/Dense"
#include <tf2/utils.h>
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"
#include <unordered_map>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_lifecycle/lifecycle_node.hpp"
#include "system_utils/node_utils.hpp"
#include "local_planner_server/plugins/planner_selector.hpp"

#include "localization_msgs/msg/pose_vel_acc_ang.hpp"
#include "planning_msgs/msg/trajectory.hpp"
#include "perception_msgs/msg/detected_object_array.hpp"
#include "math/math/box2d.hpp"
#include "reference_line/reference_line.hpp"

using Trajectory = planning_msgs::msg::Trajectory;
using Box2d = planning::math::Box2d;
using MSFStatus = localization_msgs::msg::PoseVelAccAng;
using DetectedObjectArray = perception_msgs::msg::DetectedObjectArray;
namespace local_planner_server
{
class StopOrAvoidPlannerSelector : public PlannerSelector
{
public:
    StopOrAvoidPlannerSelector();
    ~StopOrAvoidPlannerSelector() = default;

    void initialize(
        const rclcpp_lifecycle::LifecycleNode::WeakPtr & parent,
        const std::string& plugin_name) override;

    void select(
        const MSFStatus &current_pose,
        const std::string &current_planner_id,
        std::string &new_planner_id) override;
private:
    void CallbackLocalPath(const Trajectory::SharedPtr msg);
    void CallbackDetectedObject(const DetectedObjectArray::SharedPtr msg);

    bool IsStuck(const MSFStatus &current_pose);
    bool NoObstacleSurround(const double range);

    enum PLANNER_STATE
    {
        CLEAN_PATH,
        OBS_BLOCK_PATH,
    };   

    rclcpp_lifecycle::LifecycleNode::WeakPtr parent_node_;
    rclcpp::Subscription<Trajectory>::SharedPtr local_path_subscriber;
    rclcpp::Subscription<DetectedObjectArray>::SharedPtr object_array_subscriber_;
    rclcpp::Subscription<MSFStatus>::SharedPtr msf_status_sub_;

    PLANNER_STATE cur_state_;

    Trajectory local_path_;
    std::vector<Box2d> obstacles_;
    std::deque<MSFStatus> msf_status_buffer_;
    
    std::string current_planner_id_;
    double previous_time_, current_time_;
    double stuck_duration_;
    double stuck_threshold_ = 3.0;
    bool reset_time_ = true;
};
}

#endif // STOP_OR_AVOID_SCENARIO_SELECTOR_HPP_