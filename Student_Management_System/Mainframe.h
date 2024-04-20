#pragma once
#include<wx/wx.h>
class Mainframe : public wxFrame{
	private:
		void OnAnyButtonClicked(wxCommandEvent& evt);
		void OnButton1Clicked(wxCommandEvent& evt);
		void OnButton2Clicked(wxCommandEvent& evt);
		void OnClose(wxCloseEvent& evt);

		//void OnSliderChanged(wxCommandEvent& evt);
		//void OnTextChanged(wxCommandEvent& evt);
	public:
		Mainframe(const wxString& title);
};

