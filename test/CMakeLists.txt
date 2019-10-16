add_executable(
    unit_tests
    TestSudokuPuzzle.cpp
    )

find_package(Qt5 COMPONENTS Widgets REQUIRED)

target_link_libraries(
    unit_tests
    gtest_main
    SudokuSolverLibrary
    Qt5::Widgets
    )

add_definitions(-DQT_NO_VERSION_TAGGING)


add_test(
  NAME
    unit
  COMMAND
    ${CMAKE_BINARY_DIR}/test/unit_tests
  )
