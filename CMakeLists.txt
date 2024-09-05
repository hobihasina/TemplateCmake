#[==[
    . Introducing testing. Using the google test reference

#]==]

cmake_minimum_required(VERSION 3.20)

project(Template)

#Testing
enable_testing()

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

#load modules
include(ClangFormat)

#add format file
add_clang_format_target(format-code ${PROJECT_SOURCE_DIR})

#Using c++ 20 standard required
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#library directory
add_subdirectory(src)

#main file
add_executable(rooster main.cpp)
target_link_libraries(rooster PRIVATE calculator)

#testing file
add_subdirectory(test)
