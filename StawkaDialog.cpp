#include "StawkaDialog.h"
#include "blackjackApp.h"
#include <wx/msgdlg.h>
//(*InternalHeaders(StawkaDialog)
#include <wx/intl.h>
#include <wx/string.h>
//*)

#include <wx/string.h>

#undef _
#define _(s) wxString::FromUTF8(s)

int ___stawka;
int  ___saldo;
int _counter = 0;

//(*IdInit(StawkaDialog)
const wxWindowID StawkaDialog::ID_STATICTEXT1 = wxNewId();
const wxWindowID StawkaDialog::ID_STATICTEXT2 = wxNewId();
const wxWindowID StawkaDialog::ID_STATICTEXT4 = wxNewId();
const wxWindowID StawkaDialog::ID_CHECKBOX1 = wxNewId();
const wxWindowID StawkaDialog::ID_BITMAPBUTTON1 = wxNewId();
const wxWindowID StawkaDialog::ID_BITMAPBUTTON2 = wxNewId();
const wxWindowID StawkaDialog::ID_BITMAPBUTTON3 = wxNewId();
const wxWindowID StawkaDialog::ID_BITMAPBUTTON4 = wxNewId();
const wxWindowID StawkaDialog::ID_BITMAPBUTTON5 = wxNewId();
const wxWindowID StawkaDialog::ID_BITMAPBUTTON6 = wxNewId();
const wxWindowID StawkaDialog::ID_BITMAPBUTTON7 = wxNewId();
const wxWindowID StawkaDialog::ID_BITMAPBUTTON8 = wxNewId();
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
    wxFlexGridSizer* FlexGridSizer2;
    wxFlexGridSizer* FlexGridSizer3;

    Create(parent, id, _("WYBIERZ STAWKE"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
    SetClientSize(wxSize(400,400));
    SetBackgroundColour(wxColour(255,255,255));
    FlexGridSizer1 = new wxFlexGridSizer(6, 1, 0, 0);
    FlexGridSizer1->AddGrowableCol(0);
    FlexGridSizer1->AddGrowableRow(0);
    FlexGridSizer1->AddGrowableRow(1);
    FlexGridSizer1->AddGrowableRow(2);
    FlexGridSizer1->AddGrowableRow(3);
    FlexGridSizer1->AddGrowableRow(4);
    ZaIleText = new wxStaticText(this, ID_STATICTEXT1, _("Za ile grasz\?"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    FlexGridSizer1->Add(ZaIleText, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    LicznikText = new wxStaticText(this, ID_STATICTEXT2, _("Licznik pieniedzy"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    FlexGridSizer1->Add(LicznikText, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticTextGrasz = new wxStaticText(this, ID_STATICTEXT4, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    FlexGridSizer1->Add(StaticTextGrasz, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer3 = new wxFlexGridSizer(1, 2, 0, wxDLG_UNIT(this,wxSize(0,0)).GetWidth());
    FlexGridSizer3->AddGrowableCol(0);
    FlexGridSizer3->AddGrowableCol(1);
    FlexGridSizer3->AddGrowableRow(0);
    CheckBox = new wxCheckBox(this, ID_CHECKBOX1, _("Dodaj / Odejmij"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX1"));
    CheckBox->SetValue(true);
    FlexGridSizer3->Add(CheckBox, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(FlexGridSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer2 = new wxFlexGridSizer(2, 4, 0, 0);
    FlexGridSizer2->AddGrowableCol(0);
    FlexGridSizer2->AddGrowableCol(1);
    FlexGridSizer2->AddGrowableRow(0);
    FlexGridSizer2->AddGrowableRow(1);
    chip1 = new wxBitmapButton(this, ID_BITMAPBUTTON1, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
    FlexGridSizer2->Add(chip1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    chip5 = new wxBitmapButton(this, ID_BITMAPBUTTON2, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
    FlexGridSizer2->Add(chip5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    chip25 = new wxBitmapButton(this, ID_BITMAPBUTTON3, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON3"));
    FlexGridSizer2->Add(chip25, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    chip50 = new wxBitmapButton(this, ID_BITMAPBUTTON4, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON4"));
    FlexGridSizer2->Add(chip50, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    chip100 = new wxBitmapButton(this, ID_BITMAPBUTTON5, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON5"));
    FlexGridSizer2->Add(chip100, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    chip500 = new wxBitmapButton(this, ID_BITMAPBUTTON6, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON6"));
    FlexGridSizer2->Add(chip500, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    chip1000 = new wxBitmapButton(this, ID_BITMAPBUTTON7, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON7"));
    FlexGridSizer2->Add(chip1000, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    all_in = new wxBitmapButton(this, ID_BITMAPBUTTON8, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON8"));
    FlexGridSizer2->Add(all_in, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GuzikZatwierdz = new wxButton(this, ID_BUTTON1, _("Zatwierdz"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    FlexGridSizer1->Add(GuzikZatwierdz, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(FlexGridSizer1);
    Layout();
    Center();

    Connect(ID_BITMAPBUTTON1, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&StawkaDialog::Onchip1Click);
    Connect(ID_BITMAPBUTTON2, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&StawkaDialog::Onchip5Click);
    Connect(ID_BITMAPBUTTON3, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&StawkaDialog::Onchip25Click);
    Connect(ID_BITMAPBUTTON4, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&StawkaDialog::Onchip100Click);
    Connect(ID_BITMAPBUTTON6, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&StawkaDialog::Onchip500Click);
    Connect(ID_BITMAPBUTTON7, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&StawkaDialog::Onchip1000Click);
    Connect(ID_BITMAPBUTTON8, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&StawkaDialog::Onall_inClick);
    Connect(ID_BUTTON1, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&StawkaDialog::OnGuzikZatwierdzClick);
    //*)

    //blackjackApp* app = (blackjackApp*)wxTheApp;

    m_aktualnaStawka = 0;
    StaticTextGrasz->SetLabel("Stawka: 0");

    int newWidth = 75;
    int newHeight = 75;
    chip1->SetBitmap(wxBitmap("images/1.png", wxBITMAP_TYPE_PNG).ConvertToImage().Rescale(newWidth, newHeight, wxIMAGE_QUALITY_HIGH));
    chip5->SetBitmap(wxBitmap("images/5.png", wxBITMAP_TYPE_PNG).ConvertToImage().Rescale(newWidth, newHeight, wxIMAGE_QUALITY_HIGH));
    chip25->SetBitmap(wxBitmap("images/25.png", wxBITMAP_TYPE_PNG).ConvertToImage().Rescale(newWidth, newHeight, wxIMAGE_QUALITY_HIGH));
    chip50->SetBitmap(wxBitmap("images/50.png", wxBITMAP_TYPE_PNG).ConvertToImage().Rescale(newWidth, newHeight, wxIMAGE_QUALITY_HIGH));
    chip100->SetBitmap(wxBitmap("images/100.png", wxBITMAP_TYPE_PNG).ConvertToImage().Rescale(newWidth, newHeight, wxIMAGE_QUALITY_HIGH));
    chip500->SetBitmap(wxBitmap("images/500_1.jpg", wxBITMAP_TYPE_JPEG).ConvertToImage().Rescale(newWidth, newHeight, wxIMAGE_QUALITY_HIGH));
    chip1000->SetBitmap(wxBitmap("images/1000.png", wxBITMAP_TYPE_PNG).ConvertToImage().Rescale(newWidth, newHeight, wxIMAGE_QUALITY_HIGH));
    all_in->SetBitmap(wxBitmap("images/all_in.png", wxBITMAP_TYPE_PNG).ConvertToImage().Rescale(newWidth, newHeight, wxIMAGE_QUALITY_HIGH));

    if (_counter == 0)
    {
        saldo = 1000;      // first run only
    }
    else
    {
        saldo = ___saldo;  // load updated saldo
        if(___saldo == 0){
        wxMessageBox(_("Jesteś spłukany! Czas opuścić kasyno! "), _("Koniec gry koleżko"), wxICON_EXCLAMATION | wxICON_ERROR);
        wxTheApp->Exit();
        return;
    }
    }

    stawka = 0;

    LicznikText->SetLabel("Saldo: " + wxString::Format("%d", saldo));
}

StawkaDialog::~StawkaDialog()
{
    //(*Destroy(StawkaDialog)
    //*)
}




#include "GraDialog.h"
/*
void StawkaDialog::OnGuzikZatwierdzClick(wxCommandEvent& event)
{
        long wpisanaStawka;

        if (!KwotaCtrl->GetValue().ToLong(&wpisanaStawka))
        {
            wxMessageBox(_("Podaj poprawną liczbę!"), _("Błąd"),
                         wxOK | wxICON_ERROR);
            return;
        }

        if (wpisanaStawka <= 0)
        {
            wxMessageBox(_("Stawka musi być większa od 0!"), _("Błąd"),
                         wxOK | wxICON_ERROR);
            return;
        }

        if (wpisanaStawka > saldo)
        {
            wxMessageBox(_("Nie masz tylu pieniędzy!"), _("Błąd"),
                         wxOK | wxICON_ERROR);
            return;
        }

        stawka = wpisanaStawka;
        ___stawka = wpisanaStawka;
        ___saldo = saldo;
         EndModal(wxID_CANCEL);
        GraDialog gra(this);
        gra.ShowModal();
}
*/

void StawkaDialog::OnGuzikZatwierdzClick(wxCommandEvent& event)
{
    if (m_aktualnaStawka <= 0)
    {
        wxMessageBox(_("Stawka musi być większa od 0!"), _("Błąd"), wxOK | wxICON_ERROR);
        return;
    }

    if (m_aktualnaStawka > saldo)
    {
        wxMessageBox(_("Nie masz tylu pieniędzy!"), _("Błąd"), wxOK | wxICON_ERROR);
        return;
    }
    stawka = m_aktualnaStawka;
    ___stawka = m_aktualnaStawka;
    ___saldo = saldo;

    EndModal(wxID_OK); // Zwracamy OK, bo udało się zatwierdzić

    GraDialog gra(this);
    gra.ShowModal();
}


void StawkaDialog::ZmienStawke(int wartoscZetonu)
{
    bool czyDodajemy = CheckBox->GetValue();

    if (czyDodajemy)
    {
        m_aktualnaStawka += wartoscZetonu;
    }
    else
    {
        m_aktualnaStawka -= wartoscZetonu;
        // Zabezpieczenie: nie można zejść poniżej zera
        if (m_aktualnaStawka < 0) m_aktualnaStawka = 0;
    }
    wxString napis = wxString::Format("Stawka: %ld", m_aktualnaStawka, "   ");
    StaticTextGrasz->SetLabel(napis);
}


void StawkaDialog::Onchip1Click(wxCommandEvent& event)
{
    ZmienStawke(1);
}

void StawkaDialog::Onchip5Click(wxCommandEvent& event)
{
    ZmienStawke(5);
}

void StawkaDialog::Onchip25Click(wxCommandEvent& event)
{
    ZmienStawke(25);
}

void StawkaDialog::Onchip50Click(wxCommandEvent& event)
{
    ZmienStawke(5);
}

void StawkaDialog::Onchip100Click(wxCommandEvent& event)
{
    ZmienStawke(100);
}



void StawkaDialog::Onchip500Click(wxCommandEvent& event)
{
    ZmienStawke(500);
}

void StawkaDialog::Onchip1000Click(wxCommandEvent& event)
{
    ZmienStawke(1000);
}



void StawkaDialog::Onall_inClick(wxCommandEvent& event)
{
    m_aktualnaStawka = 0;
    ZmienStawke(saldo);
}
