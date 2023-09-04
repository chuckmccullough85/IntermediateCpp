

set (this SmartPointersSolution)

set (headers
  Circle.h
  Color.h
  Rectangle.h
  LinkedList.h
)

set(sources 
  Color.cpp
  Circle.cpp
  Rectangle.cpp
)

set (tests
  Tests/ColorTest.cpp
  Tests/CircleTest.cpp
  Tests/RectangleTest.cpp
  Tests/LandscapeTest.cpp
)

project(${this})

add_library (lib${this} STATIC ${sources} ${headers})

add_executable(${this} ${tests})

target_link_libraries(${this} PUBLIC
    gtest_main
    lib${this}
)

include (GoogleTest)
gtest_discover_tests(${this})
