cmake_minimum_required(VERSION 3.14)
project(solution VERSION 1.0)
set(CMAKE_C_STANDARD 11)

add_library(sumOfTwoNumbers sumOfTwoNumbers.c)

add_executable(solution main.c)

target_link_libraries(solution sumOfTwoNumbers)

set_target_properties(
  solution
  PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)