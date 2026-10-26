builtin_interfaces/Time start_time
float64 end_time

bool use_init # if true, use the normal trajectory
float64 yaw # target angle

# minco trajectory
geometry_msgs/Vector3 head_x
geometry_msgs/Vector3 head_y
geometry_msgs/Vector3 tail_x
geometry_msgs/Vector3 tail_y

float64[] t_pts
geometry_msgs/Point[] pos_pts
float64[] yaw_pts

# normal trajectory
Waypoint[] waypoints


