/**
 * @file path_ahead_checker.hpp
 * @author Junfeng Guo
 * @brief check if the path is ahead the robot
 * @date 2024-06-22
 * 
 * @copyright Copyright (c) 2024
 * 
*/
#pragma once
#ifndef BEHAVIOR_TREE__PLUGINS__DECORATOR__PATH_AHEAD_CHECKER_HPP_
#define BEHAVIOR_TREE__PLUGINS__DECORATOR__PATH_AHEAD_CHECKER_HPP_

#include <string>
#include "behaviortree_cpp/decorator_node.h"
#include "eigen3/Eigen/Core"
#include "eigen3/Eigen/Dense"

#include "rclcpp/rclcpp.hpp"
#include "localization_msgs/msg/pose_vel_acc_ang.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "planning_msgs/msg/global_path.hpp"
#include "tf2/utils.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.h"

namespace behavior_tree
{
/**
 * @brief A BT::DecoratorNode that checks if the path is ahead the robot
*/
class PathAheadChecker : public BT::DecoratorNode
{
using MsfStatus = localization_msgs::msg::PoseVelAccAng;
public:
    /**
     * @brief A constructor for behavior_tree::PathAheadChecker
     * @param condition_name Name for the XML tag for this node
     * @param conf BT node configuration
    */
    PathAheadChecker(
        const std::string & condition_name,
        const BT::NodeConfiguration & conf);

    PathAheadChecker() = delete;

    /**
     * @brief Callback function for robot status topic
     * @param msg Shared pointer to localization_msgs::msg::PoseVelAccAng::SharedPtr message
    */
    void CallbackMSFStatus(const MsfStatus::SharedPtr msg);

    /**
     * @brief The main override required by a BT action
     * @return BT::NodeStatus Status of tick execution
    */
    BT::NodeStatus tick() override;

    void halt() override;

    static BT::PortsList providedPorts()
    {
        return {
            BT::InputPort<planning_msgs::msg::GlobalPath>("path", "path to check"),
            BT::OutputPort<geometry_msgs::msg::PoseStamped>("turn_goal", "Point along the current ordered leg"),
        };
    }

private:
    /**
     * @brief Check if the global path is ahead
     * @param path global path to be checked
     * @return true if the robot's orientation is alligned with the path
    */
    double CalTargetAngle(
        const planning_msgs::msg::GlobalPath & path, 
        geometry_msgs::msg::PoseStamped & goal_pose);

    //ros2 related
    rclcpp::Node::SharedPtr node_;
    rclcpp::CallbackGroup::SharedPtr callback_group_;
    rclcpp::executors::SingleThreadedExecutor callback_group_executor_;    
    rclcpp::Subscription<MsfStatus>::SharedPtr msf_status_sub_;

    bool start_processing_ = false;
    bool received_msf_status_ = false;
    MsfStatus msf_status_;
    builtin_interfaces::msg::Time checkpoint_stamp_;
    size_t next_checkpoint_{0};
};
}

#endif // BEHAVIOR_TREE__PLUGINS__DECORATOR__PATH_AHEAD_CHECKER_HPP_
