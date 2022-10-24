cmake_minimum_required(VERSION 3.2)
project(gtest-example)
enable_testing()

add_definitions("/std:c++latest")
find_package(GTest CONFIG REQUIRED)
include(GoogleTest)

add_executable(myTarget test.cpp)
target_link_libraries(myTarget GTest::gtest GTest::gtest_main)

gtest_discover_tests(myTarget)
