#include "TestGui.h"
#include <iostream>
#include "laterowidget.h"

TestGui::TestGui()
{ 
	set_title("Latero Tester");
	auto lateroWidget = Gtk::make_managed<LateroWidget>();
	lateroWidget->set_margin_start(10);
	lateroWidget->set_margin_end(10);
	lateroWidget->set_margin_top(10);
	lateroWidget->set_margin_bottom(10);
	set_child(*lateroWidget);
}

TestGui::~TestGui()
{
}

