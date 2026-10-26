# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target super_lio_localization::super_lio_localization
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${super_lio_localization_TARGETS}.
if(super_lio_localization_TARGETS AND NOT TARGET super_lio_localization::super_lio_localization)
  add_library(super_lio_localization::super_lio_localization INTERFACE IMPORTED)
  set_target_properties(super_lio_localization::super_lio_localization PROPERTIES
    INTERFACE_LINK_LIBRARIES "${super_lio_localization_TARGETS}")
endif()
