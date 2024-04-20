#include "Mainframe.h"
#include<wx/wx.h>
#include<wx/spinctrl.h>

Mainframe::Mainframe(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel1 = new wxPanel(this);
	wxButton* button2 = new wxButton(panel1, wxID_ANY, "Button", wxPoint(300, 275), wxSize(200, 50));
	wxSlider* slider1 = new wxSlider(panel1, wxID_ANY, 0, 0, 100, wxPoint(300, 200), wxSize(200, -1));
	wxTextCtrl* msg = new wxTextCtrl(panel1, wxID_ANY, "Editable", wxPoint(300, 375), wxSize(200, -1));
	CreateStatusBar();

	button2->Bind(wxEVT_BUTTON, &Mainframe::OnButtonClicked, this);
	slider1->Bind(wxEVT_SLIDER, &Mainframe::OnSliderChanged, this);
	msg->Bind(wxEVT_TEXT, &Mainframe::OnTextChanged, this);

	button2->Unbind(wxEVT_BUTTON, &Mainframe::OnButtonClicked, this);

	/*
	wxButton* button1 = new wxButton(panel1, wxID_ANY, "Button", wxPoint(150,50), wxSize(100,35));
	wxCheckBox* check1 = new wxCheckBox(panel1, wxID_ANY, "CheckBox", wxPoint(550, 50));
	wxStaticText* text1 = new wxStaticText(panel1, wxID_ANY, "Hello World - Not editable", wxPoint(120, 100));
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
	*/
}

void Mainframe::OnButtonClicked(wxCommandEvent& evt) {
	wxLogStatus("Button Clicked");
}

void Mainframe::OnSliderChanged(wxCommandEvent& evt) {
	wxString str = wxString::Format("Slider value: %d", evt.GetInt());
	wxLogStatus(str);
}

void Mainframe::OnTextChanged(wxCommandEvent& evt) {
	wxString str = wxString::Format("Text: %s", evt.GetString());
	wxLogStatus(str);
}