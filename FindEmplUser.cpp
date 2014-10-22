//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FindEmplUser.h"
#include "main.h"

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
#pragma link "RzEdit"
#pragma link "RzPanel"
#pragma link "RzDBEdit"
#pragma link "RzButton"
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
TFrEmplUser *FrEmplUser;
char flFrEmplUser;
//---------------------------------------------------------------------------
__fastcall TFrEmplUser::TFrEmplUser(TComponent* Owner)
	: TForm(Owner)
{
  fOkButton=false;
  TmEmplUser->Enabled=true;

}
//---------------------------------------------------------------------------
void __fastcall TFrEmplUser::TmEmplUserTimer(TObject *Sender)
{
 TmEmplUser->Enabled=false;
 QEmplUser->Close();
 QEmplUser->Open();
}
//---------------------------------------------------------------------------

void __fastcall TFrEmplUser::edEmplUserChange(TObject *Sender)
{
   TLocateOptions Opts;

 try{Opts.Clear(); Opts<<loPartialKey  ; QEmplUser->Locate("FamIO",edEmplUser->Text,Opts);}catch(...){};


}
//---------------------------------------------------------------------------

void __fastcall TFrEmplUser::cxGridTableViewEmplUserCellClick(
      TcxCustomGridTableView *Sender,
      TcxGridTableDataCellViewInfo *ACellViewInfo, TMouseButton AButton,
      TShiftState AShift, bool &AHandled)
{
 TmSelectUser->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TFrEmplUser::TmSelectUserTimer(TObject *Sender)
{
  TmSelectUser->Enabled=false;
  edEmplUser->Text=QEmplUserFamIO->AsString;

}
//---------------------------------------------------------------------------

void __fastcall TFrEmplUser::btCloseClick(TObject *Sender)
{
 Close();
}
//---------------------------------------------------------------------------

void __fastcall TFrEmplUser::btGiveEmplUserClick(TObject *Sender)
{
 fOkButton=true;

 Close();
}
//---------------------------------------------------------------------------


void __fastcall TFrEmplUser::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
   if(Key == VK_ESCAPE) Close();	
}
//---------------------------------------------------------------------------

