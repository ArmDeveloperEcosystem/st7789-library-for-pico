cmake_minimum_required(VERSION 3.12)

# rest of your project
add_executable(st7789_random_rows
    main.c
)

target_link_libraries(st7789_random_rows PRIVATE pico_st7789)

# create map/bin/hex/uf2 file in addition to ELF.
pico_add_extra_outputs(st7789_random_rows)
