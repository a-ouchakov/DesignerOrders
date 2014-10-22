//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ControlMail.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzLabel"
#pragma link "RzLstBox"
#pragma link "RzPanel"
#pragma resource "*.dfm"
TFrControlMail *FrControlMail;
//---------------------------------------------------------------------------
__fastcall TFrControlMail::TFrControlMail(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrControlMail::btCloseClick(TObject *Sender)
{
 Close();
}
//---------------------------------------------------------------------------
void __fastcall TFrControlMail::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
   if(Key == VK_ESCAPE) Close();	
}
//---------------------------------------------------------------------------
