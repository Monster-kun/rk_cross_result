/**
 * @file do_nothing_planner.hpp
 * @author Junfeng Guo
 * @brief this planner do nothing but return an empty trajectory
 * @version 0.1
 * @date 2024-07-02
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#pragma once
#ifndef DO_NOTHING_PLANNER_HPP_
#define DO_NOTHING_PLANNER_HPP_


/* ros headers */
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include <pluginlib/class_list_macros.hpp>
#include "planning_msgs/msg/trajectory.hpp"

/* local headers */
#include "local_planner/local_planner.h"

namespace simple_action_planners
{
class DoNothingPlanner : public local_planner::LocalPlanner
{

public:
    /**
     * @brief constructor
    */
    DoNothingPlanner(){};

    /**
     * @brief destructor
    */
    ~DoNothingPlanner(){};

    /**
     * @brief initialize the local planner
     * @param parent parent node
     */
    void configure(
        const rclcpp_lifecycle::LifecycleNode::WeakPtr & parent,
        const std::string& name);

    /**
     * @brief cleanup resources when shutdown
    */
    void cleanup();

    /**
     * @brief activate the local planner
    */
    void activate();

    /**
     * @brief deactivate the local planner
    */
    void deactivate();
    /**
     * @brief the main function of the local planner
     * @details We only use this function in the spinning planner to turn around 
     *          according to the matching point in the global path
     * @param status current status of the vehicle
     * @param point_cloud the point cloud from lidar
     * @param global_path global path
     * @return local trajectory
    */
    planning_msgs::msg::Trajectory computeLocalPlanByPath(
        const planning_basic_data::RobotState &status,
        const sensor_msgs::msg::PointCloud2 &point_cloud,
        const planning_msgs::msg::GlobalPath &global_path);
    /**
     * @brief the main function of the local planner
     * @param status current status of the vehicle
     * @param point_cloud the point cloud from lidar
     * @param goal_pose goal pose of the vehicle
     * @return local trajectory
    */
    planning_msgs::msg::Trajectory computeLocalPlanByGoal(
        const planning_basic_data::RobotState &status,
        const sensor_msgs::msg::PointCloud2 &point_cloud,        
        const geometry_msgs::msg::Pose & goal_pose = geometry_msgs::msg::Pose());
private:

    //parent node
    rclcpp_lifecycle::LifecycleNode::WeakPtr parent_node_;
    rclcpp::Logger logger_{rclcpp::get_logger("DoNothingPlanner")};
    std::string name_;
};
}


#endif // DO_NOTHING_PLANNER_HPP_