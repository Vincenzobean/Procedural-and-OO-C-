cmake_minimum_required(VERSION 4.0)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled ex1/main.cpp
        spa1/spa1.cpp
        spa1/spa1.h
        "live coding examples/Example_1.cpp"
        "live coding examples/Example_1.h")

