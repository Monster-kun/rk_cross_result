/**
 * @author: Junfeng Guo
 * @date: 2024-03-29
*/
#pragma once 
#ifndef INTERPOLATION__CUBIC_POLYNOMIAL_CURVE_HPP_
#define INTERPOLATION__CUBIC_POLYNOMIAL_CURVE_HPP_

#include <stdint.h> 
#include <vector>
#include <array>
#include "interpolation/base_polynomial_curve.hpp"

namespace interpolation
{
/**
 * @brief Cubic polynomial interpolation
 * solve for y(s) = a0 + a1 * (s - si) + a2 * (s - si)^2 + a3 * (s - si)^3
*/
class CubicPolynomialCurve : public BasePolynomialCurve
{
public:
    CubicPolynomialCurve() = default;
    ~CubicPolynomialCurve() = default;
    /**
     * @brief Constructor of the entire cubic polynomial curve with given range
     * @param start: start point boundary condition
     * @param end: end point boundary condition
     * @param param: range of the curve
    */
    CubicPolynomialCurve(
        const std::array<double, 2>& start, const std::array<double, 2>& end, const double param);    
    /**
     * @brief Constructor of the entire cubic polynomial curve with given range
     * @param x0: start point position
     * @param dx0: start point first order derivative
     * @param x1: end point position
     * @param dx1: end point first order derivative
     * @param param: range of the curve
    */
    CubicPolynomialCurve(
        const double x0, const double dx0, const double x1, const double dx1, const double param);
    /**
     * @brief Solve for the value of the cubic polynomial curve at given param
     * @param x0: start point position
     * @param dx0: start point first order derivative
     * @param x1: end point position
     * @param dx1: end point first order derivative
     * @param param: range of the curve
    */
    void ComputeCoefficients(
        const double x0, const double dx0, const double x1, const double dx1, const double param);
    /**
     * @brief Solve for the value of the cubic polynomial curve at given param with given order
     * @param order: order of the derivative
     * @param param: range of the curve
     * @return value of the curve in the given order
    */
    double Evaluate(const uint32_t order, const double t) const;
    /**
     * @brief Get the coefficients of the cubic polynomial curve
     * @return coefficients of the curve
    */
    std::array<double, 4> GetCoefficients() const {return coeffs_;};
private:
    std::array<double, 4> coeffs_= {0.0, 0.0, 0.0, 0.0};
    std::array<double, 2> start_ = {0.0, 0.0};
    std::array<double, 2> end_ = {0.0, 0.0};
    double param_ = 0.0;
    double param_inv_ = 0.0;
};  // class CubicPolynomialCurve
}
#endif // INTERPOLATION__CUBIC_POLYNOMIAL_CURVE_HPP_