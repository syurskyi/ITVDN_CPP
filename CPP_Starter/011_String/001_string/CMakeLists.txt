cmake_minimum_required(VERSION 3.5)

project(001string)

set(SOURCES
        001string.cpp)

add_executable(001string ${SOURCES})

set_target_properties(001string PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)