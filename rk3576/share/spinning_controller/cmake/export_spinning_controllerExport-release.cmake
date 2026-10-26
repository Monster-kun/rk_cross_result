#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "spinning_controller::spinning_controller" for configuration "Release"
set_property(TARGET spinning_controller::spinning_controller APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(spinning_controller::spinning_controller PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libspinning_controller.so"
  IMPORTED_SONAME_RELEASE "libspinning_controller.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS spinning_controller::spinning_controller )
list(APPEND _IMPORT_CHECK_FILES_FOR_spinning_controller::spinning_controller "${_IMPORT_PREFIX}/lib/libspinning_controller.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
