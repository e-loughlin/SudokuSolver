
set(TestedLibrary SudokuSolverLibrary)
set(TestedClass SudokuCell)
set(TestExecutable RunTests_${TestedClass})

set(test_sources ${CMAKE_CURRENT_SOURCE_DIR}/Test${TestedClass}.cpp)

add_executable(
    ${TestExecutable}
    ${test_sources}
    )

find_package(Qt5Widgets)
find_package(Qt5Core)

target_link_libraries(
    ${TestExecutable}
    gtest_main
    ${TestedLibrary}
    Qt5::Widgets
    gmock
    )

target_include_directories(${TestExecutable} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../../
    ${PROJECT_BINARY_DIR}/googletest/googletest-src/googlemock/include
)

add_test(
  NAME
    unit
  COMMAND
    ${CMAKE_CURRENT_BINARY_DIR}/${TestExecutable}
  )