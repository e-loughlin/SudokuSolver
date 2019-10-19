#!/bin/bash

#Get current script directory
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
alias b="python3 ${DIR}/tools/build_current_directory.py"
