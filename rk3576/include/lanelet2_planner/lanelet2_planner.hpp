/**
 * @author: Junfeng Guo
 * @date: 2024-01-04
*/
#pragma once 
#ifndef LANELET2_PLANNER_H_
#define LANELET2_PLANNER_H_

/* system headers */
#include <vector>
#include <memory>
#include <limits>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include <tf2/utils.h>

/* lanelet2 headers */
#include <lanelet2_core/LaneletMap.h>
#include <lanelet2_routing/RoutingGraph.h>
#include <lanelet2_traffic_rules/TrafficRulesFactory.h>
#include <lanelet2_core/geometry/Lanelet.h>
#include <lanelet2_routing/Route.h>
#include <lanelet2_routing/RoutingCost.h>

/* ROS2 headers */
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include <pluginlib/class_list_macros.hpp>
#include <visualization_msgs/msg/marker_array.hpp>
#include "mapping_msgs/msg/had_map_bin.hpp"
#include "planning_msgs/msg/global_path.hpp"
#include "planning_msgs/msg/trajectory.hpp"
#include "planning_msgs/msg/waypoint.hpp"
#include "localization_msgs/msg/pose_vel_acc_ang.hpp"
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <geometry_msgs/msg/pose_with_covariance_stamped.hpp>
#include <geometry_msgs/msg/point.hpp>
#include <nav_msgs/msg/path.hpp>
#include "perception_msgs/msg/detected_object_array.hpp"

/* local headers */
#include "lanelet2_planner_parameters.hpp"
#include "global_planner/global_planner.h"
#include "lanelet2_planner/utility_functions.hpp"
#include "lanelet2_planner/route_handler.hpp"
#include "lanelet2_planner/qp_optimizer.hpp"
#include "utils/utils.hpp"
#include "math/math.hpp"
#include "math/math/box2d.hpp"
#include "system_utils/node_utils.hpp"
#include "planning_utils/planning_utils.hpp"
#include "reference_line/reference_line.hpp"
#include <lanelet2_extension/utility/message_conversion.hpp>
#include <lanelet2_extension/utility/query.hpp>
#include <lanelet2_extension/utility/utilities.hpp>
#include <lanelet2_extension/visualization/visualization.hpp>
#include "planning_basic_data/trajectory_point.hpp"

namespace lanelet2_planner{

using ParamListener = lanelet2_planner_parameters::ParamListener;
using Params = lanelet2_planner_parameters::Params;
using LaneletRoute = planning_msgs::msg::LaneletRoute;
using RouteHandler = lanelet2_planner::route_handler::RouteHandler;
using QpOptimzier = lanelet2_planner::QpOptimizer;
using Box2d = planning::math::Box2d;
using ReferenceLine = planning::reference_line::ReferenceLine;
using PathPoint = planning_basic_data::PathPoint;
using GlobalPath = planning_msgs::msg::GlobalPath;
using namespace lanelet2_planner::utility;

class Lanelet2Planner : public global_planner::GlobalPlanner
{
public:
    /**
     * @brief Construct a new Lanelet2 Planner object
    */
    Lanelet2Planner();

    /**
     * @brief Destroy the Lanelet2 Planner object
    */
    ~Lanelet2Planner();

    /**
     * @brief configure the local planner
     * @param plugin_name name of the plugin,
    */
    void configure( 
        const rclcpp_lifecycle::LifecycleNode::WeakPtr & parent,
        const std::string name) override;

    /**
     * @brief cleanup resources when shutdown
    */
    void cleanup() override;

    /**
     * @brief activate the local planner
    */
    void activate() override;

    /**
     * @brief deactivate the local planner
    */
    void deactivate() override;

    /**
     * @brief the main function of the global planner
     * @param current_pose current pose of the vehicle
     * @param goal_pose goal pose of the vehicle
     * @return global path
    */
    planning_msgs::msg::GlobalPath computeGlobalPlan(
        const localization_msgs::msg::PoseVelAccAng& current_pose,
        const geometry_msgs::msg::Pose& goal_pose) override;

    /**
     * @brief Check if the path is valid
     * @param current_pose robot current pose
     * @return if the path is valid
     */
    bool isPathValid(
        const localization_msgs::msg::PoseVelAccAng& current_pose,
        const double check_distance) override;
    
