//---------------------------------------------------------------------------

#include <vcl.h>

#pragma hdrstop

#include "HintJOB.h"
#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzEdit"
#pragma resource "*.dfm"
TFrHintJOB *FrHintJOB;
char flFrHintJOB;
//---------------------------------------------------------------------------
__fastcall TFrHintJOB::TFrHintJOB(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrHintJOB::btCloseClick(TObject *Sender)
{
 Hide();
}
//---------------------------------------------------------------------------
void __fastcall TFrHintJOB::btCloseMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
 btClose->Font->Color = clHighlight;
 btClose->Font->Style =TFontStyles()<<fsUnderline;
}
//---------------------------------------------------------------------------

void __fastcall TFrHintJOB::btCloseMouseLeave(TObject *Sender)
{
 btClose->Font->Color = clBlack;
 btClose->Font->Style = TFontStyles()<<fsBold;
}
//---------------------------------------------------------------------------
void __fastcall TFrHintJOB::FormShow(TObject *Sender)
{
 TmHintJOB->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TFrHintJOB::TmHintJOBTimer(TObject *Sender)
{
AlphaBlendValue=FrHintJOB->AlphaBlendValue-2;
if (AlphaBlendValue<=100) {Hide();TmHintJOB->Enabled=false; }
}
//---------------------------------------------------------------------------
void __fastcall TFrHintJOB::FormMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
AlphaBlendValue=225;
}
//---------------------------------------------------------------------------
void __fastcall TFrHintJOB::TmQTimer(TObject *Sender)
{
	Qw->Close();
	Qw->Open();
	Qw2->Close();
	Qw2->Open();
	UnicodeString vsQw,vsQw2;

	  RzMemo1->Lines->Clear();
	  while(Qw->Eof==false)
	  {
	   if((QwProgress->AsInteger!=100)||(Qw2Progress->AsInteger!=100)) MainForm->TrayIcon1->Animate=true; else MainForm->TrayIcon1->Animate=false;
	   vsQw=QwNameMove->AsString+"                                                              ";
	   vsQw=vsQw.SubString(0,60)+QwProgress->AsString.SubString(0,3)+"% "+QwLastEnd->AsString;
	   RzMemo1->Lines->Add(vsQw);
	   Qw->Next();
	  }Qw->Close();
	  while(Qw2->Eof==false)
	  {
	   vsQw2=Qw2NameMove->AsString+"                                                              ";
	   vsQw2=vsQw2.SubString(0,60)+Qw2Progress->AsString.SubString(0,3)+"% "+Qw2LastEnd->AsString;
	   RzMemo1->Lines->Add(vsQw2);
	   Qw2->Next();
	  }Qw2->Close();


}
//---------------------------------------------------------------------------

