cmake_minimum_required(VERSION 3.14)

project(test VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)

include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(solution_tests sumOfTwoNumbers_test.cpp)

target_link_libraries(
  solution_tests
  sumOfTWoNumbers
  gtest_main
)

target_include_directories(solution_tests PUBLIC "../src/")

include(GoogleTest)
gtest_discover_tests(solution_tests)