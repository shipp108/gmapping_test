cmake_minimum_required (VERSION 2.8)

project(log)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

file(GLOB log_srcs "${log_SOURCE_DIR}/src/*.cpp")

include_directories(${log_SOURCE_DIR}/../utils/include)
include_directories(${log_SOURCE_DIR}/../sensor/include)
include_directories(${log_SOURCE_DIR}/include)

add_library(log STATIC ${log_srcs})

