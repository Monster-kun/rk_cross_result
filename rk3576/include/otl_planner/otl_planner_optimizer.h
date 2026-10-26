/**
 * @author: Junfeng Guo
 * @date: 2024/01/12
*/
#pragma once
#ifndef OTL_PLANNER__OTL_PLANNER_OPTIMIZER_H_
#define OTL_PLANNER__OTL_PLANNER_OPTIMIZER_H_

/* system headers */
#include <iostream>
#include <chrono>
#include <vector>
#include <bitset>
#include <cmath>
#include <eigen3/Eigen/Dense>
#include <eigen3/Eigen/Core>
#include <osqp/osqp.h>

/* local headers */
#include "otl_planner/grid_map.h"
#include "reference_line/reference_line.hpp"
#include "math/math/aabox2d.hpp"
#include "planning_utils/planning_utils.hpp"
#include "trajectory_data/trajectory.hpp"
#include "trajectory_data/lateral_trajectory.hpp"
#include "planning_basic_data/trajectory_point.hpp"

namespace otl_planner
{
enum
{
    OPTIMIZE_CONVERGE = 0,
    OPTIMIZE_NO_INITIAL_GUESS,
    OPTIMIZE_INVALID_INITIAL_GUESS,
    OPTIMIZE_INVALID_REF_PATH,
    OPTIMIZE_FAILED,
};
class OtlPlannerOptimizer
{
using AABox2d = planning::math::AABox2d;
using LatTrajectory = trajectory_data::LateralTrajectory;
using PathPoint = planning_basic_data::PathPoint;
public:
    /**
     * @brief Construct a new Otl Planner Optimizer object
    */
    OtlPlannerOptimizer(){};
    /**
     * @brief Destroy the Otl Planner Optimizer object
    */
    ~OtlPlannerOptimizer(){};
    /**
     * @brief Initialize the optimizer
     * @param max_iter the maximum iteration number
     * @param max_iter_distance the maximum iteration distance
     * @param w_smooth the weight of smoothness cost
     * @param w_ref the weight of reference line cost
    */
    void Initialize(
        const int max_iter,
        const double max_iter_distance,
        const double w_smooth,
        const double w_ref);
    /**
     * @brief Set the reference line
     * @param ref_line_ptr the pointer of the reference line
    */
    void SetRefLine(
        const std::shared_ptr<planning::reference_line::ReferenceLine> &ref_line_ptr);
    /**
     * @brief Set the grid map
     * @param grid_map_ptr the pointer of the grid map
    */
    void SetGridMap(
        const GridMap::Ptr &grid_map_ptr);
    /**
     * @brief Set initial path
     * @param initial_guess the initial path
    */
    void SetInitialGuess(
        const LatTrajectory &initial_guess);
    /**
     * @brief Set robot state
     * @param robot_state the robot state
    */        
    void SetRobotState(
        const Eigen::Vector3d &robot_state);
    void SetClearancePreference(double distance, double weight);
    void SetMaximumCurvature(double curvature) { maximum_curvature_ = curvature; }
    /**
     * @brief Optimize the path
     * @return the error code. 0 means success
    */
    int Optimize();
    /**
     * @brief return the optmize result
     * @return optmize result
    */
    trajectory_data::LateralTrajectory GetResult() {return opt_traj_;};
    
