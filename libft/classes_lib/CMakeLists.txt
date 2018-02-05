cmake_minimum_required(VERSION 3.9)
project(classes_lib C)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES
        new.c
        init_classes.c
        classes_lib.h
        linked_list.c
        linked_list.h
        room.c
        room.h
        queue.c
        queue.h)
include_directories(../libft/includes)

add_library(classes_lib ${SOURCE_FILES})

target_link_libraries(classes_lib)