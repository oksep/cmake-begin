cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 17)
project(APP)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

include_directories(${PROJECT_SOURCE_DIR}/include)

link_directories(${PROJECT_SOURCE_DIR}/lib)

# 链接 libcalc.a 静态库
link_libraries(calc)

add_executable(app ${SRC_LIST})