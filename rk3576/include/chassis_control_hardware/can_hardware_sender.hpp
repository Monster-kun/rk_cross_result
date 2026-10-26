/*
 * @Author: yaojianming
 * @Date: 2023-09-16 15:16:18
 * @LastEditors: yaojianming youjianming123@qq.com
 * @LastEditTime: 2023-09-16 15:24:49
 * @FilePath: /vscode_ros2_workspace-humble/src/autorunning/robots/janseen_robot/chassis_control_hardware/include/chassis_control_hardware/can_hardware_sender.hpp
 * @Description: 
 */
#pragma once
#include "rclcpp/rclcpp.hpp"
#include "chassis_control_msgs/msg/canframe.hpp"

namespace chassis_control_hardware
{
class CANHardwareSender:public rclcpp::Node
{
public:
  CANHardwareSender():Node("can_hardware_sender")
  {
    cmd_pub_ = this->create_publisher<chassis_control_msgs::msg::Canframe>("/cancmd",10);
  }
  void MotorHandleValueSend(int ID,float pivotcmd,float drivecmd);
private:
    rclcpp::Publisher<chassis_control_msgs::msg::Canframe>::SharedPtr cmd_pub_;
};

}