cmake_minimum_required(VERSION 3.28)
project(Lab_7_8)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lab_7_8
        main.cpp
        vector_processor.cpp)

target_include_directories(Lab_7_8 PRIVATE include)