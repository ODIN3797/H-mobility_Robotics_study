# Install script for directory: /home/jinsu_park/catkin_ws/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/jinsu_park/catkin_ws/install")
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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/jinsu_park/catkin_ws/install/_setup_util.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/jinsu_park/catkin_ws/install" TYPE PROGRAM FILES "/home/jinsu_park/catkin_ws/build/catkin_generated/installspace/_setup_util.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/jinsu_park/catkin_ws/install/env.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/jinsu_park/catkin_ws/install" TYPE PROGRAM FILES "/home/jinsu_park/catkin_ws/build/catkin_generated/installspace/env.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/jinsu_park/catkin_ws/install/setup.bash;/home/jinsu_park/catkin_ws/install/local_setup.bash")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/jinsu_park/catkin_ws/install" TYPE FILE FILES
    "/home/jinsu_park/catkin_ws/build/catkin_generated/installspace/setup.bash"
    "/home/jinsu_park/catkin_ws/build/catkin_generated/installspace/local_setup.bash"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/jinsu_park/catkin_ws/install/setup.sh;/home/jinsu_park/catkin_ws/install/local_setup.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/jinsu_park/catkin_ws/install" TYPE FILE FILES
    "/home/jinsu_park/catkin_ws/build/catkin_generated/installspace/setup.sh"
    "/home/jinsu_park/catkin_ws/build/catkin_generated/installspace/local_setup.sh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/jinsu_park/catkin_ws/install/setup.zsh;/home/jinsu_park/catkin_ws/install/local_setup.zsh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/jinsu_park/catkin_ws/install" TYPE FILE FILES
    "/home/jinsu_park/catkin_ws/build/catkin_generated/installspace/setup.zsh"
    "/home/jinsu_park/catkin_ws/build/catkin_generated/installspace/local_setup.zsh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/jinsu_park/catkin_ws/install/.rosinstall")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/jinsu_park/catkin_ws/install" TYPE FILE FILES "/home/jinsu_park/catkin_ws/build/catkin_generated/installspace/.rosinstall")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/jinsu_park/catkin_ws/build/gtest/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/ntrip_ros/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/puma560_moveit_config/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/rrr_moveit_config/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/scara_moveit_config/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/rtcm_msgs/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/turtlebot3/turtlebot3/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/turtlebot3_msgs/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/turtlebot3/turtlebot3_navigation/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/turtlebot3_simulations/turtlebot3_simulations/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/ublox_f9p/ublox/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/velodyne/velodyne/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/velodyne/velodyne_msgs/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/encoder_example/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/ftsensor_example/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/calibration_demo/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/velarray_ROI/lidar_roi_example/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/traj_plan/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/turtlebot3/turtlebot3_bringup/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/turtlebot3/turtlebot3_example/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/turtlebot3_simulations/turtlebot3_fake/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/turtlebot3_simulations/turtlebot3_gazebo/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/turtlebot3/turtlebot3_slam/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/turtlebot3/turtlebot3_teleop/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/turtlebot_path_tracker/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/ublox_f9p/ublox_serialization/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/ublox_f9p/ublox_msgs/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/ublox_f9p/ublox_gps/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/puma560_description/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/rrr_description/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/scara_description/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/velodyne/velodyne_driver/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/velodyne/velodyne_laserscan/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/velodyne/velodyne_pcl/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/velodyne/velodyne_pointcloud/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/kinematics_demo/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/pick_n_place/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/workspace/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/OpenBase/ROS/open_base/cmake_install.cmake")
  include("/home/jinsu_park/catkin_ws/build/turtlebot3/turtlebot3_description/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/jinsu_park/catkin_ws/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
