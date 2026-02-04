#ifndef SPLITDIALOG_H
#define SPLITDIALOG_H

//(*Headers(SplitDialog)
#include <wx/dialog.h>
//*)

class SplitDialog: public wxDialog
{
    public:

        SplitDialog(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
        virtual ~SplitDialog();

        //(*Declarations(SplitDialog)
        //*)

    protected:

        //(*Identifiers(SplitDialog)
        //*)

    private:

        //(*Handlers(SplitDialog)
        //*)

        DECLARE_EVENT_TABLE()
};

#endif
