#ifndef GRADIALOG_H
#define GRADIALOG_H

//(*Headers(GraDialog)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

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
        //*)

    protected:

        //(*Identifiers(GraDialog)
        static const wxWindowID ID_STATICBITMAP1;
        static const wxWindowID ID_STATICTEXT1;
        static const wxWindowID ID_BUTTON1;
        static const wxWindowID ID_BUTTON2;
        static const wxWindowID ID_BUTTON3;
        static const wxWindowID ID_BUTTON4;
        //*)

    private:

        //(*Handlers(GraDialog)
        //*)

        DECLARE_EVENT_TABLE()
};

#endif
