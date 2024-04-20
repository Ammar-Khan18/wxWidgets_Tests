#include "Mainframe.h"
#include<wx/wx.h>
#include<wx/spinctrl.h>

Mainframe::Mainframe(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel1 = new wxPanel(this);
	
	wxStatusBar* statusbar = CreateStatusBar();
	panel1->Bind(wxEVT_KEY_DOWN, &Mainframe::OnKeyEvent, this);
	statusbar->SetDoubleBuffered(true);


	/*
	wxButton* button1 = new wxButton(panel1, wxID_ANY, "Button 1", wxPoint(300,275), wxSize(200,50));
	wxButton* button2 = new wxButton(panel1, wxID_ANY, "Button 2", wxPoint(300, 350), wxSize(200, 50));
	panel1->Bind(wxEVT_MOTION, &Mainframe::OnMouseEvent, this);
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
	// Dynamic event handling
	wxSlider* slider1 = new wxSlider(panel1, wxID_ANY, 0, 0, 100, wxPoint(300, 200), wxSize(200, -1));
	wxTextCtrl* msg = new wxTextCtrl(panel1, wxID_ANY, "Editable", wxPoint(300, 375), wxSize(200, -1));
	slider1->Bind(wxEVT_SLIDER, &Mainframe::OnSliderChanged, this);
	msg->Bind(wxEVT_TEXT, &Mainframe::OnTextChanged, this);
	this->Bind(wxEVT_CLOSE_WINDOW, &Mainframe::OnClose, this);
	this->Bind(wxEVT_BUTTON, &Mainframe::OnAnyButtonClicked, this);
	button1->Bind(wxEVT_BUTTON, &Mainframe::OnButton1Clicked, this);
	button2->Bind(wxEVT_BUTTON, &Mainframe::OnButton2Clicked, this);
	*/
}

void Mainframe::OnKeyEvent(wxKeyEvent& evt) {
	wxChar keyChar = evt.GetUnicodeKey();
	wxLogStatus("Key Event %c",keyChar);
}



/*
void Mainframe::OnMouseEvent(wxMouseEvent& evt) {
	wxPoint mousePos = wxGetMousePosition();
	mousePos = this->ScreenToClient(mousePos);
	wxString msg = wxString::Format("Mouse Detected: x=%d, y=%d", mousePos.x, mousePos.y);
	wxLogStatus(msg);
}
void Mainframe::OnClose(wxCloseEvent& evt) {
	wxLogMessage("Frame Close");
	evt.Skip();
}

void Mainframe::OnAnyButtonClicked(wxCommandEvent& evt) {
	wxLogMessage("Button Clicked");
}

void Mainframe::OnButton1Clicked(wxCommandEvent& evt) {
	wxLogStatus("Button 1 Clicked");
	evt.Skip();
}

void Mainframe::OnButton2Clicked(wxCommandEvent& evt) {
	wxLogStatus("Button 2 Clicked");
}
void Mainframe::OnSliderChanged(wxCommandEvent& evt) {
	wxString str = wxString::Format("Slider value: %d", evt.GetInt());
	wxLogStatus(str);
}

void Mainframe::OnTextChanged(wxCommandEvent& evt) {
	wxString str = wxString::Format("Text: %s", evt.GetString());
	wxLogStatus(str);
}
*/