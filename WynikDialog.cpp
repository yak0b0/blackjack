#include "WynikDialog.h"
#include "StawkaDialog.h"
#include "blackjackMain.h"
#include "blackjackApp.h"
#include <wx/string.h>

#undef _
#define _(s) wxString::FromUTF8(s)


//(*InternalHeaders(WynikDialog)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(WynikDialog)
const wxWindowID WynikDialog::ID_STATICBITMAP1 = wxNewId();
const wxWindowID WynikDialog::ID_STATICTEXT1 = wxNewId();
const wxWindowID WynikDialog::ID_STATICTEXT3 = wxNewId();
const wxWindowID WynikDialog::ID_STATICTEXT2 = wxNewId();
const wxWindowID WynikDialog::ID_BUTTON2 = wxNewId();
const wxWindowID WynikDialog::ID_BUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(WynikDialog,wxDialog)
    //(*EventTable(WynikDialog)
    //*)
END_EVENT_TABLE()

extern int _wynik;
extern int ___stawka;
extern int ___saldo;
extern int _counter;

WynikDialog::WynikDialog(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(WynikDialog)
    wxFlexGridSizer* FlexGridSizer1;
    wxFlexGridSizer* FlexGridSizer3;
    wxFlexGridSizer* FlexGridSizer4;
    wxFlexGridSizer* TextSizer;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
    FlexGridSizer1 = new wxFlexGridSizer(2, 2, 0, 0);
    FlexGridSizer1->AddGrowableCol(0);
    FlexGridSizer1->AddGrowableCol(1);
    FlexGridSizer1->AddGrowableRow(0);
    FlexGridSizer1->AddGrowableRow(1);
    Obrazek = new wxStaticBitmap(this, ID_STATICBITMAP1, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
    FlexGridSizer1->Add(Obrazek, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextSizer = new wxFlexGridSizer(3, 1, 0, 0);
    WynikText = new wxStaticText(this, ID_STATICTEXT1, _("WYGRAL KRUPIER/UZYTKOWNIK"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    TextSizer->Add(WynikText, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    IleStawkaText = new wxStaticText(this, ID_STATICTEXT3, _("Przegrales - Stawka"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    TextSizer->Add(IleStawkaText, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SaldoText = new wxStaticText(this, ID_STATICTEXT2, _("ILE PRZEGRALES/WYGRALES"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    TextSizer->Add(SaldoText, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(TextSizer, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer3 = new wxFlexGridSizer(1, 1, 0, 0);
    PlayAgainButton = new wxButton(this, ID_BUTTON2, _("Zagraj jeszcze raz"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    FlexGridSizer3->Add(PlayAgainButton, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(FlexGridSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer4 = new wxFlexGridSizer(1, 1, 0, 0);
    ExitButton = new wxButton(this, ID_BUTTON1, _("Wyjdź z programu"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    FlexGridSizer4->Add(ExitButton, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(FlexGridSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(FlexGridSizer1);
    FlexGridSizer1->SetSizeHints(this);

    Connect(ID_BUTTON2, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&WynikDialog::PlayAgainClick);
    Connect(ID_BUTTON1, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&WynikDialog::ExitProgramClick);
    //*)

    if(_wynik == 2){
        Obrazek->SetBitmap(wxBitmap("images/sad.jpg", wxBITMAP_TYPE_JPEG));
        WynikText->SetLabel(_("Wygrał krupier!"));
        IleStawkaText->SetLabel(_("Przegrałeś ") + wxString::Format("%d", ___stawka) + _(" zł") );
        SaldoText->SetLabel(_("Twoje aktualne saldo: ") + wxString::Format("%d", ___saldo) + _(" zł"));
        SetSizer(FlexGridSizer1);
        FlexGridSizer1->SetSizeHints(this);
    } else if (_wynik == 1){
        Obrazek->SetBitmap(wxBitmap("images/happy1.jpg", wxBITMAP_TYPE_JPEG));
        WynikText->SetLabel(_("Wygrał użytkownik!"));
        IleStawkaText->SetLabel(_("Wygrałeś ") + wxString::Format("%d", ___stawka * 2) + _(" zł") );
        SaldoText->SetLabel(_("Twoje aktualne saldo: ") + wxString::Format("%d", ___saldo) + _(" zł"));
        SetSizer(FlexGridSizer1);
        FlexGridSizer1->SetSizeHints(this);
    } else if (_wynik == 0){
        Obrazek->SetBitmap(wxBitmap("images/happy1.jpg", wxBITMAP_TYPE_JPEG));
        WynikText->SetLabel(_("Remis! "));
        IleStawkaText->SetLabel(_("Zwrot ") + wxString::Format("%d", ___stawka) + _(" zł") );
        SaldoText->SetLabel(_("Twoje aktualne saldo: ") + wxString::Format("%d", ___saldo) + _(" zł"));
        SetSizer(FlexGridSizer1);
        FlexGridSizer1->SetSizeHints(this);
    }

}

WynikDialog::~WynikDialog()
{
    //(*Destroy(WynikDialog)
    //*)
}


void WynikDialog::PlayAgainClick(wxCommandEvent& event)
{
    _counter++;
    EndModal(wxID_CANCEL);
    StawkaDialog gra(this);
    gra.ShowModal();
}


void WynikDialog::ExitProgramClick(wxCommandEvent& event)
{
    wxTheApp->Exit();
}
