cmake_minimum_required(VERSION 3.17)
project(tree-ds)

set(CMAKE_CXX_STANDARD 14)

add_executable(insertion insertion.cpp deletion.h)
add_executable(all_operations treeOperations.cpp)