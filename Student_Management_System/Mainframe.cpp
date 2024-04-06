#include "Mainframe.h"
#include<wx/wx.h>
#include<wx/spinctrl.h>

Mainframe::Mainframe(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel1 = new wxPanel(this);
	wxButton* button1 = new wxButton(panel1, wxID_ANY, "Button", wxPoint(150,50), wxSize(100,35));
	wxCheckBox* check1 = new wxCheckBox(panel1, wxID_ANY, "CheckBox", wxPoint(550, 50));
	wxStaticText* text1 = new wxStaticText(panel1, wxID_ANY, "Hello World - Not editable", wxPoint(120, 100));
	wxTextCtrl* msg = new wxTextCtrl(panel1, wxID_ANY, "Editable", wxPoint(500, 145), wxSize(200, -1));
	wxSlider* slider1 = new wxSlider(panel1, wxID_ANY, 25, 0, 100, wxPoint(100, 250), wxSize(200, -1));
	wxGauge* gauge1 = new wxGauge(panel1, wxID_ANY, 100, wxPoint(500, 255), wxSize(200, -1));
	gauge1->SetValue(75);
	wxArrayString choices;
	choices.Add("A");
	choices.Add("B");
	choices.Add("C");
	wxChoice* choice = new wxChoice(panel1, wxID_ANY, wxPoint(150, 375), wxSize(100, -1), choices);
	choice->Select(0);
	wxSpinCtrl* spin = new wxSpinCtrl(panel1, wxID_ANY, "", wxPoint(550, 375), wxSize(100, -1));
	wxListBox* listBox = new wxListBox(panel1, wxID_ANY, wxPoint(150, 475), wxSize(100, -1), choices); // Add and delete strings at runtime
	wxRadioBox* radBox = new wxRadioBox(panel1, wxID_ANY, "Radio", wxPoint(485, 475), wxDefaultSize, choices);
}