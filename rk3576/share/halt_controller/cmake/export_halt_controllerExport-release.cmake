#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "halt_controller::halt_controller" for configuration "Release"
set_property(TARGET halt_controller::halt_controller APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(halt_controller::halt_controller PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libhalt_controller.so"
  IMPORTED_SONAME_RELEASE "libhalt_controller.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS halt_controller::halt_controller )
list(APPEND _IMPORT_CHECK_FILES_FOR_halt_controller::halt_controller "${_IMPORT_PREFIX}/lib/libhalt_controller.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
