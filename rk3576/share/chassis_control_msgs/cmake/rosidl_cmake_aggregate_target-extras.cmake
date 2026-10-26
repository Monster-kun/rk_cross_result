# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target chassis_control_msgs::chassis_control_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${chassis_control_msgs_TARGETS}.
if(chassis_control_msgs_TARGETS AND NOT TARGET chassis_control_msgs::chassis_control_msgs)
  add_library(chassis_control_msgs::chassis_control_msgs INTERFACE IMPORTED)
  set_target_properties(chassis_control_msgs::chassis_control_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${chassis_control_msgs_TARGETS}")
endif()
