/*
 * @Author: yaojianming
 * @Date: 2023-07-30 16:03:05
 * @LastEditors: yaojianming youjianming123@qq.com
 * @LastEditTime: 2023-08-01 10:42:48
 * @Description: 
 */
#pragma once
#include "planning_msgs/msg/waypoint.hpp"
#include <eigen3/Eigen/Dense>
#include <vector>
namespace pure_pursuit_controller
{
bool ismiddle(Eigen::Vector2d A,Eigen::Vector2d B, Eigen::Vector2d P);
bool find_match_point(const std::vector<planning_msgs::msg::Waypoint>& waypoints,
  const double ahead_distance,Eigen::Vector2d current_position,
  Eigen::Vector2d& goalPt,double& theta_goalPt, bool& same_direction);
}
