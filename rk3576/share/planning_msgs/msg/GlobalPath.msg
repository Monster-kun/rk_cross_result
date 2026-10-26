std_msgs/Header header
planning_msgs/Trajectory main_trajectory
geometry_msgs/Point[] left_bound
geometry_msgs/Point[] right_bound
# Path progress (metres from the first trajectory waypoint) for each boundary point.
# These keep each boundary point attached to its position along the route.
float64[] left_bound_s
float64[] right_bound_s
# Ordered intermediate endpoints that must be reached before the final goal.
uint32[] checkpoint_indices
# Repeat the closed suffix beginning at loop_start_index without ending FollowPath.
bool loop
uint32 loop_start_index
# Bounds are resampled independently; their cycle offsets are not waypoint indices.
uint32 loop_left_bound_start_index
uint32 loop_right_bound_start_index
