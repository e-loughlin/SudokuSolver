cmake_minimum_required (VERSION 2.6)
project (SudokuSolver)
<<<<<<< HEAD
=======
#Version Number
set (SudokuSolver_VERSION_MAJOR 1)
set (SudokuSolver_VERSION_MINOR 0)

#Configure a header file to pass CMake settings to the source code
configure_file (
	"${PROJECT_SOURCE_DIR}/SudokuSolverConfig.h.in"
	"${PROJECT_BINARY_DIR}/SudokuSolverConfig.h"
	)

# Add the binary tree to the search path for include files
# so that we will find SudokuSolverConfig.h
include_directories("${PROJECT_BINARY_DIR}")

# Add the executable
>>>>>>> Began CMAKE integration (In-Progress)
add_executable(SudokuSolver main.cxx)
