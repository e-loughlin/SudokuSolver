file(GLOB all_sources
  "*.h"
  "*.cpp"
)

add_library(${This} STATIC ${all_sources})

find_package(Qt5 COMPONENTS Widgets REQUIRED)

target_link_libraries(${This} Qt5::Widgets)

add_subdirectory(Test)
