# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target behavior_msgs::behavior_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${behavior_msgs_TARGETS}.
if(behavior_msgs_TARGETS AND NOT TARGET behavior_msgs::behavior_msgs)
  add_library(behavior_msgs::behavior_msgs INTERFACE IMPORTED)
  set_target_properties(behavior_msgs::behavior_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${behavior_msgs_TARGETS}")
endif()
