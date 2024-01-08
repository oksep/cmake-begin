cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 17)
project(CALC)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# aux_source_directory(./src SRC_LIST)
file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
file(GLOB HEAD_LIST ${CMAKE_CURRENT_SOURCE_DIR}/include/*.h)

include_directories(${PROJECT_SOURCE_DIR}/include)
add_executable(app ${SRC_LIST})