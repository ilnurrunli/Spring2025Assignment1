cmake_minimum_required(VERSION 3.29)
project(OOPAssignment1)

set(CMAKE_CXX_STANDARD 20)

add_executable(OOPAssignment1 main.cpp
        Student.cpp
        Course.cpp
        Student.h
        Course.h
        LMS.cpp
        LMS.h
)
