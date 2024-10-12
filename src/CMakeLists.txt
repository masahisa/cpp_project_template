cmake_minimum_required(VERSION 3.5)

# add library
add_library(numeric STATIC "numeric.cpp")
add_library(manipulator SHARED "manipulator.cpp")

# add executable
add_executable(${PROJECT_NAME} "main.cpp")

# target link libraries
target_link_libraries(
    ${PROJECT_NAME}
    numeric
    manipulator
)
