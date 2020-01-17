add_subdirectory(SudokuSolver)

# Find includes in the build directories
set(CMAKE_INCLUDE_CURRENT_DIR)


# Add the executable
add_executable(RunSudokuSolver main.cpp)


find_package(Qt5Widgets)
find_package(Qt5Core)
find_package(Qt5Gui)
# message(${Qt5Widgets_FOUND})

target_link_libraries(
	RunSudokuSolver
	Qt5::Widgets
	Qt5::Gui
	Qt5::Core
	SudokuSolverLibrary
	gmock)
