#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "pure_pursuit_controller::pure_pursuit_controller" for configuration "Release"
set_property(TARGET pure_pursuit_controller::pure_pursuit_controller APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(pure_pursuit_controller::pure_pursuit_controller PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libpure_pursuit_controller.so"
  IMPORTED_SONAME_RELEASE "libpure_pursuit_controller.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS pure_pursuit_controller::pure_pursuit_controller )
list(APPEND _IMPORT_CHECK_FILES_FOR_pure_pursuit_controller::pure_pursuit_controller "${_IMPORT_PREFIX}/lib/libpure_pursuit_controller.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
