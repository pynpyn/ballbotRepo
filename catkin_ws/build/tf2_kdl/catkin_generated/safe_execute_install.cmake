execute_process(COMMAND "/home/yinan/ballbotRepo/catkin_ws/build/tf2_kdl/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/yinan/ballbotRepo/catkin_ws/build/tf2_kdl/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
