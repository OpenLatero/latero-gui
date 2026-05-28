#include "TestGui.h"
#include <gtkmm/application.h>

int main(int argc, char* argv[])
{
	auto app = Gtk::Application::create("org.openlatero.latero-gui");
	return app->make_window_and_run<TestGui>(argc, argv);
};
