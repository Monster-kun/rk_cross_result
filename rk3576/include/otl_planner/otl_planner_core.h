/**
* @author: Junfeng Guo
* @date: 2023/12/08
*/
#pragma once
#ifndef OTL_PLANENR_CORE_H_
#define OTL_PLANNER_CORE_H_

/* system headers */
#include <math.h>
#include <vector>
#include <array>
#include <iostream>
#include <string>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>

/* local headers */
#include "otl_planner/file_reader.h"
#include "otl_planner/grid_map.h"
#include "otl_planner/otl_planner_optimizer.h"
#include "planning_utils/planning_utils.hpp"
#include "reference_line/reference_line.hpp"
#include "planning_basic_data/robot_state.hpp"
#include "trajectory_data/longitudinal_trajectory.hpp"
#include "trajectory_data/lateral_trajectory.hpp"
#include "trajectory_data/trajectory.hpp"
#include "interpolation/quartic_polynomial_curve.hpp"
#include "interpolation/quintic_polynomial_curve.hpp"
#include "interpolation/cubic_polynomial_curve.hpp"
#include "se2_grid_ros/se2_grid_ros.hpp"
#include <tf2/utils.h>
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"

/* pcl */
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>

namespace otl_planner
{
class OTLPlannerCore
{
using RobotState = planning_basic_data::RobotState;
using LonTrajectory = trajectory_data::LongitudinalTrajectory;
using LatTrajectory = trajectory_data::LateralTrajectory;
using Trajectory = trajectory_data::Trajectory;
using LatPoint = planning_basic_data::LatPoint;
using LonPoint = planning_basic_data::LonPoint;
using TrajectoryPoint = planning_basic_data::TrajectoryPoint;
using PathPoint = planning_basic_data::PathPoint;
public:
    struct PlannerParams{
        double plan_distance = 6.0;
        double intensity_threshold = 1.0;
        double min_path_range = 1.0;
        double x_offset = 6.0;
        double y_offset = 6.0;
        double voxel_size = 0.05;
        double voxel_x_num = 0.0;
        double voxel_y_num = 0.0;
        Eigen::Vector3d lidar_offset;
        double sdf_threshold = 0.0;
        double obstacle_inflation_distance = 0.5;
        double clearance_distance = 0.15;
        double clearance_weight = 10.0;
        double min_obstacle_height = 0.2;
        double maximum_curvature = 1.2;

        //grid map parameters
        Eigen::Vector3d map_size;
        double resolution = 0.1;
        double ground_height = -1.0;

        //file reader 
        std::string file_folder = "";

        //optimizer
        int max_iter = 100;
        double max_iter_distance = 0.5;
        double w_smooth = 1.0;
        double w_ref = 1.0;

        //speed
        double max_velocity = 1.0;
        double max_acceleration = 1.0;
        
        bool debug = false;
    };

    /**
     * @brief constructor
    */
    OTLPlannerCore(PlannerParams params);
    /**
     * @brief destructor
    */
    ~OTLPlannerCore();
    /**
     * @brief make plan in hd map mode
     * @param reference_line_ptr reference line
     * @param pc lidar pointcloud
     * @param lb ignored; retained for compatibility with existing callers
     * @param rb ignored; Lanelet boundaries are not collision obstacles
     * @return local trajectory
    */
    trajectory_data::Trajectory MakePlanHDMap(
        const RobotState &robot_state,
        const std::shared_ptr<planning::reference_line::ReferenceLine> &reference_line_ptr,
        const pcl::PointCloud<pcl::PointXYZI>::Ptr &pc,
        const pcl::PointCloud<pcl::PointXYZI>::Ptr &lb, 
        const pcl::PointCloud<pcl::PointXYZI>::Ptr &rb);

    trajectory_data::Trajectory MakePlanHDMap(
        const RobotState &robot_state,
        const std::shared_ptr<planning::reference_line::ReferenceLine> &reference_line_ptr,
        const pcl::PointCloud<pcl::PointXYZI>::Ptr &pc,
        const pcl::PointCloud<pcl::PointXYZI>::Ptr &lb, 
        const pcl::PointCloud<pcl::PointXYZI>::Ptr &rb,
        const std::shared_ptr<se2_grid::SE2Grid> &sdf_map_ptr);

