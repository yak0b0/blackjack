#include "StawkaDialog.h"

//(*InternalHeaders(StawkaDialog)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(StawkaDialog)
const wxWindowID StawkaDialog::ID_STATICTEXT1 = wxNewId();
const wxWindowID StawkaDialog::ID_STATICTEXT2 = wxNewId();
const wxWindowID StawkaDialog::ID_TEXTCTRL1 = wxNewId();
const wxWindowID StawkaDialog::ID_BUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(StawkaDialog,wxDialog)
    //(*EventTable(StawkaDialog)
    //*)
END_EVENT_TABLE()

StawkaDialog::StawkaDialog(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(StawkaDialog)
    wxFlexGridSizer* FlexGridSizer1;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
    FlexGridSizer1 = new wxFlexGridSizer(4, 1, 0, 0);
    ZaIleText = new wxStaticText(this, ID_STATICTEXT1, _("Za ile grasz\?"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    FlexGridSizer1->Add(ZaIleText, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    LicznikText = new wxStaticText(this, ID_STATICTEXT2, _("Licznik pieniedzy"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    FlexGridSizer1->Add(LicznikText, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    KwotaCtrl = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    FlexGridSizer1->Add(KwotaCtrl, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GuzikZatwierdz = new wxButton(this, ID_BUTTON1, _("Zatwierdz"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    FlexGridSizer1->Add(GuzikZatwierdz, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(FlexGridSizer1);
    FlexGridSizer1->SetSizeHints(this);

    Connect(ID_BUTTON1, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&StawkaDialog::OnGuzikZatwierdzClick);
    //*)
}

StawkaDialog::~StawkaDialog()
{
    //(*Destroy(StawkaDialog)
    //*)
}

#include "GraDialog.h"

void StawkaDialog::OnGuzikZatwierdzClick(wxCommandEvent& event)
{
        GraDialog gra(this);
        gra.ShowModal();

}
