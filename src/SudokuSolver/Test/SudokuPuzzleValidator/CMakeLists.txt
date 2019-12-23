
set(TestedLibrary SudokuSolverLibrary)
set(TestedClass SudokuPuzzleValidator)
set(TestExecutable RunTests_${TestedClass})

set(sources ${CMAKE_CURRENT_SOURCE_DIR}/Test${TestedClass}.cpp)

add_executable(
    ${TestExecutable}
    ${sources}
    )

find_package(Qt5Widgets)
find_package(Qt5Core)

target_link_libraries(
    ${TestExecutable}
    gtest_main
    ${TestedLibrary}
    Qt5::Widgets
    )

    find_package(Qt5Widgets)

target_include_directories(${TestExecutable} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../../
)

add_test(
  NAME
    unit
  COMMAND
    ${CMAKE_CURRENT_BINARY_DIR}/${TestExecutable}
  )
