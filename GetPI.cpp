//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "GetPI.h"
#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzEdit"
#pragma link "RzPanel"
#pragma link "cxClasses"
#pragma link "cxControls"
#pragma link "cxCurrencyEdit"
#pragma link "cxCustomData"
#pragma link "cxData"
#pragma link "cxDataStorage"
#pragma link "cxDBData"
#pragma link "cxEdit"
#pragma link "cxFilter"
#pragma link "cxGraphics"
#pragma link "cxGrid"
#pragma link "cxGridBandedTableView"
#pragma link "cxGridCustomTableView"
#pragma link "cxGridCustomView"
#pragma link "cxGridDBBandedTableView"
#pragma link "cxGridDBTableView"
#pragma link "cxGridLevel"
#pragma link "cxGridTableView"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
#pragma link "cxStyles"
#pragma link "dxSkinsCore"
#pragma link "dxSkinscxPCPainter"
#pragma link "dxSkinsDefaultPainters"
#pragma link "cxDBTL"
#pragma link "cxInplaceContainer"
#pragma link "cxMaskEdit"
#pragma link "cxTL"
#pragma link "cxTLData"
#pragma link "cxTLdxBarBuiltInMenu"
#pragma link "RzLabel"
#pragma link "dxSkinBlack"
#pragma link "dxSkinBlue"
#pragma link "dxSkinCaramel"
#pragma link "dxSkinCoffee"
#pragma link "dxSkinDarkRoom"
#pragma link "dxSkinDarkSide"
#pragma link "dxSkinFoggy"
#pragma link "dxSkinGlassOceans"
#pragma link "dxSkiniMaginary"
#pragma link "dxSkinLilian"
#pragma link "dxSkinLiquidSky"
#pragma link "dxSkinLondonLiquidSky"
#pragma link "dxSkinMcSkin"
#pragma link "dxSkinMoneyTwins"
#pragma link "dxSkinOffice2007Black"
#pragma link "dxSkinOffice2007Blue"
#pragma link "dxSkinOffice2007Green"
#pragma link "dxSkinOffice2007Pink"
#pragma link "dxSkinOffice2007Silver"
#pragma link "dxSkinOffice2010Black"
#pragma link "dxSkinOffice2010Blue"
#pragma link "dxSkinOffice2010Silver"
#pragma link "dxSkinPumpkin"
#pragma link "dxSkinSeven"
#pragma link "dxSkinSharp"
#pragma link "dxSkinSilver"
#pragma link "dxSkinSpringTime"
#pragma link "dxSkinStardust"
#pragma link "dxSkinSummer2008"
#pragma link "dxSkinValentine"
#pragma link "dxSkinXmas2008Blue"
#pragma link "dxSkinBlueprint"
#pragma link "dxSkinDevExpressDarkStyle"
#pragma link "dxSkinDevExpressStyle"
#pragma link "dxSkinHighContrast"
#pragma link "dxSkinSevenClassic"
#pragma link "dxSkinSharpPlus"
#pragma link "dxSkinTheAsphaltWorld"
#pragma link "dxSkinVS2010"
#pragma link "dxSkinWhiteprint"
#pragma resource "*.dfm"
TFrGetPI *FrGetPI;
//---------------------------------------------------------------------------
__fastcall TFrGetPI::TFrGetPI(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrGetPI::btCloseClick(TObject *Sender)
{
  ModalResult = mrCancel;
}
//---------------------------------------------------------------------------

void __fastcall TFrGetPI::btInsRaspClick(TObject *Sender)
{
  ModalResult = mrOk;
}
//---------------------------------------------------------------------------

void __fastcall TFrGetPI::btRefrshClick(TObject *Sender)
{
 QGetPI->Close();
	QGetPI->Parameters->Items[0]->Value=Trim(RzMemo2->Text);
	QGetPI->Parameters->Items[1]->Value=Trim(RzMemo1->Text);
	QGetPI->Parameters->Items[2]->Value=Trim(RzMemo4->Text);
	QGetPI->Parameters->Items[3]->Value=Trim(RzMemo3->Text);
   	QGetPI->Parameters->Items[4]->Value=vIdRasp;
 QGetPI->Open();
 lbHintAlert->Visible=false;
 }
//---------------------------------------------------------------------------

void __fastcall TFrGetPI::FormActivate(TObject *Sender)
{
 //btRefrshClick(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TFrGetPI::FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
   if(Key == VK_ESCAPE) Close();
   if(Key == 13) btRefrshClick(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TFrGetPI::tlRaspDetailDblClick(TObject *Sender)
{
  //ShowMessage(IntToStr(QGetPIIdGetPI->Value));
}
//---------------------------------------------------------------------------

