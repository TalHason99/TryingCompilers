cmake_minimum_required(VERSION 3.13)  # CMake version check
project(simple_example)               # Create project "simple_example"
add_subdirectory(FirstBinary)
add_executable(cmake_demo main.c)
target_link_libraries(cmake_demo PRIVATE FirstModule1)
