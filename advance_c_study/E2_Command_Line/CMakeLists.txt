cmake_minimum_required(VERSION 3.8)
project(E2_Command_Line)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c)
add_executable(E2_Command_Line ${SOURCE_FILES})