/**
 * @author Junfeng Guo
 * @date 2024-02-19
*/
#pragma once
#ifndef BEHAVIOR_TREE__PLUGINS__ACTION__NAVIGATE_THROUGH_POSES_ACTION_HPP_
#define BEHAVIOR_TREE__PLUGINS__ACTION__NAVIGATE_THROUGH_POSES_ACTION_HPP_

#include <string>
#include <memory>

#include "behavior_tree/bt_action_node.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "behavior_msgs/action/navigate_through_poses.hpp"

namespace behavior_tree
{

/**
 * @brief A behavior_tree::BtActionNode class that wraps behavior_msgs::action::NavigateThroughPoses
 */
class NavigateThroughPosesAction : public BtActionNode<behavior_msgs::action::NavigateThroughPoses>
{
public:
    /**
     * @brief A constructor for behavior_tree::NavigateThroughPosesAction
     * @param xml_tag_name Name for the XML tag for this node
     * @param action_name Action name this node creates a client for
     * @param conf BT node configuration
     */
    NavigateThroughPosesAction(
        const std::string & xml_tag_name,
        const std::string & action_name,
        const BT::NodeConfiguration & conf);

    /**
     * @brief Function to perform some user-defined operation on tick
     */
    void on_tick() override;

    /**
     * @brief Creates list of BT ports
     * @return BT::PortsList Containing basic ports along with node-specific ports
     */
    static BT::PortsList providedPorts()
    {
        return providedBasicPorts(
        {
            BT::InputPort<std::vector<geometry_msgs::msg::PoseStamped>>("goals", "Destination to plan to"),
            BT::InputPort<bool>("loop_goals", "Whether to loop through goals"),
            BT::InputPort<std::string>("behavior_tree", "Behavior tree to run"),
        });
    }
};

}  // namespace behavior_tree

#endif // BEHAVIOR_TREE__PLUGINS__NAVIGATE_THROUGH_POSES_ACTION_HPP_