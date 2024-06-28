cmake_minimum_required(VERSION 3.28)
project(Quadrocopter)

set(CMAKE_CXX_STANDARD 17)

add_executable(Quadrocopter main.cpp
        Point.cpp
        Point.h
        PointList.cpp
        PointList.h
        DistanceCalculator.cpp
        DistanceCalculator.h)
