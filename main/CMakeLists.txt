add_executable(cplusplus)
target_sources(cplusplus
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)

target_link_libraries(cplusplus
        PRIVATE
        cplusplus::basics
)