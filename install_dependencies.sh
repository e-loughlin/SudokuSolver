#!/bin/bash

git submodule update --init --recursive

sudo apt install python3-pip
pip3 install gitpython
sudo apt install cmake

#Qt5
sudo apt-get install qt5-default
sudo apt-get install qtbase5-dev
sudo apt-get install qtdeclarative5-dev
