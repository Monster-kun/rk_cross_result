/**
 * @author: Junfeng Guo
 * @date: 2024/03/26
*/
#pragma once
#ifndef LONGITUDINAL_TRAJECTORY_H_
#define LONGITUDINAL_TRAJECTORY_H_

#include <vector>
#include "trajectory_data/base_trajectory.hpp"
#include "planning_basic_data/trajectory_point.hpp"
#include "linear_interpolation/linear_interpolation.hpp"

namespace trajectory_data
{
class LongitudinalTrajectory : public BaseTrajectory
{
using LonPoint = planning_basic_data::LonPoint;
public:
    LongitudinalTrajectory() = default;
    ~LongitudinalTrajectory() = default;
    LongitudinalTrajectory(const std::vector<LonPoint>& points);
    void AddPoint(const LonPoint& point);
    void Clear();
    double Evaluate(const int& order, const double& param);
    LonPoint Evaluate(const double& t);
    double EvalS(const double& t);
    double EvalV(const double& t);
    double EvalA(const double& t);
    double EvalJ(const double& t);
    std::vector<LonPoint> GetTraj() const { return points_; }
    LonPoint GetPoint(const int idx) const {return points_[idx];}
    std::vector<double> GetTimeSpan() const { return t_; }
    bool Empty() const { return points_.empty(); }
    int Size() const { return points_.size(); }
private:
    std::vector<LonPoint> points_;
    std::vector<double> t_;
};
}
#endif // LONGITUDINAL_TRAJECTORY_H_