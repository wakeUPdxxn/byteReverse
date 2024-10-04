project(byteReverse)
cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if("${CMAKE_CXX_COMPILER_ID}" MATCHES "MSVC")
    message(FATAL_ERROR "You should use another compiler")
endif()

add_library(${PROJECT_NAME} STATIC main.cpp)

set(FETCHCONTENT_BASE_DIR "${CMAKE_BINARY_DIR}/googletest")

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.10.0
)

# Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include(GoogleTest)

target_link_libraries(${PROJECT_NAME}
  gtest gtest_main
)
add_subdirectory(tests)
enable_testing()

option(ENABLE_COVERAGE "Enable coverage reporting" OFF)

# Enable coverage report
if(ENABLE_COVERAGE)
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} --coverage")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage")
endif()
