cmake_minimum_required(VERSION 3.5)

# LD_LIBRARY_PATH
set(CPPUTEST_LDFLGAS CppUTest CppUTestExt)

# add executables
add_executable(
    run_all_tests
    "run_all_tests.cpp"
    "test_numeric.cpp"
    "test_manipulator.cpp"
)

# target link libraries
target_link_libraries(
    run_all_tests
    numeric
    manipulator
    ${CPPUTEST_LDFLGAS}
)