cmake_minimum_required(VERSION 3.22.0)
project(ExtArrayTests)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../ExtArray)
add_executable(ExtArrayTest1 ExtArrayTest2.cpp)