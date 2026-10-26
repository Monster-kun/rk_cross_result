/**
 * @author: Junfeng Guo
 * @date: 2024-03-29
*/
#pragma once 
#ifndef INTERPOLATION__BASE_POLYNOMIAL_CURVE_HPP_
#define INTERPOLATION__BASE_POLYNOMIAL_CURVE_HPP_

#include <stdint.h> 

namespace interpolation
{
/**
 * @brief Base polynomial interpolation
*/
class BasePolynomialCurve
{
public:
    BasePolynomialCurve() = default;
    virtual ~BasePolynomialCurve() = default;
    virtual double Evaluate(const uint32_t order, const double param) const = 0;
};  // class BasePolynomialCurve
}
#endif // INTERPOLATION__BASE_POLYNOMIAL_CURVE_HPP_