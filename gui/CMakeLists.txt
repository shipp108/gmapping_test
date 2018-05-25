cmake_minimum_required (VERSION 2.8)

project(gui)

find_package(Qt)
include(${QT_USE_FILE})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

file(GLOB gui_srcs "${gui_SOURCE_DIR}/src/*.cpp")

include_directories(${gui_SOURCE_DIR}/include)

add_library(gui STATIC ${gui_srcs})

