# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target planning_msgs::planning_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${planning_msgs_TARGETS}.
if(planning_msgs_TARGETS AND NOT TARGET planning_msgs::planning_msgs)
  add_library(planning_msgs::planning_msgs INTERFACE IMPORTED)
  set_target_properties(planning_msgs::planning_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${planning_msgs_TARGETS}")
endif()
