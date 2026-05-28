#pragma once

#include <gtkmm.h>
#include <vector>
#include <latero/tactiledisplay.h>

class LateroWidget : public Gtk::Frame
{
public:
	LateroWidget();
	virtual ~LateroWidget();
  
protected:
	void OnPiezoAdjChanged();

	std::vector<Glib::RefPtr<Gtk::Adjustment>> piezoAdj_; 
	latero::TactileDisplay* dev_;	
};

