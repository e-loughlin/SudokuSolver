#!/bin/bash

################################
# Development Environment Setup
################################

# Get current script directory
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

# Set alias for building from source directory and tests
alias b="python3 ${DIR}/tools/build_current_directory.py"

# Set alias for new_class.py script
alias newclass="python3 ${DIR}/tools/CplusplusCodeGenerators/src/NewClass.py"

# Set alias for gmock_generator
alias gmock_gen="python3 ${DIR}/extern/googletest/googlemock/scripts/generator/gmock_gen.py"
