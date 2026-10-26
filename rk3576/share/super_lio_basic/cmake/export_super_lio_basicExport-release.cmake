#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "super_lio_basic::super_lio_basic" for configuration "Release"
set_property(TARGET super_lio_basic::super_lio_basic APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(super_lio_basic::super_lio_basic PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libsuper_lio_basic.so"
  IMPORTED_SONAME_RELEASE "libsuper_lio_basic.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS super_lio_basic::super_lio_basic )
list(APPEND _IMPORT_CHECK_FILES_FOR_super_lio_basic::super_lio_basic "${_IMPORT_PREFIX}/lib/libsuper_lio_basic.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
