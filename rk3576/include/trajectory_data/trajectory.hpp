/**
 * @author: Junfeng Guo
 * @date: 2024/03/26
*/
#pragma once
#ifndef TRAJECTORY_H_
#define TRAJECTORY_H_

#include <vector>
#include "trajectory_data/base_trajectory.hpp"
#include "planning_basic_data/trajectory_point.hpp"
#include "linear_interpolation/linear_interpolation.hpp"

namespace trajectory_data
{
class Trajectory : public BaseTrajectory
{
using TrajectoryPoint = planning_basic_data::TrajectoryPoint;
using LatPoint = planning_basic_data::LatPoint;
using LonPoint = planning_basic_data::LonPoint;
public:
    Trajectory() = default;
    ~Trajectory() = default;
    Trajectory(const std::vector<TrajectoryPoint>& points);
    void AddPoint(const TrajectoryPoint& point);
    void AddPoint(const LatPoint& latpt, const LonPoint& lonpt);
    void Clear();
    double Evaluate(const int& order, const double& param);
    double EvalX(const double& t);
    double EvalY(const double& t);
    TrajectoryPoint Evaluate(const double& t);
    inline double getDuration() const {return t_.back();}
    std::vector<TrajectoryPoint> GetTraj() const { return points_;}
    bool Empty() const { return points_.empty(); }
    int Size() const { return points_.size(); }
private:
    std::vector<TrajectoryPoint> points_;
    std::vector<double> t_;
};
}

#endif // TRAJECTORY_H_