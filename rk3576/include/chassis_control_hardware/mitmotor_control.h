/*
 * @Author: yaojianming
 * @Date: 2023-09-14 18:16:59
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2024-05-20 19:48:28
 * @FilePath: /vscode_ros2_workspace/src/autorunning/robots/janseen_robot/chassis_control_canbus/include/chassis_control_canbus/mitmotor_control.h
 * @Description:
 */
#pragma once
#include <linux/can.h>
#include <vector>
#include <mutex>
#include <rclcpp/time.hpp>
#include <string>
#include <chassis_control_hardware/socketcan.h>
#include <memory>
namespace mitmotor_control
{
    struct CANFrameStamp
    {
        can_frame frame;
        rclcpp::Time stamp;
    };
    struct PivotState
    {
        // identify
        u_int16_t id;
        // read data
        double pos;
        double vel;
        double force;
        int tp_mos;
        int tp_rotor;
    };
    struct DriveState
    {
        // identify
        u_int16_t id;
        u_int16_t ident;
        // read data
        double vel;
        double pos;
    };

    class Motor
    {

    public:
        Motor();
        ~Motor() = default;
        bool configure(const std::string interface);
        bool PivotMotorPositionControl(int id, float pos);
        bool DriveMotorVelocityControl(int id, float vel);
        bool CommandCANSend(int ID, float pivcmd, float dricmd);
        void MotorCallBack(const can_frame &frame);
        bool PivotMotorReadState(const rclcpp::Time &current_time, const rclcpp::Duration &period,
                                 PivotState &pivotstate);
        bool PivotMotorReadStates(const rclcpp::Time &current_time, const rclcpp::Duration &period,
                                  std::vector<PivotState> &pivotstate);
        bool DriveMotorReadState(const rclcpp::Time &current_time, const rclcpp::Duration &period, double &wheel_radius, DriveState &drivestate);
        bool DriveMotorReadStates(const rclcpp::Time &current_time, const rclcpp::Duration &period, double &wheel_radius,
                                  std::vector<DriveState> &drivestate);
        void clear();
        int DebugFirstFrame();

    private:
        socketcan::SocketCAN SK_;
        socketcan::SocketCAN *skc_;
        std::mutex mutex_;
        std::vector<CANFrameStamp> rx_buff_;
    };
}