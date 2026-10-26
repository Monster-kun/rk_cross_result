# generated from ament_cmake_export_libraries/cmake/template/ament_cmake_export_libraries.cmake.in

set(_exported_libraries "behavior_tree;follow_path_action_node;follow_path_cancel_action_node;follow_point_action_node;compute_path_to_pose_action_node;navigate_through_poses_action_node;update_goal_action_node;switch_controller_action_node;find_turn_angle_by_path_action_node;update_global_goals_action_node;wait_action_node;select_planner_action_node;is_stuck_condition_node;is_path_valid_condition_node;is_path_collision_condition_node;pipeline_sequence_control_node;reactive_navigation_sequence_control_node;repeat_sequence_control_node;round_robin_control_node;recovery_control_node;sequence_path_decorator_node;goal_handler_decorator_node;path_ahead_checker_decorator_node;rate_controller_decorator_node;single_trigger_decorator_node;path_validation_checker_decorator_node")
set(_exported_library_names "")

# populate behavior_tree_LIBRARIES
if(NOT _exported_libraries STREQUAL "")
  # loop over libraries, either target names or absolute paths
  list(LENGTH _exported_libraries _length)
  set(_i 0)
  while(_i LESS _length)
    list(GET _exported_libraries ${_i} _arg)

    # pass linker flags along
    if("${_arg}" MATCHES "^-" AND NOT "${_arg}" MATCHES "^-[l|framework]")
      list(APPEND behavior_tree_LIBRARIES "${_arg}")
      math(EXPR _i "${_i} + 1")
      continue()
    endif()

    if("${_arg}" MATCHES "^(debug|optimized|general)$")
      # remember build configuration keyword
      # and get following library
      set(_cfg "${_arg}")
      math(EXPR _i "${_i} + 1")
      if(_i EQUAL _length)
        message(FATAL_ERROR "Package 'behavior_tree' passes the build configuration keyword '${_cfg}' as the last exported library")
      endif()
      list(GET _exported_libraries ${_i} _library)
    else()
      # the value is a library without a build configuration keyword
      set(_cfg "")
      set(_library "${_arg}")
    endif()
    math(EXPR _i "${_i} + 1")

    if(NOT IS_ABSOLUTE "${_library}")
      # search for library target relative to this CMake file
      set(_lib "NOTFOUND")
      find_library(
        _lib NAMES "${_library}"
        PATHS "${behavior_tree_DIR}/../../../lib"
        NO_DEFAULT_PATH NO_CMAKE_FIND_ROOT_PATH
      )

      if(NOT _lib)
        # warn about not existing library and ignore it
        message(FATAL_ERROR "Package 'behavior_tree' exports the library '${_library}' which couldn't be found")
      elseif(NOT IS_ABSOLUTE "${_lib}")
        # the found library must be an absolute path
        message(FATAL_ERROR "Package 'behavior_tree' found the library '${_library}' at '${_lib}' which is not an absolute path")
      elseif(NOT EXISTS "${_lib}")
        # the found library must exist
        message(FATAL_ERROR "Package 'behavior_tree' found the library '${_lib}' which doesn't exist")
      else()
        list(APPEND behavior_tree_LIBRARIES ${_cfg} "${_lib}")
      endif()

    else()
      if(NOT EXISTS "${_library}")
        # the found library must exist
        message(WARNING "Package 'behavior_tree' exports the library '${_library}' which doesn't exist")
      else()
        list(APPEND behavior_tree_LIBRARIES ${_cfg} "${_library}")
      endif()
    endif()
  endwhile()
endif()

# find_library() library names with optional LIBRARY_DIRS
# and add the libraries to behavior_tree_LIBRARIES
if(NOT _exported_library_names STREQUAL "")
  # loop over library names
  # but remember related build configuration keyword if available
  list(LENGTH _exported_library_names _length)
  set(_i 0)
  while(_i LESS _length)
    list(GET _exported_library_names ${_i} _arg)
    # pass linker flags along
    if("${_arg}" MATCHES "^-" AND NOT "${_arg}" MATCHES "^-[l|framework]")
      list(APPEND behavior_tree_LIBRARIES "${_arg}")
      math(EXPR _i "${_i} + 1")
      continue()
    endif()

    if("${_arg}" MATCHES "^(debug|optimized|general)$")
      # remember build configuration keyword
      # and get following library name
      set(_cfg "${_arg}")
      math(EXPR _i "${_i} + 1")
      if(_i EQUAL _length)
        message(FATAL_ERROR "Package 'behavior_tree' passes the build configuration keyword '${_cfg}' as the last exported target")
      endif()
      list(GET _exported_library_names ${_i} _library)
    else()
      # the value is a library target without a build configuration keyword
      set(_cfg "")
      set(_library "${_arg}")
    endif()
    math(EXPR _i "${_i} + 1")

    # extract optional LIBRARY_DIRS from library name
    string(REPLACE ":" ";" _library_dirs "${_library}")
    list(GET _library_dirs 0 _library_name)
    list(REMOVE_AT _library_dirs 0)

    set(_lib "NOTFOUND")
    if(NOT _library_dirs)
      # search for library in the common locations
      find_library(
        _lib
        NAMES "${_library_name}"
      )
      if(NOT _lib)
        # warn about not existing library and later ignore it
        message(WARNING "Package 'behavior_tree' exports library '${_library_name}' which couldn't be found")
      endif()
    else()
      # search for library in the specified directories
      find_library(
        _lib
        NAMES "${_library_name}"
        PATHS ${_library_dirs}
        NO_DEFAULT_PATH NO_CMAKE_FIND_ROOT_PATH
      )
      if(NOT _lib)
        # warn about not existing library and later ignore it
        message(WARNING
          "Package 'behavior_tree' exports library '${_library_name}' with LIBRARY_DIRS '${_library_dirs}' which couldn't be found")
      endif()
    endif()
    if(_lib)
      list(APPEND behavior_tree_LIBRARIES ${_cfg} "${_lib}")
    endif()
  endwhile()
endif()

# TODO(dirk-thomas) deduplicate behavior_tree_LIBRARIES
# while maintaining library order
# as well as build configuration keywords
# as well as linker flags
