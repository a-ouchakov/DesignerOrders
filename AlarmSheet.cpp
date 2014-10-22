//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AlarmSheet.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzPanel"
#pragma resource "*.dfm"
TFrAlarmSheet *FrAlarmSheet;
//---------------------------------------------------------------------------
__fastcall TFrAlarmSheet::TFrAlarmSheet(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrAlarmSheet::btCloseClick(TObject *Sender)
{
 Close ();
}
//---------------------------------------------------------------------------
