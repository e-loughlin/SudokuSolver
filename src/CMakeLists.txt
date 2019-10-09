cmake_minimum_required (VERSION 2.6)
project (SudokuSolver)


#Version Number
set (SudokuSolver_VERSION_MAJOR 1)
set (SudokuSolver_VERSION_MINOR 0)

#Configure a header file to pass CMake settings to the source code
configure_file (
	"${PROJECT_SOURCE_DIR}/../config/SudokuSolverCmakeConfiguration.h.in"
	"${PROJECT_BINARY_DIR}/SudokuSolverCmakeConfiguration.h"
	)

# Add the binary tree to the search path for include files
# so that we will find SudokuSolverCmakeConfiguration.h
include_directories("${PROJECT_BINARY_DIR}")

# Add the executable

add_executable(SudokuSolver main.cxx)
