# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target se2_grid_msgs::se2_grid_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${se2_grid_msgs_TARGETS}.
if(se2_grid_msgs_TARGETS AND NOT TARGET se2_grid_msgs::se2_grid_msgs)
  add_library(se2_grid_msgs::se2_grid_msgs INTERFACE IMPORTED)
  set_target_properties(se2_grid_msgs::se2_grid_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${se2_grid_msgs_TARGETS}")
endif()
