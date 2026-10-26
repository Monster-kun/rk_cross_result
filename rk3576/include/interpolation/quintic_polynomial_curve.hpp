/**
 * @author: Junfeng Guo
 * @date: 2024-03-29
*/
#pragma once 
#ifndef INTERPOLATION__QUINTIC_POLYNOMIAL_CURVE_HPP_
#define INTERPOLATION__QUINTIC_POLYNOMIAL_CURVE_HPP_
#include <stdint.h> 
#include <vector>
#include <array>
#include <eigen3/Eigen/Dense>
#include "interpolation/base_polynomial_curve.hpp"
namespace interpolation
{
/**
 * @brief Quintic polynomial interpolation
 * solve for y(s) = a0 + a1 * (s - si) + a2 * (s - si)^2 + a3 * (s - si)^3 
 * + a4 * (s - si)^4 + a5 * (s - si)^5
*/
class QuinticPolynomialCurve : public BasePolynomialCurve
{
public:
    QuinticPolynomialCurve() = default;
    ~QuinticPolynomialCurve() = default;
    /**
     * @brief Constructor of the entire quintic polynomial curve with given range
     * @param start: start point boundary condition
     * @param end: end point boundary condition
     * @param param: range of the curve
    */
    QuinticPolynomialCurve(
        const std::array<double, 3>& start, const std::array<double, 3>& end, const double param);
    /**
     * @brief Constructor of the entire quintic polynomial curve with given range
     * @param x0: start point position
     * @param dx0: start point first order derivative
     * @param ddx0: start point second order derivative
     * @param x1: end point position
     * @param dx1: end point first order derivative
     * @param ddx1: end point second order derivative
     * @param param: range of the curve
    */
    QuinticPolynomialCurve(
        const double x0, const double dx0, const double ddx0, const double x1, const double dx1, const double ddx1, const double param);
    /**
     * @brief Constructor of the entire quintic polynomial curve with given coefficients
     * @param coeffs: coefficients of the curve
    */    
    QuinticPolynomialCurve(const std::array<double, 6> coeffs);
    /**
     * @brief Solve for the value of the quintic polynomial curve at given param
     * @param x0: start point position
     * @param dx0: start point first order derivative
     * @param ddx0: start point second order derivative
     * @param x1: end point position
     * @param dx1: end point first order derivative
     * @param ddx1: end point second order derivative
     * @param param: range of the curve
    */
    void ComputeCoefficients(
        const double x0, const double dx0, const double ddx0, const double x1, const double dx1, const double ddx1, const double param);
    /**
     * @brief Solve for the value of the quartic polynomial curve at given param with given order
     * @param order: order of the derivative
     * @param param: range of the curve
     * @return value of the curve in the given order
    */
    double Evaluate(const uint32_t order, const double t) const;
private:
    std::array<double, 6> coeffs_= {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    std::array<double, 3> start_ = {0.0, 0.0, 0.0};
    std::array<double, 3> end_ = {0.0, 0.0, 0.0};
    double param_ = 0.0;
    double param_inv_ = 0.0;
};  // class QuinticPolynomialCurve
}
#endif // INTERPOLATION__QUINTIC_POLYNOMIAL_CURVE_HPP_