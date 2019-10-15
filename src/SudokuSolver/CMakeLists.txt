file(GLOB all_sources
  "*.h"
  "*.cpp"
)

add_library(SudokuSolverLibrary STATIC ${all_sources})

find_package(Qt5 COMPONENTS Widgets REQUIRED)

target_link_libraries(SudokuSolverLibrary Qt5::Widgets)

add_subdirectory(Test)
