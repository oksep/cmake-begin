cmake_minimum_required(VERSION 3.15)

project(test)

set(CMAKE_CXX_STANDARD 17)

include_directories(${HEAD_PATH})

file(GLOB SOURCES "*.cpp")

set(EXECUTABLE_OUTPUT_PATH ${EXEC_PATH})

link_directories(${LIB_PATH})

link_libraries(${LIB_SORT})

add_executable(test ${SOURCES})