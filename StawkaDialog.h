#ifndef STAWKADIALOG_H
#define STAWKADIALOG_H

//(*Headers(StawkaDialog)
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/checkbox.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
//*)

class StawkaDialog: public wxDialog
{
    public:

        StawkaDialog(wxWindow* parent,wxWindowID id=wxID_ANY);
        virtual ~StawkaDialog();

        int GetStawka() const { return stawka; }
        int GetSaldo() const { return saldo; }

        //(*Declarations(StawkaDialog)
        wxBitmapButton* all_in;
        wxBitmapButton* chip1000;
        wxBitmapButton* chip100;
        wxBitmapButton* chip1;
        wxBitmapButton* chip25;
        wxBitmapButton* chip500;
        wxBitmapButton* chip50;
        wxBitmapButton* chip5;
        wxButton* GuzikZatwierdz;
        wxCheckBox* CheckBox;
        wxStaticText* LicznikText;
        wxStaticText* StaticTextGrasz;
        wxStaticText* ZaIleText;
        //*)

    protected:

        //(*Identifiers(StawkaDialog)
        static const wxWindowID ID_STATICTEXT1;
        static const wxWindowID ID_STATICTEXT2;
        static const wxWindowID ID_STATICTEXT4;
        static const wxWindowID ID_CHECKBOX1;
        static const wxWindowID ID_BITMAPBUTTON1;
        static const wxWindowID ID_BITMAPBUTTON2;
        static const wxWindowID ID_BITMAPBUTTON3;
        static const wxWindowID ID_BITMAPBUTTON4;
        static const wxWindowID ID_BITMAPBUTTON5;
        static const wxWindowID ID_BITMAPBUTTON6;
        static const wxWindowID ID_BITMAPBUTTON7;
        static const wxWindowID ID_BITMAPBUTTON8;
        static const wxWindowID ID_BUTTON1;
        //*)

    private:

        //(*Handlers(StawkaDialog)
        void OnGuzikZatwierdzClick(wxCommandEvent& event);
        void Onchip1Click(wxCommandEvent& event);
        void Onchip5Click(wxCommandEvent& event);
        void Onchip50Click(wxCommandEvent& event);
        void Onchip100Click(wxCommandEvent& event);
        void Onchip25Click(wxCommandEvent& event);
        void Onchip500Click(wxCommandEvent& event);
        void Onchip1000Click(wxCommandEvent& event);
        void Onall_inClick(wxCommandEvent& event);
        //*)

        int saldo;
        int stawka;

        long m_aktualnaStawka;
        void ZmienStawke(int wartoscZetonu);

        DECLARE_EVENT_TABLE()
};

#endif
