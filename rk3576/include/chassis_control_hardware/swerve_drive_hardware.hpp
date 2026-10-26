/*
 * @Author: yaojianming
 * @Date: 2023-09-14 18:16:59
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2024-05-20 19:45:46
 * @FilePath: /vscode_ros2_workspace-humble/src/autorunning/robots/janseen_robot/chassis_control_hardware/include/chassis_control_hardware/swerve_drive_hardware.hpp
 * @Description:
 */
//
// Created by jk on 23-3-3.
//

#ifndef WORKSPACE_SWERVE_DRIVE_HARDWARE_HPP
#define WORKSPACE_SWERVE_DRIVE_HARDWARE_HPP
#include <memory>
#include <string>
#include <vector>
#include <mutex>
#include <map>

#include <linux/can.h>
#include "hardware_interface/handle.hpp"
#include "hardware_interface/hardware_info.hpp"
#include "hardware_interface/system_interface.hpp"
#include "hardware_interface/types/hardware_interface_return_values.hpp"

#include "rclcpp/macros.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_lifecycle/node_interfaces/lifecycle_node_interface.hpp"
#include "rclcpp_lifecycle/state.hpp"
#include "chassis_control_msgs/msg/canframe.hpp"
#include "chassis_control_hardware/visibility_control.h"
#include "chassis_control_hardware/motorhandle.hpp"
#include "chassis_control_hardware/can_hardware_sender.hpp"
#include "chassis_control_hardware/mitmotor_control.h"

namespace chassis_control_hardware
{

    class ChassisControlHardware
        : public hardware_interface::SystemInterface //,mitmotor_control::Motor
    {
    public:
        RCLCPP_SHARED_PTR_DEFINITIONS(ChassisControlHardware)
        CHASSIS_CONTROL_HARDWARE_PUBLIC
        hardware_interface::CallbackReturn on_init(const hardware_interface::HardwareInfo &info) override;
        CHASSIS_CONTROL_HARDWARE_PUBLIC
        hardware_interface::CallbackReturn on_configure(
            const rclcpp_lifecycle::State &previous_state) override;
        CHASSIS_CONTROL_HARDWARE_PUBLIC
        std::vector<hardware_interface::StateInterface> export_state_interfaces() override;
        CHASSIS_CONTROL_HARDWARE_PUBLIC
        std::vector<hardware_interface::CommandInterface> export_command_interfaces() override;
        CHASSIS_CONTROL_HARDWARE_PUBLIC
        hardware_interface::CallbackReturn on_activate(
            const rclcpp_lifecycle::State &previous_state) override;
        CHASSIS_CONTROL_HARDWARE_PUBLIC
        hardware_interface::CallbackReturn on_deactivate(
            const rclcpp_lifecycle::State &previous_state) override;
        CHASSIS_CONTROL_HARDWARE_PUBLIC
        hardware_interface::return_type read(const rclcpp::Time &time, const rclcpp::Duration &period) override;
        CHASSIS_CONTROL_HARDWARE_PUBLIC
        hardware_interface::return_type write(const rclcpp::Time &time, const rclcpp::Duration &period) override;

    private:
        MotorHandle motor_;
        CANHardwareSender canhardwaresender_;
        mitmotor_control::Motor rxmotor_;
        double imu_data_[10];
        double odom_wheel[4];
        double wheel_radius = 0.1;
    };
}
#endif // WORKSPACE_SWERVE_DRIVE_HARDWARE_HPP
