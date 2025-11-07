# Install script for directory: /usr/local/lib/cmake/3rdparty/xtensor

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xtensor" TYPE FILE FILES
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xaccessible.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xaccumulator.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xadapt.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xarray.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xassign.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xaxis_iterator.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xaxis_slice_iterator.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xblockwise_reducer.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xblockwise_reducer_functors.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xbroadcast.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xbuffer_adaptor.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xbuilder.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xchunked_array.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xchunked_assign.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xchunked_view.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xcomplex.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xcontainer.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xcsv.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xdynamic_view.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xeval.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xexception.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xexpression.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xexpression_holder.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xexpression_traits.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xfixed.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xfunction.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xfunctor_view.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xgenerator.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xhistogram.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xindex_view.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xinfo.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xio.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xiterable.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xiterator.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xjson.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xlayout.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xmanipulation.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xmasked_view.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xmath.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xmime.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xmultiindex_iterator.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xnoalias.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xnorm.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xnpy.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xoffset_view.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xoperation.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xoptional.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xoptional_assembly.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xoptional_assembly_base.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xoptional_assembly_storage.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xpad.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xrandom.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xreducer.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xrepeat.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xscalar.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xsemantic.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xset_operation.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xshape.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xslice.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xsort.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xstorage.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xstrided_view.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xstrided_view_base.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xstrides.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xtensor.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xtensor_config.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xtensor_forward.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xtensor_simd.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xutils.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xvectorize.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xview.hpp"
    "/usr/local/lib/cmake/3rdparty/xtensor/include/xtensor/xview_utils.hpp"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/xtensor" TYPE FILE FILES
    "/ws/src/rae-ros/build/rae_camera/xtensor/xtensorConfig.cmake"
    "/ws/src/rae-ros/build/rae_camera/xtensor/xtensorConfigVersion.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/xtensor/xtensorTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/xtensor/xtensorTargets.cmake"
         "/ws/src/rae-ros/build/rae_camera/xtensor/CMakeFiles/Export/lib/cmake/xtensor/xtensorTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/xtensor/xtensorTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/xtensor/xtensorTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/xtensor" TYPE FILE FILES "/ws/src/rae-ros/build/rae_camera/xtensor/CMakeFiles/Export/lib/cmake/xtensor/xtensorTargets.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/ws/src/rae-ros/build/rae_camera/xtensor/xtensor.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/ws/src/rae-ros/build/rae_camera/xtensor.hpp")
endif()

