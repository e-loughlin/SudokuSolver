add_library(SudokuSolverLibrary "")

set(all_headers
    ${CMAKE_CURRENT_SOURCE_DIR}/I_SudokuPuzzleValidator.h
    ${CMAKE_CURRENT_SOURCE_DIR}/SudokuPuzzleValidator.h
    ${CMAKE_CURRENT_SOURCE_DIR}/SudokuCell.h
    ${CMAKE_CURRENT_SOURCE_DIR}/I_SudokuPuzzle.h
    ${CMAKE_CURRENT_SOURCE_DIR}/SudokuPuzzle.h
)

set(all_sources
    ${CMAKE_CURRENT_SOURCE_DIR}/SudokuPuzzle.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SudokuPuzzleValidator.cpp
)

target_sources(
  SudokuSolverLibrary
  PRIVATE
    ${all_sources}
  PUBLIC
    ${all_headers}
)

target_include_directories(
  SudokuSolverLibrary
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
    ${PROJECT_BINARY_DIR}/googletest/googletest-src/googlemock/include
    ${PROJECT_BINARY_DIR}/googletest/googletest-src/googletest/include
)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

target_link_libraries(SudokuSolverLibrary PUBLIC Qt5::Widgets gmock gtest)

add_subdirectory(Test)
