cmake_minimum_required (VERSION 3.10 FATAL_ERROR)

set(ProjectName SudokuSolver)

project (${ProjectName} C CXX)

add_definitions(-DQT_NO_VERSION_TAGGING)

add_subdirectory(src)

include(cmake/googletest.cmake)
fetch_googletest(
    ${PROJECT_SOURCE_DIR}/cmake
    ${PROJECT_BINARY_DIR}/googletest
    )

# Find includes in the build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Qt5 Integration
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# Link executables to qtmain.lib automatically when they link to QtCore IMPORTED target
cmake_policy(SET CMP0020 NEW)

# Allow GTEST to be built into libraries that it's not included in
cmake_policy(SET CMP0079 NEW)

# Set the path to your Qt install
# set(CMAKE_PREFIX_PATH /mnt/c/ws/cvi42/evan-cvi/external-libs/inst64/Qt-5.9.3)
# set(CMAKE_PREFIX_PATH /home/evan/Qt-5.9.3)

# Add a compiler flag
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

find_package(Qt5 REQUIRED COMPONENTS Widgets)

include(GoogleTest)
enable_testing()