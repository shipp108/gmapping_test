cmake_minimum_required (VERSION 2.8)

project(gridfastslam)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

file(GLOB gridfastslam_srcs "${gridfastslam_SOURCE_DIR}/src/*.cpp")

#include_directories(${gridfastslam_SOURCE_DIR}/../utils/include)
#include_directories(${gridfastslam_SOURCE_DIR}/../sensor/include)
include_directories(${gridfastslam_SOURCE_DIR}/include)

add_library(gridfastslam STATIC ${gridfastslam_srcs})

