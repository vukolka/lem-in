cmake_minimum_required(VERSION 3.5)
project(visu-hex)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        src/main.cpp
        src/lemin_vis.cpp
        src/lemin_vis.h
        src/oninit.cpp
        src/onevent.cpp
        src/onloop.cpp
        src/onrender.cpp
        src/oncleanup.cpp
        src/load_media.cpp
        src/LeminMedia.cpp
        src/LeminMedia.h
        src/LoadMap.cpp
        src/LeminMap.cpp
        src/LeminMap.h
        src/Room.cpp src/Room.h
        src/VertexTexture.cpp
        src/VertexTexture.h
        src/TextImage.cpp
        src/TextImage.h
        src/AntObj.cpp
        src/AntObj.h)


add_executable(visu-hex ${SOURCE_FILES})

include_directories("/Users/mvukolov/.brew/Cellar/sdl2/2.0.8/include/SDL2")
include_directories("/Users/mvukolov/.brew/Cellar/sdl2_ttf/2.0.14/include/SDL2")
include_directories("/Users/mvukolov/.brew/Cellar/sdl2_image/2.0.3/include/SDL2")

target_link_libraries(visu-hex -L/Users/mvukolov/.brew/Cellar/sdl2/2.0.8/lib -L/Users/mvukolov/.brew/Cellar/sdl2_ttf/2.0.14/lib -L/Users/mvukolov/.brew/Cellar/sdl2_image/2.0.3/lib -lSDL2 -lSDL2_ttf -lSDL2_image)
