/**
 * @author Junfeng Guo
 * @date 2024-02-23
*/
#pragma once 
#ifndef BEHAVIOR_TREE__PLUGINS__ACTION__FOLLOW_PATH_ACTION_HPP_
#define BEHAVIOR_TREE__PLUGINS__ACTION__FOLLOW_PATH_ACTION_HPP_

#include <string>
#include "planning_msgs/msg/global_path.hpp"
#include "planning_msgs/msg/trajectory.hpp"
#include "behavior_msgs/action/follow_path.hpp"
#include "behavior_tree/bt_action_node.hpp"

namespace behavior_tree
{

/**
 * @brief A behavior_tree::BtActionNode clas that wraps the action FollowPath
*/
class FollowPathAction : public BtActionNode<behavior_msgs::action::FollowPath>
{
public:
    /**
     * @brief A constructor for behavior_tree::FollowPathAction
     * @param xml_tag_name Name for the XML tag for this node
     * @param action_name Action name this node creates a client for
     * @param conf BT node configuration
     */
    FollowPathAction(
        const std::string & xml_tag_name,
        const std::string & action_name,
        const BT::NodeConfiguration & conf);

    /**
     * @brief Function to perform some user-defined operation on tick
     */
    void on_tick() override;

    /**
     * @brief Function to perform some user-defined operation after a timeout
     * waiting for a result that hasn't been received yet
     * @param feedback shared_ptr to latest feedback message
     */
    void on_wait_for_result(
        std::shared_ptr<const behavior_msgs::action::FollowPath::Feedback> feedback) override;

    BT::NodeStatus on_aborted() override;

    /**
     * @brief Creates list of BT ports
     * @return BT::PortsList Containing basic ports along with node-specific ports
     */
    static BT::PortsList providedPorts()
    {
        return providedBasicPorts(
        {
            BT::InputPort<planning_msgs::msg::GlobalPath>("path", "Path to follow"),
            BT::InputPort<std::string>("local_planner_id", ""),
            BT::InputPort<bool>("plan_once", "If true, the local planner will only plan once"),
            BT::InputPort<bool>("keep_running", false, "Wait for the next pass-through reference"),
            BT::InputPort<std::string>("progress_checking_mode", "Mode for checking progress")
        });
    }
};

}

#endif // BEHAVIOR_TREE__PLUGINS__ACTION__FOLLOW_PATH_ACTION_HPP_
