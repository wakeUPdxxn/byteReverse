cmake_minimum_required(VERSION 3.10)

set(This SimpleTest)


set(FETCHCONTENT_BASE_DIR "${CMAKE_BINARY_DIR}/googletest")

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG         v1.15.2
)

# Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_subdirectory(googletest)
include(googletest)

#target_include_directories(${this} PRIVATE ../${CMAKE_CURRENT_SOURCE_DIR})

add_executable(${this} SimpleTest.cpp)

target_link_libraries(${This} PRIVATE 
	gtest_main 
	byteReverse
)

add_test(
	NAME ${This}
	COMMAND ${This}
)