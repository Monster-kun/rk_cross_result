#pragma once

#include "trajectory_data/longitudinal_trajectory.hpp"

namespace otl_planner
{
// Accelerate or brake toward a positive cruise speed with bounded acceleration.
// Samples include the exact ramp boundary and path end, with increasing time.
trajectory_data::LongitudinalTrajectory BuildCruiseVelocityProfile(
    double distance, double initial_speed, double target_speed, double max_acceleration);
// Plan a forward stop within distance. Preserve the measured initial speed,
// enforce the speed limit after any initial overspeed has been braked away,
// and keep acceleration magnitude within max_acceleration. Invalid inputs or
// insufficient braking distance return an empty profile.
trajectory_data::LongitudinalTrajectory BuildTerminalVelocityProfile(
    double distance, double initial_speed, double speed_limit, double max_acceleration);
} // namespace otl_planner