    /**
     * @brief make plan in waypoint mode
     * @param goal goal position
     * @param pc lidar pointcloud
     * @return local trajectory
    */
    trajectory_data::Trajectory MakePlanWaypoint(
        const RobotState &robot_state,
        const std::vector<double> &goal, 
        const pcl::PointCloud<pcl::PointXYZI>::Ptr &pc);
    /**
     * @brief get all trajectory candidates
     * @return trajectory candidates
    */
    pcl::PointCloud<pcl::PointXYZI>::Ptr GetTrajectoryCandidates(){return show_paths_;};
    /**
     * @brief get grid map
     * @return grid map
    */
    GridMap::Ptr GetGridMap(){return grid_map_ptr_;}; 
    const std::string & GetLastFailureCode() const { return last_failure_code_; }
    const std::string & GetLastFailureMessage() const { return last_failure_message_; }

private:
    //////////////// functions ////////////////
    void GenerateObstacleMap(
        const RobotState& robot_state,
        const std::shared_ptr<planning::reference_line::ReferenceLine>& reference_line,
        const pcl::PointCloud<pcl::PointXYZI>::Ptr& cloud);
    // Test candidate centreline segments against the shared inflated XY grid.
    // The legacy correspondence table's lateral padding is deliberately absent.
    std::vector<double> ComputePathObstacleCosts(
        const RobotState& robot_state, double path_range) const;
    double ComputePathClearanceCost(
        const RobotState& robot_state, size_t path_id, double path_range) const;
    /**
     * @brief select initial path by waypoint
     * @param robot_state robot state
     * @param goal goal position
     * @param pc lidar pointcloud
     * @return initial path
    */
    trajectory_data::LateralTrajectory ComputeInitialPathByWpt(
        const RobotState &robot_state,
        const std::vector<double> &goal,
        const pcl::PointCloud<pcl::PointXYZI>::Ptr &pc);

    /**
     * @brief compute initial path by hd map
     * @param robot_state robot state
     * @param reference_line_ptr reference line
     * @param pc lidar pointcloud
     * @param lat_trajectory initial path to be return
    */
   
    trajectory_data::LateralTrajectory ComputeInitialPathByHDmap(
        const RobotState &robot_state,
        const std::shared_ptr<planning::reference_line::ReferenceLine> &reference_line_ptr,        
        const pcl::PointCloud<pcl::PointXYZI>::Ptr &pc_obs);

    trajectory_data::LateralTrajectory ComputeInitialPathByHDmap(
        const RobotState &robot_state,
        const std::shared_ptr<planning::reference_line::ReferenceLine> &reference_line_ptr,        
        const pcl::PointCloud<pcl::PointXYZI>::Ptr &pc_obs,
        const std::shared_ptr<se2_grid::SE2Grid> &sdf_map_ptr);

    bool CheckTerrainOnPath(
        double x, double y, 
        const std::shared_ptr<se2_grid::SE2Grid> &sdf_map_ptr,
        bool is_global_point, 
        const Eigen::Affine3d &tf_robot = Eigen::Affine3d::Identity());

    /**
     * @brief compute initial velocity profile
     * @param robot_state robot state
     * @param lat_trajectory lateral trajectory
     * @param reference_line_ptr reference line
     * @return longitudinal trajectory
    */
    trajectory_data::LongitudinalTrajectory ComputeInitialVelocityProfile(
        const RobotState &robot_state,
        const LatTrajectory& lat_trajectory,
        const std::shared_ptr<planning::reference_line::ReferenceLine> &reference_line_ptr);

    /**
     * @brief compute initial velocity profile
     * @param robot_state robot state
     * @param lat_trajectory lateral trajectory
     * @param goal goal point
     * @return longitudinal trajectory
    */
    trajectory_data::LongitudinalTrajectory ComputeInitialVelocityProfile(
        const RobotState &robot_state,
        const LatTrajectory& lat_trajectory,
        const std::vector<double>& goal);        
    
    /**
     * @brief combine lateral and longitudinal trajectory
     * @param lat_path lateral trajectory
     * @param lon_path longitudinal trajectory
     * @return combined trajectory
    */
    trajectory_data::Trajectory CombineLatAndLonTrajectory(
        const LatTrajectory& lat_path,
        const LonTrajectory& lon_path);
      
    //////////////// variables ////////////////
    PlannerParams params_;
    std::string last_failure_code_;
    std::string last_failure_message_;
    size_t last_free_after_obstacles_{0};
    size_t last_switch_rejected_{0};
    double last_attempted_range_{0.0};
    int last_selected_path_id_{-1};
    size_t last_initial_path_points_{0};
    double last_distance_to_goal_{0.0};
    otl_planner::FileReader::Ptr file_reader_;

    int pre_path_id_;

    std::vector<LatPoint> last_pts_;
    //trajectory library
    std::vector<std::vector<LatPoint>> endpoint_list_;
    std::vector<std::shared_ptr<LatTrajectory>> all_paths_;

    //trajectory candidates
    pcl::PointCloud<pcl::PointXYZI>::Ptr show_paths_;

    //grid map
    GridMap::Ptr grid_map_ptr_;

    //optimizer
    OtlPlannerOptimizer::Ptr optimizer_ptr_;
};
}
#endif //OTL_PLANNER_CORE_H_
