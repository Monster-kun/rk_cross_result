/**
 * @author Junfeng Guo
 * @date 2024-02-18
*/
#pragma once 
#ifndef BT_NAVIGATOR__NAVIGATOR_THROUGH_POSES_HPP_
#define BT_NAVIGATOR__NAVIGATOR_THROUGH_POSES_HPP_

/* system headers */
#include <string>
#include <vector>
#include <memory>
#include <limits>

/* ros headers */
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "behavior_msgs/action/navigate_through_poses.hpp"
#include "web_navigation_msgs/srv/get_navigation_execution.hpp"

/* local headers */
#include "bt_navigator/navigator.hpp"

namespace bt_navigator
{
/**
 * @class NavigateThroughPosesNavigator
 * @brief A navigator for navigating to a specified pose
 */
class NavigateThroughPosesNavigator
: public bt_navigator::Navigator<behavior_msgs::action::NavigateThroughPoses>
{
public:
using ActionT = behavior_msgs::action::NavigateThroughPoses;

    /**
     * @brief A constructor for NavigateThroughPosesNavigator
     */
    NavigateThroughPosesNavigator()
    : Navigator() {}

    /**
     * @brief A configure state transition to configure navigator's state
     * @param node Weakptr to the lifecycle node
     */
    bool configure(
        rclcpp_lifecycle::LifecycleNode::WeakPtr parent_node) override;

    /**
     * @brief Get action name for this navigator
     * @return string Name of action server
     */
    std::string getName() {return std::string("navigate_through_poses");}

    /**
     * @brief Get navigator's default BT
     * @param node WeakPtr to the lifecycle node
     * @return string Filepath to default XML
     */
    std::string getDefaultBTFilepath(rclcpp_lifecycle::LifecycleNode::WeakPtr parent_node) override;

protected:
    bool cleanup() override { execution_service_.reset(); return true; }
    rclcpp::Service<web_navigation_msgs::srv::GetNavigationExecution>::SharedPtr execution_service_;
    /**
     * @brief A callback to be called when a new goal is received by the BT action server
     * Can be used to check if goal is valid and put values on
     * the blackboard which depend on the received goal
     * @param goal Action template's goal message
     * @return bool if goal was received successfully to be processed
     */
    bool goalReceived(ActionT::Goal::ConstSharedPtr goal) override;
    /**
     * @brief A callback that defines execution that happens on one iteration through the BT
     * Can be used to publish action feedback
     */
    void onLoop() override;
    /**
     * @brief A callback that is called when a preempt is requested
     */
    void onPreempt(ActionT::Goal::ConstSharedPtr goal) override;
    /**
     * @brief A callback that is called when a the action is completed, can fill in
     * action result message or indicate that this action is done.
     * @param result Action template result message to populate
     * @param final_bt_status Resulting status of the behavior tree execution that may be
     * referenced while populating the result.
     */
    void goalCompleted(
        typename ActionT::Result::SharedPtr result,
        const behavior_tree::BtStatus final_bt_status) override;
    /**
    * @brief Goal pose initialization on the blackboard
    * @return bool if goal was initialized successfully to be processed
    */
    bool initializeGoalPoses(ActionT::Goal::ConstSharedPtr goal);

    rclcpp::Time start_time_;
    
    std::string goals_blackboard_id_;
    std::string goal_blackboard_id_;
    std::string loop_goals_blackboard_id_;
};
}
#endif // BT_NAVIGATOR__NAVIGATOR_THROUGH_POSES_HPP_
