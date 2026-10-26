#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "nano_gicp::nano_gicp" for configuration "Release"
set_property(TARGET nano_gicp::nano_gicp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(nano_gicp::nano_gicp PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libnano_gicp.so"
  IMPORTED_SONAME_RELEASE "libnano_gicp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS nano_gicp::nano_gicp )
list(APPEND _IMPORT_CHECK_FILES_FOR_nano_gicp::nano_gicp "${_IMPORT_PREFIX}/lib/libnano_gicp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
