//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EditPIinProduce.h"
#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzPanel"
#pragma link "RzCmboBx"
#pragma link "RzEdit"
#pragma resource "*.dfm"
TFrEditPIinProduce *FrEditPIinProduce;
//---------------------------------------------------------------------------
__fastcall TFrEditPIinProduce::TFrEditPIinProduce(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrEditPIinProduce::btCloseClick(TObject *Sender)
{
   ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
void __fastcall TFrEditPIinProduce::btInsRaspClick(TObject *Sender)
{
   ModalResult = mrOk;
}
//---------------------------------------------------------------------------
void __fastcall TFrEditPIinProduce::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
 if(Key == VK_ESCAPE) ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