    /**
     * @brief Check if the path is being collided
     * @param current_pose robot current pose
     * @return if the path is being collided
     */
    bool isPathCollision(
        const localization_msgs::msg::PoseVelAccAng& current_pose,
        const double check_distance);

protected:
    ///////////// functions /////////////
    /**
     * @brief callback function for vector map
     * @param msg hd map message
    */
    void CallbackHDMap(const mapping_msgs::msg::HADMapBin::SharedPtr msg);

    /**
     * @brief callback function for object array
     * @param msg detected object array message
    */
    void CallbackObjectArray(const perception_msgs::msg::DetectedObjectArray::SharedPtr msg);
    
    void CallbackInitialPose(const geometry_msgs::msg::PoseWithCovarianceStamped::SharedPtr msg);

    /**
     * @brief publish lanelet route
    */
    void PublishRoute(const LaneletRoute& route);

    /**
     * @brief publish left boundary
     * @param gp global path message
    */
    void PublishBoundary(const planning_msgs::msg::GlobalPath& gp);

    /**
     * @brief main function of plan route
     * @param current_pose current pose of the vehicle
     * @param goal_pose goal pose of the vehicle
     * @return lanelet route
    */
    LaneletRoute PlanRoute(
        const localization_msgs::msg::PoseVelAccAng& current_pose,
        const geometry_msgs::msg::Pose& goal_pose);

    /**
     * @brief convert lanelet route to trajectory
     * @param route lanelet route
     * @param start_pose start pose
     * @param goal_pose goal pose
     * @return trajectory
    */
    planning_msgs::msg::GlobalPath ConvertLaneletToGlobalPath(
        const LaneletRoute& route, 
        const localization_msgs::msg::PoseVelAccAng & start_pose,
        const geometry_msgs::msg::Pose & goal_pose);

    /**
     * @brief convert lanelet route to trajectory
     * @param goal goal pose
     * @return whether if the goal is valid
    */
    bool IsGoalValid(const geometry_msgs::msg::Pose & goal) const;

    ///////////// variables /////////////
    rclcpp::Subscription<mapping_msgs::msg::HADMapBin>::SharedPtr hdmap_subscriber_;
    rclcpp::Subscription<perception_msgs::msg::DetectedObjectArray>::SharedPtr object_array_subscriber_;
    rclcpp::Subscription<geometry_msgs::msg::PoseWithCovarianceStamped>::SharedPtr initpose_subscriber_;
    rclcpp_lifecycle::LifecyclePublisher<LaneletRoute>::SharedPtr route_publisher_;
    rclcpp_lifecycle::LifecyclePublisher<nav_msgs::msg::Path>::SharedPtr lb_publisher_;
    rclcpp_lifecycle::LifecyclePublisher<nav_msgs::msg::Path>::SharedPtr rb_publisher_;

    rclcpp_lifecycle::LifecyclePublisher<nav_msgs::msg::Path>::SharedPtr init_path_pub_;
    rclcpp_lifecycle::LifecyclePublisher<nav_msgs::msg::Path>::SharedPtr opt_path_pub_;

    //parent node
    rclcpp_lifecycle::LifecycleNode::WeakPtr parent_node_;
    rclcpp::Logger logger_{rclcpp::get_logger("Lanelet2Planner")};
    std::string name_;

    RouteHandler route_handler_;
    QpOptimzier::Ptr qp_optimizer_;
    lanelet::LaneletMapPtr lanelet_map_ptr_;
    lanelet::routing::RoutingGraphPtr routing_graph_ptr_;
    lanelet::traffic_rules::TrafficRulesPtr traffic_rules_ptr_;
    lanelet::ConstLanelets road_lanelets_;
    lanelet::ConstLanelets shoulder_lanelets_;
    
    //optimize
    double w_ref_, w_length_, w_smooth_;

    //parameter library
    std::shared_ptr<ParamListener> params_listener_;
    Params params_;

    double reference_speed_;
    bool allow_lane_change_;
    bool allow_lane_invert_;
    bool debug_;
    bool test_mode_;
    geometry_msgs::msg::Pose test_pose_;
    
    LaneletRoute last_route_;
    GlobalPath last_global_path_;
    std::shared_ptr<ReferenceLine> reference_line_;
    std::pair<int, bool> invalid_lanelet_info_;
    std::vector<Box2d> object_boxes_;
};
}
#endif // LANELET2_PLANNER_H_