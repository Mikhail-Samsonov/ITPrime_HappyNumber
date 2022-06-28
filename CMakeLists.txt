cmake_minimum_required(VERSION 3.0)
project(ITPrime)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE HEADERS "${CMAKE_SOURCE_DIR}/src/*.h")
file(GLOB_RECURSE SOURCES "${CMAKE_SOURCE_DIR}/src/*.cpp")

add_executable(happy
        ${HEADERS}
        ${SOURCES}
        main.cpp)

target_include_directories(happy PRIVATE ${CMAKE_SOURCE_DIR}/src)