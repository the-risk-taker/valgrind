cmake_minimum_required(VERSION 3.20)
project(Valgrind LANGUAGES C CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)

find_program(VALGRIND valgrind)
if(NOT VALGRIND)
    message(FATAL_ERROR "Valgrind was not found!")
endif()

add_subdirectory(memcheck)
add_subdirectory(cachegrind)
add_subdirectory(callgrind)
add_subdirectory(helgrind)
add_subdirectory(drd)
add_subdirectory(massif)
