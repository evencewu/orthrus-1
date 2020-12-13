# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_message_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED message_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(message_FOUND FALSE)
  elseif(NOT message_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(message_FOUND FALSE)
  endif()
  return()
endif()
set(_message_CONFIG_INCLUDED TRUE)

# output package information
if(NOT message_FIND_QUIETLY)
  message(STATUS "Found message: 0.0.0 (${message_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'message' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(message_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "rosidl_cmake-extras.cmake;ament_cmake_export_libraries-extras.cmake;ament_cmake_export_include_directories-extras.cmake;rosidl_cmake_export_typesupport_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${message_DIR}/${_extra}")
endforeach()
