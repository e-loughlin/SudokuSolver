cmake_minimum_required (VERSION 2.6 FATAL_ERROR)
project (SudokuSolver)

# Version Number
set (SudokuSolver_VERSION_MAJOR 1)
set (SudokuSolver_VERSION_MINOR 0)


# Find includes in the build directories
set(CMAKE_INCLUDE_CURRENT_DIR)

# Qt5 Integration
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# Automatically link Qt executables to qtmain target on Windows.
cmake_policy(SET CMP0020 OLD)

# Set the path to your Qt install
set(CMAKE_PREFIX_PATH /mnt/c/ws/cvi42/evan-cvi/external-libs/inst64/Qt-5.9.3)

# Determine if Qt5 Directories will be found
#if(NOT CMAKE_PREFIX_PATH AND NOT Qt5Widgets_DIR)
#    message(WARNING "CMAKE_PREFIX_PATH is not defined, so find_package may not work. Set the CMAKE_PREFIX_PATH "
#            "environment variable to the install prefix of Qt 5, either on the command line as "
#           "-DCMAKE_PREFIX_PATH=\"path/to/Qt5/lib/cmake\" or with set(CMAKE_PREFIX_PATH path/to/Qt5/lib/cmake)")
#endif(NOT CMAKE_PREFIX_PATH AND NOT Qt5Widgets_DIR)

# Add a compiler flag
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

find_package(Qt5 REQUIRED COMPONENTS Widgets)

# Configure a header file to pass CMake settings to the source code
configure_file (
	"${PROJECT_SOURCE_DIR}/../config/SudokuSolverCmakeConfiguration.h.in"
	"${PROJECT_BINARY_DIR}/SudokuSolverCmakeConfiguration.h"
	)

# Add the binary tree to the search path for include files
# so that we will find SudokuSolverCmakeConfiguration.h
include_directories("${PROJECT_BINARY_DIR}")

# Add the executable
add_executable(SudokuSolver main.cxx)

target_link_libraries(SudokuSolver Qt5::Widgets)
