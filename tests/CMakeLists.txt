add_executable(myTest test.cpp)

target_link_libraries(myTest PUBLIC
    MyLibrary
)
