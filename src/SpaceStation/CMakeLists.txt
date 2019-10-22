add_library(SpaceStationLibrary "")

file(GLOB all_headers
  "*.h"
)

file(GLOB all_sources
  "*.cpp"
)

target_sources(
  SpaceStationLibrary
  PRIVATE
    ${all_sources}
  PUBLIC
    ${all_headers}
)

target_include_directories(
  SpaceStationLibrary
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

target_link_libraries(SpaceStationLibrary PUBLIC Qt5::Widgets)

add_subdirectory(Test)