cmake_minimum_required(VERSION 3.13)  # CMake version check
project(FirstBinary)               # Create project "simple_example"
add_executable(FirstBinary main.c)
add_compile_options(-I/home/theowl/Projects/TryingCompilers)
add_subdirectory(FirstModule1)
target_link_libraries(FirstBinary PRIVATE FirstModule1)

project(SecondBinary)
add_executable(SecondBinary main.c)
add_compile_options(-I /home/theowl/Projects/TryingCompilers)
add_subdirectory(SecondModule1)
add_subdirectory(SecondModule2)
target_link_libraries(SecondBinary PRIVATE SecondModule1)
target_link_libraries(SecondBinary PRIVATE SecondModule2)