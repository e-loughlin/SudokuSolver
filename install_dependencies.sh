#!/bin/bash

git submodule update --init --recursive
git submodule update --recursive --remote

sudo apt install python3-pip
pip3 install gitpython
sudo apt install cmake

#Go Dependency

#Qt5
sudo apt-get install qt5-default
sudo apt-get install qtbase5-dev
sudo apt-get install qtdeclarative5-dev

#CppCodeGenerator install
cd tools/CppCodeGenerator
rm -rf build
mkdir build
cd build
go build ../main.go
