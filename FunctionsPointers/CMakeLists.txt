cmake_minimum_required(VERSION 3.14)
cmake_policy(SET CMP0115 NEW)
project(FunctionsPtrs)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

enable_testing()

add_executable(
  FPlandscaping
  Color.cpp
  Circle.cpp
  Rectangle.cpp
  Tests/ColorTest.cpp
  Tests/CircleTest.cpp
  Tests/RectangleTest.cpp
  Tests/LandscapeTest.cpp
)

target_link_libraries(
  FPlandscaping
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(FPlandscaping)