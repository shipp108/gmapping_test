cmake_minimum_required (VERSION 2.8)

project(utils)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

file(GLOB utils_srcs "${utils_SOURCE_DIR}/src/*.cpp")

include_directories(${utils_SOURCE_DIR}/include)

add_library(utils STATIC ${utils_srcs})

