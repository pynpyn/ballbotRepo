execute_process(COMMAND "/home/hdcl-ros/ballbotRepo/catkin_ws/build/tf2_ros/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/hdcl-ros/ballbotRepo/catkin_ws/build/tf2_ros/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
