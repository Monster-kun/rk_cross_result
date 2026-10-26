/**
 * @file qp_optimizer.hpp
 * @author Junfeng Guo
 * @brief qp optimizer for lanelet2 planner
 * @version 0.1
 * @date 2024-12-30
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#pragma once
#include <vector>
#include <cmath>
#include <eigen3/Eigen/Dense>
#include <eigen3/Eigen/Core>
#include <osqp/osqp.h>

/* local headers */
#include "reference_line/reference_line.hpp"
#include <geometry_msgs/msg/point.hpp>
#include "reference_line/reference_line.hpp"
#include "planning_basic_data/trajectory_point.hpp"

namespace lanelet2_planner
{
class QpOptimizer
{
using PathPt = planning_basic_data::PathPoint;
public:
    QpOptimizer(const double w_ref, const double w_length, const double w_smooth);
    ~QpOptimizer();

    void setPath(
        const std::vector<geometry_msgs::msg::Point>& centerline,
        const std::vector<geometry_msgs::msg::Point>& left_bound,
        const std::vector<geometry_msgs::msg::Point>& right_bound);
    bool optimize();
    std::vector<geometry_msgs::msg::Point> getPath();

    typedef std::shared_ptr<QpOptimizer> Ptr;

private:
    //////////////// functions ////////////////
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

    //////////////// variables ////////////////
    // settings
    int max_iter_ = 1000;
    int move_max_num_ = 20;
    int expand_max_num_ = 20;
    double eps_abs_ = 1e-5;
    double eps_rel_ = 1e-5;
    double max_iter_distance_ = 0.5;     

    //optimization variables
    int num_of_points_ = 0;
    int num_of_variables_ = 0;
    int num_of_constraints_ = 0;

    std::vector<Eigen::Vector2d> init_path_, result_;
    planning::reference_line::ReferenceLine left_bound_, right_bound_;
    double w_ref_, w_length_, w_smooth_;

};
}