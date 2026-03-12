include(FindPkgConfig)

find_package(latero REQUIRED)

pkg_check_modules (GTKMM gtkmm-3.0 REQUIRED)
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

# Treat deprecation in GTKMM as errors
#target_compile_definitions(latero-gui PRIVATE
#    GLIB_DISABLE_DEPRECATED
#    GDK_DISABLE_DEPRECATED
#    GTK_DISABLE_DEPRECATED
#    GTKMM_DISABLE_DEPRECATED
#)



