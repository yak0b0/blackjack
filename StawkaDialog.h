#ifndef STAWKADIALOG_H
#define STAWKADIALOG_H

//(*Headers(StawkaDialog)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class StawkaDialog: public wxDialog
{
    public:

        StawkaDialog(wxWindow* parent,wxWindowID id=wxID_ANY);
        virtual ~StawkaDialog();

        int GetStawka() const { return stawka; }
        int GetSaldo() const { return saldo; }

        //(*Declarations(StawkaDialog)
        wxButton* GuzikZatwierdz;
        wxStaticText* LicznikText;
        wxStaticText* ZaIleText;
        wxTextCtrl* KwotaCtrl;
        //*)

    protected:

        //(*Identifiers(StawkaDialog)
        static const wxWindowID ID_STATICTEXT1;
        static const wxWindowID ID_STATICTEXT2;
        static const wxWindowID ID_TEXTCTRL1;
        static const wxWindowID ID_BUTTON1;
        //*)

    private:

        //(*Handlers(StawkaDialog)
        void OnGuzikZatwierdzClick(wxCommandEvent& event);
        //*)

        int saldo;
        int stawka;

        DECLARE_EVENT_TABLE()
};

#endif
