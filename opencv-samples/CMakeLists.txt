cmake_minimum_required(VERSION 3.15)  
set(CMAKE_CXX_STANDARD 17)  
project(demo)  
  
find_package(OpenCV REQUIRED)  
  
include_directories(${OpenCV_INCLUDE_DIRS})  

add_executable(demo main.cpp)  
target_link_libraries(demo ${OpenCV_LIBS})

message(STATUS "Project Name: ${PROJECT_NAME}")
message(STATUS "OpenCV_DIR: ${OpenCV_DIR}")
message(STATUS "OpenCV_VERSION: ${OpenCV_VERSION}")
message(STATUS "OpenCV_INCLUDE_DIRS: ${OpenCV_INCLUDE_DIRS}")
message(STATUS "OpenCV_LIBS: ${OpenCV_LIBS}")
  