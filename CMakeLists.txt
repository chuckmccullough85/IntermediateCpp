cmake_minimum_required(VERSION 3.14)

# cmake_policy(SET CMP0135 NEW) ########   uncomment on MSYS
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

# As you proceed through the course, uncomment the appropriate add_subdirectory() commands
# to add the labs to the build.
# Feel free to comment out the labs you don't want to build at the moment.
# You can use the BUILD ALL target for the build, and choose the target you want to run in the 
# toolbar in Visual Studio.
# Currently, VS Code is set to auto save after a few seconds.  When a cmake file is saved,
# it will trigger a reconfiguration of the makefiles.

add_subdirectory(Landscaping)
add_subdirectory(ConsoleAppProject)
add_subdirectory(GoogleTestProject)
add_subdirectory(FunctionsPointers)
add_subdirectory(Namespaces)
add_subdirectory(Strings)
# add_subdirectory(Templates)
# add_subdirectory(Templates20)
# add_subdirectory(OperatorOverloading)
# add_subdirectory(SmartPointers)
# add_subdirectory(MoveSemantics)
# add_subdirectory(Inheritance)
# add_subdirectory(Interfaces)
# add_subdirectory(Exceptions)
# add_subdirectory(Containers)
# add_subdirectory(Algorithms) 
# add_subdirectory(MenuSystemStarter)
# add_subdirectory(MenuSystemInterface)
# add_subdirectory(MenuSystemFunctor)
# add_subdirectory(MenuSystemFunctionPtr)
# add_subdirectory(MenuSystemLambda)
# add_subdirectory(Threads)
# add_subdirectory(Tasks)
