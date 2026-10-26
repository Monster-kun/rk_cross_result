#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "simple_controller::simple_controller" for configuration "Release"
set_property(TARGET simple_controller::simple_controller APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(simple_controller::simple_controller PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libsimple_controller.so"
  IMPORTED_SONAME_RELEASE "libsimple_controller.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS simple_controller::simple_controller )
list(APPEND _IMPORT_CHECK_FILES_FOR_simple_controller::simple_controller "${_IMPORT_PREFIX}/lib/libsimple_controller.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
