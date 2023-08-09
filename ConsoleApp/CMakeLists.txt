cmake_minimum_required(VERSION 3.14)
project(ConsoleApp)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

#enable_testing()

add_executable(
  capp
  main.cpp
)
