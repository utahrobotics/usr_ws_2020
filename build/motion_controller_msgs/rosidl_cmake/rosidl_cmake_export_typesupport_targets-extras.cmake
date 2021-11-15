# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_typesupport_introspection_c:motion_controller_msgs__rosidl_typesupport_introspection_c;__rosidl_typesupport_introspection_cpp:motion_controller_msgs__rosidl_typesupport_introspection_cpp")

# populate motion_controller_msgs_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "motion_controller_msgs::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'motion_controller_msgs' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND motion_controller_msgs_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
