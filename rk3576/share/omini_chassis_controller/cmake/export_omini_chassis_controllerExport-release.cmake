#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "omini_chassis_controller::omini_chassis_controller" for configuration "Release"
set_property(TARGET omini_chassis_controller::omini_chassis_controller APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(omini_chassis_controller::omini_chassis_controller PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libomini_chassis_controller.so"
  IMPORTED_SONAME_RELEASE "libomini_chassis_controller.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS omini_chassis_controller::omini_chassis_controller )
list(APPEND _IMPORT_CHECK_FILES_FOR_omini_chassis_controller::omini_chassis_controller "${_IMPORT_PREFIX}/lib/libomini_chassis_controller.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
