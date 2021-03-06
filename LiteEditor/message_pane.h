//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2013 by Eran Ifrah
// file name            : message_pane.h
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

#ifndef __message_pane__
#define __message_pane__

/**
@file
Subclass of MessagePaneBase, which is generated by wxFormBuilder.
*/

#include "messagepane_base.h"
#include <vector>

class ButtonDetails
{
public:
    wxString      buttonLabel;
    int           commandId;
    wxEvtHandler* window;
    bool          menuCommand;
    bool          isDefault;

public:
    ButtonDetails() : buttonLabel(wxT("")), commandId(wxNOT_FOUND), window(NULL), menuCommand(true)
    {}
    ~ButtonDetails()
    {}
};

class CheckboxDetails
{
    wxString      configLabel;	// If the user wants no more notification spam, store the preference using this label
    bool		  showSpamCheck;

public:
    CheckboxDetails() : showSpamCheck(false)
    {}
    CheckboxDetails(const wxString& label) : configLabel(label), showSpamCheck(true)
    {}
    ~CheckboxDetails()
    {}
    wxString GetLabel() const {
        return configLabel;
    }
    bool GetShowCheckbox() const {
        return showSpamCheck;
    }
};

class MessageDetails
{
public:
    wxString      message;
    wxBitmap      bmp;
    ButtonDetails btn1;
    ButtonDetails btn2;
    ButtonDetails btn3;
    CheckboxDetails check;
    bool          showHideButton;

public:
    MessageDetails() : bmp(wxNullBitmap), showHideButton(true)
    {}

    ~MessageDetails()
    {}
};

class MessagePaneData
{
    std::vector<MessageDetails> m_queue;
public:
    MessagePaneData() {}
    ~MessagePaneData() {
        Clear();
    }

    void           PushMessage(const MessageDetails &msg);
    void           PopMessage();
    MessageDetails CurrentMessage();
    void           Clear();
    bool           IsEmpty();
    bool           IsExists(const wxString &msg);
};

/** Implementing MessagePaneBase */
class MessagePane : public MessagePaneBase
{
    MessagePaneData m_messages;

protected:
    // Handlers for MessagePaneBase events.
    void OnKeyDown( wxKeyEvent& event );
    void OnButtonClose( wxCommandEvent& event );
    void OnActionButton( wxCommandEvent& event );
    void OnActionButton1( wxCommandEvent& event );
    void OnActionButton2( wxCommandEvent& event );

    void OnEraseBG( wxEraseEvent& event );
    void OnPaint( wxPaintEvent& event );

    void DoHide();
    void DoShowNextMessage();
    void DoShowCurrentMessage();
    void DoPostEvent(ButtonDetails btn);
    void SavePreferenceIfNeeded(const MessageDetails msg, int choice);

public:
    /** Constructor */
    MessagePane( wxWindow* parent );

    void ShowMessage(const wxString &message, bool showHideButton = true, const wxBitmap &bmp = wxNullBitmap, const ButtonDetails& btn1 = ButtonDetails(),
                     const ButtonDetails& btn2 = ButtonDetails(), const ButtonDetails& btn3 = ButtonDetails(), const CheckboxDetails& chkbox = CheckboxDetails());
};

#endif // __message_pane__
