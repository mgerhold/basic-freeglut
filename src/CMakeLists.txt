include(${CMAKE_SOURCE_DIR}/cmake/system_link.cmake)

add_executable(main main.cpp)

target_link_system_libraries(main
    PRIVATE freeglut_static
)

target_include_directories(main PRIVATE ${freeglut_SOURCE_DIR}/include)
