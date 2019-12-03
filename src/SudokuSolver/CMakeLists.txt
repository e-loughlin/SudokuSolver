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
    ${PROJECT_BINARY_DIR}/googletest/googletest-src/googlemock/include
    ${PROJECT_BINARY_DIR}/googletest/googletest-src/googletest/include
)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

target_link_libraries(SudokuSolverLibrary PUBLIC Qt5::Widgets gmock gtest)

add_subdirectory(Test)