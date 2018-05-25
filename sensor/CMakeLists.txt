cmake_minimum_required (VERSION 2.8)

project(sensor)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

file(GLOB sensor_base_srcs "${sensor_SOURCE_DIR}/sensor_base/*.cpp")
file(GLOB sensor_odometry_srcs "${sensor_SOURCE_DIR}/sensor_odometry/*.cpp")
file(GLOB sensor_range_srcs "${sensor_SOURCE_DIR}/sensor_range/*.cpp")

include_directories(${sensor_SOURCE_DIR}/../utils/include)
include_directories(${sensor_SOURCE_DIR}/include)

add_library(sensor STATIC ${sensor_base_srcs} ${sensor_range_srcs} ${sensor_odometry_srcs})


