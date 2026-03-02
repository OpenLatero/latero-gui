include(FindPkgConfig)

#pkg_check_modules (LATERO latero)
#link_directories(${LATERO_LIBRARY_DIRS})
#include_directories(${LATERO_INCLUDE_DIRS})
find_package(latero REQUIRED)


pkg_check_modules (GTKMM gtkmm-2.4 REQUIRED)
link_directories(${GTKMM_LIBRARY_DIRS})
include_directories(${GTKMM_INCLUDE_DIRS})

set(prog_SRCS
	main.cpp
	laterowidget.cpp laterowidget.h
	TestGui.cpp TestGui.h
)

add_executable(latero-gui ${prog_SRCS})

target_link_libraries(latero-gui latero::latero ${GTKMM_LIBRARIES})
install_programs(/bin latero-gui)




