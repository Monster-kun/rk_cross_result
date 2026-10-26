/*
 * @Author: yaojianming
 * @Date: 2023-10-09 14:37:46
 * @LastEditors: yaojianming youjianming123@qq.com
 * @LastEditTime: 2023-10-10 21:19:05
 * @FilePath: /vscode_ros2_workspace-humble/src/common/math/mpc_solver/include/mpc_solver/mpc_osqp.hpp
 * @Description: 
 */
#pragma once
#include <eigen3/Eigen/Dense> 
#include <rclcpp/rclcpp.hpp>
#include <rclcpp/logger.hpp>
#include <string>
#include "osqp/osqp.h"

namespace common{
namespace math{


typedef int size_t;

class MpcOsqp : public rclcpp::Node
{

public:
  /**
  * @brief Solver for discrete-time model predictive control problem.
  * @param matrix_a The system dynamic matrix
  * @param matrix_b The control matrix
  * @param matrix_q The cost matrix for control state
  * @param matrix_lower The lower bound control constrain matrix
  * @param matrix_upper The upper bound control constrain matrix
  * @param matrix_initial_state The initial state matrix
  * @param max_iter The maximum iterations
  */
  MpcOsqp(const std::vector<Eigen::MatrixXd> &v_matrix_a,
          const std::vector<Eigen::MatrixXd> &v_matrix_b,
          const std::vector<Eigen::MatrixXd> &v_matrix_c,
          const Eigen::MatrixXd &matrix_q, const Eigen::MatrixXd &matrix_r,
          const Eigen::MatrixXd &matrix_initial_x,
          const Eigen::MatrixXd &matrix_u_lower,
          const Eigen::MatrixXd &matrix_u_upper,
          const Eigen::MatrixXd &matrix_x_lower,
          const Eigen::MatrixXd &matrix_x_upper,
          const std::vector<Eigen::MatrixXd> &v_matrix_x_ref,
          const std::vector<Eigen::MatrixXd> &v_matrix_u_ref,
          const int max_iter,
          const int horizon, const double eps_abs);
  bool Solve(std::vector<double> *control_cmd); 
private:
  void CalculateKernel(std::vector<c_float> *P_data,
                       std::vector<c_int> *P_indices,
                       std::vector<c_int> *P_indptr);
  void CalculateEqualityConstraint(std::vector<c_float> *A_data,
                                   std::vector<c_int> *A_indices,
                                   std::vector<c_int> *A_indptr);
  void CalculateGradient();
  void CalculateConstraintVectors();
  OSQPSettings *Settings();
  OSQPData *Data();
  void FreeData(OSQPData *data);
  void DEBUG_LOG_MATRIX(std::string msg,Eigen::MatrixXd mat);

  template <typename T>
  T *CopyData(const std::vector<T> &vec) {
    T *data = new T[vec.size()];
    memcpy(data, vec.data(), sizeof(T) * vec.size());
    return data;
  }

 private:
  std::vector<Eigen::MatrixXd> v_matrix_a_;
  std::vector<Eigen::MatrixXd> v_matrix_b_;
  std::vector<Eigen::MatrixXd> v_matrix_c_;
  Eigen::MatrixXd matrix_q_;
  Eigen::MatrixXd matrix_r_;
  Eigen::MatrixXd matrix_initial_x_;
  const Eigen::MatrixXd matrix_u_lower_;
  const Eigen::MatrixXd matrix_u_upper_;
  const Eigen::MatrixXd matrix_x_lower_;
  const Eigen::MatrixXd matrix_x_upper_;
  const std::vector<Eigen::MatrixXd> v_matrix_x_ref_;
  const std::vector<Eigen::MatrixXd> v_matrix_u_ref_;
  int max_iteration_;
  size_t horizon_;
  double eps_abs_;
  size_t state_dim_;
  size_t control_dim_;
  size_t num_param_;
  int num_constraint_;
  Eigen::VectorXd gradient_;
  Eigen::VectorXd lowerBound_;
  Eigen::VectorXd upperBound_; 

};
}//math
}//common