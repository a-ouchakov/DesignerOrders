//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FundRTFText.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
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
#pragma link "cxStyles"
#pragma link "RzButton"
#pragma link "RzPanel"
#pragma link "cxRichEdit"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
#pragma link "dxSkinsCore"
#pragma link "dxSkinscxPCPainter"
#pragma link "dxSkinsDefaultPainters"
#pragma link "dxSkinBlack"
#pragma link "dxSkinBlue"
#pragma link "dxSkinBlueprint"
#pragma link "dxSkinCaramel"
#pragma link "dxSkinCoffee"
#pragma link "dxSkinDarkRoom"
#pragma link "dxSkinDarkSide"
#pragma link "dxSkinDevExpressDarkStyle"
#pragma link "dxSkinDevExpressStyle"
#pragma link "dxSkinFoggy"
#pragma link "dxSkinGlassOceans"
#pragma link "dxSkinHighContrast"
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
#pragma link "dxSkinSevenClassic"
#pragma link "dxSkinSharp"
#pragma link "dxSkinSharpPlus"
#pragma link "dxSkinSilver"
#pragma link "dxSkinSpringTime"
#pragma link "dxSkinStardust"
#pragma link "dxSkinSummer2008"
#pragma link "dxSkinTheAsphaltWorld"
#pragma link "dxSkinValentine"
#pragma link "dxSkinVS2010"
#pragma link "dxSkinWhiteprint"
#pragma link "dxSkinXmas2008Blue"
#pragma resource "*.dfm"
TFrFundRTFText *FrFundRTFText;
//---------------------------------------------------------------------------
__fastcall TFrFundRTFText::TFrFundRTFText(TComponent* Owner)
	: TForm(Owner)
{
	TmRaspName->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TFrFundRTFText::TmRaspNameTimer(TObject *Sender)
{
  TmRaspName->Enabled=false;
  QRaspName->Close();
  QRaspName->Open();
}
//---------------------------------------------------------------------------
void __fastcall TFrFundRTFText::btGiveRaspNameClick(TObject *Sender)
{
 ModalResult=mrOk;
}
//---------------------------------------------------------------------------
void __fastcall TFrFundRTFText::btCloseClick(TObject *Sender)
{
 ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
void __fastcall TFrFundRTFText::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
   if(Key == VK_ESCAPE) Close();	
}
//---------------------------------------------------------------------------
