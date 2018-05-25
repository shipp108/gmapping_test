cmake_minimum_required (VERSION 2.8)

project(scanmatcher)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

file(GLOB scanmatcher_srcs "${scanmatcher_SOURCE_DIR}/src/*.cpp")

#include_directories(${scanmatcher_SOURCE_DIR}/../utils/include)
#include_directories(${scanmatcher_SOURCE_DIR}/../sensor/include)
include_directories(${scanmatcher_SOURCE_DIR}/include)

add_library(scanmatcher STATIC ${scanmatcher_srcs})

