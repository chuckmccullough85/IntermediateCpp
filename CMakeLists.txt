cmake_minimum_required(VERSION 3.14)
cmake_policy(SET CMP0135 NEW)
cmake_policy(SET CMP0115 NEW)
project(Labs)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest)



# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

add_subdirectory(Landscaping)
add_subdirectory(ConsoleAppProject)
add_subdirectory(GoogleTestProject)
add_subdirectory(FunctionsPointers)
