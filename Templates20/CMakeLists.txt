set (this Templates20)
set (headers
  #list headers here
)

set(sources 
  main.cpp
)

project(${this})

add_executable(
  ${this}
  ${sources} ${headers}
)
