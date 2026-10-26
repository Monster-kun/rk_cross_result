/**
 * @author: Junfeng Guo
 * @date: 2024/03/26
*/
#pragma once
#ifndef ROBOT_STATE_H_
#define ROBOT_STATE_H_

#include <cstdint>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>

namespace planning_basic_data
{
struct RobotState
{
    Eigen::Vector3d pos3d;
    Eigen::Vector3d vel3d;
    Eigen::Vector3d accel3d;
    Eigen::Quaterniond quad;
    double x,y,z;
    double theta;
    double vel;
    double accel;
    double yaw_rate;
    // Measurement time, not callback/recording time. All plugin consumers must be rebuilt.
    int64_t stamp_ns{0};
};
} // namespace planning_basic_data

#endif