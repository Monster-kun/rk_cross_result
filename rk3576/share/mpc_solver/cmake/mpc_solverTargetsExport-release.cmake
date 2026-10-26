#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "mpc_solver::mpc_solver" for configuration "Release"
set_property(TARGET mpc_solver::mpc_solver APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(mpc_solver::mpc_solver PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmpc_solver.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS mpc_solver::mpc_solver )
list(APPEND _IMPORT_CHECK_FILES_FOR_mpc_solver::mpc_solver "${_IMPORT_PREFIX}/lib/libmpc_solver.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
