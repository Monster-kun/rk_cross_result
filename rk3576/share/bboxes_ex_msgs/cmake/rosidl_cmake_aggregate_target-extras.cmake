# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target bboxes_ex_msgs::bboxes_ex_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${bboxes_ex_msgs_TARGETS}.
if(bboxes_ex_msgs_TARGETS AND NOT TARGET bboxes_ex_msgs::bboxes_ex_msgs)
  add_library(bboxes_ex_msgs::bboxes_ex_msgs INTERFACE IMPORTED)
  set_target_properties(bboxes_ex_msgs::bboxes_ex_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${bboxes_ex_msgs_TARGETS}")
endif()
