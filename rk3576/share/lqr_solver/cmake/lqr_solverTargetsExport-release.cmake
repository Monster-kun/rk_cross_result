#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "lqr_solver::lqr_solver" for configuration "Release"
set_property(TARGET lqr_solver::lqr_solver APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(lqr_solver::lqr_solver PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/liblqr_solver.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS lqr_solver::lqr_solver )
list(APPEND _IMPORT_CHECK_FILES_FOR_lqr_solver::lqr_solver "${_IMPORT_PREFIX}/lib/liblqr_solver.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
