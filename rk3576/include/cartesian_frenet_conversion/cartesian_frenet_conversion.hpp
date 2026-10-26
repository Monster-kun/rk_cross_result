/** 
 * Cartesian_frenet_conversion 
 * @description 
 * @author yaojianming 
 * @creat 2023-06-04 19:35:18 
 */
#pragma once

#include <cmath>
#include <array>

namespace common{
namespace math{

class CartesianFrenetConverter{
public:
  CartesianFrenetConverter() = delete;
  static void cartesian_to_frenet(const double rs, const double rx,
                                 const double ry, const double rtheta,
                                 const double rkappa, const double rdkappa,
                                 const double x, const double y,
                                 const double v, const double a,
                                 const double theta, const double kappa,
                                 std::array<double,3>* ptr_s,
                                 std::array<double,3>* ptr_l);
  static void frenet_to_cartesian(const double rs, const double rx,
                                  const double ry, const double rtheta,
                                  const double rkappa, const double rdkappa,
                                  const std::array<double, 3>& s_condition,
                                  const std::array<double, 3>& d_condition,
                                  double* const ptr_x, double*const ptr_y,
                                  double* const ptr_theta,
                                  double* const ptr_kappa, double* const ptr_v,
                                  double* const ptr_a, double* const ptr_atheta);
};

} // namespace math
} // namespace common