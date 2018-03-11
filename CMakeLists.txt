cmake_minimum_required(VERSION 3.9)
project(apue
        VERSION 1.2)

set(CMAKE_C_STANDARD 99)
set(TEST "ab\"cd")
add_subdirectory(src)

include_directories(${PROJECT_BINARY_DIR})

