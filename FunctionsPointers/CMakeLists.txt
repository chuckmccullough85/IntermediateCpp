cmake_minimum_required(VERSION 3.14)
cmake_policy(SET CMP0115 NEW)
project(FunctionsPointers)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

enable_testing()

add_executable(
  FunctionsPointers
  Color.cpp
  Circle.cpp
  Rectangle.cpp
  Tests/ColorTest.cpp
  Tests/CircleTest.cpp
  Tests/RectangleTest.cpp
  Tests/LandscapeTest.cpp
)

target_link_libraries(
  FunctionsPointers
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(FunctionsPointers)