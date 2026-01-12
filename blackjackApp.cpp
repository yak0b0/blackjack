/***************************************************************
 * Name:      blackjackApp.cpp
 * Purpose:   Code for Application Class
 * Author:    ŻŻŻ ()
 * Created:   2025-12-15
 * Copyright: ŻŻŻ ()
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
