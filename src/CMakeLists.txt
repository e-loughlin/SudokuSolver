cmake_minimum_required (VERSION 3.10 FATAL_ERROR)

add_subdirectory(SudokuSolver)

# Find includes in the build directories
set(CMAKE_INCLUDE_CURRENT_DIR)

# Add the binary tree to the search path for include files
# so that we will find ${This}CmakeConfiguration.h
include_directories("${PROJECT_BINARY_DIR}")


# Set the path to your Qt install
# set(CMAKE_PREFIX_PATH /mnt/c/ws/cvi42/evan-cvi/external-libs/inst64/Qt-5.9.3)
set(CMAKE_PREFIX_PATH /home/evan/Qt-5.9.3/lib/cmake)

# Add the executable
add_executable(RunSudokuSolver main.cxx)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

target_link_libraries(RunSudokuSolver Qt5::Widgets)
