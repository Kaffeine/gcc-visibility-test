cmake_minimum_required(VERSION 3.3)

project(GccVisibilityTest
    LANGUAGES CXX
)

option(OMIT_PRIVATE_IMPLEMENTATION "Omit private class implementation" FALSE)
option(FORCE_PRIVATE_HIDDEN "Force private class visibility to hidden" FALSE)
option(BUILD_TESTS "Build test executable" FALSE)

set(CMAKE_CXX_VISIBILITY_PRESET hidden)

add_subdirectory(src)

if(BUILD_TESTS)
    add_subdirectory(tests)
endif()
