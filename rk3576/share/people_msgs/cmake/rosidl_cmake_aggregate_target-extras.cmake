# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target people_msgs::people_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${people_msgs_TARGETS}.
if(people_msgs_TARGETS AND NOT TARGET people_msgs::people_msgs)
  add_library(people_msgs::people_msgs INTERFACE IMPORTED)
  set_target_properties(people_msgs::people_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${people_msgs_TARGETS}")
endif()
