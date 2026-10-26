uint8 STARTED=0
uint8 SUCCEEDED=1
uint8 FAILED=2

std_msgs/Header header
string task_id
string ros_goal_uuid
string map_version
string planning_attempt_id
uint8 status
uint32 path_revision
geometry_msgs/Pose effective_endpoint
string error_code
string error_message
planning_msgs/GlobalPath path
