add_subdirectory(SudokuSolver)

# Find includes in the build directories
set(CMAKE_INCLUDE_CURRENT_DIR)


# Add the executable
add_executable(RunSudokuSolver main.cxx)


find_package(Qt5Widgets)
# message(${Qt5Widgets_FOUND})

target_link_libraries(
	RunSudokuSolver
	Qt5::Widgets
	SudokuSolverLibrary)
