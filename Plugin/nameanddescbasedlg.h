//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2013 by Eran Ifrah
// file name            : nameanddescbasedlg.h
//
// -------------------------------------------------------------------------
// A
//              _____           _      _     _ _
//             /  __ \         | |    | |   (_) |
//             | /  \/ ___   __| | ___| |    _| |_ ___
//             | |    / _ \ / _  |/ _ \ |   | | __/ _ )
//             | \__/\ (_) | (_| |  __/ |___| | ||  __/
//              \____/\___/ \__,_|\___\_____/_|\__\___|
//
//                                                  F i l e
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __nameanddescbasedlg__
#define __nameanddescbasedlg__

#include <wx/intl.h>

#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/combobox.h>
#include <wx/sizer.h>
#include <wx/statline.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include "codelite_exports.h"

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class NameAndDescBaseDlg
///////////////////////////////////////////////////////////////////////////////
class WXDLLIMPEXP_SDK NameAndDescBaseDlg : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText3;
		wxTextCtrl* m_textCtrlName;
		wxStaticText* m_staticText4;
		wxComboBox* m_choiceType;
		wxStaticText* m_staticText2;
		wxTextCtrl* m_textCtrlDescription;
		wxStaticLine* m_staticline1;
		wxButton* m_buttonOk;
		wxButton* m_buttonCancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnButtonOK( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonCancel( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		NameAndDescBaseDlg( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Save Project As Template"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 594,220 ), long style = wxDEFAULT_DIALOG_STYLE );
		~NameAndDescBaseDlg();
	
};

#endif //__nameanddescbasedlg__
