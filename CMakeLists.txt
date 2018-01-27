cmake_minimum_required(VERSION 3.9)
project(lem-in C)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES src/main.c)

add_subdirectory(libft)

add_subdirectory(classes_lib)

include_directories(libft/includes)

include_directories(classes_lib)

include_directories(src)

add_executable(lem-in ${SOURCE_FILES})

target_link_libraries(lem-in classes_lib libft.a -L/home/vukolov/Documents/unit/lem-in/libmlx -lm)