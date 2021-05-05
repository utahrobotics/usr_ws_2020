#setup the local (enviorment variables for downloading ros2 foxy via a debian package
locale-gen en_US en_US.UTF-8
update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
export LANG=en_US.UTF-8

# add the ROS2 apt repo
apt update && apt install curl gnupg2 lsb-release
curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | apt-key add -

sh -c 'echo "deb [arch=$(dpkg --print-architecture)] http://packages.ros.org/ros2/ubuntu $(lsb_release -cs) main" > /etc/apt/sources.list.d/ros2-latest.list'

#install ROS2 foxy
apt update
apt install -y ros-foxy-desktop

#source the setup file for ROS2 foxy and add it to .bashrc file
source /opt/ros/foxy/setup.bash
echo "source /opt/ros/foxy/setup.bash" >> ~/.bashrc

#autocomplet is nice for development comment out the following section if you don't want that
apt install -y python3-pip
pip3 install -U argcompletevpn

#now install packages related to building packages
apt install -y python3-colcon-common-extensions
apt install python3-rosdep2

#install teleop-related packages
apt install -y ros-foxy-teleop-twist-joy

#install intel realsense dependencies
apt-get install -y libssl-dev libusb-1.0-0-dev pkg-config libgtk-3-dev
apt-get install -y libglfw3-dev libgl1-mesa-dev libglu1-mesa-dev
apt-get install ros-foxy-cv-bridge ros-foxy-librealsense2 ros-foxy-message-filters ros-foxy-image-transport

#install teh jetson GPIO library for compilation purposes
pip install Jetson.GPIO

#build any submodules
git submodule init
git submodule update
