cmake_minimum_required(VERSION 3.21)
project(jaeger_beute04sfml)

set(CMAKE_CXX_STANDARD 20)

add_executable(jaeger_beute04sfml
        src/AnzeigeFlucht.cpp src/AnzeigeFlucht.h
        src/AnzeigeFressen.cpp src/AnzeigeFressen.h
        src/Anzeige.h
        src/AnzeigeJagd.cpp src/AnzeigeJagd.h
        src/AnzeigeRuhe.cpp src/AnzeigeRuhe.h
        src/AnzeigeWesen.cpp src/AnzeigeWesen.h
        src/BewegungFlucht.cpp src/BewegungFlucht.h
        src/Bewegung.h
        src/BewegungJagd.cpp src/BewegungJagd.h
        src/BewegungRuhe.cpp src/BewegungRuhe.h
        src/BewegungStillstand.cpp src/BewegungStillstand.h
        src/main.cpp
        src/Vektor.h
        src/Welt.h
        src/WeltImpl.cpp src/WeltImpl.h
        src/Wesen.h
        src/WesenImpl.cpp src/WesenImpl.h
        src/Zustand.cpp
        src/ZustandFlucht.cpp src/ZustandFlucht.h
        src/ZustandFressen.cpp src/ZustandFressen.h
        src/Zustand.h
        src/ZustandJagd.cpp src/ZustandJagd.h
        src/ZustandRuhe.cpp src/ZustandRuhe.h
        )

target_include_directories(jaeger_beute04sfml PRIVATE src)
target_link_libraries (jaeger_beute04sfml sfml-graphics sfml-window sfml-system pthread)