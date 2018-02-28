cmake_minimum_required (VERSION 2.6)
project(problemSolver)
set(LIB problemSolver.cpp)
add_library(psLib STATIC ${LIB})

add_executable(problemSolver main.cpp)
target_link_libraries(problemSolver psLib)