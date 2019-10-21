
set(TestedLibrary SudokuSolverLibrary)

set(sources ${CMAKE_CURRENT_SOURCE_DIR}/TestSudokuPuzzle.cpp)

add_executable(
    run_tests
    ${sources}
    )

find_package(Qt5Widgets)
find_package(Qt5Core)

target_link_libraries(
    run_tests
    gtest_main
    ${TestedLibrary}
    Qt5::Widgets
    )

    find_package(Qt5Widgets)
    # message("TEST: Qt5Widgets found...")
    # message(${Qt5Widgets_FOUND})

target_include_directories(run_tests PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../../
)

add_test(
  NAME
    unit
  COMMAND
    ${CMAKE_CURRENT_BINARY_DIR}/run_tests
  )