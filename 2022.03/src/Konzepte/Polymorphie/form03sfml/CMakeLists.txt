cmake_minimum_required(VERSION 3.16)
project(form03sfml)

set(CMAKE_CXX_STANDARD 20)
set (CMAKE_CXX_FLAGS "-Wall -Wextra")

add_executable(form03sfml
        src/AnzeigeKreis.h src/AnzeigeKreis.cpp
        src/AnzeigeRechteck.h src/AnzeigeRechteck.cpp
        src/AnzeigeWelt.h src/AnzeigeWelt.cpp
        src/Form.h
        src/FormImpl.h src/FormImpl.cpp
        src/Kreis.h src/Kreis.cpp
        src/main.cpp
        src/Rechteck.h src/Rechteck.cpp
        src/Vektor.h src/Vektor.cpp
        src/Welt.h
        src/WeltImpl.h src/WeltImpl.cpp
        src/Farbfabrik.cpp src/Farbfabrik.h)

target_include_directories(form03sfml PRIVATE src)
target_link_libraries (form03sfml sfml-graphics sfml-window sfml-system pthread)