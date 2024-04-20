#pragma once
#include<wx/wx.h>
class Mainframe : public wxFrame{
	private:
		void OnButtonClicked(wxCommandEvent& evt);
		void OnSliderChanged(wxCommandEvent& evt);
		void OnTextChanged(wxCommandEvent& evt);
	public:
		Mainframe(const wxString& title);
};

