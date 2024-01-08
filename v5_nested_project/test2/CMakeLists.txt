cmake_minimum_required(VERSION 3.15)

project(${APPNAME2})

set(CMAKE_CXX_STANDARD 17)

include_directories(${HEAD_PATH})

file(GLOB SOURCES "*.cpp")

set(EXECUTABLE_OUTPUT_PATH ${EXEC_PATH})

link_directories(${LIB_PATH})

add_executable(${APPNAME2} ${SOURCES})

target_link_libraries(${APPNAME2} ${LIB_SORT})