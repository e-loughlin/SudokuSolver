
set(TestedLibrary SudokuSolverLibrary)

set(sources ${CMAKE_CURRENT_SOURCE_DIR}/TestSudokuPuzzle.cpp)

add_executable(
    run_tests
    ${sources}
    )
message(${sources})

find_package(Qt5 COMPONENTS Widgets REQUIRED)

target_link_libraries(
    run_tests
    gtest_main
    ${TestedLibrary}
    Qt5::Widgets
    )

target_include_directories(run_tests PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../../
)

add_test(
  NAME
    unit
  COMMAND
    ${CMAKE_CURRENT_BINARY_DIR}/run_tests
  )