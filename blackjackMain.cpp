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
#include "StawkaDialog.h"


//(*InternalHeaders(blackjackDialog)
#include <wx/intl.h>
#include <wx/string.h>
//*)

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
const wxWindowID blackjackDialog::ID_STATICTEXT1 = wxNewId();
const wxWindowID blackjackDialog::ID_COMBOBOX1 = wxNewId();
const wxWindowID blackjackDialog::ID_BUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(blackjackDialog,wxDialog)
    //(*EventTable(blackjackDialog)
    //*)
END_EVENT_TABLE()

blackjackDialog::blackjackDialog(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(blackjackDialog)
    wxFlexGridSizer* FlexGridSizer1;

    Create(parent, wxID_ANY, _("wxWidgets app"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
    FlexGridSizer1 = new wxFlexGridSizer(3, 1, 0, 0);
    TrudnoscText = new wxStaticText(this, ID_STATICTEXT1, _("Wybierz poziom trudności:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    FlexGridSizer1->Add(TrudnoscText, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    ComboTrudnosc = new wxComboBox(this, ID_COMBOBOX1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_COMBOBOX1"));
    ComboTrudnosc->Append(_("Easy"));
    ComboTrudnosc->Append(_("Medium"));
    ComboTrudnosc->Append(_("Hard"));
    FlexGridSizer1->Add(ComboTrudnosc, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GuzikKont = new wxButton(this, ID_BUTTON1, _("Kontynuuj"), wxDefaultPosition, wxSize(259,23), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    FlexGridSizer1->Add(GuzikKont, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(FlexGridSizer1);
    FlexGridSizer1->SetSizeHints(this);
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

void blackjackDialog::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));

    StawkaDialog dlg(this);

    if (dlg.ShowModal() == wxID_OK)
    {
        int stawka = dlg.GetStawka();
        wxMessageBox(
            "Wybrana stawka: " + wxString::Format("%d", stawka),
            "TEST",
            wxOK | wxICON_INFORMATION
        );
    }
}
