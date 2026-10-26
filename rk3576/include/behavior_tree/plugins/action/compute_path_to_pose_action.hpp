/**
 * @author Junfeng Guo
 * @date 2024-02-19
*/
#pragma once
#ifndef BEHAVIOR_TREE__PLUGINS__ACTION__COMPUTE_PATH_TO_POSE_ACTION_HPP_
#define BEHAVIOR_TREE__PLUGINS__ACTION__COMPUTE_PATH_TO_POSE_ACTION_HPP_

#include <string>

#include "behavior_msgs/action/compute_path_to_pose.hpp"
#include "planning_msgs/msg/global_path.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "behavior_tree/bt_action_node.hpp"

namespace behavior_tree
{
/**
 * @brief A behavior_tree::BtActionNode class that wraps behavior_msgs::action::ComputePathToPose
 */
class ComputePathToPoseAction : public BtActionNode<behavior_msgs::action::ComputePathToPose>
{
public:
    /**
     * @brief A constructor for nav2_behavior_tree::ComputePathToPoseAction
     * @param xml_tag_name Name for the XML tag for this node
     * @param action_name Action name this node creates a client for
     * @param conf BT node configuration
     */
    ComputePathToPoseAction(
        const std::string & xml_tag_name,
        const std::string & action_name,
        const BT::NodeConfiguration & conf);

    /**
     * @brief Function to perform some user-defined operation on tick
     */
    void on_tick() override;

    /**
     * @brief Function to perform some user-defined operation upon successful completion of the action
     */
    BT::NodeStatus on_success() override;

    /**
     * @brief Function to perform some user-defined operation upon abortion of the action
     */
    BT::NodeStatus on_aborted() override;

    /**
     * @brief Function to perform some user-defined operation upon cancelation of the action
     */
    BT::NodeStatus on_cancelled() override;

    /**
     * \brief Override required by the a BT action. Cancel the action and set the path output
     */
    void halt() override;

    /**
     * @brief Creates list of BT ports
     * @return BT::PortsList Containing basic ports along with node-specific ports
     */
    static BT::PortsList providedPorts()
    {
        return providedBasicPorts(
        {
            BT::OutputPort<planning_msgs::msg::GlobalPath>("path", "Path created by ComputePathToPose node"),
            BT::InputPort<geometry_msgs::msg::PoseStamped>("goal", "Destination to plan to"),
            BT::InputPort<geometry_msgs::msg::PoseStamped>("start", "Optional fixed start"),
            BT::InputPort<bool>("use_start", false, "Use the fixed start instead of localization"),
            BT::InputPort<bool>("defer_publication", false, "Return a private prefetched leg"),
            BT::InputPort<std::vector<geometry_msgs::msg::PoseStamped>>("through_goals", "Ordered positions for one continuous path"),
            BT::InputPort<bool>("loop_goals", false, "Close and continuously repeat the ordered path"),
            BT::InputPort<std::string>(
                "global_planner_id", "",
                "Mapped name to the planner plugin type to use"),
        });
    }
};    
}  // namespace behavior_tree

#endif // BEHAVIOR_TREE__PLUGINS__COMPUTE_PATH_TO_POSE_ACTION_HPP_
