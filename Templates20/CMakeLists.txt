get_filename_component(ProjectName ${CMAKE_CURRENT_SOURCE_DIR} NAME)
string(REPLACE " " "_" ProjectName ${ProjectName})

project(${ProjectName} VERSION 1.0 LANGUAGES CXX)

file(GLOB sources CONFIGURE_DEPENDS "*.cpp")
file(GLOB headers CONFIGURE_DEPENDS "*.h")

add_executable(${ProjectName} ${sources} ${headers})

