cmake_minimum_required(VERSION 3.14)
cmake_policy(SET CMP0115 NEW)
project(InterfaceSolution)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

add_executable(
  InterfaceSolution
  Color.cpp
  Rectangle.cpp
  Circle.cpp
  Tests/ColorTest.cpp
  Tests/CircleTest.cpp
  Tests/RectangleTest.cpp
  Tests/LandscapeTest.cpp
)

target_link_libraries(
  InterfaceSolution
  GTest::gtest_main
)

include(GoogleTest)

