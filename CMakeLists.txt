cmake_minimum_required(VERSION 3.15)
project(BMP)
add_executable(${PROJECT_NAME})

set_target_properties(BMP PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON
        CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wfatal-errors -mno-ms-bitfields -Wno-invalid-offsetof")

include(CLibs.cmake)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)


file(GLOB_RECURSE GENERATED_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
file(GLOB_RECURSE GENERATED_HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/include/*.h ${CMAKE_SOURCE_DIR}/src/*.h)


target_sources(${PROJECT_NAME} PRIVATE main.cpp ${GENERATED_SOURCES} ${GENERATED_HEADERS})