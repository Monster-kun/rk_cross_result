#pragma once
#include <cmath>

namespace omini_chassis_controller {
// Preserve the wheel velocity vector when folding a target into +/-90 degrees.
inline bool normalizeWheelCommand(double& angle, double& speed) {
    constexpr double pi = 3.14159265358979323846;
    if (!std::isfinite(angle) || !std::isfinite(speed)) return false;
    angle = std::remainder(angle, 2.0 * pi);
    if (angle > pi / 2.0) {
        angle -= pi;
        speed = -speed;
    } else if (angle < -pi / 2.0) {
        angle += pi;
        speed = -speed;
    }
    return true;
}
} // namespace omini_chassis_controller
