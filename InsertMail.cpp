//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "InsertMail.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzDBLbl"
#pragma link "RzEdit"
#pragma link "RzLabel"
#pragma link "RzPanel"
#pragma resource "*.dfm"
TFrInsertMail *FrInsertMail;
//---------------------------------------------------------------------------
__fastcall TFrInsertMail::TFrInsertMail(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrInsertMail::RzToolButton3Click(TObject *Sender)
{
 ModalResult=mrOk;	
}
//---------------------------------------------------------------------------
void __fastcall TFrInsertMail::RzToolButton4Click(TObject *Sender)
{
 ModalResult = mrCancel;	
}
//---------------------------------------------------------------------------
void __fastcall TFrInsertMail::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if(Key == VK_ESCAPE) ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
