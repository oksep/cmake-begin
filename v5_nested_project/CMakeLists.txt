cmake_minimum_required(VERSION 3.15)
project(test)
set(CMAKE_CXX_STANDARD 17)

set(LIB_PATH ${CMAKE_SOURCE_DIR}/lib)
set(EXEC_PATH ${CMAKE_SOURCE_DIR}/bin)
set(HEAD_PATH ${CMAKE_SOURCE_DIR}/include)

set(LIB_CALC calc)
set(LIB_SORT sort)

set(APPNAME1 test1)
set(APPNAME2 test2)

add_subdirectory(calc)
add_subdirectory(sort)
add_subdirectory(test1)
add_subdirectory(test2)


