#include "GraDialog.h"

//(*InternalHeaders(GraDialog)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(GraDialog)
const wxWindowID GraDialog::ID_STATICBITMAP1 = wxNewId();
const wxWindowID GraDialog::ID_STATICTEXT1 = wxNewId();
const wxWindowID GraDialog::ID_BUTTON1 = wxNewId();
const wxWindowID GraDialog::ID_BUTTON2 = wxNewId();
const wxWindowID GraDialog::ID_BUTTON3 = wxNewId();
const wxWindowID GraDialog::ID_BUTTON4 = wxNewId();
//*)

BEGIN_EVENT_TABLE(GraDialog,wxDialog)
    //(*EventTable(GraDialog)
    //*)
END_EVENT_TABLE()

GraDialog::GraDialog(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
    //(*Initialize(GraDialog)
    wxFlexGridSizer* FlexGridSizer1;
    wxFlexGridSizer* GuzikiSizer;
    wxFlexGridSizer* KartyKrupieraSizer;
    wxFlexGridSizer* KartyUzytkownikaSizer;
    wxFlexGridSizer* OkienkoUzytkownikaSizer;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
    FlexGridSizer1 = new wxFlexGridSizer(2, 2, 0, 0);
    KrupierBitmap = new wxStaticBitmap(this, ID_STATICBITMAP1, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
    FlexGridSizer1->Add(KrupierBitmap, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Twoje Karty"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    FlexGridSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    KartyKrupieraSizer = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer1->Add(KartyKrupieraSizer, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    OkienkoUzytkownikaSizer = new wxFlexGridSizer(2, 1, 0, 0);
    KartyUzytkownikaSizer = new wxFlexGridSizer(0, 3, 0, 0);
    OkienkoUzytkownikaSizer->Add(KartyUzytkownikaSizer, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GuzikiSizer = new wxFlexGridSizer(1, 4, 0, 0);
    Button1 = new wxButton(this, ID_BUTTON1, _("Hit"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    GuzikiSizer->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button2 = new wxButton(this, ID_BUTTON2, _("Stand"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    GuzikiSizer->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button3 = new wxButton(this, ID_BUTTON3, _("Double"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    GuzikiSizer->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button4 = new wxButton(this, ID_BUTTON4, _("Split"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
    GuzikiSizer->Add(Button4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    OkienkoUzytkownikaSizer->Add(GuzikiSizer, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(OkienkoUzytkownikaSizer, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(FlexGridSizer1);
    FlexGridSizer1->SetSizeHints(this);
    //*)
}

GraDialog::~GraDialog()
{
    //(*Destroy(GraDialog)
    //*)
}

