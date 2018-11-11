## This is a shared repository for ballbot development.

## Way to sync this repository
1. Initialize a local git folder
```
cd local_git_folder
git init
```
2. Add this repository
```
git remote add origin https://github.com/pynpyn/ballbotRepo.git
```
3. Pull the files
```
git pull origin master
```
```
git submodule update --init --recursive
```
4. Clean and build the workspace
```
cd local_git_folder
cd catkin_ws
catkin clean -b
catkin build
```

5. Change the ROS node launch file to correct local directory
```
cd local_git_folder
cd catkin_ws/src
Open "ekf_ballbot.yaml".
Change <rosparam command="load" file="/home/yinan/ballbotRepo/catkin_ws/src/ekf_ballbot.yaml" /> to correct local directory.
```
    
6. Launch ekf node and echo /odometry/filtered to see the sensor fusion output
    1. open Vrep
    1. open scene "StateEstimation.ttt"
    1. Run the simulation in real-time mode (dt=10ms)
    1. Click threaded rendering (to ensure fast simulation)
```
cd local_git_folder
cd catkin_ws/src
roslaunch ekf_ballbot.launch
rostopic echo /odometry/filtered
```
To check sensor funsion output rate:
```
rostopic hz /odometry/filter
```

## Update log:
11.3.2018
1. Figured out real-time simulation mode and speed
2. Corrected sensor update rate (100Hz for IMU, 5Hz for GPS) in Vrep
3. Changed sensor publish topic names (from /example/imu and /example/odom to /ballbot/imu and /ballbot/gps)
4. Changed sensor frame ID
5. State estimation seemed to work, but more testing will be needed
5. Created state subscriber in Vrep to receive output of the robot localization package
