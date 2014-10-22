//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ChancheNE.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzPanel"
#pragma link "cxButtonEdit"
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
#pragma link "RzEdit"
#pragma link "RzLabel"
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
TFrChancheNE *FrChancheNE;
//---------------------------------------------------------------------------
__fastcall TFrChancheNE::TFrChancheNE(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrChancheNE::btCloseClick(TObject *Sender)
{
  ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
void __fastcall TFrChancheNE::RzToolButton1Click(TObject *Sender)
{
 Hide();
 ModalResult = mrOk;
}
//---------------------------------------------------------------------------
void __fastcall TFrChancheNE::RzBitBtn1Click(TObject *Sender)
{
edFind->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TFrChancheNE::TmNE_AxaptaTimer(TObject *Sender)
{
  TmNE_Axapta->Enabled=false;
   QNE_Axapta->Close();
   QNE_Axapta->Parameters->Items[0]->Value=Trim(edFind->Text);
   QNE_Axapta->Open();

}
//---------------------------------------------------------------------------

void __fastcall TFrChancheNE::edFindChange(TObject *Sender)
{
  TmNE_Axapta->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TFrChancheNE::DSNE_AxaptaDataChange(TObject *Sender, TField *Field)

{
 edAlterName->Text=QNE_AxaptaItemName->AsString;
}
//---------------------------------------------------------------------------

void __fastcall TFrChancheNE::RzEdit1Change(TObject *Sender)
{
  Timer1->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TFrChancheNE::Timer1Timer(TObject *Sender)
{
  Timer1->Enabled=false;
   ADOQuery1->Close();
   ADOQuery1->Parameters->Items[0]->Value=Trim(RzEdit1->Text);
   ADOQuery1->Open();
}
//---------------------------------------------------------------------------

void __fastcall TFrChancheNE::RzBitBtn2Click(TObject *Sender)
{
RzEdit1->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TFrChancheNE::DataSource1DataChange(TObject *Sender, TField *Field)

{
 RzMemo1->Text=WideStringField1->AsString ;
}
//---------------------------------------------------------------------------
