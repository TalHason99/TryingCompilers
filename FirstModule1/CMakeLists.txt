add_subdirectory(/home/theowl/Projects/TryingCompilers/Module1/ build)
add_library(FirstModule1 STATIC FirstModule1.c)
target_link_libraries(FirstModule1 PRIVATE Module1)
