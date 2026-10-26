# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target web_navigation_msgs::web_navigation_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${web_navigation_msgs_TARGETS}.
if(web_navigation_msgs_TARGETS AND NOT TARGET web_navigation_msgs::web_navigation_msgs)
  add_library(web_navigation_msgs::web_navigation_msgs INTERFACE IMPORTED)
  set_target_properties(web_navigation_msgs::web_navigation_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${web_navigation_msgs_TARGETS}")
endif()
