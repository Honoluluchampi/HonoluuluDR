cmake_minimum_required(VERSION 3.22)
project (HonoluluDR)

set(CMAKE_CXX_STANDARD 20)

add_library(HonoluluDR  src/Variable.cpp)
include_directories(HonoluluDR include)

#################################################################
add_executable(test test/Variable_test.cpp)
target_link_libraries(test gtest)
include_directories(test include)