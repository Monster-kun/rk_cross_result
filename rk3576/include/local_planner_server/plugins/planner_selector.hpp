/**
 * @file planner_selector.hpp
 * @author Junfeng Guo
 * @brief base class for planner selector
 * @version 0.1
 * @date 2024-07-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#pragma once
#ifndef PLANNER_SELECTOR_HPP_
#define PLANNER_SELECTOR_HPP_

#include <string>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_lifecycle/lifecycle_node.hpp"
#include "localization_msgs/msg/pose_vel_acc_ang.hpp"

namespace local_planner_server
{
class PlannerSelector
{
public:
    typedef std::shared_ptr<local_planner_server::PlannerSelector> Ptr;

    virtual ~PlannerSelector() = default;
    virtual void initialize(
        const rclcpp_lifecycle::LifecycleNode::WeakPtr & parent,
        const std::string& plugin_name) = 0;
    virtual void select(
        const localization_msgs::msg::PoseVelAccAng &current_pose,
        const std::string &current_planner_id,
        std::string &new_planner_id) = 0;
};
} // namespace local_planner_server
#endif // PLANNER_SELECTOR_HPP_