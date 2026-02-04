/***************************************************************
 * Name:      blackjackApp.cpp
 * Purpose:   Code for Application Class
 * Author:    ŻŻŻ ()
 * Created:   2025-12-15
 * Copyright: ŻŻŻ ()
 * License:
 **************************************************************/

#include "blackjackApp.h"
#include <wx/sound.h>
#include <wx/mediactrl.h>

//(*AppHeaders
#include "StawkaDialog.h"
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
        wxSound::Play("audio/music.wav", wxSOUND_ASYNC | wxSOUND_LOOP);
        StawkaDialog Dlg(NULL);
        SetTopWindow(&Dlg);
        Dlg.ShowModal();
        wxsOK = false;
    }
    //*)
    return wxsOK;

}
