/**
 * @file planner_core.hpp
 * @author Junfeng Guo
 * @brief core of the obstacle stop motion planner
 * @date 2024-07-06
 * 
 * @copyright Copyright (c) 2024
 * 
*/
#pragma once
#ifndef OBSTACLE_STOP_MOTION_PLANNER_CORE_H_
#define OBSTACLE_STOP_MOTION_PLANNER_CORE_H_

// system headers
#include <vector>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>

// local headers
#include "math/math/box2d.hpp"
#include "trajectory_data/trajectory.hpp"
#include "trajectory_data/longitudinal_trajectory.hpp"
#include "trajectory_data/lateral_trajectory.hpp"
#include "reference_line/reference_line.hpp"
#include "planning_basic_data/robot_state.hpp"
#include "obstacle_stop_motion_planner/bspline_traj.hpp"
#include "planning_utils/planning_utils.hpp"
#include "interpolation/quartic_polynomial_curve.hpp"
#include "interpolation/quintic_polynomial_curve.hpp"
#include "interpolation/cubic_polynomial_curve.hpp"
#include "se2_grid_ros/se2_grid_ros.hpp"


using Box2d = planning::math::Box2d;
using PathPoint = planning_basic_data::PathPoint;
using RobotState = planning_basic_data::RobotState;
using LonTraj = trajectory_data::LongitudinalTrajectory;
using LatTraj = trajectory_data::LateralTrajectory;
using Traj = trajectory_data::Trajectory;
using LatPoint = planning_basic_data::LatPoint;
using LonPoint = planning_basic_data::LonPoint;
using TrajPoint = planning_basic_data::TrajectoryPoint;

namespace obstacle_stop_motion_planner
{
struct PlannerInfo
{
    double plan_range = 8.0;
    double sample_resolution = 1.0;
    double max_accel = 2.0;
    double max_vel = 1.0;
};

class ObstacleStopMotionPlannerCore
{
public:
    /**
     * @brief Construct a new Obstacle Stop Motion Planner Core object
     * 
     */
    ObstacleStopMotionPlannerCore(const PlannerInfo &planner_info);
    /**
     * @brief Destroy the Obstacle Stop Motion Planner Core object
     * 
     */
    ~ObstacleStopMotionPlannerCore();
    /**
     * @brief make plan for obstacle stop motion
     * 
     * @param robot_state 
     * @param reference_line_ptr 
     * @param obstacles 
     * @return result trajectory
     */
    trajectory_data::Trajectory MakePlan(
        const RobotState &robot_state,
        const std::shared_ptr<planning::reference_line::ReferenceLine> &reference_line_ptr,
        const std::vector<Box2d> &obstacles);
    trajectory_data::Trajectory MakePlan(
        const RobotState &robot_state,
        const std::shared_ptr<planning::reference_line::ReferenceLine> &reference_line_ptr,
        const std::vector<Box2d> &obstacles,
        const std::shared_ptr<se2_grid::SE2Grid> &sdf_map_ptr);
    
    bool CheckTerrainOnPath(
        const LatTraj& lattraj, 
        const std::shared_ptr<se2_grid::SE2Grid> &sdf_map_ptr);

private:
    /**
     * @brief Sample points along the reference line
     * @param robot_state robot state
     * @param reference_line_ptr reference line
     * @param plan_range plan range
     * @param sample_resolution resolution of sampling
     * @return std::vector<Eigen::Vector2d> sample points
     */
    std::vector<Eigen::Vector2d> SamplePoints(
        const RobotState &robot_state, 
        const std::shared_ptr<planning::reference_line::ReferenceLine> &reference_line_ptr,
        const double plan_range, 
        const double sample_resolution);
    /**
     * @brief Create initial lateral trajectory
     * @param robot_state robot state
     * @param sample_points sampled points
     * @return trajectory_data::LateralTrajectory initial trajectory
     */
    trajectory_data::LateralTrajectory CreateInitLatTraj(
        const RobotState &robot_state, 
        const std::vector<Eigen::Vector2d> &sample_points);
    /**
     * @brief Create initial longitudinal trajectory
     * @param robot_state robot state
     * @param lat_trajectory lateral trajectory
     * @param reference_line_ptr reference line
     * @return trajectory_data::LongitudinalTrajectory initial speed profile
     */
    trajectory_data::LongitudinalTrajectory ComputeInitVelocityProfile(
        const RobotState &robot_state, 
        const LatTraj& lat_trajectory,
        const std::shared_ptr<planning::reference_line::ReferenceLine> &reference_line_ptr);
    /**
     * @brief Combine lateral and longitudinal trajectory
     * @param lat_traj lateral trajectory
     * @param lon_traj longitudinal trajectory
     * @return trajectory_data::Trajectory combined trajectory
     */
    trajectory_data::Trajectory CombineLatAndLonTrajectory(
        const LatTraj &lat_traj,
        const LonTraj &lon_traj);
    /**
     * @brief Check collision along the trajectory
     * @param lattraj lateral trajectory
     * @param obstacles obstacles
     * @param closest_dist return the closest distance of the collision
     * @return whether there is a collision
     */
    bool CheckCollisionPoint(const LatTraj& lattraj, const std::vector<Box2d> &obstacles, double &closest_dist);

    bool hasCollisionPoint(
        const PathPoint ego_pt,
        const std::shared_ptr<planning::reference_line::ReferenceLine> &reference_line_ptr,
        const std::vector<Box2d> &obstacles,
        double& collision_dist);

    PlannerInfo planner_info_;
};
}
#endif // OBSTACLE_STOP_MOTION_PLANNER_CORE_H_