    typedef std::shared_ptr<OtlPlannerOptimizer> Ptr;

private:
    //////////////// functions ////////////////
    bool IsPathCollisionFree(const LatTrajectory& path) const;
    /**
     * @brief Calculate the kernel matrix
     * @param P_data data of the kernel matrix
     * @param P_indices indices of the kernel matrix
     * @param P_indptr indptr of the kernel matrix
    */    
    void CalculateKernelMatrix(
        std::vector<c_float> *P_data,
        std::vector<c_int> *P_indices,
        std::vector<c_int> *P_indptr);
    /**
     * @brief Calculate the offset term of the objective function
     * @param q offset term of the objective function
    */
    void CalculateOffset(std::vector<c_float> *q);
    /**
     * @brief Calculate the affine constraint matrix
     * @param A_data data of the affine constraint matrix
     * @param A_indices indices of the affine constraint matrix
     * @param A_indptr indptr of the affine constraint matrix
     * @param lower_bounds lower boundary of the affine constraint
     * @param upper_bounds upper boundary of the affine constraint
    */
    void CalculateAffineConstraint(
        std::vector<c_float> *A_data,
        std::vector<c_int> *A_indices,
        std::vector<c_int> *A_indptr,
        std::vector<c_float> *lower_bounds,
        std::vector<c_float> *upper_bounds);
    /**
     * @brief Setup the primal warm start for the solver
     * @param primal_warm_start warmup matrix
    */
    void SetupPrimalWarmStart(std::vector<c_float> *primal_warm_start);

    /**
     * @brief solve the qp problem with osqp
     * @param kernel_dim the dimension of the kernel matrix
     * @param num_affine_constraint the number of the affine constraint
     * @param P_data data of the kernel matrix
     * @param P_indices indices of the kernel matrix
     * @param P_indptr indptr of the kernel matrix
     * @param A_data data of the affine constraint matrix
     * @param A_indices indices of the affine constraint matrix
     * @param A_indptr indptr of the affine constraint matrix
     * @param lower_bounds lower boundary of the affine constraint
     * @param upper_bounds upper boundary of the affine constraint
     * @param q offset term of the objective function
     * @param primal_warm_start warmup matrix
     * @param data data of the osqp solver
     * @param work work of the osqp solver
     * @param settings settings of the osqp solver
     * @return true if success
    */
    bool OptimizeWithOSQP(
        const size_t kernel_dim, const size_t num_affine_constraint,
        std::vector<c_float>* P_data, std::vector<c_int>* P_indices,
        std::vector<c_int>* P_indptr, std::vector<c_float>* A_data,
        std::vector<c_int>* A_indices, std::vector<c_int>* A_indptr,
        std::vector<c_float>* lower_bounds, std::vector<c_float>* upper_bounds,
        std::vector<c_float>* q, std::vector<c_float>* primal_warm_start,
        OSQPData* data, OSQPWorkspace** work, OSQPSettings* settings);

    /**
     * @brief Generate the safe corridor for each point
    */
    void GenerateSafeCorridor();
    
    /**
     * @brief Expand the bounding box of the safe corridor
     * @param box the bounding box of the safe corridor
    */
    void ExpandBox(AABox2d &box);
    /**
     * @brief Check collision
     * @param corners the corners of the bounding box
     * @return true if collision
    */
    bool CheckCollision(
        const std::vector<Eigen::Vector2d> &corners);
    /**
     * @brief Check collision
     * @param point the point to be checked
     * @return true if collision
    */
    bool CheckCollision(
        const Eigen::Vector2d &point);              

    //////////////// variables ////////////////
    // settings
    int max_iter_ = 1000;
    int expand_max_num_ = 20;
    double eps_abs_ = 1e-5;
    double eps_rel_ = 1e-5;
    double max_iter_distance_ = 0.5;

    //cost function weight
    double w_smooth_ = 1.0;
    double w_ref_ = 1.0;
    double clearance_distance_ = 0.15;
    double clearance_weight_ = 10.0;
    double maximum_curvature_ = std::numeric_limits<double>::infinity();

    //optimization variables
    int num_of_points_ = 0;
    int num_of_variables_ = 0;
    int num_of_constraints_ = 0;

    //variables
    std::shared_ptr<planning::reference_line::ReferenceLine> ref_line_ptr_;
    GridMap::Ptr grid_map_ptr_;
    trajectory_data::LateralTrajectory initial_guess_, opt_traj_;
    Eigen::Vector3d robot_state_;
    std::vector<AABox2d> safe_corridor_;
};
}

#endif //OTL_PLANNER__OTL_PLANNER_OPTIMIZER_H_
