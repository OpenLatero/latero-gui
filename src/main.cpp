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
#include <gtkmm/main.h>

int main(int argc, char* argv[])
{
	Gtk::Main kit(argc, argv);
	TestGui gui;
	Gtk::Main::run(gui);
	return 0;
};
