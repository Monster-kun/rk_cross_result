#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "dualackermann_controller::dualackermann_controller" for configuration "Release"
set_property(TARGET dualackermann_controller::dualackermann_controller APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(dualackermann_controller::dualackermann_controller PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libdualackermann_controller.so"
  IMPORTED_SONAME_RELEASE "libdualackermann_controller.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS dualackermann_controller::dualackermann_controller )
list(APPEND _IMPORT_CHECK_FILES_FOR_dualackermann_controller::dualackermann_controller "${_IMPORT_PREFIX}/lib/libdualackermann_controller.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
