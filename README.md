# This is a shared repository for ballbot development.

# Way to sync this repository
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
catkin clean
catkin build
```

11.3.2018
1. Figured out real-time simulation mode and speed
2. Corrected sensor update rate (100Hz for IMU, 5Hz for GPS) in Vrep
3. Changed sensor publish topic names
4. Changed sensor frame ID
5. State estimation seemed to work, but more testing will be needed
5. Created state subscriber in Vrep to receive output of the robot localization package
