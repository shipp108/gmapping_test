cmake_minimum_required (VERSION 2.8)

project (gmmaping)

SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall -Wno-unused-but-set-variable")

set(CMAKE_BUILD_TYPE Release)

find_package(Qt)
include(${QT_USE_FILE})

SET (LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

## --- include directory ---
include_directories(${PROJECT_SOURCE_DIR}/utils/include)
include_directories(${PROJECT_SOURCE_DIR}/sensor/include)
include_directories(${PROJECT_SOURCE_DIR}/log/include)
include_directories(${PROJECT_SOURCE_DIR}/configfile/include)
include_directories(${PROJECT_SOURCE_DIR}/grid/include)
include_directories(${PROJECT_SOURCE_DIR}/scanmatcher/include)
include_directories(${PROJECT_SOURCE_DIR}/particlefilter/include)
include_directories(${PROJECT_SOURCE_DIR}/gridfastslam/include)
include_directories(${PROJECT_SOURCE_DIR}/gui/include)

## --- add subdirectory ---
add_subdirectory(${PROJECT_SOURCE_DIR}/utils)
add_subdirectory(${PROJECT_SOURCE_DIR}/sensor)
add_subdirectory(${PROJECT_SOURCE_DIR}/log)
add_subdirectory(${PROJECT_SOURCE_DIR}/configfile)
add_subdirectory(${PROJECT_SOURCE_DIR}/grid)
add_subdirectory(${PROJECT_SOURCE_DIR}/scanmatcher)
add_subdirectory(${PROJECT_SOURCE_DIR}/particlefilter)
add_subdirectory(${PROJECT_SOURCE_DIR}/gridfastslam)
add_subdirectory(${PROJECT_SOURCE_DIR}/gui)

## --- link directory ---
LINK_DIRECTORIES(${LIBRARY_OUTPUT_PATH})

## --- add executable ---
# autoptr_test
add_executable(autoptr_test utils/test/autoptr_test.cpp)
target_link_libraries(autoptr_test utils)
# log_test
add_executable(log_test log/test/log_test.cpp)
target_link_libraries(log_test log sensor utils)
# configfile_test
add_executable(configfile_test configfile/test/configfile_test.cpp)
target_link_libraries(configfile_test configfile)
# scanmatcher_test
add_executable(scanmatch_test scanmatcher/test/scanmatch_test.cpp)
target_link_libraries(scanmatch_test scanmatcher log sensor utils)
# icp_test
add_executable(icp_test scanmatcher/test/icptest.cpp)
target_link_libraries(icp_test scanmatcher log sensor utils)
# map_test
add_executable(map_test grid/test/map_test.cpp)
# particlefilter_test
add_executable(particlefilter_test particlefilter/test/particlefilter_test.cpp)
# range_bearing_test
add_executable(range_bearing_test particlefilter/test/range_bearing.cpp)
# gfs2log_test
add_executable(gfs2log_test gridfastslam/test/gfs2log.cpp)
target_link_libraries(gfs2log_test gridfastslam)
# gfs2neff_test
add_executable(gfs2neff_test gridfastslam/test/gfs2neff.cpp)
target_link_libraries(gfs2neff_test gridfastslam)
# gfs2rec_test
add_executable(gfs2rec_test gridfastslam/test/gfs2rec.cpp)
target_link_libraries(gfs2rec_test gridfastslam)
# gfs2stat_test
#add_executable(gfs2stat_test gridfastslam/test/gfs2stat.cpp)
#target_link_libraries(gfs2stat_test gridfastslam utils)
#include <utils/stat.h>
# gfs2stream_test
add_executable(gfs2stream_test gridfastslam/test/gfs2stream.cpp)
target_link_libraries(gfs2stream_test gridfastslam)


# gfs_thread_test
add_executable(gsp_nogui_test gui/test/gsp_nogui.cpp)
target_link_libraries(gsp_nogui_test gui gridfastslam scanmatcher configfile log sensor utils -lpthread)

# gfs2img_test
add_executable(gfs2img_test gui/test/gfs2img.cpp)
target_link_libraries(gfs2img_test gui gridfastslam scanmatcher configfile log sensor utils -lpthread ${QT_LIBRARIES})

# gfs_simplegui_test
add_executable(gfs_simplegui_test gui/test/gfs_simplegui.cpp)
target_link_libraries(gfs_simplegui_test gui gridfastslam scanmatcher configfile log sensor utils -lpthread ${QT_LIBRARIES})
