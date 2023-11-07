#include <vcl.h>
#pragma hdrstop
#include <stdio.h> // sprintf
#include "Pea_Form.h"

double MOD(double O2, double PPO2)
{
        return((PPO2/(O2/100)-1)*10);
}
double MOD_N(double MOD, double O2)
{
        return(((MOD*0.1)+1)*(100-O2));
}

void ARVUTA_MOD(void)
{
double PPO2;
int O2;
char buff[32];

    if(Form_Pea->ListBox_MOD_PPO2->ItemIndex == 0)
        PPO2 = 0.5;
    else if(Form_Pea->ListBox_MOD_PPO2->ItemIndex == 1)
        PPO2 = 0.6;
    else if(Form_Pea->ListBox_MOD_PPO2->ItemIndex == 2)
        PPO2 = 0.7;
    else if(Form_Pea->ListBox_MOD_PPO2->ItemIndex == 3)
        PPO2 = 0.8;
    else if(Form_Pea->ListBox_MOD_PPO2->ItemIndex == 4)
        PPO2 = 0.9;
    else if(Form_Pea->ListBox_MOD_PPO2->ItemIndex == 5)
        PPO2 = 1.0;
    else if(Form_Pea->ListBox_MOD_PPO2->ItemIndex == 6)
        PPO2 = 1.1;
    else if(Form_Pea->ListBox_MOD_PPO2->ItemIndex == 7)
        PPO2 = 1.2;
    else if(Form_Pea->ListBox_MOD_PPO2->ItemIndex == 8)
        PPO2 = 1.3;
    else if(Form_Pea->ListBox_MOD_PPO2->ItemIndex == 9)
        PPO2 = 1.4;

    if(Form_Pea->ListBox_MOD_O2->ItemIndex == 0)
        O2 = 21;
    else if(Form_Pea->ListBox_MOD_O2->ItemIndex == 1)
        O2 = 22;
    else if(Form_Pea->ListBox_MOD_O2->ItemIndex == 2)
        O2 = 23;
    else if(Form_Pea->ListBox_MOD_O2->ItemIndex == 3)
        O2 = 24;
    else if(Form_Pea->ListBox_MOD_O2->ItemIndex == 4)
        O2 = 25;
    else if(Form_Pea->ListBox_MOD_O2->ItemIndex == 5)
        O2 = 26;
    else if(Form_Pea->ListBox_MOD_O2->ItemIndex == 6)
        O2 = 27;
    else if(Form_Pea->ListBox_MOD_O2->ItemIndex == 7)
        O2 = 28;
    else if(Form_Pea->ListBox_MOD_O2->ItemIndex == 8)
        O2 = 29;
    else if(Form_Pea->ListBox_MOD_O2->ItemIndex == 9)
        O2 = 30;
    else if(Form_Pea->ListBox_MOD_O2->ItemIndex == 10)
        O2 = 31;
    else if(Form_Pea->ListBox_MOD_O2->ItemIndex == 11)
        O2 = 32;
    else if(Form_Pea->ListBox_MOD_O2->ItemIndex == 12)
        O2 = 33;
    else if(Form_Pea->ListBox_MOD_O2->ItemIndex == 13)
        O2 = 34;
    else if(Form_Pea->ListBox_MOD_O2->ItemIndex == 14)
        O2 = 35;
    else if(Form_Pea->ListBox_MOD_O2->ItemIndex == 15)
        O2 = 36;
    else if(Form_Pea->ListBox_MOD_O2->ItemIndex == 16)
        O2 = 37;
    else if(Form_Pea->ListBox_MOD_O2->ItemIndex == 17)
        O2 = 38;
    else if(Form_Pea->ListBox_MOD_O2->ItemIndex == 18)
        O2 = 39;
    else if(Form_Pea->ListBox_MOD_O2->ItemIndex == 19)
        O2 = 40;

sprintf(buff, "%.1lf", MOD(O2, PPO2));
Form_Pea->lblMOD_Vastus->Caption = buff;

        if(Form_Pea->lblMOD_Vastus->Caption.ToDouble() > 40.01)
        {
        Form_Pea->lblMOD_Vastus->Font->Color = clRed;
        }
        else{
        Form_Pea->lblMOD_Vastus->Font->Color = clBlack;
        }
//Lämmastiku % arvutamine
double MOD;
char buff2[32];

MOD = Form_Pea->lblMOD_Vastus->Caption.ToDouble();

sprintf(buff2, "%.1lf", MOD_N(MOD, O2));
Form_Pea->lblMOD_N_Vastus->Caption = buff2;
        
        if(Form_Pea->lblMOD_N_Vastus->Caption.ToDouble() > 300.001)
        {
        Form_Pea->lblMOD_N_Vastus->Font->Color = clGreen;
        }
        else{
        Form_Pea->lblMOD_N_Vastus->Font->Color = clBlack;
        }

Form_Pea->RichEdit_MOD->Lines->Add("Maksimum sügavus PPO2=" + AnsiString(PPO2) + " ja O2=" + AnsiString(O2) + "% korral on " + AnsiString(MOD) + "m (N=" + AnsiString(MOD_N(MOD, O2)) + "%)");
}
