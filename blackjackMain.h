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
#include <wx/dialog.h>
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
        //*)

        //(*Declarations(blackjackDialog)
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // BLACKJACKMAIN_H
