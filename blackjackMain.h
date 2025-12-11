/***************************************************************
 * Name:      blackjackMain.h
 * Purpose:   Defines Application Frame
 * Author:    Jakub Żołdak, Jakub Żmuda, Katarzyna Żelazko (s104627@pollub.edu.pl, s104626@pollub.edu.pl, s104625@pollub.edu.pl)
 * Created:   2025-12-11
 * Copyright: Jakub Żołdak, Jakub Żmuda, Katarzyna Żelazko ()
 * License:
 **************************************************************/

#ifndef BLACKJACKMAIN_H
#define BLACKJACKMAIN_H

//(*Headers(blackjackDialog)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statline.h>
#include <wx/stattext.h>
//*)

class blackjackDialog: public wxDialog
{
    public:

        blackjackDialog(wxWindow* parent,wxWindowID id = -1);
        virtual ~blackjackDialog();

    private:

        //(*Handlers(blackjackDialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(blackjackDialog)
        static const wxWindowID ID_STATICTEXT1;
        static const wxWindowID ID_BUTTON1;
        static const wxWindowID ID_STATICLINE1;
        static const wxWindowID ID_BUTTON2;
        //*)

        //(*Declarations(blackjackDialog)
        wxBoxSizer* BoxSizer1;
        wxBoxSizer* BoxSizer2;
        wxButton* Button1;
        wxButton* Button2;
        wxStaticLine* StaticLine1;
        wxStaticText* StaticText1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // BLACKJACKMAIN_H
