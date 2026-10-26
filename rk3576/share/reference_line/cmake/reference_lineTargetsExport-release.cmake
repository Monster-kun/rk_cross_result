#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "reference_line::reference_line" for configuration "Release"
set_property(TARGET reference_line::reference_line APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(reference_line::reference_line PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libreference_line.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS reference_line::reference_line )
list(APPEND _IMPORT_CHECK_FILES_FOR_reference_line::reference_line "${_IMPORT_PREFIX}/lib/libreference_line.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
