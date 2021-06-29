cmake_minimum_required(VERSION 3.12)

# initialize pico_sdk from GIT
# (note this can come from environment, CMake cache etc)
# set(PICO_SDK_FETCH_FROM_GIT on)

# pico_sdk_import.cmake is a single file copied from this SDK
# note: this must happen before project()
include(pico_sdk_import.cmake)

project(pico_st7789)

# initialize the Pico SDK
pico_sdk_init()

add_library(pico_st7789 INTERFACE)

target_sources(pico_st7789 INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}/src/st7789.c
)

target_include_directories(pico_st7789 INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}/src/include
)

target_link_libraries(pico_st7789 INTERFACE pico_stdlib hardware_spi)

add_subdirectory("examples/st7789_blink")
add_subdirectory("examples/st7789_random")
add_subdirectory("examples/st7789_random_rows")
