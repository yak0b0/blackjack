#ifndef WYNIKDIALOG_H
#define WYNIKDIALOG_H

//(*Headers(WynikDialog)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

class WynikDialog: public wxDialog
{
    public:

        WynikDialog(wxWindow* parent,wxWindowID id=wxID_ANY);
        virtual ~WynikDialog();

        //(*Declarations(WynikDialog)
        wxButton* ExitButton;
        wxButton* PlayAgainButton;
        wxStaticBitmap* Obrazek;
        wxStaticText* IleStawkaText;
        wxStaticText* SaldoText;
        wxStaticText* WynikText;
        //*)

    protected:

        //(*Identifiers(WynikDialog)
        static const wxWindowID ID_STATICBITMAP1;
        static const wxWindowID ID_STATICTEXT1;
        static const wxWindowID ID_STATICTEXT3;
        static const wxWindowID ID_STATICTEXT2;
        static const wxWindowID ID_BUTTON2;
        static const wxWindowID ID_BUTTON1;
        //*)

    private:

        //(*Handlers(WynikDialog)
        void PlayAgainClick(wxCommandEvent& event);
        void ExitProgramClick(wxCommandEvent& event);
        //*)

        DECLARE_EVENT_TABLE()
};

#endif
