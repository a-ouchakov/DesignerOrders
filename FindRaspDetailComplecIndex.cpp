//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FindRaspDetailComplecIndex.h"
#include "BisinessMenedger.h"
#include "main.h"
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
#pragma link "RzEdit"
#pragma link "cxDBTL"
#pragma link "cxInplaceContainer"
#pragma link "cxMaskEdit"
#pragma link "cxTL"
#pragma link "cxTLData"
#pragma link "cxCalendar"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
#pragma link "cxTLdxBarBuiltInMenu"
#pragma link "dxSkinsCore"
#pragma link "dxSkinsDefaultPainters"
#pragma link "cxCheckComboBox"
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
TFrFindRaspDetailComplecIndex *FrFindRaspDetailComplecIndex;
//---------------------------------------------------------------------------
__fastcall TFrFindRaspDetailComplecIndex::TFrFindRaspDetailComplecIndex(TComponent* Owner)
	: TForm(Owner)
{
  fOkButton=false;
  fDoubleButton=false;
 TmIndex->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TFrFindRaspDetailComplecIndex::btCloseClick(TObject *Sender)
{
   Close();
}
//---------------------------------------------------------------------------


void __fastcall TFrFindRaspDetailComplecIndex::btGiveIndexClick(TObject *Sender)
{
	if (QIndex->Active)
	{
	if(QIndexfType->AsInteger!=2)return;
	 else {  fOkButton=true; Close();}
	}

}
//---------------------------------------------------------------------------

void __fastcall TFrFindRaspDetailComplecIndex::RzToolButton1Click(
      TObject *Sender)
{
   tlRaspDetailIndex->FullCollapse();
}
//---------------------------------------------------------------------------

void __fastcall TFrFindRaspDetailComplecIndex::RzToolButton2Click(
      TObject *Sender)
{
   tlRaspDetailIndex->FullExpand();
}
//---------------------------------------------------------------------------

void __fastcall TFrFindRaspDetailComplecIndex::edIndexChange(TObject *Sender)
{
	 TmIndex->Enabled=true;
   /*	 TLocateOptions Opts;

  try{Opts.Clear(); Opts<<loPartialKey  ; QIndex->Locate("NameRaspDetail",edIndex->Text,Opts);}catch(...){};
  */
}
//---------------------------------------------------------------------------

void __fastcall TFrFindRaspDetailComplecIndex::TmIndexTimer(TObject *Sender)
{
	TmIndex->Enabled=false;
	QIndex->Close();
	QIndex->Parameters->Items[0]->Value= edIndex->Text;
	QIndex->Parameters->Items[1]->Value=FrBisniessMenedger->QListRaspIdn->AsInteger;
	QIndex->Open();
}
//---------------------------------------------------------------------------
void __fastcall TFrFindRaspDetailComplecIndex::FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)
{
   if(Key == VK_ESCAPE) Close();	
}
//---------------------------------------------------------------------------

void __fastcall TFrFindRaspDetailComplecIndex::btDoubleIndexClick(TObject *Sender)
{
	if (QIndex->Active)
	{
	if(QIndexfType->AsInteger!=2)return;
	 else {  fDoubleButton=true; Close();}
	}

}
//---------------------------------------------------------------------------

void __fastcall TFrFindRaspDetailComplecIndex::TmIndexChangeTimer(TObject *Sender)

{
   TmIndexChange->Enabled=false;
   if (QIndex->Active)
	{
	if(QIndexfType->AsInteger!=2){btGiveIndex->Enabled=false;btDoubleIndex->Enabled=false;}
	 else {btGiveIndex->Enabled=true;btDoubleIndex->Enabled=true;}
	}
}
//---------------------------------------------------------------------------

void __fastcall TFrFindRaspDetailComplecIndex::DSIndexDataChange(TObject *Sender,
          TField *Field)
{
 TmIndexChange->Enabled=true;
}
//---------------------------------------------------------------------------

