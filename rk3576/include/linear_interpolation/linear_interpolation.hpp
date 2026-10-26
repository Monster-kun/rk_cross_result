#ifndef LINEAR_INTERPOLATION_HPP_
#define LINEAR_INTERPOLATION_HPP_

#include <cmath>
#include <iostream>
#include <array>
#include "utils/math/normalization.hpp"
#include "planning_basic_data/trajectory_point.hpp"

namespace common {
namespace math {
namespace linear_interpolation {
using PathPoint = planning_basic_data::PathPoint;
using TrajectoryPoint = planning_basic_data::TrajectoryPoint;

double lerp(const double& x0, const double &t0, const double &x1, const double &t1, const double &t);

double slerp(const double a0, const double t0, const double a1, const double t1, const double t);
/**
 * @brief Interpolate using linear approximation
 * @param p0 the first point of the line, including x,y and s
 * @param p1 the second point of the line, including x,y and s
 * @param s the accumulated distance of the line
 * @return the interpolated point
*/
PathPoint InterpolateUsingLinearApproximation(const std::array<double,3> &p0,
                                            const std::array<double,3> &p1,
                                            const double s);          
/**
 * @brief Interpolate using linear approximation
 * @param p0 the first point of the line segment
 * @param p1 the second point of the line segment
 * @param s the accumulated distance of the line
 * @return the interpolated point
*/
PathPoint InterpolateUsingLinearApproximation(const PathPoint &p0,
                                            const PathPoint &p1,
                                            const double s);                                                                                                
/**
 * @brief Interpolate using linear approximation
 * @param p0 the first point of the line segment
 * @param p1 the second point of the line segment
 * @param t the time to interpolate
 * @return the interpolated point
*/
TrajectoryPoint InterpolateUsingLinearApproximation(const TrajectoryPoint &p0,
                                            const TrajectoryPoint &p1,
                                            const double t);     
} // namespace utils
} // namespace math
} // namespace common


#endif // LINEAR_INTERPOLATION_HPP_