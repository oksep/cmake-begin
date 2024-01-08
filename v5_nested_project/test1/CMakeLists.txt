cmake_minimum_required(VERSION 3.15)

project(${APPNAME1})

set(CMAKE_CXX_STANDARD 17)

include_directories(${HEAD_PATH})

file(GLOB SOURCES "*.cpp")

set(EXECUTABLE_OUTPUT_PATH ${EXEC_PATH})

link_directories(${LIB_PATH})
link_libraries(${LIB_CALC})

add_executable(${APPNAME1} ${SOURCES})