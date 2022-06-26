cmake_minimum_required(VERSION 3.20)
project(intsum)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(intsum
        intsum.cpp)
