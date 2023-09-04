set (this MenuAppFunctionPtr)
set (headers
  Menu.h
)

set(sources 
  Menu.cpp
  MenuApp.cpp
)

project(${this})

add_executable(
  ${this}
  ${sources} ${headers}
)
