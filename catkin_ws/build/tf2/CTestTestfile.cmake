# CMake generated Testfile for 
# Source directory: /home/hdcl-ros/ballbotRepo/src/geometry2/tf2
# Build directory: /home/hdcl-ros/ballbotRepo/build/tf2
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_tf2_gtest_test_cache_unittest "/home/hdcl-ros/ballbotRepo/build/tf2/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/hdcl-ros/ballbotRepo/build/tf2/test_results/tf2/gtest-test_cache_unittest.xml" "--return-code" "/home/hdcl-ros/ballbotRepo/devel/.private/tf2/lib/tf2/test_cache_unittest --gtest_output=xml:/home/hdcl-ros/ballbotRepo/build/tf2/test_results/tf2/gtest-test_cache_unittest.xml")
add_test(_ctest_tf2_gtest_test_static_cache_unittest "/home/hdcl-ros/ballbotRepo/build/tf2/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/hdcl-ros/ballbotRepo/build/tf2/test_results/tf2/gtest-test_static_cache_unittest.xml" "--return-code" "/home/hdcl-ros/ballbotRepo/devel/.private/tf2/lib/tf2/test_static_cache_unittest --gtest_output=xml:/home/hdcl-ros/ballbotRepo/build/tf2/test_results/tf2/gtest-test_static_cache_unittest.xml")
add_test(_ctest_tf2_gtest_test_simple "/home/hdcl-ros/ballbotRepo/build/tf2/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/hdcl-ros/ballbotRepo/build/tf2/test_results/tf2/gtest-test_simple.xml" "--return-code" "/home/hdcl-ros/ballbotRepo/devel/.private/tf2/lib/tf2/test_simple --gtest_output=xml:/home/hdcl-ros/ballbotRepo/build/tf2/test_results/tf2/gtest-test_simple.xml")
subdirs("gtest")
