/**
 * @file simple_controller.hpp
 * @author Junfeng Guo
 * @brief simple controller header
 * @version 0.1
 * @date 2024-08-30
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#pragma once
#ifndef SIMPLE_CONTROLLER__SIMPLE_CONTROLLER_HPP_
#define SIMPLE_CONTROLLER__SIMPLE_CONTROLLER_HPP_

#include "rclcpp/rclcpp.hpp"
#include "hardware_interface/types/hardware_interface_type_values.hpp"
#include "controller_interface/controller_interface.hpp"
#include "lifecycle_msgs/msg/state.hpp"
#include <tf2/utils.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>

#include "realtime_tools/realtime_buffer.h"
#include "eigen3/Eigen/Core"
#include "eigen3/Eigen/Dense"

#include "simple_controller_parameters.hpp"
#include "simple_controller/minco.hpp"
#include "trajectory_data/trajectory.hpp"
#include "planning_basic_data/trajectory_point.hpp"
#include "simple_controller/visibility_control.h"
#include "omini_chassis_controller/omini_chassis_controller.hpp"
#include "planning_msgs/msg/trajectory.hpp"
#include "planning_msgs/msg/minco_traj.hpp"
#include "localization_msgs/msg/pose_vel_acc_ang.hpp"

namespace simple_controller
{
using LocationType = localization_msgs::msg::PoseVelAccAng;
using MincoTrajMsg = planning_msgs::msg::MincoTraj;
using Traj = trajectory_data::Trajectory;
using TrajPt = planning_basic_data::TrajectoryPoint;
using ParamListener = simple_controller::ParamListener;
using Params = simple_controller::Params;

class SimpleController : public omini_chassis_controller::OminiChassisController
{
public:
    /**
     * @brief Construct a new Simple Controller object
    */
    SIMPLE_CONTROLLER_PUBLIC
    SimpleController();

    /**
     * @brief configure the controller
     * @param previous_state the previous state of the controller
     * @return controller_interface::CallbackReturn
    */
    SIMPLE_CONTROLLER_PUBLIC
    controller_interface::CallbackReturn on_configure(const rclcpp_lifecycle::State & previous_state) override;

    /**
     * @brief update the controller
     * @param time the current time
     * @param period the time period
     * @return controller_interface::return_type
    */
    SIMPLE_CONTROLLER_PUBLIC
    controller_interface::return_type update(const rclcpp::Time & time, const rclcpp::Duration & period) override;

private:
    /**
     * @brief reset the subptr
    */
    SIMPLE_CONTROLLER_PUBLIC
    void resetsubptr() override;

    /**
     * @brief Callback MINCO trajectory message
     * @param msg the MINCO trajectory message
     */
    void CallbackMincoTraj(const MincoTrajMsg::SharedPtr msg);

    /**
     * @brief Compute cmd
     * @param state the current state
     * @param cur_yaw the current yaw
     * @param vx,vy,w,yaw control commands
     * @return bool if the command is computed
     */
    bool ComputeCommand(
        const Eigen::Vector3d &state, const double &cur_yaw, 
        double &vx, double &vy, double &w, double &yaw);

    /**
     * @brief Dual Ackermann Command
     * @param vx,vy,w,yaw control commands
     */
    void DualAckermannCommand(
        const double &vx, const double &vy, 
        const double &desire_yaw, const double &yaw);

    double relativeAngle(const Eigen::Vector3d &cur_ang, const Eigen::Vector3d &desire_ang);

    std::shared_ptr<ParamListener> param_listener_;
    Params params_;

    rclcpp::Subscription<LocationType>::SharedPtr location_sub_;
    realtime_tools::RealtimeBuffer<std::shared_ptr<LocationType>> rt_location_ptr_;  

    rclcpp::Subscription<MincoTrajMsg>::SharedPtr trajectory_sub_;

    bool traj_received_;
    bool minco_received_;
    double start_time_;
    double end_time_;
    MincoTrajMsg minco_traj_msg_;
};
}

#endif  // SIMPLE_CONTROLLER__SIMPLE_CONTROLLER_HPP_