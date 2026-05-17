cmake_minimum_required(VERSION 3.10)
project(solver)
add_executable(solver solver.cpp)
target_link_libraries(solver PRIVATE print)
