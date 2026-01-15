#include "GraDialog.h"
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/log.h>
#include <cstdlib>
#include <wx/msgdlg.h>
#include <ctime>


//(*InternalHeaders(GraDialog)
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

#include <wx/string.h>
#include <wx/filename.h>

#undef _
#define _(s) wxString::FromUTF8(s)


//(*IdInit(GraDialog)
const wxWindowID GraDialog::ID_STATICBITMAP1 = wxNewId();
const wxWindowID GraDialog::ID_STATICTEXT1 = wxNewId();
const wxWindowID GraDialog::ID_STATICTEXT3 = wxNewId();
const wxWindowID GraDialog::ID_STATICTEXT5 = wxNewId();
const wxWindowID GraDialog::ID_STATICTEXT6 = wxNewId();
const wxWindowID GraDialog::ID_STATICTEXT2 = wxNewId();
const wxWindowID GraDialog::ID_STATICTEXT4 = wxNewId();
const wxWindowID GraDialog::ID_BUTTON1 = wxNewId();
const wxWindowID GraDialog::ID_BUTTON2 = wxNewId();
const wxWindowID GraDialog::ID_BUTTON3 = wxNewId();
const wxWindowID GraDialog::ID_BUTTON4 = wxNewId();
//*)

BEGIN_EVENT_TABLE(GraDialog,wxDialog)
    //(*EventTable(GraDialog)
    //*)
END_EVENT_TABLE()

wxString poziom;

