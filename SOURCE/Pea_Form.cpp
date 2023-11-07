//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include <stdio.h> // sprintf
#include "Pea_Form.h"
#include "Arvuta_MOD.h"
#include "Arvuta_EAN.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm_Pea *Form_Pea;
//---------------------------------------------------------------------------
__fastcall TForm_Pea::TForm_Pea(TComponent* Owner)
        : TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm_Pea::FormShow(TObject *Sender)
{
ListBox_MOD_PPO2->ItemIndex = 9;
ListBox_MOD_O2->ItemIndex = 0;
ListBox_EAN_PPO2->ItemIndex = 9;
ListBox_EAN_MOD->ItemIndex = 0;
ARVUTA_MOD();
ARVUTA_EAN();
}
//---------------------------------------------------------------------------
void __fastcall TForm_Pea::ListBox_MOD_PPO2Click(TObject *Sender)
{
ARVUTA_MOD();
}
//---------------------------------------------------------------------------
void __fastcall TForm_Pea::ListBox_MOD_O2Click(TObject *Sender)
{
ARVUTA_MOD();
//ARVUTA_EAN();
}
//---------------------------------------------------------------------------
void __fastcall TForm_Pea::FormCreate(TObject *Sender)
{
setlocale(LC_NUMERIC, "");
}
//---------------------------------------------------------------------------
void __fastcall TForm_Pea::BitBtn_MOD_TrukiClick(TObject *Sender)
{
Form_Pea->RichEdit_MOD->Lines->Add("### Copyright© 2008 - Reimo Kuusk ###");
Form_Pea->RichEdit_MOD->Lines->Add("### Turvalist sukeldumist! ###");
	if( PrintDialog->Execute() )
		RichEdit_MOD->Print("");
}
//---------------------------------------------------------------------------
void __fastcall TForm_Pea::BitBtn_MOD_TuhjendaClick(TObject *Sender)
{
Form_Pea->RichEdit_MOD->Lines->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm_Pea::ListBox_EAN_PPO2Click(TObject *Sender)
{
ARVUTA_EAN();
}
//---------------------------------------------------------------------------
void __fastcall TForm_Pea::ListBox_EAN_MODClick(TObject *Sender)
{
ARVUTA_EAN();
}
//---------------------------------------------------------------------------
void __fastcall TForm_Pea::BitBtn_EAN_TrukiClick(TObject *Sender)
{
Form_Pea->RichEdit_EAN->Lines->Add("### Copyright© 2008 - Reimo Kuusk ###");
Form_Pea->RichEdit_EAN->Lines->Add("### Turvalist sukeldumist! ###");
	if( PrintDialog->Execute() )
		RichEdit_EAN->Print("");
}
//---------------------------------------------------------------------------
void __fastcall TForm_Pea::BitBtn_EAN_TuhjendaClick(TObject *Sender)
{
Form_Pea->RichEdit_EAN->Lines->Clear();        
}
//---------------------------------------------------------------------------


