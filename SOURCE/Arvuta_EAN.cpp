#include <vcl.h>
#pragma hdrstop
#include <stdio.h> // sprintf
#include "Pea_Form.h"


double EANx(double MOD, double PPO2)
{
        return((1000*PPO2)/(MOD+10));
}
double EANx_N(double EAN, double MOD)
{
        return(((MOD*0.1)+1)*(100-EAN));
}

void ARVUTA_EAN(void)
{

double PPO2, MOD, EAN;
char buff[32];

    if(Form_Pea->ListBox_EAN_PPO2->ItemIndex == 0)
        PPO2 = 0.5;
    else if(Form_Pea->ListBox_EAN_PPO2->ItemIndex == 1)
        PPO2 = 0.6;
    else if(Form_Pea->ListBox_EAN_PPO2->ItemIndex == 2)
        PPO2 = 0.7;
    else if(Form_Pea->ListBox_EAN_PPO2->ItemIndex == 3)
        PPO2 = 0.8;
    else if(Form_Pea->ListBox_EAN_PPO2->ItemIndex == 4)
        PPO2 = 0.9;
    else if(Form_Pea->ListBox_EAN_PPO2->ItemIndex == 5)
        PPO2 = 1.0;
    else if(Form_Pea->ListBox_EAN_PPO2->ItemIndex == 6)
        PPO2 = 1.1;
    else if(Form_Pea->ListBox_EAN_PPO2->ItemIndex == 7)
        PPO2 = 1.2;
    else if(Form_Pea->ListBox_EAN_PPO2->ItemIndex == 8)
        PPO2 = 1.3;
    else if(Form_Pea->ListBox_EAN_PPO2->ItemIndex == 9)
        PPO2 = 1.4;


    if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 0)
        MOD = 1;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 1)
        MOD = 2;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 2)
        MOD = 3;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 3)
        MOD = 4;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 4)
        MOD = 5;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 5)
        MOD = 6;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 6)
        MOD = 7;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 7)
        MOD = 8;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 8)
        MOD = 9;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 9)
        MOD = 10;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 10)
        MOD = 11;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 11)
        MOD = 12;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 12)
        MOD = 13;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 13)
        MOD = 14;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 14)
        MOD = 15;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 15)
        MOD = 16;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 16)
        MOD = 17;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 17)
        MOD = 18;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 18)
        MOD = 19;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 19)
        MOD = 20;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 20)
        MOD = 21;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 21)
        MOD = 22;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 22)
        MOD = 23;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 23)
        MOD = 24;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 24)
        MOD = 25;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 25)
        MOD = 26;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 26)
        MOD = 27;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 27)
        MOD = 28;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 28)
        MOD = 29;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 29)
        MOD = 30;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 30)
        MOD = 31;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 31)
        MOD = 32;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 32)
        MOD = 33;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 33)
        MOD = 34;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 34)
        MOD = 35;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 35)
        MOD = 36;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 36)
        MOD = 37;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 37)
        MOD = 38;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 38)
        MOD = 39;
    else if(Form_Pea->ListBox_EAN_MOD->ItemIndex == 39)
        MOD = 40;

sprintf(buff, "%.1lf", EANx(MOD, PPO2));


        if(EANx(MOD, PPO2) > 40)
        {
        Form_Pea->lblEAN_Vastus->Caption = "40,0";
        }
        else{
        Form_Pea->lblEAN_Vastus->Caption = buff;
        }

     /* if(Form_Pea->lblEAN_Vastus->Caption.ToDouble() > 40.01)
        {
        Form_Pea->lblEAN_Vastus->Font->Color = clRed;
        }
        else{
        Form_Pea->lblEAN_Vastus->Font->Color = clBlack;
        } */

//Lämmastiku % arvutamine
char buff2[32];

EAN = Form_Pea->lblEAN_Vastus->Caption.ToDouble();

sprintf(buff2, "%.1lf", EANx_N(EAN, MOD));
Form_Pea->lblEAN_N_Vastus->Caption = buff2;

        if(Form_Pea->lblEAN_N_Vastus->Caption.ToDouble() > 300.001)
        {
        Form_Pea->lblEAN_N_Vastus->Font->Color = clGreen;
        }
        else{
        Form_Pea->lblEAN_N_Vastus->Font->Color = clBlack;
        }
Form_Pea->RichEdit_EAN->Lines->Add("Parim segu PPO2=" + AnsiString(PPO2) + " ja MOD=" + AnsiString(MOD) + "m korral on EANx=" + Form_Pea->lblEAN_Vastus->Caption + "%O2 (N=" + AnsiString(EANx_N(EAN, MOD)) + "%)");

}
