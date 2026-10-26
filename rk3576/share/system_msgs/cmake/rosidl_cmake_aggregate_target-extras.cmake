# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target system_msgs::system_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${system_msgs_TARGETS}.
if(system_msgs_TARGETS AND NOT TARGET system_msgs::system_msgs)
  add_library(system_msgs::system_msgs INTERFACE IMPORTED)
  set_target_properties(system_msgs::system_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${system_msgs_TARGETS}")
endif()
