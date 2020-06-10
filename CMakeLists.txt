cmake_minimum_required(VERSION 3.15)
project(BMP)
add_executable(${PROJECT_NAME})

set_target_properties(BMP PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON
        CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wfatal-errors -mno-ms-bitfields -Wno-invalid-offsetof")

include(CLibs.cmake)
include(chilkat-9.5.0-i686-8.1.0-posix-dwarf-rt_v6-rev0/CMakeLists.txt)
add_subdirectory(WinNTL-11_4_3)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)


file(GLOB_RECURSE GENERATED_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
file(GLOB_RECURSE GENERATED_HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/include/*.h ${CMAKE_SOURCE_DIR}/src/*.h)


target_sources(${PROJECT_NAME} PRIVATE main.cpp ${GENERATED_SOURCES} ${GENERATED_HEADERS})