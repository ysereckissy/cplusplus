add_library(basics OBJECT)
add_library(cplusplus::basics ALIAS basics)
target_sources(basics
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/Objects.cpp
)
target_include_directories(basics
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)