cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 17)
project(CALC)

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

include_directories(${PROJECT_SOURCE_DIR}/include)

file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

# 生成动态库
# output -> libcalc.dylib
add_library(calc_shared SHARED ${SRC_LIST}) 

# 生成静态库
# output -> libcalc.a
add_library(calc_static STATIC ${SRC_LIST})