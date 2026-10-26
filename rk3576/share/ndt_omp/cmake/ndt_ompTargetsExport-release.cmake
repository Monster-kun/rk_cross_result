#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ndt_omp::ndt_omp" for configuration "Release"
set_property(TARGET ndt_omp::ndt_omp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(ndt_omp::ndt_omp PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libndt_omp.so"
  IMPORTED_SONAME_RELEASE "libndt_omp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS ndt_omp::ndt_omp )
list(APPEND _IMPORT_CHECK_FILES_FOR_ndt_omp::ndt_omp "${_IMPORT_PREFIX}/lib/libndt_omp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
