cmake_minimum_required(VERSION 3.15)

set(CMAKE_CXX_STANDARD 17)

project(sort)

file(GLOB SOURCES "src/*.cpp")

include_directories(${HEAD_PATH})

set(LIBRARY_OUTPUT_PATH ${LIB_PATH})

add_library(${LIB_SORT} SHARED ${SOURCES})