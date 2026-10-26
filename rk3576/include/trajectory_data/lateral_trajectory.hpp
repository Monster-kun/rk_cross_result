/**
 * @author: Junfeng Guo
 * @date: 2024/03/26
*/
#pragma once
#ifndef LATERAL_TRAJECTORY_H_
#define LATERAL_TRAJECTORY_H_

#include <vector>
#include "linear_interpolation/linear_interpolation.hpp"
#include "trajectory_data/base_trajectory.hpp"
#include "planning_basic_data/trajectory_point.hpp"
#include "planning_utils/planning_utils.hpp"
#include "eigen3/Eigen/Core"
#include "eigen3/Eigen/Dense"

namespace trajectory_data
{
class LateralTrajectory : public BaseTrajectory
{
using LatPoint = planning_basic_data::LatPoint;
public:
    LateralTrajectory() = default;
    ~LateralTrajectory() = default;
    LateralTrajectory(const std::vector<LatPoint>& points);
    LateralTrajectory(const std::vector<Eigen::Vector4d>& points);
    void AddPoint(const LatPoint& point);
    void Clear();
    double Evaluate(const int& type, const double& param) const;
    double EvalX(const double& s) const;
    double EvalY(const double& s) const;
    double EvalTheta(const double& s) const;
    double EvalKappa(const double& s) const;
    LatPoint Evaluate(const double& s) const;
    Eigen::Vector2d GetFrenetCoordinate(const double& x, const double&y) const;
    void ResamplePath(const double resolution, LateralTrajectory& resample_path) const;
    LateralTrajectory TrimAt(const double s);
    const std::vector<LatPoint>& Points() const { return points_; }
    const std::vector<double>& AccumS() const { return accum_s_; }
    std::vector<LatPoint> GetTraj() const { return points_; }
    std::vector<double> GetAccumS() const { return accum_s_; }
    double GetLength() const {return accum_s_.back();}
    bool Empty() const { return points_.empty(); }
    int Size() const { return points_.size(); }
private:
    std::vector<LatPoint> points_;
    std::vector<double> accum_s_;
};
}
#endif // LATERAL_TRAJECTORY_H_