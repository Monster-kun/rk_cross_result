/**
 * @author: Junfeng Guo
 * @date: 2023-11-22
*/
#pragma once
#ifndef SPINNING_CONTROLLER_HPP_
#define SPINNING_CONTROLLER_HPP_

/* ros headers */
#include "rclcpp/rclcpp.hpp"
#include <geometry_msgs/msg/quaternion.hpp>
#include "hardware_interface/types/hardware_interface_type_values.hpp"
#include "controller_interface/controller_interface.hpp"
#include "lifecycle_msgs/msg/state.hpp"
#include <tf2/utils.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>

/* system headers */
#include <iostream>
#include "realtime_tools/realtime_buffer.h"
#include "eigen3/Eigen/Core"
#include "eigen3/Eigen/Dense"
#include <chrono>

/* local headers */
#include "spinning_controller_parameters.hpp"
#include "spinning_controller/visibility_control.h"
#include "omini_chassis_controller/omini_chassis_controller.hpp"
#include "localization_msgs/msg/pose_vel_acc_ang.hpp"
#include "planning_msgs/msg/trajectory.hpp"

namespace spinning_controller
{
using LocationType = localization_msgs::msg::PoseVelAccAng;
using Trajectory = planning_msgs::msg::Trajectory;
using namespace std::chrono_literals;

class SpinningController : public omini_chassis_controller::OminiChassisController
{
public:
    /**
     * @brief Construct a new Spinning Controller object
    */
    SPINNING_CONTROLLER_PUBLIC
    SpinningController();

    /**
     * @brief configure the controller
     * @param previous_state the previous state of the controller
     * @return controller_interface::CallbackReturn
    */
    SPINNING_CONTROLLER_PUBLIC
    controller_interface::CallbackReturn on_configure(const rclcpp_lifecycle::State & previous_state) override;

    /**
     * @brief update the controller
     * @param time the current time
     * @param period the time period
     * @return controller_interface::return_type
    */
    SPINNING_CONTROLLER_PUBLIC
    controller_interface::return_type update(const rclcpp::Time & time, const rclcpp::Duration & period) override;

    SPINNING_CONTROLLER_PUBLIC
    controller_interface::CallbackReturn on_deactivate(const rclcpp_lifecycle::State &previous_state) override;
    
protected:
    /**
     * @brief reset the subptr
    */
    SPINNING_CONTROLLER_PUBLIC
    void resetsubptr() override;

    double ComputeAngularVelocity(
        const Trajectory::ConstSharedPtr trajectory, 
        const double time_diff);
    
    double min_yaw_, max_yaw_;

private:
    void stop();

    std::shared_ptr<ParamListener> ctrlparam_listener_;
    Params ctrlparams_;

    rclcpp::Subscription<LocationType>::SharedPtr location_sub_;
    realtime_tools::RealtimeBuffer<std::shared_ptr<LocationType>> rt_location_ptr_;

    rclcpp::Subscription<Trajectory>::SharedPtr trajectory_sub_;
    realtime_tools::RealtimeBuffer<std::shared_ptr<Trajectory>> rt_trajectory_ptr_;

    bool wheelReachPos_{false};
    rclcpp::Duration steering_wait_elapsed_{0, 0};
};

}
#endif // SPINNING_CONTROLLER_HPP_
