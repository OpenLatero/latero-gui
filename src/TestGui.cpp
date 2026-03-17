// -----------------------------------------------------------
//
// Copyright (c) 2015 by Vincent Levesque. All Rights Reserved.
//
// This file is part of latero-gui.
//
//    latero-gui is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    latero-gui is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with latero-gui.  If not, see <http://www.gnu.org/licenses/>.
//
// -----------------------------------------------------------

#include "TestGui.h"
#include <iostream>
#include "laterowidget.h"

TestGui::TestGui()
{ 
	set_title("Latero Tester");
	auto lateroWidget = Gtk::make_managed<LateroWidget>();
	lateroWidget->set_margin_left(10);
	lateroWidget->set_margin_right(10);
	lateroWidget->set_margin_top(10);
	lateroWidget->set_margin_bottom(10);
	add(*lateroWidget);
	show_all_children();
}

TestGui::~TestGui()
{
}

