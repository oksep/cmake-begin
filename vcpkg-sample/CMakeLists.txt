cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 17)

set(
    CMAKE_TOOLCHAIN_FILE $ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake
    CACHE STRING "Vcpkg toolchain file"
)

project(fibonacci CXX)

find_package(fmt REQUIRED)
find_package(range-v3 REQUIRED)
find_package(cxxopts REQUIRED)

add_executable(fibo main.cxx)

target_link_libraries(fibo
  PRIVATE
    fmt::fmt
    range-v3::range-v3
    cxxopts::cxxopts)