cmake_minimum_required(VERSION 3.24)
project(sorting)

set(CMAKE_CXX_STANDARD 17)

add_executable(sorting swap.cpp main.cpp bubble.cpp insertion.cpp selection.cpp merge.cpp quick.cpp heap.cpp)

add_executable(bubble bubble.cpp bubble.h swap.cpp)
add_executable(insertion insertion.cpp insertion.h swap.cpp)
add_executable(selection selection.cpp selection.h swap.cpp)
add_executable(merge merge.cpp merge.h)
add_executable(quick quick.cpp swap.cpp)
add_executable(heap heap.cpp swap.cpp)