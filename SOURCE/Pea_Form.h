//---------------------------------------------------------------------------

#ifndef Pea_FormH
#define Pea_FormH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <Buttons.hpp>
#include <Dialogs.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <ImgList.hpp>
//---------------------------------------------------------------------------
class TForm_Pea : public TForm
{
__published:	// IDE-managed Components
        TPageControl *PageControl1;
        TTabSheet *TabSheet1;
        TTabSheet *TabSheet2;
        TTabSheet *TabSheet3;
        TTabSheet *TabSheet4;
        TTabSheet *TabSheet5;
        TRichEdit *RichEdit1;
        TGroupBox *GroupBox1;
        TLabel *lblMOD_Vastus;
        TListBox *ListBox_MOD_PPO2;
        TLabel *Label2;
        TListBox *ListBox_MOD_O2;
        TLabel *Label3;
        TLabel *Label1;
        TTabSheet *TabSheet6;
        TLabel *Label4;
        TLabel *lblMOD_N_Vastus;
        TLabel *Label5;
        TLabel *Label6;
        TRichEdit *RichEdit2;
        TRichEdit *RichEdit_MOD;
        TBitBtn *BitBtn_MOD_Truki;
        TBitBtn *BitBtn_MOD_Tuhjenda;
        TTabSheet *TabSheet7;
        TLabel *Label7;
        TTabSheet *TabSheet8;
        TPrintDialog *PrintDialog;
        TImage *Image1;
        TGroupBox *GroupBox2;
        TListBox *ListBox_EAN_PPO2;
        TListBox *ListBox_EAN_MOD;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *lblEAN_Vastus;
        TLabel *Label12;
        TLabel *Label13;
        TLabel *lblEAN_N_Vastus;
        TLabel *Label15;
        TRichEdit *RichEdit_EAN;
        TBitBtn *BitBtn_EAN_Truki;
        TBitBtn *BitBtn_EAN_Tuhjenda;
        TImageList *ImageList_Pildid;
        TMemo *Memo1;
        void __fastcall FormShow(TObject *Sender);
        void __fastcall ListBox_MOD_PPO2Click(TObject *Sender);
        void __fastcall ListBox_MOD_O2Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall BitBtn_MOD_TrukiClick(TObject *Sender);
        void __fastcall BitBtn_MOD_TuhjendaClick(TObject *Sender);
        void __fastcall ListBox_EAN_PPO2Click(TObject *Sender);
        void __fastcall ListBox_EAN_MODClick(TObject *Sender);
        void __fastcall BitBtn_EAN_TrukiClick(TObject *Sender);
        void __fastcall BitBtn_EAN_TuhjendaClick(TObject *Sender);
private:	// User declarations

public:		// User declarations

        __fastcall TForm_Pea(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm_Pea *Form_Pea;
//---------------------------------------------------------------------------
#endif
