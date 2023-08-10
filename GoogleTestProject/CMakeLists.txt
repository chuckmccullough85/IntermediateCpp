cmake_minimum_required(VERSION 3.14)
cmake_policy(SET CMP0115 NEW)
project(GTestTemplate)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

enable_testing()

add_executable(
  GTestTemplate
  Tests/Sample.cpp
)

target_link_libraries(
  GTestTemplate
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(GTestTemplate)