/**
* @author: Junfeng Guo
* @date: 2023-12-08
*/
#pragma once
#ifndef LOCAL_PLANNER__LOCAL_PLANNER_H_
#define LOCAL_PLANNER__LOCAL_PLANNER_H_

/* ros headers */
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include "planning_msgs/msg/trajectory.hpp"
#include "planning_msgs/msg/global_path.hpp"
#include "sensor_msgs/msg/point_cloud2.hpp"
#include "localization_msgs/msg/pose_vel_acc_ang.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"

/* system headers */
#include <memory>
#include <string>

/* local headers */
#include "planning_basic_data/robot_state.hpp"

namespace local_planner{
/**
* @brief Local planner class
* @details This class is the base class for local planner
*/
class LocalPlanner{
public:
    /**
    * @brief configure the local planner
    * @param plugin_name name of the plugin,
    */
    virtual void configure( 
        const rclcpp_lifecycle::LifecycleNode::WeakPtr & parent,
        const std::string& name) = 0;
    
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
    */
    virtual planning_msgs::msg::Trajectory computeLocalPlanByPath(
        const planning_basic_data::RobotState& status,
        const sensor_msgs::msg::PointCloud2 &point_cloud,
        const planning_msgs::msg::GlobalPath &global_path) = 0;

    virtual planning_msgs::msg::Trajectory computeLocalPlanByGoal(
        const planning_basic_data::RobotState& status,
        const sensor_msgs::msg::PointCloud2 &point_cloud,
        const geometry_msgs::msg::Pose & goal_pose = geometry_msgs::msg::Pose()) = 0;

    virtual std::string getLastErrorCode() const { return {}; }
    virtual std::string getLastErrorMessage() const { return {}; }

    /**
    * @brief destructor
    */
    virtual ~LocalPlanner(){};

    typedef std::shared_ptr<LocalPlanner> Ptr;
};
}

#endif //LOCAL_PLANNER__LOCAL_PLANNER_H_
