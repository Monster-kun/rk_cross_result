/**
 * @author: Junfeng Guo
 * @date: 2024-01-02
*/
#pragma once
#ifndef GLOBAL_PLANNER__GLOBAL_PLANNER_H_
#define GLOBAL_PLANNER__GLOBAL_PLANNER_H_

/* ros headers */
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include "localization_msgs/msg/pose_vel_acc_ang.hpp"
#include "planning_msgs/msg/global_path.hpp"

/* system headers */
#include <memory>

namespace global_planner{
/**
 * @brief Global planner class
 * @details This class is the base class for global planner
*/
class GlobalPlanner{
public:
    /**
    * @brief configure the local planner
    * @param plugin_name name of the plugin,
    */
    virtual void configure( 
        const rclcpp_lifecycle::LifecycleNode::WeakPtr & parent,
        const std::string name) = 0;
    
    /**
    * @brief cleanup resources when shutdown
    */
    virtual void cleanup() = 0;

    /**
    * @brief activate the local planner
    */
    virtual void activate() = 0;

    /**
    * @brief deactivate the local planner
    */
    virtual void deactivate() = 0; 

    /**
    * @brief the main function of the local planner
    * @param current_pose current pose of the robot
    * @param goal_pose goal pose of the robot
    */
    virtual planning_msgs::msg::GlobalPath computeGlobalPlan(
        const localization_msgs::msg::PoseVelAccAng& current_pose,
        const geometry_msgs::msg::Pose& goal_pose) = 0;

    /**
     * @brief Check if the path is valid
     * @param current_pose robot current pose
     * @return if the path is valid
     */
    virtual bool isPathValid(
        const localization_msgs::msg::PoseVelAccAng& current_pose,
        const double check_distance) = 0;

    virtual bool isPathCollision(
        const localization_msgs::msg::PoseVelAccAng& current_pose,
        const double check_distance) = 0;

    /**
    * @brief destructor
    */
    virtual ~GlobalPlanner(){};

    typedef std::shared_ptr<GlobalPlanner> Ptr;
};
}
#endif //GLOBAL_PLANNER__GLOBAL_PLANNER_H_