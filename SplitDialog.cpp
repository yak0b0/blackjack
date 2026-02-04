#include "SplitDialog.h"

//(*InternalHeaders(SplitDialog)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(SplitDialog)
//*)

BEGIN_EVENT_TABLE(SplitDialog,wxDialog)
    //(*EventTable(SplitDialog)
    //*)
END_EVENT_TABLE()

SplitDialog::SplitDialog(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
    //(*Initialize(SplitDialog)
    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
    SetClientSize(wxDefaultSize);
    Move(wxDefaultPosition);
    //*)
}

SplitDialog::~SplitDialog()
{
    //(*Destroy(SplitDialog)
    //*)
}

