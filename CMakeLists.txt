cmake_minimum_required(VERSION 3.9)
project(apue
        VERSION 1.2)

set(CMAKE_C_STANDARD 99)
set(TEST "ab\"cd")
add_subdirectory(src)
configure_file(
        configure.h.in
        configure.h
        #        COPYONLY
        ESCAPE_QUOTES
        @ONLY
)
set(CMAKE_PREFIX_PATH /usr/local/Cellar/qt/5.10.0_1/ )
find_package(Qt5 5.1.0 REQUIRED Widgets)

include_directories(${PROJECT_BINARY_DIR})

