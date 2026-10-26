 /**
* @author: Junfeng Guo
* @date: 2023/12/08
*/
#pragma once
#ifndef OTL_PLANENR_NODE_H_
#define OTL_PLANNER_NODE_H_

/* system headers */
#include <iostream>
#include <cstdint>
#include <vector>
#include <mutex>
#include <tf2/utils.h>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl_conversions/pcl_conversions.h>
#include <pcl/filters/voxel_grid.h>

/* ros headers */
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include <pluginlib/class_list_macros.hpp>
#include "ament_index_cpp/get_package_share_directory.hpp"
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"
#include <tf2_ros/buffer.h>
#include <tf2_ros/transform_listener.h>
/* mesaage */
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include "planning_msgs/msg/trajectory.hpp"
#include "planning_msgs/msg/global_path.hpp"
#include "localization_msgs/msg/pose_vel_acc_ang.hpp"
#include <nav_msgs/msg/occupancy_grid.hpp>
#include <nav_msgs/msg/path.hpp>

/* local headers */
#include "planning_basic_data/robot_state.hpp"
#include "trajectory_data/trajectory.hpp"
#include "reference_line/reference_line.hpp"
#include "system_msgs/srv/is_emergency_stop.hpp"
#include "local_planner/local_planner.h"
#include "otl_planner/otl_planner_visualizer.h"
#include "otl_planner/otl_planner_core.h"
#include "otl_planner_parameters.hpp"
#include "system_utils/node_utils.hpp"
#include "se2_grid_ros/se2_grid_ros.hpp"


// #include "pcl/common/transforms.h" //pcl::transformPointcloud
// #include "tf2_ros/transform_listener.h"
// #include "tf2_ros/buffer.h"
// #include <tf2/convert.h>
// #include "tf2_eigen/tf2_eigen.h" //transformtoeigen
// #include "geometry_msgs/msg/transform_stamped.hpp"
// #include "visualizer/topic_visualizer.hpp"
// #include "rog_map/rog_map.h"
// #include <pcl_ros/transforms.hpp>
// #include <pcl_conversions/pcl_conversions.h>

namespace otl_planner
{
class OTLPlanner : public local_planner::LocalPlanner
{
using Trajectory = planning_msgs::msg::Trajectory;
using GlobalPath = planning_msgs::msg::GlobalPath;
using PointCloud2 = sensor_msgs::msg::PointCloud2;
using ParamListener = otl_planner_parameters::ParamListener;
using Params = otl_planner_parameters::Params;
using ReferenceLine = planning::reference_line::ReferenceLine;
public:
    /**
     * @brief constructor
     */
    OTLPlanner(){};

    /**
     * @brief destructor
     */
    ~OTLPlanner(){};

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
        const planning_msgs::msg::GlobalPath &global_path);

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
        const geometry_msgs::msg::Pose & goal_pose = geometry_msgs::msg::Pose());   

    std::string getLastErrorCode() const override { return last_plan_error_code_; }
    std::string getLastErrorMessage() const override { return last_plan_error_message_; }

protected:
    /**
     * @brief Callback executed when a parameter change is detected
     * @param event ParameterEvent message
     */
    rcl_interfaces::msg::SetParametersResult
    CallbackDynamicParameters(std::vector<rclcpp::Parameter> parameters);
    /**
     * @brief get point cloud from message and do some pre-processing
     * @param input_cloud input point cloud message
     * @return pcl point cloud
    */
    void ConvertMsgToPcl(
        const PointCloud2 & input_cloud,
        pcl::PointCloud<pcl::PointXYZI>::Ptr output_cloud);

    // Apply the existing sensor offset, then re-express the scan-time body
    // cloud at the exact planning pose supplied by the server.
    bool PreparePlanningCloud(
        const planning_basic_data::RobotState& status,
        const PointCloud2& point_cloud);

    /**
     * @brief get trajectory message
     * @param selected_trajectory selected trajectory
     * @return trajectory message
    */
    planning_msgs::msg::Trajectory 
    GetCustomTrajectoryMessage(const trajectory_data::Trajectory& selected_trajectory);
    
    /**
     * @brief check if emergency stop required
     * @return true if emergency stop required
    */
    bool IsEmergencyStop();

    void sdfMapCallback(const se2_grid_msgs::msg::SE2Grid::ConstSharedPtr &msg);

    void publishPointCloud(pcl::PointCloud<pcl::PointXYZ>::Ptr cloud);


    
    /**
     * @brief Trim off the boundary by given trim distance
     * @param current_pose current pose of the robot
     * @param bound bound to input
     * @param trim_range trim range in pair
     * @param is_left true if trim the left boundary
     * @return the trimmed boundary
    */
    pcl::PointCloud<pcl::PointXYZI>::Ptr TrimBoundary(
        const planning_basic_data::RobotState& status,
        const std::vector<geometry_msgs::msg::Point>& bound,
        const std::vector<double>& bound_s,
        const double path_s,
        const std::pair<double,double>& trim_range,
        const bool is_left);
    
    ///////////// variables /////////////
    //parameter library
    std::shared_ptr<ParamListener> params_listener_;
    Params params_;   

    //parent node
    rclcpp_lifecycle::LifecycleNode::WeakPtr parent_node_;
    rclcpp::Logger logger_{rclcpp::get_logger("OTLPlanner")};
    std::string name_;
    
    rclcpp::Client<system_msgs::srv::IsEmergencyStop>::SharedPtr collision_monitor_client_;

    //parameters
    OTLPlannerCore::PlannerParams planner_params_;
    std::string lidar_topic_;
    rclcpp::Time time_stamp_;
    std::vector<double> goal_;
    pcl::PointCloud<pcl::PointXYZI>::Ptr lidar_pointcloud_;
    pcl::PointCloud<pcl::PointXYZI>::Ptr lb_;
    pcl::PointCloud<pcl::PointXYZI>::Ptr rb_;
    bool debug_on_ = false;
    double planning_frequency_;

    //dynamic parameters
    rclcpp::node_interfaces::OnSetParametersCallbackHandle::SharedPtr dyn_params_handler_;
    std::mutex dynamic_params_lock_;

    //planner core
    std::unique_ptr<OTLPlannerCore> otl_planner_ptr_;
    std::unique_ptr<Visualizer> visualizer_ptr_;
    std::string last_plan_error_code_;
    std::string last_plan_error_message_;
    int64_t last_global_path_stamp_ns_{-1};
    double previous_reference_s_{0.0};
    double previous_reference_heading_{0.0};
    double reference_origin_x_{0.0};
    double reference_origin_y_{0.0};
    bool have_reference_origin_{false};
    //global trajectory
    std::shared_ptr<ReferenceLine> ref_line_ptr_;
    rclcpp::Subscription<se2_grid_msgs::msg::SE2Grid>::SharedPtr sdf_sub;
    std::shared_ptr<se2_grid::SE2Grid> sdf_map_;
    double max_time;
    
    
    //tf2
    std::shared_ptr<tf2_ros::Buffer> tf_buffer_;
    std::shared_ptr<tf2_ros::TransformListener> tf_listener_;

    //tmp
    // rog_map::ROGMap::Ptr rog_map_;
    // topic_visualizer::TopicVisualizer::Ptr topic_visualizer_;
};
} // namespace otl_planner
#endif //OTL_PLANNER_NODE_H_
