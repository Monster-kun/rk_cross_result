/**
 * @author Junfeng Guo
 * @date 2024-03-14
*/
#pragma once
#ifndef STRAIGHT_LINE_PLANNER_HPP_
#define STRAIGHT_LINE_PLANNER_HPP_

/* system headers */
#include <vector>
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
#include "reference_line/reference_line.hpp"
#include "local_planner/local_planner.h"
#include "utils/math/unit_conversion.hpp"
#include "planning_utils/planning_utils.hpp"
#include "ort_map/ort_map.hpp"
#include "planning_basic_data/trajectory_point.hpp"
#include "trajectory_data/trajectory.hpp"
#include "straight_line_planner_parameters.hpp"
#include "system_utils/node_utils.hpp"

namespace simple_action_planners
{
    
class StraightLinePlanner : public local_planner::LocalPlanner
{

using ReferenceLine = planning::reference_line::ReferenceLine;
using ParamListener = straight_line_planner_parameters::ParamListener;
using Params = straight_line_planner_parameters::Params;

public:
    /**
     * @brief constructor
    */
    StraightLinePlanner(){};

    /**
     * @brief destructor
    */
    ~StraightLinePlanner(){};

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
    planning_msgs::msg::Trajectory computeLocalPlanByPath(
        const planning_basic_data::RobotState& status,
        const sensor_msgs::msg::PointCloud2 &point_cloud,
        const planning_msgs::msg::GlobalPath &global_path);

    /**
     * @brief the main function of the local planner
     * @param current_pose current pose of the vehicle
     * @param point_cloud the point cloud from lidar
     * @param goal_pose goal pose of the vehicle
     * @return local trajectory
    */
    planning_msgs::msg::Trajectory computeLocalPlanByGoal(
        const planning_basic_data::RobotState& status,
        const sensor_msgs::msg::PointCloud2 &point_cloud,        
        const geometry_msgs::msg::Pose & goal_pose = geometry_msgs::msg::Pose());
protected:
    /**
     * @brief explore a best plan when no goal is given
     * @param status current status of the vehicle
     * @param point_cloud the point cloud from lidar
     * @return local trajectory
    */
    planning_msgs::msg::Trajectory ExploreBestPlan(
        const planning_basic_data::RobotState& status,
        const sensor_msgs::msg::PointCloud2 &point_cloud);

    /**
     * @brief explore a best plan when no goal is given
     * @param status current status of the vehicle
     * @param point_cloud the point cloud from lidar
     * @param global_path global path
     * @return local trajectory
    */
    planning_msgs::msg::Trajectory ExploreBestPlanWithPath(
        const planning_basic_data::RobotState& status,
        const sensor_msgs::msg::PointCloud2 &point_cloud,
        const planning_msgs::msg::GlobalPath & global_path);

    /**
     * @brief compute a simple plan from current pose to goal pose
     * @param current_pose current pose of the vehicle
     * @param goal_pose goal pose of the vehicle
    */
    planning_msgs::msg::Trajectory ComputeSimplePlan(
        const planning_basic_data::RobotState& status,
        const geometry_msgs::msg::Pose & goal_pose);

    /**
     * @brief get point cloud from message and do some pre-processing
     * @param input_cloud input point cloud message
     * @return pcl point cloud
    */
    void ConvertMsgToPcl(
        const sensor_msgs::msg::PointCloud2 &point_cloud,
        pcl::PointCloud<pcl::PointXYZ>::Ptr pcl_cloud);

    /**
     * @brief Trim off the boundary by given trim distance
     * @param current_pose current pose of the robot
     * @param bound bound to input
     * @param trim_range trim range in pair
     * @param is_left true if trim the left boundary
     * @return the trimmed boundary
    */
    pcl::PointCloud<pcl::PointXYZ>::Ptr TrimBoundary(
        const planning_basic_data::RobotState& status,
        const std::vector<geometry_msgs::msg::Point>& bound,
        const std::pair<double,double>& trim_range,
        const bool is_left);

    /**
     * @brief check if the goal is empty
     * @param goal_pose goal pose
     * @return true if the goal is empty
    */
    bool IsGoalEmpty(const geometry_msgs::msg::Pose & goal_pose);

    //parent node
    rclcpp_lifecycle::LifecycleNode::WeakPtr parent_node_;
    rclcpp::Logger logger_{rclcpp::get_logger("StraightLinePlanner")};
    std::string name_;

    std::shared_ptr<ParamListener> params_listener_;
    Params params_;

    std::shared_ptr<OrtMap> ort_map_;
    std::shared_ptr<ReferenceLine> ref_line_ptr_;

    double resolution_ = 0.1;
    double max_distance_ = 3.0;
    double desire_velocity_ = 0.5;
};
}   // namespace simple_action_planners

#endif // STRAIGHT_LINE_PLANNER_HPP_