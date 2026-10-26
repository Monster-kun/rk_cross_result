# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target localization_msgs::localization_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${localization_msgs_TARGETS}.
if(localization_msgs_TARGETS AND NOT TARGET localization_msgs::localization_msgs)
  add_library(localization_msgs::localization_msgs INTERFACE IMPORTED)
  set_target_properties(localization_msgs::localization_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${localization_msgs_TARGETS}")
endif()
