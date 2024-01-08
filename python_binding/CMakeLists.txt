cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 17)

set(
    CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake"
    CACHE STRING "Vcpkg toolchain file"
)

project(example LANGUAGES CXX)

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

find_package(pybind11 REQUIRED)

include_directories($pybind11_INCLUDE_DIRS)

pybind11_add_module(example example.cpp)
