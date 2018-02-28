cmake_minimum_required (VERSION 3.0)
set (CMAKE_CXX_STANDARD 11)
project(problemSolver)
set(LIB problemSolver.cpp)
add_library(psLib STATIC ${LIB})

add_executable(tests testProblemSolver.cpp)
add_executable(problemSolver main.cpp)

target_link_libraries(problemSolver psLib)
target_link_libraries(tests psLib)

include_directories(3rdparty/cppunit/include)

find_library( CPPUNIT_LIB NAMES cppunit cppunit_dll cppunitd cppunitd_dll
            PATHS /usr/local/lib)

set( CPPUNIT_LIBRARY ${CPPUNIT_LIB})
target_link_libraries(tests ${CPPUNIT_LIBRARY})

