//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "RealVirtualDol.h"
#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzPanel"
#pragma link "RzEdit"
#pragma link "RzLabel"
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
TFrRealVirtualDol *FrRealVirtualDol;
//---------------------------------------------------------------------------
__fastcall TFrRealVirtualDol::TFrRealVirtualDol(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrRealVirtualDol::RzToolButton4Click(TObject *Sender)
{
 ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
void __fastcall TFrRealVirtualDol::RzToolButton3Click(TObject *Sender)
{
 //if (Trim(edVirtualDol->Text)=="") {ShowMessage("Необходимо ввести реальное наименование должности."); return; }
 ModalResult=mrOk;
}
//---------------------------------------------------------------------------
void __fastcall TFrRealVirtualDol::FormActivate(TObject *Sender)
{
 /* vsSQLQw=" SELECT Idn, Dol FROM bm_RealVirtualDol WHERE IdEmplDol=:D0 AND DateDel  is null";
		 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		 Qw->Parameters->Items[0]->Value=QEmplUserDolIDn->AsInteger;
		 Qw->Open();   */
}
//---------------------------------------------------------------------------
void __fastcall TFrRealVirtualDol::DSEmplUserDolDataChange(TObject *Sender,
      TField *Field)
{
  vsSQLQw=" SELECT Idn, Dol FROM bm_RealVirtualDol WHERE IdEmplDol=:D0 AND DateDel  is null";
		 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		 Qw->Parameters->Items[0]->Value=QEmplUserDolIDn->AsInteger;
		 Qw->Open();

  if (Qw->RecordCount>0)
	 {fFlagEditInsert=true;
	  edVirtualDol->Text= Trim(Qw->Fields->Fields[1]->AsString);
	 }
  else
	 {fFlagEditInsert=false;
	  edVirtualDol->Text="";
	 }
}
//---------------------------------------------------------------------------
