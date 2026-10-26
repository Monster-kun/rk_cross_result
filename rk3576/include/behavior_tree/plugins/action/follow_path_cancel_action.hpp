/**
 * @file follow_path_cancel_action.hpp
 * @author Junfeng Guo
 * @brief cancel follow path action
 * @date 2024-06-23
 * 
 * @copyright Copyright (c) 2024
 * 
*/
#pragma once
#ifndef BEHAVIOR_TREE_PLUGINS_ACTION_FOLLOW_PATH_CANCEL_ACTION_HPP_
#define BEHAVIOR_TREE_PLUGINS_ACTION_FOLLOW_PATH_CANCEL_ACTION_HPP_

#include <memory>
#include <string>

#include "behavior_msgs/action/follow_path.hpp"
#include "behavior_tree/bt_cancel_action_node.hpp"

namespace behavior_tree
{
/**
 * @brief FollowPathCancelAction class
*/
class FollowPathCancelAction : public BtCancelActionNode<behavior_msgs::action::FollowPath>
{
public:
    /**
     * @brief A behavior_tree::FollowPathCancelAction constructor
     * @param xml_tag_name Name for the XML tag for this node
     * @param action_name Action name this node creates a client for
     * @param conf BT node configuration
     */
    FollowPathCancelAction(
        const std::string & xml_tag_name,
        const std::string & action_name,
        const BT::NodeConfiguration & conf);

    /**
     * @brief Creates list of BT ports
     * @return BT::PortsList Containing basic ports along with node-specific ports
     */
    static BT::PortsList providedPorts()
    {
        return providedBasicPorts(
        {
        });
    }    
};
}

#endif // BEHAVIOR_TREE_PLUGINS_ACTION_FOLLOW_PATH_CANCEL_ACTION_HPP_
