cmake_minimum_required(VERSION 3.21...3.31)
Project(latero-gui)

# add /usr/loca/lib/pkgconfig (necessary on macOS)
set( ENV{PKG_CONFIG_PATH} "$ENV{PKG_CONFIG_PATH}:/usr/local/lib/pkgconfig" )

if(UNIX)
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11")
endif()

add_subdirectory(src)
