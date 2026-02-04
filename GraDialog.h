#ifndef GRADIALOG_H
#define GRADIALOG_H

//(*Headers(GraDialog)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

#include <vector>
#include <wx/timer.h>
#include <wx/mediactrl.h>
class GraDialog: public wxDialog
{
    public:

        GraDialog(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
        virtual ~GraDialog();

        //(*Declarations(GraDialog)
        wxButton* Button1;
        wxButton* Button2;
        wxButton* Button3;
        wxButton* Button4;
        wxStaticBitmap* KrupierBitmap;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        wxStaticText* Static_text_3;
        wxStaticText* WartosText;
        wxStaticText* wartosc_krupiera_text;
        wxStaticText* wartosc_text_real;
        //*)

    protected:

        //(*Identifiers(GraDialog)
        static const wxWindowID ID_STATICBITMAP1;
        static const wxWindowID ID_STATICTEXT1;
        static const wxWindowID ID_STATICTEXT3;
        static const wxWindowID ID_STATICTEXT5;
        static const wxWindowID ID_STATICTEXT6;
        static const wxWindowID ID_STATICTEXT2;
        static const wxWindowID ID_STATICTEXT4;
        static const wxWindowID ID_BUTTON1;
        static const wxWindowID ID_BUTTON2;
        static const wxWindowID ID_BUTTON3;
        static const wxWindowID ID_BUTTON4;
        //*)

    private:

        //(*Handlers(GraDialog)
        void HitClick(wxCommandEvent& event);
        void StandClick(wxCommandEvent& event);
        void DoubleClick(wxCommandEvent& event);
        //*)


        wxFlexGridSizer* FlexUzytkownik;
        wxFlexGridSizer* FlexKrupier;
        std::vector<wxBitmap> deck;
        wxBitmap cardBack;
        std::vector<wxString> cardPaths;


        std::vector<wxStaticBitmap*> playerCards;
        std::vector<wxStaticBitmap*> dealerCards;
        std::vector<wxString> playerCardPaths;
        std::vector<wxString> dealerCardPaths;


        void LoadCards();
        void DealInitialPlayerCards();
        void DealInitialDealerCards();

        int GetCardValue(const wxString& path);
        void UpdatePlayerValue();
        void UpdateDealerValue();

        int playerValue = 0;
        int dealerValue = 0;
        int dealerHiddenCardIndex = -1;

        void DealerPlay();
        void CheckForNaturalBlackjack();
        void Delay(int ms);

        wxMediaCtrl * media;
        void RefreshGameLayout();

        int AdjustForAces(const std::vector<wxString>& paths);



        DECLARE_EVENT_TABLE()
};

#endif
