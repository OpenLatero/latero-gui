cmake_minimum_required(VERSION 2.8)
Project(latero-gui)

if(UNIX)
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11")
endif()

add_subdirectory(src)
