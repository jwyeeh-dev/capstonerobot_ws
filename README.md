# CapstoneRobot ROS2 Workspace Packages


## Introduction
This document serves as a guide for setting up a workspace for developing robotic software using ROS2. This workspace provides an environment for the development, building, and execution of ROS2 Workspace Packages for Differential Drive Robot of Capstone Projects. 
<div align = "center"><img width="900" alt="Introduction_pic" src="https://github.com/jwyeeh-dev/capstonerobot_ws/assets/99489807/395723f0-aa0f-45d1-b937-37b1ac950b2a"></div>


## Working Condition
- OS types : [Ubuntu 20.04 Focal Fossa (Recommended)](https://releases.ubuntu.com/focal/) or [Ubuntu 22.04 Jammy Jellyfish](https://releases.ubuntu.com/jammy/)
- ROS2 Version : [ROS2 Foxy Fitzroy](https://docs.ros.org/en/foxy/index.html)
- Library : [TURTLEBOT3 FOXY library](https://emanual.robotis.com/docs/en/platform/turtlebot3/quick-start/#pc-setup)


## Structure
The workspace includes the following directory structure:

- `src/` : Directory containing the source code of the packages.
- `build/` : Directory where files generated during the build process are placed (created after build).
- `install/` : Directory where built packages are installed (created after build).
- `log/` : Directory where build and execution log files are stored (created during use).
- `python_files/` : Directory containing the argorithm of the robot's path-planning and book label detection.


## Installation Instructions
- You can download this workspace, and modify workspace according to your custom robot specifications.
- If you can't execute this workspace after clone this repo by error, please download these libraries below.
  - `ydlidar_ros2_driver` & `ydlidar_sdk`
  - `micro_ros_setup`
  - [TURTLEBOT3 FOXY library](https://emanual.robotis.com/docs/en/platform/turtlebot3/quick-start/#pc-setup)


## Workspace Setup
To create and initialize your workspace, execute the following:

```
mkdir -p ~/capstone_ws/src
cd ~/capstone_ws
colcon build --symlink-install
```


## Creating and Building Packages
To create and build a new ROS2 package, use the following commands:

```
cd ~/capstone_ws/src
ros2 pkg create --build-type ament_cmake <package_name>
cd ~/capstone_ws
colcon build --packages-select <package_name>
```


## Usage

### 1. Simulation
```
export TURTLEBOT3_MODEL=custom
ros2 launch turtlebot3_gazebo turtlebot3_world.launch.py
ros2 run turtlebot3_teleop teleop_keyboard
ros2 launch turtlebot3_cartographer cartographer.launch.py use_sim_time:=True
ros2 run nav2_map_server map_saver_cli -f ~/map
```

### 2. Bringup
To run Capstone Robot ROS2 packages developed in the workspace for implementing our library robots, use the following commands:

```
. install/setup.bash
ros2 run micro_ros_agent micro_ros_agent serial --dev /dev/ttyACM0
ros2 run turtlebot3_teleop teleop_keyboard
ros2 launch turtlebot3_bringup robot.launch.py
/bin/python3 /home/jay/colcon_ws/publish-odom-tf.py
ros2 launch turtlebot3_cartographer cartographer.launch.py
ros2 run nav2_map_server map_saver_cli -f ~/map
```


## Troubleshooting
If you encounter issues during the build or execution process, check the log files in the log/ directory to diagnose the cause of the problem.


## License
This workspace is licensed under the MIT License. For the full text of the license, refer to the LICENSE file.


