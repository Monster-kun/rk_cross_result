# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_points_map_loader_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED points_map_loader_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(points_map_loader_FOUND FALSE)
  elseif(NOT points_map_loader_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(points_map_loader_FOUND FALSE)
  endif()
  return()
endif()
set(_points_map_loader_CONFIG_INCLUDED TRUE)

# output package information
if(NOT points_map_loader_FIND_QUIETLY)
  message(STATUS "Found points_map_loader: 0.0.0 (${points_map_loader_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'points_map_loader' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${points_map_loader_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(points_map_loader_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${points_map_loader_DIR}/${_extra}")
endforeach()
