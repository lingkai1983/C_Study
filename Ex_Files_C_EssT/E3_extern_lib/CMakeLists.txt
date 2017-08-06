cmake_minimum_required(VERSION 3.8)
project(E3_extern_lib)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES 07_02.c libs/calc.h libs/calc.c)
add_executable(E3_extern_lib ${SOURCE_FILES})