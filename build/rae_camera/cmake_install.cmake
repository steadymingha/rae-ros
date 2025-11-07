# Install script for directory: /ws/src/rae-ros/rae_camera

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/ws/install/rae_camera")
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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/camera" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/camera")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/camera"
         RPATH "/underlay_ws/install/depthai_bridge/lib:/opt/ros/humble/lib/aarch64-linux-gnu:/opt/ros/humble/lib:/underlay_ws/install/depthai_ros_msgs/lib:/usr/local/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/rae_camera" TYPE EXECUTABLE FILES "/ws/build/rae_camera/camera")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/camera" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/camera")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/camera"
         OLD_RPATH "/underlay_ws/install/depthai_bridge/lib:/opt/ros/humble/lib/aarch64-linux-gnu:/opt/ros/humble/lib:/underlay_ws/install/depthai_ros_msgs/lib:/usr/local/lib:"
         NEW_RPATH "/underlay_ws/install/depthai_bridge/lib:/opt/ros/humble/lib/aarch64-linux-gnu:/opt/ros/humble/lib:/underlay_ws/install/depthai_ros_msgs/lib:/usr/local/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/camera")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/stereo_depth" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/stereo_depth")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/stereo_depth"
         RPATH "/underlay_ws/install/depthai_bridge/lib:/opt/ros/humble/lib/aarch64-linux-gnu:/opt/ros/humble/lib:/underlay_ws/install/depthai_ros_msgs/lib:/usr/local/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/rae_camera" TYPE EXECUTABLE FILES "/ws/build/rae_camera/stereo_depth")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/stereo_depth" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/stereo_depth")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/stereo_depth"
         OLD_RPATH "/underlay_ws/install/depthai_bridge/lib:/opt/ros/humble/lib/aarch64-linux-gnu:/opt/ros/humble/lib:/underlay_ws/install/depthai_ros_msgs/lib:/usr/local/lib:"
         NEW_RPATH "/underlay_ws/install/depthai_bridge/lib:/opt/ros/humble/lib/aarch64-linux-gnu:/opt/ros/humble/lib:/underlay_ws/install/depthai_ros_msgs/lib:/usr/local/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/stereo_depth")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/stereo_pair" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/stereo_pair")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/stereo_pair"
         RPATH "/underlay_ws/install/depthai_bridge/lib:/opt/ros/humble/lib/aarch64-linux-gnu:/opt/ros/humble/lib:/underlay_ws/install/depthai_ros_msgs/lib:/usr/local/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/rae_camera" TYPE EXECUTABLE FILES "/ws/build/rae_camera/stereo_pair")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/stereo_pair" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/stereo_pair")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/stereo_pair"
         OLD_RPATH "/underlay_ws/install/depthai_bridge/lib:/opt/ros/humble/lib/aarch64-linux-gnu:/opt/ros/humble/lib:/underlay_ws/install/depthai_ros_msgs/lib:/usr/local/lib:"
         NEW_RPATH "/underlay_ws/install/depthai_bridge/lib:/opt/ros/humble/lib/aarch64-linux-gnu:/opt/ros/humble/lib:/underlay_ws/install/depthai_ros_msgs/lib:/usr/local/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/stereo_pair")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/yolo" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/yolo")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/yolo"
         RPATH "/underlay_ws/install/depthai_bridge/lib:/opt/ros/humble/lib/aarch64-linux-gnu:/opt/ros/humble/lib:/underlay_ws/install/depthai_ros_msgs/lib:/usr/local/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/rae_camera" TYPE EXECUTABLE FILES "/ws/build/rae_camera/yolo")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/yolo" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/yolo")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/yolo"
         OLD_RPATH "/underlay_ws/install/depthai_bridge/lib:/opt/ros/humble/lib/aarch64-linux-gnu:/opt/ros/humble/lib:/underlay_ws/install/depthai_ros_msgs/lib:/usr/local/lib:"
         NEW_RPATH "/underlay_ws/install/depthai_bridge/lib:/opt/ros/humble/lib/aarch64-linux-gnu:/opt/ros/humble/lib:/underlay_ws/install/depthai_ros_msgs/lib:/usr/local/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/yolo")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/perception_ipc_rtabmap" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/perception_ipc_rtabmap")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/perception_ipc_rtabmap"
         RPATH "/opt/ros/humble/lib/aarch64-linux-gnu:/opt/ros/humble/lib:/underlay_ws/install/depthai_ros_driver/lib:/underlay_ws/install/ira_laser_tools/lib:/underlay_ws/install/laserscan_kinect/lib:/underlay_ws/install/depthai_bridge/lib:/underlay_ws/install/depthai_ros_msgs/lib:/usr/local/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/rae_camera" TYPE EXECUTABLE FILES "/ws/build/rae_camera/perception_ipc_rtabmap")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/perception_ipc_rtabmap" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/perception_ipc_rtabmap")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/perception_ipc_rtabmap"
         OLD_RPATH "/opt/ros/humble/lib/aarch64-linux-gnu:/opt/ros/humble/lib:/underlay_ws/install/depthai_ros_driver/lib:/underlay_ws/install/ira_laser_tools/lib:/underlay_ws/install/laserscan_kinect/lib:/underlay_ws/install/depthai_bridge/lib:/underlay_ws/install/depthai_ros_msgs/lib:/usr/local/lib:"
         NEW_RPATH "/opt/ros/humble/lib/aarch64-linux-gnu:/opt/ros/humble/lib:/underlay_ws/install/depthai_ros_driver/lib:/underlay_ws/install/ira_laser_tools/lib:/underlay_ws/install/laserscan_kinect/lib:/underlay_ws/install/depthai_bridge/lib:/underlay_ws/install/depthai_ros_msgs/lib:/usr/local/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rae_camera/perception_ipc_rtabmap")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rae_camera" TYPE DIRECTORY FILES
    "/ws/src/rae-ros/rae_camera/launch"
    "/ws/src/rae-ros/rae_camera/config"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/ws/build/rae_camera/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/rae_camera")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/ws/build/rae_camera/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/rae_camera")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rae_camera/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rae_camera/environment" TYPE FILE FILES "/ws/build/rae_camera/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rae_camera/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rae_camera/environment" TYPE FILE FILES "/ws/build/rae_camera/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rae_camera" TYPE FILE FILES "/ws/build/rae_camera/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rae_camera" TYPE FILE FILES "/ws/build/rae_camera/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rae_camera" TYPE FILE FILES "/ws/build/rae_camera/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rae_camera" TYPE FILE FILES "/ws/build/rae_camera/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rae_camera" TYPE FILE FILES "/ws/build/rae_camera/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/ws/build/rae_camera/ament_cmake_index/share/ament_index/resource_index/packages/rae_camera")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rae_camera/cmake" TYPE FILE FILES "/ws/build/rae_camera/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rae_camera/cmake" TYPE FILE FILES "/ws/build/rae_camera/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rae_camera/cmake" TYPE FILE FILES
    "/ws/build/rae_camera/ament_cmake_core/rae_cameraConfig.cmake"
    "/ws/build/rae_camera/ament_cmake_core/rae_cameraConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rae_camera" TYPE FILE FILES "/ws/src/rae-ros/rae_camera/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/ws/build/rae_camera/xtl/cmake_install.cmake")
  include("/ws/build/rae_camera/xtensor/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/ws/build/rae_camera/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
