#ifndef UTILS__MATH__UNIT_CONVERSION_HPP_
#define UTILS__MATH__UNIT_CONVERSION_HPP_

#include "utils/math/constants.hpp"

namespace common{
namespace math{
namespace utils
{
constexpr double deg2rad(const double deg)
{
  return deg * pi / 180.0;
}

constexpr double rad2deg(const double rad)
{
  return rad * 180.0 / pi;
}

constexpr double kmph2mps(const double kmph)
{
  return kmph * 1000.0 / 3600.0;
}

constexpr double mps2kmph(const double mps)
{
  return mps * 3600.0 / 1000.0;
}
}  // namespace utils
}  // namespace math
}  // namespace common

#endif  // UTILS__MATH__UNIT_CONVERSION_HPP_
