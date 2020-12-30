#!/bin/bash

################################
# Development Environment Setup
################################

# Get current script directory
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

# Set alias for building from source directory and tests
alias b="python3 ${DIR}/tools/build_current_directory.py"

# Build and set alias for CppCodeGenerator
mkdir ${DIR}/tools/CppCodeGenerator/build/
cd ${DIR}/tools/CppCodeGenerator/build/
go build ${DIR}/tools/CppCodeGenerator/
cd ${DIR}
alias codegen="${DIR}/tools/CppCodeGenerator/build/CppCodeGenerator"
