/***************************************************************
 * Name:      blackjackMain.h
 * Purpose:   Defines Application Frame
 * Author:    ŻŻŻ ()
 * Created:   2025-12-15
 * Copyright: ŻŻŻ ()
 * License:
 **************************************************************/

#ifndef BLACKJACKMAIN_H
#define BLACKJACKMAIN_H

//(*Headers(blackjackDialog)
#include <wx/button.h>
#include <wx/combobox.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
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
        void OnGuzikKontClick(wxCommandEvent& event);
        //*)

        //(*Identifiers(blackjackDialog)
        static const wxWindowID ID_STATICTEXT1;
        static const wxWindowID ID_COMBOBOX1;
        static const wxWindowID ID_BUTTON1;
        //*)

        //(*Declarations(blackjackDialog)
        wxButton* GuzikKont;
        wxComboBox* ComboTrudnosc;
        wxStaticText* TrudnoscText;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // BLACKJACKMAIN_H
