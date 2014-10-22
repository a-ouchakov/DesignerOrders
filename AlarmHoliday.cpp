//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AlarmHoliday.h"
#include "FindEmplUser.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzLabel"
#pragma link "RzPanel"
#pragma resource "*.dfm"
TFrAlarmHoliday *FrAlarmHoliday;
//---------------------------------------------------------------------------
__fastcall TFrAlarmHoliday::TFrAlarmHoliday(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TFrAlarmHoliday::RzToolButton3Click(TObject *Sender)
{
 ModalResult=mrOk;	
}
//---------------------------------------------------------------------------
void __fastcall TFrAlarmHoliday::RzToolButton4Click(TObject *Sender)
{
  ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
void __fastcall TFrAlarmHoliday::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
 if(Key == VK_ESCAPE) ModalResult = mrCancel;	
}
//---------------------------------------------------------------------------
void __fastcall TFrAlarmHoliday::RzToolButton1Click(TObject *Sender)
{
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#undef  NN
#endif
#define TFR TFrEmplUser
#define FR  FrEmplUser



  FR=new TFR(Application);

  FR->ShowModal();
  FR->WindowState=wsMinimized;
 if (FR->fOkButton)  
	{
	  IDUserP=FR->QEmplUserIDUser->AsInteger;
	}
  delete (FR);
 ModalResult = mrCancel; 
}
//---------------------------------------------------------------------------

