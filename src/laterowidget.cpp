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

#include "laterowidget.h"
#include <iostream>
#include <gtkmm/filechooserdialog.h>
#include <gtkmm/messagedialog.h>
#include <gtkmm/stock.h>
#include <math.h>

LateroWidget::LateroWidget() :
	Gtk::Frame("Latero Device"),
	dev_(NULL)
{ 
	dev_ = new latero::TactileDisplay();
    
    // TODO: find a better location for this test
    //std::cout << "Checking update rate for 1 minute...\n";
	//dev_->CheckUpdateRate(boost::posix_time::minutes(1));

	// TMP
	/*
	float f = 10000;
	rt_task_set_periodic(NULL,TM_NOW,1E9/f);
	for (int i=0; i<3*f; ++i)
	{
		rt_task_wait_period(NULL);

		float v = sin(2*M_PI*i/1000);

		uint sx = dev_->GetFrameSizeX();
		uint sy = dev_->GetFrameSizeY();
		latero::RangeImg img(sx, sy);
		for (uint y=0; y<sy; ++y)
			for (uint x=0; x<sx; ++x)
				img.Set(x,y,v);
		dev_->WriteFrame(img);
	}
	
	rt_task_set_periodic(NULL,TM_NOW,TM_INFINITE);
	*/
	// TMP


	Gtk::Table *table = manage(new Gtk::Table(dev_->GetFrameSizeX(), dev_->GetFrameSizeY()));;
	add(*table);

	for (uint y=0; y<dev_->GetFrameSizeY(); ++y)
	{
		for (uint x=0; x<dev_->GetFrameSizeX(); ++x)
		{
			Gtk::Adjustment *adj = manage(new Gtk::Adjustment(0, -1, 1));
			Gtk::HScale *scale = manage(new Gtk::HScale(*adj));
			scale->set_size_request(100, -1);
			scale->set_digits(3);
		
			piezoAdj_.push_back(adj);
			adj->signal_value_changed().connect(sigc::mem_fun(*this, 
				&LateroWidget::OnPiezoAdjChanged));
			table->attach(*scale,  x, x+1, y, y+1);		
		}
	}

	show_all_children();
}

LateroWidget::~LateroWidget()
{
	delete dev_;
}

/*
void TestGui::OnError(std::string desc)
{
	Gtk::MessageDialog dlg(*this, desc, false, Gtk::MESSAGE_ERROR);
	dlg.run();
}
*/



void LateroWidget::OnPiezoAdjChanged()
{
	uint sx = dev_->GetFrameSizeX();
	uint sy = dev_->GetFrameSizeY();

	latero::RangeImg img(sx, sy);
	for (uint y=0; y<sy; ++y)
	{
		for (uint x=0; x<sx; ++x)
		{
			float v = piezoAdj_[y*sx + x]->get_value();
			img.Set(x,y,v);
		}
	}
	dev_->WriteFrame(img);
}

