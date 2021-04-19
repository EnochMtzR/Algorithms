cmake_minimum_required(VERSION 3.14)

project(solution VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)

add_library(sumOfTWoNumbers sumOfTwoNumbers.cpp)

add_executable(solution main.cpp)

target_link_libraries(solution sumOfTWoNumbers)

set_target_properties(
  solution
  PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)