cmake_minimum_required(VERSION 3.14)
project(SmartPointer)

set(CMAKE_CXX_STANDARD 14)

add_executable(SmartPointer main.cpp SmartPointer.h Count.h Person.h)