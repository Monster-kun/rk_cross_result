/**
 * @file bspline_traj.h
 * @author Junfeng Guo
 * @brief bspline trajectory
 * @version 0.1
 * @date 2024-07-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#pragma once
#ifndef BSPLINE_TRAJ_H_
#define BSPLINE_TRAJ_H_

#include <iostream>
#include <vector>
#include "eigen3/Eigen/Core"
#include "eigen3/Eigen/Dense"

namespace obstacle_stop_motion_planner
{
class BSplineTraj
{
public:
    BSplineTraj(){};
    BSplineTraj(const Eigen::MatrixXd& pts, const int& order);
    ~BSplineTraj(){};

    void SetQuniformBspline(const Eigen::MatrixXd& pts, const int& order);

    Eigen::VectorXd GetKnot() const {return u_;};
    Eigen::MatrixXd GetControlPoints() const {return control_points_;};
    std::pair<Eigen::VectorXd, Eigen::VectorXd> GetHeadTailPts();

    Eigen::VectorXd EvaluateDeBoor(const double& u);   // use u \in [up, u_mp]

private:

    int p_, n_, m_; // p is the degree, n is (the number of control points-1), m is the number of knots(m=n+p+1)
    Eigen::MatrixXd control_points_; // m * n matrix, n is the dimension of the control points, m is the number of control points
    Eigen::VectorXd u_; //knot vector
};
} // namespace obstacle_stop_motion_planner


#endif // BSPLINE_TRAJ_H_