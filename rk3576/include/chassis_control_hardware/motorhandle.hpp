/*
 * @Author: yaojianming
 * @Date: 2023-09-14 18:16:59
 * @LastEditors: yaojianming youjianming123@qq.com
 * @LastEditTime: 2023-09-16 15:01:44
 * @FilePath: /vscode_ros2_workspace-humble/src/autorunning/robots/janseen_robot/chassis_control_hardware/include/chassis_control_hardware/motorhandle.hpp
 * @Description: 
 */
#pragma once
#include <linux/can.h>
#include "chassis_control_hardware/mitmotor_control.h"
#include <vector>
#include <string>
namespace chassis_control_hardware 
{
struct pivot_motor_data
{
    int ID;
    std::string name;
    mitmotor_control::PivotState stat;
    double cmd; 
};
struct drive_motor_data
{
    int ID;
    std::string name;
    mitmotor_control::DriveState stat;
    double cmd;
};
class MotorHandle
{
public:
    MotorHandle() {};
    std::vector<pivot_motor_data> pivot_motor;
    std::vector<drive_motor_data> drive_motor;
};
}