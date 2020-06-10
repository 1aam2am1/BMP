include_directories(${CMAKE_CURRENT_SOURCE_DIR}/chilkat-9.5.0-i686-8.1.0-posix-dwarf-rt_v6-rev0/include)
message(${CMAKE_CURRENT_SOURCE_DIR}/chilkat-9.5.0-i686-8.1.0-posix-dwarf-rt_v6-rev0/include)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/chilkat-9.5.0-i686-8.1.0-posix-dwarf-rt_v6-rev0)

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -L${CMAKE_CURRENT_SOURCE_DIR}/chilkat-9.5.0-i686-8.1.0-posix-dwarf-rt_v6-rev0")
target_link_libraries(${PROJECT_NAME} chilkat-9.5.0 crypt32 ws2_32 dnsapi)
