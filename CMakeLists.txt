cmake_minimum_required(VERSION 3.26)
project(mangiku)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(mangiku
        mangiku.cpp
        scan.cpp
        scan.h)
