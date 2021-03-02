#! /bin/bash

#install ros2 foxy
./install_foxy_debian.sh

#build any submodules
git submodule init
git submodule update
