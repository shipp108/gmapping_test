cmake_minimum_required (VERSION 2.8)

project(grid)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

#file(GLOB grid_srcs "${grid_SOURCE_DIR}/src/*.cpp")

include_directories(${grid_SOURCE_DIR}/../utils/include)
include_directories(${grid_SOURCE_DIR}/include)

#add_library(grid STATIC ${grid_srcs})


