# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target mapping_msgs::mapping_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${mapping_msgs_TARGETS}.
if(mapping_msgs_TARGETS AND NOT TARGET mapping_msgs::mapping_msgs)
  add_library(mapping_msgs::mapping_msgs INTERFACE IMPORTED)
  set_target_properties(mapping_msgs::mapping_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${mapping_msgs_TARGETS}")
endif()
