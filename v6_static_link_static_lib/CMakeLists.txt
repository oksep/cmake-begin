cmake_minimum_required(VERSION 3.15)
project(test_static_link_static_lib)
set(CMAKE_CXX_STANDARD 17)

set(LIB_PATH ${CMAKE_SOURCE_DIR}/lib)
set(EXEC_PATH ${CMAKE_SOURCE_DIR}/bin)
set(HEAD_PATH ${CMAKE_SOURCE_DIR}/include)

set(LIB_CALC calc)
set(LIB_SORT sort)

add_subdirectory(calc)
add_subdirectory(sort)
add_subdirectory(test)


