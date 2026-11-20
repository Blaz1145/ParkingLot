cmake_minimum_required(VERSION 4.0)
project(ParkingLot)

set(CMAKE_CXX_STANDARD 20)

add_executable(ParkingLot main.cpp
        src/Car.cpp
        include/Car.h)
