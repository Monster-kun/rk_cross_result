# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_relocation_server_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED relocation_server_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(relocation_server_FOUND FALSE)
  elseif(NOT relocation_server_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(relocation_server_FOUND FALSE)
  endif()
  return()
endif()
set(_relocation_server_CONFIG_INCLUDED TRUE)

# output package information
if(NOT relocation_server_FIND_QUIETLY)
  message(STATUS "Found relocation_server: 0.0.0 (${relocation_server_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'relocation_server' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${relocation_server_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(relocation_server_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${relocation_server_DIR}/${_extra}")
endforeach()
