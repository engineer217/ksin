CMAKE_MINIMUM_REQUIRED(VERSION 3.19.1)
PROJECT(program)

add_executable(program src/main.cpp)

target_include_directories(program PRIVATE include)