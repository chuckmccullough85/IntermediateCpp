set (this GoogleTestProject)

set (headers
#list headers here
mycode.h
)

set(sources 
#list cpp here
mycode.cpp
)
set (tests
Tests/Sample.cpp

)

project(${this})

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/7e33b6a1c497ced1e98fc60175aeb4678419281c.zip
)
FetchContent_MakeAvailable(googletest)




add_library (lib${this} STATIC ${sources} ${headers})

add_executable(${this} ${tests})

target_link_libraries(${this} PUBLIC
    gtest_main
    lib${this}
)

include (GoogleTest)
gtest_discover_tests(${this})
