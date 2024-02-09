cmake_minimum_required(VERSION 3.26)
project(FactorialCalculator)

set(CMAKE_CXX_STANDARD 17)

add_executable(FactorialCalculator main.cpp
        Factorial.h)
