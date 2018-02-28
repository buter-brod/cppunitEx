project(problemSolver)
set(SOURCE main.cpp)
set(LIB problemSolver.cpp)
add_library(psLib STATIC ${LIB})

add_executable(problemSolver $(SOURCE))
target_link_libraries(problemSolver psLib)