GraDialog::GraDialog(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
    //(*Initialize(GraDialog)
    wxFlexGridSizer* FlexGridSizer1;
    wxFlexGridSizer* FlexKrupier;
    wxFlexGridSizer* FlexUzytkownik;
    wxFlexGridSizer* GuzikiSizer;
    wxFlexGridSizer* KartyKrupieraSizer;
    wxFlexGridSizer* KartyUzytkownika;
    wxFlexGridSizer* OkienkoUzytkownikaSizer;
    wxFlexGridSizer* WartoscKrupieraSizer;
    wxFlexGridSizer* WartoscSizer;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
    FlexGridSizer1 = new wxFlexGridSizer(2, 2, 0, 0);
    KrupierBitmap = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("images/guy1.png"))), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
    FlexGridSizer1->Add(KrupierBitmap, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    KartyUzytkownika = new wxFlexGridSizer(2, 1, 0, 0);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Twoje karty:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    KartyUzytkownika->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexUzytkownik = new wxFlexGridSizer(0, 10, 0, 0);
    KartyUzytkownika->Add(FlexUzytkownik, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(KartyUzytkownika, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    KartyKrupieraSizer = new wxFlexGridSizer(3, 1, 0, 0);
    StaticText2 = new wxStaticText(this, ID_STATICTEXT3, _("Karty krupiera:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    KartyKrupieraSizer->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexKrupier = new wxFlexGridSizer(0, 10, 0, 0);
    KartyKrupieraSizer->Add(FlexKrupier, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    WartoscKrupieraSizer = new wxFlexGridSizer(1, 2, 0, 0);
    Static_text_3 = new wxStaticText(this, ID_STATICTEXT5, _("Wartosc krupiera to: "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    WartoscKrupieraSizer->Add(Static_text_3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    wartosc_krupiera_text = new wxStaticText(this, ID_STATICTEXT6, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    WartoscKrupieraSizer->Add(wartosc_krupiera_text, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    KartyKrupieraSizer->Add(WartoscKrupieraSizer, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(KartyKrupieraSizer, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    OkienkoUzytkownikaSizer = new wxFlexGridSizer(2, 1, 0, 0);
    WartoscSizer = new wxFlexGridSizer(1, 2, 0, 0);
    WartosText = new wxStaticText(this, ID_STATICTEXT2, _("Twoja wartosc to:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    WartoscSizer->Add(WartosText, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    wartosc_text_real = new wxStaticText(this, ID_STATICTEXT4, _("WARTOSC"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    WartoscSizer->Add(wartosc_text_real, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    OkienkoUzytkownikaSizer->Add(WartoscSizer, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
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

    Connect(ID_BUTTON1, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&GraDialog::HitClick);
    Connect(ID_BUTTON2, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&GraDialog::StandClick);
    //*)

    wxMessageBox(_("poziom gry: ")+poziom);

    this->FlexKrupier = FlexKrupier;
    this -> FlexUzytkownik = FlexUzytkownik;

    this -> wartosc_text_real = wartosc_text_real;
    this -> wartosc_krupiera_text = wartosc_krupiera_text;

    srand(static_cast<unsigned>(time(nullptr)));
    LoadCards();
    DealInitialPlayerCards();
    DealInitialDealerCards();
    CheckForNaturalBlackjack();

}

GraDialog::~GraDialog()
{
    //(*Destroy(GraDialog)
    //*)
}

void GraDialog::LoadCards()
{
    deck.clear();

    const wxString suits[] = {"clubs", "diamonds", "hearts", "spades"};
    const wxString ranks[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};

    for (const auto& suit : suits)
    {
        for (const auto& rank : ranks)
        {
            wxString path = wxString::Format("images/%s_%s.png", suit, rank);
            wxBitmap bmp(path, wxBITMAP_TYPE_PNG);

            if (bmp.IsOk())
            {
                deck.push_back(bmp);
                cardPaths.push_back(path);
            }
            else
            {
                wxLogError("Nie udało się załadować karty: %s", path);
            }
        }
    }
    cardBack = wxBitmap("images/back_light.png", wxBITMAP_TYPE_PNG);
    if (!cardBack.IsOk())
    {
        wxLogError("Nie udało się załadować back_light.png");
    }
}

void GraDialog::DealInitialPlayerCards()
{
    for (int i = 0; i < 2; ++i)
    {
        int index = rand() % deck.size();

        wxBitmap bmp = deck[index];
        wxStaticBitmap* card = new wxStaticBitmap(this, wxID_ANY, bmp);

        FlexUzytkownik->Add(card, 1, wxALL | wxALIGN_CENTER, 5);
        playerCards.push_back(card);
        playerCardPaths.push_back(cardPaths[index]);

        playerValue += GetCardValue(cardPaths[index]);
        playerValue = AdjustForAces(playerValue, playerCardPaths);
        UpdatePlayerValue();
    }

    FlexUzytkownik->Layout();
    Layout();
    Fit();
}


void GraDialog::DealInitialDealerCards()
{
    int index1 = rand() % deck.size();
    wxBitmap bmp1 = deck[index1];
    wxStaticBitmap* card1 = new wxStaticBitmap(this, wxID_ANY, bmp1);
    FlexKrupier->Add(card1, 1, wxALL | wxALIGN_CENTER, 5);
    dealerCards.push_back(card1);
    dealerCardPaths.push_back(cardPaths[index1]);

    dealerValue += GetCardValue(cardPaths[index1]);
    dealerValue = AdjustForAces(dealerValue, dealerCardPaths);
    UpdateDealerValue();

    int index2 = rand() % deck.size();
    dealerHiddenCardIndex = index2;

    wxStaticBitmap* card2 = new wxStaticBitmap(this, wxID_ANY, cardBack);
    FlexKrupier->Add(card2, 1, wxALL | wxALIGN_CENTER, 5);
    dealerCards.push_back(card2);
    dealerCardPaths.push_back(cardPaths[index2]);

    FlexKrupier->Layout();
    Layout();
    Fit();
}


void GraDialog::HitClick(wxCommandEvent& event)
{
    int index = rand() % deck.size();

    wxBitmap bmp = deck[index];
    wxStaticBitmap* card = new wxStaticBitmap(this, wxID_ANY, bmp);

    FlexUzytkownik->Add(card, 1, wxALL | wxALIGN_CENTER, 5);
    playerCards.push_back(card);
    playerCardPaths.push_back(cardPaths[index]);

    playerValue += GetCardValue(cardPaths[index]);
    playerValue = AdjustForAces(playerValue, playerCardPaths);
    UpdatePlayerValue();

    FlexUzytkownik->Layout();
    Layout();
    Fit();

    if (playerValue > 21)
    {
        wxMessageBox(_("You bust! Dealer wins."));
        EndModal(wxID_OK);
        return;
    }

    FlexUzytkownik->Layout();
    Layout();
    Fit();
}


void GraDialog::StandClick(wxCommandEvent& event)
{
    wxBitmap bmp = deck[dealerHiddenCardIndex];
    dealerCards[1]->SetBitmap(bmp);

    dealerValue += GetCardValue(cardPaths[dealerHiddenCardIndex]);
    dealerValue = AdjustForAces(dealerValue, dealerCardPaths);
    UpdateDealerValue();

    Layout();
    Fit();

    DealerPlay();

}

int GraDialog::GetCardValue(const wxString& path)
{
    wxFileName fn(path);
    wxString name = fn.GetName(); // e.g. "hearts_10"

    wxArrayString parts = wxSplit(name, '_');
    if (parts.size() != 2)
        return 0;

    wxString rank = parts[1];

    if (rank == "A") return 11;
    if (rank == "K" || rank == "Q" || rank == "J") return 10;

    long num = 0;
    if (rank.ToLong(&num))
        return num;

    return 0;
}

void GraDialog::UpdatePlayerValue()
{
    wartosc_text_real->SetLabel(wxString::Format("%d", playerValue));
    Layout();
}

void GraDialog::UpdateDealerValue()
{
    wartosc_krupiera_text->SetLabel(wxString::Format("%d", dealerValue));
    Layout();
}

void GraDialog::DealerPlay()
{
    // krupier musi uderzac puki mniej niz 17
    while (dealerValue < 17)
    {
        int index = rand() % deck.size();

        wxBitmap bmp = deck[index];
        wxStaticBitmap* card = new wxStaticBitmap(this, wxID_ANY, bmp);

        FlexKrupier->Add(card, 1, wxALL | wxALIGN_CENTER, 5);
        dealerCards.push_back(card);

        dealerValue += GetCardValue(cardPaths[index]);
        dealerValue = AdjustForAces(dealerValue, dealerCardPaths);
        UpdateDealerValue();

        FlexKrupier->Layout();
        Layout();
        Fit();
    }

    // po dobraniu sprawdz czy przekroczone 21
    if (dealerValue > 21)
    {
        wxMessageBox(_("Dealer busts! You win."));
        EndModal(wxID_OK);
        return;
    }

    // Inaczej porownaj z graczem i jego wartoscia
    if (dealerValue > playerValue)
    {
        wxMessageBox(_("Dealer wins."));
    }
    else if (dealerValue < playerValue)
    {
        wxMessageBox(_("You win!"));
    }
    else
    {
        wxMessageBox(_("Push (tie)."));
    }

    EndModal(wxID_OK);
}


int GraDialog::AdjustForAces(int value, const std::vector<wxString>& paths)
{
    int aceCount = 0;

    for (const auto& path : paths)
    {
        wxFileName fn(path);
        wxString name = fn.GetName();
        wxArrayString parts = wxSplit(name, '_');
        wxString rank = parts[1];

        if (rank == "A")
            aceCount++;
    }

    while (value > 21 && aceCount > 0)
    {
        value -= 10;
        aceCount--;
    }

    return value;
}

void GraDialog::CheckForNaturalBlackjack()
{
    if (playerCardPaths.size() == 2)
    {
        int v1 = GetCardValue(playerCardPaths[0]);
        int v2 = GetCardValue(playerCardPaths[1]);

        int total = v1 + v2;

        // Ace adjustment for 2-card hand
        if (total > 21 && (v1 == 11 || v2 == 11))
            total -= 10;

        if (total == 21)
        {
            // Delay so the player sees the cards
            Delay(3000);

            wxMessageBox(_("Blackjack! You win."));
            EndModal(wxID_OK);
        }
    }
}

void GraDialog::Delay(int ms)
{
    wxMilliSleep(ms);
    wxYield(); // keeps UI responsive
}
