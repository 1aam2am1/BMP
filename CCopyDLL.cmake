cmake_minimum_required(VERSION 3.12)


file(GLOB_RECURSE GENERATED_DLL ${CMAKE_CURRENT_BINARY_DIR}/extlibs/*.dll)

file(COPY ${GENERATED_DLL} DESTINATION ${CMAKE_BINARY_DIR})