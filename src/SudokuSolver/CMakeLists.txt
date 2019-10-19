add_library(SudokuSolverLibrary "")

file(GLOB all_headers
  "*.h"
)

file(GLOB all_sources
  "*.cpp"
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
)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

target_link_libraries(SudokuSolverLibrary PUBLIC Qt5::Widgets)

add_subdirectory(Test)