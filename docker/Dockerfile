FROM ubuntu:focal

ARG WS_BRANCH='master'

RUN apt-get update
RUN apt-get install -y git
RUN git clone https://github.com/utahrobotics/usr_ws_2020.git

WORKDIR /usr_ws_2020
RUN git checkout $WS_BRANCH

RUN cd docker && . ./docker_setup.sh
RUN colcon build --symlink-install