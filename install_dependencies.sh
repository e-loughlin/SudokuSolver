#!/bin/bash

git submodule update --init --recursive

sudo apt install python3-pip
pip3 install gitpython
sudo apt install cmake
