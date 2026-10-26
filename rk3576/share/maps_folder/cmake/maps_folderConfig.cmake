# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_maps_folder_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED maps_folder_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(maps_folder_FOUND FALSE)
  elseif(NOT maps_folder_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(maps_folder_FOUND FALSE)
  endif()
  return()
endif()
set(_maps_folder_CONFIG_INCLUDED TRUE)

# output package information
if(NOT maps_folder_FIND_QUIETLY)
  message(STATUS "Found maps_folder: 0.0.0 (${maps_folder_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'maps_folder' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${maps_folder_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(maps_folder_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${maps_folder_DIR}/${_extra}")
endforeach()
