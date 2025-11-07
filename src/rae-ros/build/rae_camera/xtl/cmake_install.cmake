# Install script for directory: /usr/local/lib/cmake/3rdparty/xtl

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/ws/src/rae-ros/install/rae_camera")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xtl" TYPE FILE FILES
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xany.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xbasic_fixed_string.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xbase64.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xclosure.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xcomplex.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xcomplex_sequence.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xspan.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xspan_impl.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xdynamic_bitset.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xfunctional.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xhalf_float.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xhalf_float_impl.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xhash.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xhierarchy_generator.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xiterator_base.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xjson.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xmasked_value_meta.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xmasked_value.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xmeta_utils.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xmultimethods.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xoptional_meta.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xoptional.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xoptional_sequence.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xplatform.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xproxy_wrapper.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xsequence.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xsystem.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xtl_config.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xtype_traits.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xvariant.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xvariant_impl.hpp"
    "/usr/local/lib/cmake/3rdparty/xtl/include/xtl/xvisitor.hpp"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake/xtl" TYPE FILE FILES
    "/ws/src/rae-ros/build/rae_camera/xtl/xtlConfig.cmake"
    "/ws/src/rae-ros/build/rae_camera/xtl/xtlConfigVersion.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/cmake/xtl/xtlTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/cmake/xtl/xtlTargets.cmake"
         "/ws/src/rae-ros/build/rae_camera/xtl/CMakeFiles/Export/share/cmake/xtl/xtlTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/cmake/xtl/xtlTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/cmake/xtl/xtlTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake/xtl" TYPE FILE FILES "/ws/src/rae-ros/build/rae_camera/xtl/CMakeFiles/Export/share/cmake/xtl/xtlTargets.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pkgconfig" TYPE FILE FILES "/ws/src/rae-ros/build/rae_camera/xtl/xtl.pc")
endif()

