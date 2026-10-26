/**
 * @author: Junfeng Guo
 * @date: 2024-05-10
*/
#pragma once
#ifndef HALT_CONTROLLER_HPP_
#define HALT_CONTROLLER_HPP_

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
#include "halt_controller_parameters.hpp"
#include "halt_controller/visibility_control.h"
#include "omini_chassis_controller/omini_chassis_controller.hpp"

namespace halt_controller
{
using namespace std::chrono_literals;

class HaltController : public omini_chassis_controller::OminiChassisController
{
public:
    /**
     * @brief Construct a new Halt Controller object
    */
    HALT_CONTROLLER_PUBLIC
    HaltController();

    /**
     * @brief configure the controller
     * @param previous_state the previous state of the controller
     * @return controller_interface::CallbackReturn
    */
    HALT_CONTROLLER_PUBLIC
    controller_interface::CallbackReturn on_configure(const rclcpp_lifecycle::State & previous_state) override;

    /**
     * @brief update the controller
     * @param time the current time
     * @param period the time period
     * @return controller_interface::return_type
    */
    HALT_CONTROLLER_PUBLIC
    controller_interface::return_type update(const rclcpp::Time & time, const rclcpp::Duration & period) override;
private:
    std::shared_ptr<ParamListener> ctrlparam_listener_;
    Params ctrlparams_;
};
}
#endif // HALT_CONTROLLER_HPP_