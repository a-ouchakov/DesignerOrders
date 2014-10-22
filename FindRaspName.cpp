//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FindRaspName.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
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
#pragma link "cxStyles"

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
TFrFindRaspName *FrFindRaspName;
//---------------------------------------------------------------------------
__fastcall TFrFindRaspName::TFrFindRaspName(TComponent* Owner)
	: TForm(Owner)
{
    fOkButton=false;
	TmRaspName->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TFrFindRaspName::btCloseClick(TObject *Sender)
{
  Close();
}
//---------------------------------------------------------------------------
void __fastcall TFrFindRaspName::TmRaspNameTimer(TObject *Sender)
{
 TmRaspName->Enabled=false;
 QRaspName->Close();
 QRaspName->Open();
}
//---------------------------------------------------------------------------
void __fastcall TFrFindRaspName::btGiveRaspNameClick(TObject *Sender)
{
  fOkButton=true;
  Close();
}
//---------------------------------------------------------------------------
void __fastcall TFrFindRaspName::QRaspNameDateRaspGetText(TField *Sender,
	  UnicodeString &Text, bool DisplayText)
{
/*  AnsiString vsTmpDay, vsTmpMouth, vsTmpYear;

   vsTmpDay=QRaspNameDateRasp->Value.FormatString("d");
   vsTmpMouth=QRaspNameDateRasp->Value.FormatString("m");
   vsTmpYear=QRaspNameDateRasp->Value.FormatString("yyyy");


   switch (StrToInt(vsTmpMouth))
   {
  case	1: vsTmpMouth = "€нвар€";break;
  case	2: vsTmpMouth = "феврал€";break;
  case	3: vsTmpMouth = "марта";break;
  case	4: vsTmpMouth = "апрел€";break;
  case	5: vsTmpMouth = "ма€";break;
  case	6: vsTmpMouth = "июн€";break;
  case	7: vsTmpMouth = "июл€";break;
  case	8: vsTmpMouth = "августа";break;
  case	9: vsTmpMouth = "сент€бр€";break;
  case	10: vsTmpMouth = "окт€бр€";break;
  case	11: vsTmpMouth = "но€бр€";break;
  case	12: vsTmpMouth = "декабр€";break;
   }



 Text=vsTmpDay+" "+vsTmpMouth+" "+vsTmpYear+" года";  */

 Text=QRaspNameDateRasp->Value.FormatString("yyyy-mm-dd");
}
//---------------------------------------------------------------------------

void __fastcall TFrFindRaspName::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
   if(Key == VK_ESCAPE) Close();	
}
//---------------------------------------------------------------------------


