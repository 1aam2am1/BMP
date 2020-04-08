cmake_minimum_required(VERSION 3.12)

if (NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/extlibs/SFML/.git")
    message(SEND_ERROR "The git submodules are not available. Please run
git submodule update --init --recursive"
            )
endif ()


set(BUILD_SHARED_LIBS TRUE CACHE BOOL "TRUE to build SFML as shared libraries, FALSE to build it as static libraries" FORCE)
# add options to select which modules to build
set(SFML_BUILD_WINDOW TRUE CACHE BOOL "TRUE to build SFML's Window module. This setting is ignored, if the graphics module is built." FORCE)
set(SFML_BUILD_GRAPHICS TRUE CACHE BOOL "TRUE to build SFML's Graphics module." FORCE)
set(SFML_BUILD_AUDIO TRUE CACHE BOOL "TRUE to build SFML's Audio module." FORCE)
set(SFML_BUILD_NETWORK TRUE CACHE BOOL "TRUE to build SFML's Network module." FORCE)
set(CXX_STANDARD "14" CACHE STRING "C++ Standard" FORCE)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/extlibs/SFML EXCLUDE_FROM_ALL)
target_link_libraries(${PROJECT_NAME} sfml-graphics)


add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_SOURCE_DIR}/CCopyDLL.cmake)