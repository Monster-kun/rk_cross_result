# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target perception_msgs::perception_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${perception_msgs_TARGETS}.
if(perception_msgs_TARGETS AND NOT TARGET perception_msgs::perception_msgs)
  add_library(perception_msgs::perception_msgs INTERFACE IMPORTED)
  set_target_properties(perception_msgs::perception_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${perception_msgs_TARGETS}")
endif()
