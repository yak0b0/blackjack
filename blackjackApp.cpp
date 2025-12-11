/***************************************************************
 * Name:      blackjackApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Jakub Żołdak, Jakub Żmuda, Katarzyna Żelazko (s104627@pollub.edu.pl, s104626@pollub.edu.pl, s104625@pollub.edu.pl)
 * Created:   2025-12-11
 * Copyright: Jakub Żołdak, Jakub Żmuda, Katarzyna Żelazko ()
 * License:
 **************************************************************/

#include "blackjackApp.h"

//(*AppHeaders
#include "blackjackMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(blackjackApp);

bool blackjackApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
        blackjackDialog Dlg(NULL);
        SetTopWindow(&Dlg);
        Dlg.ShowModal();
        wxsOK = false;
    }
    //*)
    return wxsOK;

}
