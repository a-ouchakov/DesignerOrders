//---------------------------------------------------------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AuditPriseList.h"
#include "main.h"
#include "Init.h"
#include "IniFiles.hpp"                                                                             //для работы с INI-файлом
//---------------------------------------------------------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzPanel"
#pragma link "cxClasses"
#pragma link "cxControls"
#pragma link "cxCustomData"
#pragma link "cxData"
#pragma link "cxDataStorage"
#pragma link "cxDBData"
#pragma link "cxEdit"
#pragma link "cxFilter"
#pragma link "cxGraphics"
#pragma link "cxGrid"
#pragma link "cxGridCustomTableView"
#pragma link "cxGridCustomView"
#pragma link "cxGridDBTableView"
#pragma link "cxGridLevel"
#pragma link "cxGridTableView"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
#pragma link "cxStyles"
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
#pragma link "dxSkinsCore"
#pragma link "dxSkinscxPCPainter"
#pragma link "dxSkinsDefaultPainters"
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
TFrAuditPriseList *FrAuditPriseList;

  extern TIniFile *Ini;
  char flAuditPriseList;

  String qapl = "SELECT StartJob, StopJob, CASE WHEN JobStatus = 0 THEN 'Успех' ELSE 'Неудача' END AS JobStatus, "
				"                          CASE WHEN JobResult = 1 THEN 'Успех' ELSE 'Неудача' END AS JobResult, "
				"       JobDescription, RunBy "
				"  FROM dbo.all_AdvPriseListEtalon_CheckJob "
				" ORDER BY RecNo DESC";
//...........................................................................................................................
void TFrAuditPriseList::QPL()
{
  AuditPLQuer->SQL->Clear();
  AuditPLQuer->SQL->Add(qapl);
  AuditPLQuer->Open();
}
//---------------------------------------------------------------------------------------------------------------------------
__fastcall TFrAuditPriseList::TFrAuditPriseList(TComponent* Owner) : TForm(Owner)
{
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrAuditPriseList::FormShow(TObject *Sender)
{
  AuditPLQuer->Active = true;
  QPL();
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrAuditPriseList::cxGrid1DBTableView1JobResultStylesGetContentStyle(TcxCustomGridTableView *Sender,
									 TcxCustomGridRecord *ARecord, TcxCustomGridTableItem *AItem, TcxStyle *&AStyle)
{
  if (ARecord->Values[3] == "Неудача")
	 {AStyle = JobFail;}
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrAuditPriseList::btRefreshClick(TObject *Sender)
{
  QPL();
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrAuditPriseList::btCloseClick(TObject *Sender)
{
  Close();
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrAuditPriseList::FormClose(TObject *Sender, TCloseAction &Action)
{
  AuditPLQuer->Active = false;

  Ini->WriteInteger("AuditPriseList", "Top",    FrAuditPriseList->Top);
  Ini->WriteInteger("AuditPriseList", "Left",   FrAuditPriseList->Left);
  Ini->WriteInteger("AuditPriseList", "Width",  FrAuditPriseList->Width);
  Ini->WriteInteger("AuditPriseList", "Height", FrAuditPriseList->Height);

  Action = caFree;
  flAuditPriseList = WINCLS;
}
//---------------------------------------------------------------------------------------------------------------------------
