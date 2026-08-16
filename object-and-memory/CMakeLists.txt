cmake_minimum_required(VERSION 3.20)
project(CVsCpp C CXX)   # hem C hem CXX (C++) dilini etkinleştir

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(c_demo src/main.c)
add_executable(cpp_demo src/main.cpp)