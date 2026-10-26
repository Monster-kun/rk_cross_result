/**
 * @author: Junfeng Guo
 * @date: 2024-02-18 
*/
#pragma once
#ifndef BT_NAVIGATOR__BT_NAVIGATOR_HPP_
#define BT_NAVIGATOR__BT_NAVIGATOR_HPP_

/* system headers */
#include <memory>
#include <vector>
#include <string>

/* ros headers */
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include "pluginlib/class_loader.hpp"

/* local headers */
#include "bt_navigator/navigator.hpp"
#include "bt_navigator/navigators/navigate_through_poses.hpp"

namespace bt_navigator {
class BtNavigator : public rclcpp_lifecycle::LifecycleNode 
{
public:
    /**
     * @brief Constructor of Behavior tree navigator 
     * @param options Additional options to control creation of the node.
    */
    explicit BtNavigator(rclcpp::NodeOptions options = rclcpp::NodeOptions());
    /**
    * @brief A destructor for nav2_bt_navigator::BtNavigator class
    */
    ~BtNavigator();
protected:
    /**
     * @brief Configures member variables
     * @param state Reference to LifeCycle node state
     * @return SUCCESS or FAILURE
     */
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn 
    on_configure(const rclcpp_lifecycle::State & state) override;
    /**
     * @brief Activates action server
     * @param state Reference to LifeCycle node state
     * @return SUCCESS or FAILURE
     */
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
    on_activate(const rclcpp_lifecycle::State & state) override;
    /**
     * @brief Deactivates action server
     * @param state Reference to LifeCycle node state
     * @return SUCCESS or FAILURE
     */
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
    on_deactivate(const rclcpp_lifecycle::State & state) override;
    /**
     * @brief Resets member variables
     * @param state Reference to LifeCycle node state
     * @return SUCCESS or FAILURE
     */
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
    on_cleanup(const rclcpp_lifecycle::State & state) override;
    /**
     * @brief Called when in shutdown state
     * @param state Reference to LifeCycle node state
     * @return SUCCESS or FAILURE
     */
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
    on_shutdown(const rclcpp_lifecycle::State & state) override;

    // To handle all the BT related execution
    pluginlib::ClassLoader<bt_navigator::NavigatorBase> class_loader_;
    std::vector<pluginlib::UniquePtr<bt_navigator::NavigatorBase>> navigators_;
    bt_navigator::NavigatorMuxer plugin_muxer_;
};
}

#endif // BT_NAVIGATOR__BT_NAVIGATOR_HPP_