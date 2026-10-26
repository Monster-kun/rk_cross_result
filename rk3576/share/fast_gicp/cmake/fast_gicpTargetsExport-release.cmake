#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "fast_gicp::fast_gicp" for configuration "Release"
set_property(TARGET fast_gicp::fast_gicp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(fast_gicp::fast_gicp PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libfast_gicp.so"
  IMPORTED_SONAME_RELEASE "libfast_gicp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS fast_gicp::fast_gicp )
list(APPEND _IMPORT_CHECK_FILES_FOR_fast_gicp::fast_gicp "${_IMPORT_PREFIX}/lib/libfast_gicp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
