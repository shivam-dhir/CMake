cmake_minimum_required(VERSION 3.16)
project(SystemsPlayground)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(math_utils src/math_utils.cpp)

target_include_directories(math_utils PUBLIC ${CMAKE_SOURCE_DIR}/include)

add_executable(main src/main.cpp)

target_link_libraries(main PRIVATE math_utils)

