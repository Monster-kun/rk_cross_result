/**
 * @file find_turn_angle_by_path_action.hpp
 * @author Junfeng Guo
 * @brief find the turn angle by closest point in the path
 * @date 2024-06-26
 * 
 * @copyright Copyright (c) 2024
 * 
*/
#pragma once
#ifndef BEHAVIOR_TREE__PLUGINS__ACTION__FIND_TURN_ANGLE_BY_PATH_ACTION_HPP_
#define BEHAVIOR_TREE__PLUGINS__ACTION__FIND_TURN_ANGLE_BY_PATH_ACTION_HPP_

#include <string>
#include <planning_msgs/msg/global_path.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <localization_msgs/msg/pose_vel_acc_ang.hpp>
#include <rclcpp/rclcpp.hpp>

#include "behaviortree_cpp/action_node.h"

namespace behavior_tree
{
/**
 * @brief A BT::ActionNode that compute a turn angle according to
 * the closest match point on the path
 */
class FindTurnAngleByPathAction : public BT::SyncActionNode
{
using MsfStatus = localization_msgs::msg::PoseVelAccAng;

public:
    /**
     * @brief A constructor for behavior_tree::UpdateGoal
     * @param xml_tag_name Name for the XML tag for this node
     * @param conf BT node configuration
     */
    FindTurnAngleByPathAction(
        const std::string & xml_tag_name,
        const BT::NodeConfiguration & conf);

    /**
     * @brief Creates list of BT ports
     * @return BT::PortsList Containing node-specific ports
     */
    static BT::PortsList providedPorts()
    {
        return {
        BT::InputPort<planning_msgs::msg::GlobalPath>("input_path", "input global path"),
        BT::OutputPort<geometry_msgs::msg::PoseStamped>(
            "output_goal",
            "Goal to turn"),
        };
    }    

private:
    /**
     * @brief The main override required by a BT action
     * @return BT::NodeStatus Status of tick execution
     */
    BT::NodeStatus tick() override;

    /**
     * @brief Callback function for robot status topic
     * @param msg Shared pointer to localization_msgs::msg::PoseVelAccAng::SharedPtr message
    */
    void CallbackMSFStatus(const MsfStatus::SharedPtr msg);

    rclcpp::Node::SharedPtr node_;
    rclcpp::CallbackGroup::SharedPtr callback_group_;
    rclcpp::executors::SingleThreadedExecutor callback_group_executor_;    
    rclcpp::Subscription<MsfStatus>::SharedPtr msf_status_sub_;
    MsfStatus msf_status_;
    bool received_msf_status_ = false;
};
}

#endif //BEHAVIOR_TREE__PLUGINS__ACTION__FIND_TURN_ANGLE_BY_PATH_ACTION_HPP_
