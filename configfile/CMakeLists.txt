cmake_minimum_required (VERSION 2.8)

project(configfile)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

file(GLOB configfile_srcs "${configfile_SOURCE_DIR}/src/*.cpp")

include_directories(${configfile_SOURCE_DIR}/include)

add_library(configfile STATIC ${configfile_srcs})

