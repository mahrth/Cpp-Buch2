cmake_minimum_required(VERSION 3.21)
project(jaeger_beute02sfml)

set(CMAKE_CXX_STANDARD 20)
set (CMAKE_CXX_FLAGS "-Wall -Wextra")


add_executable(jaeger_beute02sfml
        src/main.cpp
        src/Vektor.h
        src/Welt.h
        src/WeltImpl.h src/WeltImpl.cpp
        src/Wesen.h
        src/WesenImpl.h src/WesenImpl.cpp
        )

target_include_directories(jaeger_beute02sfml PRIVATE src)
target_link_libraries (jaeger_beute02sfml sfml-graphics sfml-window sfml-system pthread)