cmake_minimum_required (VERSION 2.6 FATAL_ERROR)
project (SudokuSolver)

# Options. Turn on with 'cmake -Dmyvarname=ON'.
option(test "Build all tests." OFF) # Makes boolean 'test' available.

# Version Number
set (SudokuSolver_VERSION_MAJOR 1)
set (SudokuSolver_VERSION_MINOR 0)

# force static runtime libraries for msvc builds
if(MSVC)
  set(variables 
    CMAKE_CXX_FLAGS_DEBUG
    CMAKE_CXX_FLAGS_RELEASE
	CMAKE_CXX_FLAGS_RELWITHDEBINFO
	CMAKE_CXX_FLAGS_MINSIZEREL
  )
  foreach(variable ${variables})
	if(${variable} MATCHES "/MD")
	  string(REGEX REPLACE "/MD" "/MT" ${variable} "${${variable}}")
	endif()
  endforeach()
endif()

# Find includes in the build directories
set(CMAKE_INCLUDE_CURRENT_DIR)

# Qt5 Integration
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# Link executables to qtmain.lib automatically when they link to QtCore IMPORTED target
cmake_policy(SET CMP0020 NEW)

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
	"${PROJECT_SOURCE_DIR}/../cmake/SudokuSolverCmakeConfiguration.h.in"
	"${PROJECT_BINARY_DIR}/SudokuSolverCmakeConfiguration.h"
	)

# Add the binary tree to the search path for include files
# so that we will find SudokuSolverCmakeConfiguration.h
include_directories("${PROJECT_BINARY_DIR}")

# Add the executable
add_executable(SudokuSolver main.cxx)

target_link_libraries(SudokuSolver Qt5::Widgets)


################################
# Testing
################################
if (test)

  # This adds another subdirectory, which has 'project(gtest)'.
  add_subdirectory(${PROJECT_SOURCE_DIR}/../lib/gtest-1.6.0)

  enable_testing()

  # Include the gtest library. gtest_SOURCE_DIR is available due to
  # 'project(gtest)' above.
  include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

  ##############
  # Unit Tests
  ##############
  add_executable(runUnitTests test_project1.cpp)

  # Standard linking to gtest stuff.
  target_link_libraries(runUnitTests gtest gtest_main)

  # Extra linking for the project.
  target_link_libraries(runUnitTests project1_lib)

  # This is so you can do 'make test' to see all your tests run, instead of
  # manually running the executable runUnitTests to see those specific tests.
  add_test(NAME that-test-I-made COMMAND runUnitTests)

  # You can also omit NAME and COMMAND. The second argument could be some other
  # test executable.
  add_test(that-other-test-I-made runUnitTests)
endif()