include("${CMAKE_SOURCE_DIR}/cmake/CPM.cmake")
include("${CMAKE_SOURCE_DIR}/cmake/system_link.cmake")

function(setup_dependencies)
    CPMAddPackage(
            NAME FREEGLUT
            GITHUB_REPOSITORY FreeGLUTProject/freeglut
            VERSION 3.4.0
    )
endfunction()