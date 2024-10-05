project(SimpleTest)
cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(This SimpleTest)

add_executable(${PROJECT_NAME} SimpleTest.cpp)
include_directories(../${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(${PROJECT_NAME} byteReverse gtest gtest_main gmock gmock_main)

add_test(
	NAME ${This}
	COMMAND ${This}
)