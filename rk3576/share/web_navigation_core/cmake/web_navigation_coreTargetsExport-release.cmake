#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "web_navigation_core::web_navigation_core" for configuration "Release"
set_property(TARGET web_navigation_core::web_navigation_core APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(web_navigation_core::web_navigation_core PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libweb_navigation_core.so"
  IMPORTED_SONAME_RELEASE "libweb_navigation_core.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS web_navigation_core::web_navigation_core )
list(APPEND _IMPORT_CHECK_FILES_FOR_web_navigation_core::web_navigation_core "${_IMPORT_PREFIX}/lib/libweb_navigation_core.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
