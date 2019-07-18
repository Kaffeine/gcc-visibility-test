add_library(MyLibrary SHARED)

target_sources(MyLibrary PRIVATE
    MyClass.cpp
    MyClass.hpp
)

if (OMIT_PRIVATE_IMPLEMENTATION)
    target_compile_definitions(MyLibrary PRIVATE
        OMIT_PRIVATE_IMPLEMENTATION
    )
endif()

if (FORCE_PRIVATE_HIDDEN)
    target_compile_definitions(MyLibrary PRIVATE
        FORCE_PRIVATE_HIDDEN
    )
endif()

target_include_directories(MyLibrary PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
