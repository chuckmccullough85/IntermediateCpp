cmake_minimum_required(VERSION 3.14)
cmake_policy(SET CMP0115 NEW)
project(GoogleTestProject)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

add_executable(
  GoogleTestProject
  Tests/Sample.cpp
)

target_link_libraries(
  GoogleTestProject
  GTest::gtest_main
)

include(GoogleTest)
