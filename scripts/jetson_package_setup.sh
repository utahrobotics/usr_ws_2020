#!/bin/bash

ROS_PKG=ros_base
ROS_DISTRO=foxy
ROS_ROOT=/opt/ros/${ROS_DISTRO}

# change the locale from POSIX to UTF-8
locale-gen en_US en_US.UTF-8 && update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
LANG=en_US.UTF-8

# add the ROS deb repo to the apt sources list
sudo apt-get update && \
sudo apt-get install -y --no-install-recommends \
		curl \
		wget \
		gnupg2 \
		lsb-release \
	&& sudo rm -rf /var/lib/apt/lists/*

wget --no-check-certificate https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc && sudo apt-key add ros.asc
sudo sh -c 'echo "deb [arch=$(dpkg --print-architecture)] http://packages.ros.org/ros2/ubuntu $(lsb_release -cs) main" > /etc/apt/sources.list.d/ros2-latest.list'

# install development packages
sudo apt-get update && \
sudo    apt-get install -y --no-install-recommends \
		build-essential \
		cmake \
		git \
		libbullet-dev \
		libpython3-dev \
		python3-colcon-common-extensions \
		python3-flake8 \
		python3-pip \
		python3-pytest-cov \
		python3-rosdep \
		python3-setuptools \
		python3-vcstool \
		python3-rosinstall-generator \
		libasio-dev \
		libtinyxml2-dev \
		libcunit1-dev \
    && sudo rm -rf /var/lib/apt/lists/*

# install some pip packages needed for testing
python3 -m pip install -U \
		argcomplete \
		flake8-blind-except \
		flake8-builtins \
		flake8-class-newline \
		flake8-comprehensions \
		flake8-deprecated \
		flake8-docstrings \
		flake8-import-order \
		flake8-quotes \
		pytest-repeat \
		pytest-rerunfailures \
		pytest

# compile yaml-cpp-0.6, which some ROS packages may use (but is not in the 18.04 apt repo)
git clone --branch yaml-cpp-0.6.0 https://github.com/jbeder/yaml-cpp yaml-cpp-0.6 && \
    cd yaml-cpp-0.6 && \
    mkdir build && \
    cd build && \
    cmake -DBUILD_SHARED_LIBS=ON .. && \
    make -j$(nproc) && \
    sudo cp libyaml-cpp.so.0.6.0 /usr/lib/aarch64-linux-gnu/ && \
    sudo ln -s /usr/lib/aarch64-linux-gnu/libyaml-cpp.so.0.6.0 /usr/lib/aarch64-linux-gnu/libyaml-cpp.so.0.6

# https://answers.ros.org/question/325245/minimal-ros2-installation/?answer=325249#post-id-325249
mkdir -p ${ROS_ROOT}/src && \
    cd ${ROS_ROOT} && \
    rosinstall_generator --deps --rosdistro ${ROS_DISTRO} ${ROS_PKG} launch_xml launch_yaml example_interfaces > ros2.${ROS_DISTRO}.${ROS_PKG}.rosinstall && \
    cat ros2.${ROS_DISTRO}.${ROS_PKG}.rosinstall && \
    vcs import src < ros2.${ROS_DISTRO}.${ROS_PKG}.rosinstall

# https://github.com/dusty-nv/jetson-containers/issues/41#issuecomment-774767272
rm ${ROS_ROOT}/src/libyaml_vendor/CMakeLists.txt && \
    wget --no-check-certificate https://raw.githubusercontent.com/ros2/libyaml_vendor/master/CMakeLists.txt -P ${ROS_ROOT}/src/libyaml_vendor/
    

#include the joy packages
mkdir ${ROS_ROOT}/src/joy && \
	cd ${ROS_ROOT}/src/joy && \
	wget -O - https://github.com/ros-drivers/joystick_drivers/archive/main.tar.gz | tar -xz --strip=2 "joystick_drivers-main/joy"


# install dependencies using rosdep
apt-get update && \
    cd ${ROS_ROOT} && \
    rosdep init && \
    rosdep update && \
    # rosdep install --from-paths src --ignore-src --rosdistro ${ROS_DISTRO} -y --skip-keys "console_bridge fastcdr fastrtps rti-connext-dds-5.3.1 urdfdom_headers qt_gui" && \
    rosdep install --from-paths src --ignore-src --rosdistro ${ROS_DISTRO} -y --skip-keys "" && \
    rm -rf /var/lib/apt/lists/*

# build it!
cd ${ROS_ROOT} && colcon build --symlink-install


echo 'source ${ROS_ROOT}/install/setup.bash' >> ~/.bashrc

# install our own packages, leave out for now still haven't figured out how to get the foxy realsense drivers on xavier

#install the jetson GPIO library and setting permisions
sudo pip install Jetson.GPIO

sudo groupadd -f -r gpio
sudo usermod -a -G gpio usr2020 #this may need to change depending on the username of the jeston

sudo cp /usr/local/lib/python3.8/dist-packages/Jetson/GPIO/99-gpio.rules /etc/udev/rules.d/ # may need to change if python 3.8 isn't default python interpreter for pip3

	#reset the udev rules
sudo udevadm control --reload-rules && sudo udevadm trigger
