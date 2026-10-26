#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "cartesian_frenet_conversion::cartesian_frenet_conversion" for configuration "Release"
set_property(TARGET cartesian_frenet_conversion::cartesian_frenet_conversion APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(cartesian_frenet_conversion::cartesian_frenet_conversion PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libcartesian_frenet_conversion.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS cartesian_frenet_conversion::cartesian_frenet_conversion )
list(APPEND _IMPORT_CHECK_FILES_FOR_cartesian_frenet_conversion::cartesian_frenet_conversion "${_IMPORT_PREFIX}/lib/libcartesian_frenet_conversion.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
