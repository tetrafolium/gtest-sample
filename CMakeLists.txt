cmake_minimum_required(VERSION 3.14)
project(gtest-sample)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Now simply link against gtest or gtest_main as needed. Eg
add_executable(gtest-sample summation.cpp summation_test.cpp que_fifo.cpp que_fifo_test.cpp stack.cpp stack_test.cpp)
target_link_libraries(gtest-sample gtest_main)
target_link_libraries(gtest-sample gtest)
add_test(NAME summation_test COMMAND gtest-sample)
