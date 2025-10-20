cmake_minimum_required(VERSION 4.0)
project(Conway_s_Game_of_Life)

set(CMAKE_CXX_STANDARD 20)

add_executable(Conway_s_Game_of_Life src/main.cpp
        src/Map.cpp
        include/Map.h
        src/Cell.cpp
        include/Cell.h
        src/Simulation.cpp
        include/Simulation.h)
