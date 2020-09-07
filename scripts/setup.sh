#! /bin/bash

# install ros2
./install_foxy_debian.sh

# install gazebo for simulation
curl -sSL http://get.gazebosim.org | sh
sudo apt install ros-foxy-gazebo-ros-pkgs

