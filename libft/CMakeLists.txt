cmake_minimum_required(VERSION 3.9)
project(libft.a C)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES
        get_next_line/get_next_line.c)

include_directories(includes)

add_subdirectory(ft_printf)

add_library(libft.a ${SOURCE_FILES})

target_link_libraries(libft.a ft_printf)