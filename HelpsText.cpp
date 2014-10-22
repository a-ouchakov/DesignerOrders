//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "HelpsText.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzEdit"
#pragma resource "*.dfm"
TFrHelpsText *FrHelpsText;
//---------------------------------------------------------------------------
__fastcall TFrHelpsText::TFrHelpsText(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrHelpsText::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
    if(Key == VK_ESCAPE) Close();	
}
//---------------------------------------------------------------------------
void __fastcall TFrHelpsText::RzBitBtn1Click(TObject *Sender)
{
 Close();	
}
//---------------------------------------------------------------------------

