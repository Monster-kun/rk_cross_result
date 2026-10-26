# generated from ament_cmake_export_include_directories/cmake/ament_cmake_export_include_directories-extras.cmake.in

set(_exported_include_dirs "${se2_grid_core_DIR}/../../../include;/usr/include/eigen3;/usr/include/pcl-1.12;/usr/include;/usr/include/ni;/usr/include/openni2")

# append include directories to se2_grid_core_INCLUDE_DIRS
# warn about not existing paths
if(NOT _exported_include_dirs STREQUAL "")
  find_package(ament_cmake_core QUIET REQUIRED)
  foreach(_exported_include_dir ${_exported_include_dirs})
    if(NOT IS_DIRECTORY "${_exported_include_dir}")
      message(WARNING "Package 'se2_grid_core' exports the include directory '${_exported_include_dir}' which doesn't exist")
    endif()
    normalize_path(_exported_include_dir "${_exported_include_dir}")
    list(APPEND se2_grid_core_INCLUDE_DIRS "${_exported_include_dir}")
  endforeach()
endif()
