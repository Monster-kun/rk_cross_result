/**
 * @file obstacle_stop_motion_planner.hpp
 * @author Junfeng Guo
 * @brief plan for static obstacle stop motion
 * @date 2024-07-06
 * 
 * @copyright Copyright (c) 2024
 * 
*/
#pragma once
#ifndef OBSTACLE_STOP_MOTION_PLANNER_H_
#define OBSTACLE_STOP_MOTION_PLANNER_H_

/* system headers */
#include <iostream>
#include <vector>
#include <tf2/utils.h>

/* ros headers */
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include <pluginlib/class_list_macros.hpp>
#include "ament_index_cpp/get_package_share_directory.hpp"
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"

/* message */
#include "planning_msgs/msg/trajectory.hpp"
#include "planning_msgs/msg/global_path.hpp"
#include "perception_msgs/msg/detected_object_array.hpp"

/* local headers */
#include "planning_basic_data/robot_state.hpp"
#include "trajectory_data/trajectory.hpp"
#include "reference_line/reference_line.hpp"
#include "local_planner/local_planner.h"
#include "obstacle_stop_motion_planner_parameters.hpp"
#include "system_utils/node_utils.hpp"
#include "obstacle_stop_motion_planner/planner_core.hpp"
#include "math/math/box2d.hpp"
#include "se2_grid_ros/se2_grid_ros.hpp"


using ParamListener = obstacle_stop_motion_planner_parameters::ParamListener;
using Params = obstacle_stop_motion_planner_parameters::Params;
using ReferenceLine = planning::reference_line::ReferenceLine;
using Box2d = planning::math::Box2d;

namespace obstacle_stop_motion_planner
{
class ObstacleStopMotionPlanner : public local_planner::LocalPlanner
{
public:
    /**
     * @brief obstacle stop motion planner construtor
    */
    ObstacleStopMotionPlanner(){};
    /**
     * @brief destructor
     */
    ~ObstacleStopMotionPlanner(){};
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
     * @param status current status of the vehicle
     * @param point_cloud the point cloud from lidar
     * @param global_path global path
     * @return local trajectory
    */
    planning_msgs::msg::Trajectory 
    computeLocalPlanByPath(
        const planning_basic_data::RobotState &status,
        const sensor_msgs::msg::PointCloud2 &point_cloud,
        const planning_msgs::msg::GlobalPath &global_path) override;

    /**
     * @brief the main function of the local planner
     * @param status current status of the vehicle
     * @param point_cloud the point cloud from lidar
     * @param goal_pose goal pose of the vehicle
     * @return local trajectory
    */
    planning_msgs::msg::Trajectory 
    computeLocalPlanByGoal(
        const planning_basic_data::RobotState& status,
        const sensor_msgs::msg::PointCloud2 &point_cloud,        
        const geometry_msgs::msg::Pose & goal_pose = geometry_msgs::msg::Pose()) override;      

private:
    /**
     * @brief load parameters
    */
    void LoadParams();

    /**
     * @brief callback function for detected object array
     * @param msg detected object array
    */
    void ObjectArrayCallback(const perception_msgs::msg::DetectedObjectArray::SharedPtr msg);
    /**
     * @brief convert to trajectory message
     * @param traj trajectory
     * @return trajectory message
    */
    planning_msgs::msg::Trajectory 
    GetCustomTrajectoryMessage(const trajectory_data::Trajectory& traj);

    void sdfMapCallback(const se2_grid_msgs::msg::SE2Grid::ConstSharedPtr &msg);


    ///////////// variables /////////////
    //parameter library
    std::shared_ptr<ParamListener> params_listener_;
    Params params_;   

    //parent node
    rclcpp_lifecycle::LifecycleNode::WeakPtr parent_node_;
    rclcpp::Logger logger_{rclcpp::get_logger("ObstacleStopMotionPlanner")};
    std::string name_;

    rclcpp::Subscription<perception_msgs::msg::DetectedObjectArray>::SharedPtr object_array_subscriber_;

    bool debug_;
    std::shared_ptr<ReferenceLine> ref_line_ptr_;
    std::shared_ptr<ObstacleStopMotionPlannerCore> obstacle_stop_planner_ptr_;
    std::vector<Box2d> obstacles_;
    std::shared_ptr<se2_grid::SE2Grid> sdf_map_;
    rclcpp::Subscription<se2_grid_msgs::msg::SE2Grid>::SharedPtr sdf_sub;

    obstacle_stop_motion_planner::PlannerInfo planner_info_;
};
}
#endif // OBSTACLE_STOP_MOTION_PLANNER_H_
