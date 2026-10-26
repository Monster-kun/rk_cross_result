/**
 * @author Junfeng Guo
 * @date 2024-03-05
*/
#pragma once
#ifndef SPINNING_PLANNER_HPP_
#define SPINNING_PLANNER_HPP_

/* system headers */
#include <vector>
#include <array>
#include "eigen3/Eigen/Core"
#include "eigen3/Eigen/Dense"
#include <tf2/utils.h>

/* ros headers */
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include <pluginlib/class_list_macros.hpp>
#include "planning_msgs/msg/trajectory.hpp"
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"

/* local headers */
#include "local_planner/local_planner.h"
#include "interpolation/cubic_polynomial_curve.hpp"
#include "interpolation/quintic_polynomial_curve.hpp"
#include "utils/math/unit_conversion.hpp"

namespace simple_action_planners
{
class SpinningPlanner : public local_planner::LocalPlanner
{
using Trajectory = planning_msgs::msg::Trajectory;

public:
    /**
     * @brief constructor
    */
    SpinningPlanner(){};

    /**
     * @brief destructor
    */
    ~SpinningPlanner(){};

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
    rclcpp::Logger logger_{rclcpp::get_logger("SpinningPlanner")};
    std::string name_;

    interpolation::CubicPolynomialCurve cubic_polynomial_curve_;
    double max_yaw_rate_;
    double start_time_;
};
}   // namespace simple_action_planners

#endif // SPINNING_PLANNER_HPP_