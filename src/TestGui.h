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

#ifndef TEST_GUI_H
#define TEST_GUI_H

#include <gtkmm/window.h>
#include <gtkmm/button.h>
#include <gtkmm/box.h>
#include <gtkmm/entry.h>
#include <gtkmm/frame.h>
#include <gtkmm/adjustment.h>
#include <gtkmm/table.h>
#include <gtkmm/scale.h>
#include <vector>
#include <latero/tactiledisplay.h>

class TestGui : public Gtk::Window
{
public:

	TestGui();
	virtual ~TestGui();
};

#endif
