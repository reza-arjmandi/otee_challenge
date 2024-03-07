cmake_minimum_required(VERSION 3.1)
project(squares_challenge)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.14.0
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include_directories(${CMAKE_SOURCE_DIR}/src/headers)

add_executable(app src/app.cpp)
add_executable(tests src/tests.cpp)
target_link_libraries(tests GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(tests)