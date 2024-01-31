cmake_minimum_required(VERSION 3.16)
project(matrix)

set(CMAKE_CXX_STANDARD 20)

add_library(matrix
    src/matrix.cpp
)

target_include_directories(matrix
    PUBLIC include
)

add_executable(tests
    tests/test.cpp
)

target_link_libraries(tests PRIVATE matrix)

add_executable(examples
    examples/example.cpp
)

target_link_libraries(examples PRIVATE matrix)