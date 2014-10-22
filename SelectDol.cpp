//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "SelectDol.h"
#include "ListMailAddress.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzPanel"
#pragma link "RzCmboBx"
#pragma link "RzLabel"
#pragma link "RzDBLbl"
#pragma resource "*.dfm"
TFrSelectDol *FrSelectDol;
//---------------------------------------------------------------------------
__fastcall TFrSelectDol::TFrSelectDol(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrSelectDol::RzToolButton3Click(TObject *Sender)
{
 ModalResult=mrOk;	
}
//---------------------------------------------------------------------------
void __fastcall TFrSelectDol::RzToolButton4Click(TObject *Sender)
{
 ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
void __fastcall TFrSelectDol::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if(Key == VK_ESCAPE) ModalResult = mrCancel;   
}
//---------------------------------------------------------------------------

