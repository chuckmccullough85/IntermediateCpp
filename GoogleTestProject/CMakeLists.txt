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
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        24a9e940d481f992ba852599c78bb2217362847b
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
