cmake_minimum_required(VERSION 3.20)

project(Labs CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)



enable_testing()

# As you proceed through the course, uncomment the appropriate add_subdirectory() commands
# to add the labs to the build.
# Feel free to comment out the labs you don't want to build at the moment.
# You can use the BUILD ALL target for the build, and choose the target you want to run in the 
# toolbar in Visual Studio.
# Currently, VS Code is set to auto save after a few seconds.  When a cmake file is saved,
# it will trigger a reconfiguration of the makefiles.

add_subdirectory(ConsoleAppProject)
add_subdirectory(GoogleTestProject)
add_subdirectory(Landscaping)
add_subdirectory(FunctionsPointers)
add_subdirectory(Namespaces)
add_subdirectory(Strings)
add_subdirectory(Templates)
add_subdirectory(Templates20)
add_subdirectory(OperatorOverloading)
add_subdirectory(SmartPointers)
add_subdirectory(MoveSemantics)
add_subdirectory(Inheritance)
add_subdirectory(Interfaces)
add_subdirectory(Exceptions)
add_subdirectory(Containers)
add_subdirectory(Algorithms) 
add_subdirectory(MenuSystemStarter)
add_subdirectory(MenuSystemInterface)
add_subdirectory(MenuSystemFunctor)
add_subdirectory(MenuSystemFunctionPtr)
add_subdirectory(MenuSystemLambda)
add_subdirectory(Threads)
add_subdirectory(Tasks)

add_subdirectory(Solutions/NamespaceSolution)
add_subdirectory(Solutions/StaticsSolution)
add_subdirectory(Solutions/MemorySolution)
add_subdirectory(Solutions/LinkedListSolution)
add_subdirectory(Solutions/TemplateSolution)
add_subdirectory(Solutions/OperatorSolution)
add_subdirectory(Solutions/SmartPointerSolution)
add_subdirectory(Solutions/InheritanceSolution)
add_subdirectory(Solutions/InterfaceSolution)
add_subdirectory(Solutions/ExceptionSolution)
add_subdirectory(Solutions/ContainerSolution)
add_subdirectory(Solutions/ForEachSolution)
add_subdirectory(Solutions/ThreadsSolution)
add_subdirectory(Solutions/TasksSolution)