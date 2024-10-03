project(byteReverse)
cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(tests)

enable_testing()

option(ENABLE_COVERAGE "Enable coverage reporting" OFF)


# Enable coverage report
if(ENABLE_COVERAGE)
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} --coverage")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage")
endif()