/***************************************************************
 * Name:      blackjackMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    ŻŻŻ ()
 * Created:   2025-12-15
 * Copyright: ŻŻŻ ()
 * License:
 **************************************************************/

#include "blackjackMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(blackjackDialog)
#include <wx/intl.h>
#include <wx/string.h>
//*)

#undef _
#define _(s) wxString::FromUTF8(s)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(blackjackDialog)
//*)

BEGIN_EVENT_TABLE(blackjackDialog,wxDialog)
    //(*EventTable(blackjackDialog)
    //*)
END_EVENT_TABLE()

blackjackDialog::blackjackDialog(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(blackjackDialog)
    Create(parent, wxID_ANY, _("wxWidgets app"), wxDefaultPosition, wxDefaultSize, wxDIALOG_NO_PARENT|wxTAB_TRAVERSAL, _T("wxID_ANY"));
    //*)
}

blackjackDialog::~blackjackDialog()
{
    //(*Destroy(blackjackDialog)
    //*)
}

void blackjackDialog::OnQuit(wxCommandEvent& event)
{
    Close();
}

#include "StawkaDialog.h"

extern wxString poziom;


