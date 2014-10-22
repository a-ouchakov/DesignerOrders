//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EditLibs.h"
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
#pragma link "cxStyles"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
//#pragma link "dxSkinsCore"
//#pragma link "dxSkinscxPCPainter"
//#pragma link "dxSkinsDefaultPainters"
//#pragma link "dxSkinBlack"
//#pragma link "dxSkinBlue"
//#pragma link "dxSkinBlueprint"
//#pragma link "dxSkinCaramel"
//#pragma link "dxSkinCoffee"
//#pragma link "dxSkinDarkRoom"
//#pragma link "dxSkinDarkSide"
//#pragma link "dxSkinDevExpressDarkStyle"
//#pragma link "dxSkinDevExpressStyle"
//#pragma link "dxSkinFoggy"
//#pragma link "dxSkinGlassOceans"
//#pragma link "dxSkinHighContrast"
//#pragma link "dxSkiniMaginary"
//#pragma link "dxSkinLilian"
//#pragma link "dxSkinLiquidSky"
//#pragma link "dxSkinLondonLiquidSky"
//#pragma link "dxSkinMcSkin"
//#pragma link "dxSkinMoneyTwins"
//#pragma link "dxSkinOffice2007Black"
//#pragma link "dxSkinOffice2007Blue"
//#pragma link "dxSkinOffice2007Green"
//#pragma link "dxSkinOffice2007Pink"
//#pragma link "dxSkinOffice2007Silver"
//#pragma link "dxSkinOffice2010Black"
//#pragma link "dxSkinOffice2010Blue"
//#pragma link "dxSkinOffice2010Silver"
//#pragma link "dxSkinPumpkin"
//#pragma link "dxSkinSeven"
//#pragma link "dxSkinSevenClassic"
//#pragma link "dxSkinSharp"
//#pragma link "dxSkinSharpPlus"
//#pragma link "dxSkinSilver"
//#pragma link "dxSkinSpringTime"
//#pragma link "dxSkinStardust"
//#pragma link "dxSkinSummer2008"
//#pragma link "dxSkinTheAsphaltWorld"
//#pragma link "dxSkinValentine"
//#pragma link "dxSkinVS2010"
//#pragma link "dxSkinWhiteprint"
//#pragma link "dxSkinXmas2008Blue"
#pragma link "cxNavigator"
#pragma resource "*.dfm"
TFrEditLibs *FrEditLibs;
//---------------------------------------------------------------------------
__fastcall TFrEditLibs::TFrEditLibs(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrEditLibs::btInsRaspDetailClick(TObject *Sender)
{ AnsiString vsTableName, vsFieldName, vsspl_LbText;

  switch (fType)
 {case 1:  //Размер скидки
	vsTableName="bm_Comments";
	vsFieldName="Id256NameDiscount";
	vsspl_LbText="spl_LbText256";
  break;
  case 2:  //Специальные акции
	vsTableName="bm_Comments";
	vsFieldName="Id256NameAction";
	vsspl_LbText="spl_LbText256";
  break;
  case 3:  //Цель акции
	vsTableName="bm_CheckLists";
	vsFieldName="id256TextActionPurpose";
	vsspl_LbText="spl_LbText256";
  break;
  case 4:  //Группа клиентов, учавствующих в акции
	vsTableName="bm_CheckLists";
	vsFieldName="id256TextGroupClients";
	vsspl_LbText="spl_LbText256";
  break;
  case 5:  //Канал продвижения
	vsTableName="bm_CheckLists";
	vsFieldName="id256TextAdvancementChannel";
	vsspl_LbText="spl_LbText256";
  break;
  case 6:  //Вид распоряжения
	vsTableName="bm_Rasp";
	vsFieldName="VidRasp";
	vsspl_LbText="spl_LbText256";
  break;
  case 7:  //Еденицы измерения номенклатурных едениц(НЕ)
	vsTableName="bm_RaspDetail";
	vsFieldName="Id32NameUnit";
	vsspl_LbText="spl_LbText32";
  break;
  case 8:  //Типы номенклатурных едениц(НЕ)
	vsTableName="bm_RaspDetail";
	vsFieldName="Id32NameItemType";
	vsspl_LbText="spl_LbText32";
  break;
  case 9:  //Типы подписных индексов
	vsTableName="bm_RaspDetail";
	vsFieldName="Id24TypeProduceIndex";
	vsspl_LbText="spl_LbText24";
  break;
 }
	vsSQLQw=" declare             "
			" @Id256Name  int,	  "
			" @idLevel    int,	  "
			" @T256Name varchar(1024);"
			" SET @T256Name=:D0;" //Значение заврдимого параметра.
			" exec prLb_GetNumField '"+vsTableName+"','"+vsFieldName+"','"+vsspl_LbText+"',@T256Name output,@idLevel output,@Id256Name output";
   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
   Qw->Parameters->Items[0]->Value=edT256Name->Text;
   Qw->ExecSQL();
   ModalResult=mrOk;
}
//---------------------------------------------------------------------------
void __fastcall TFrEditLibs::btCloseClick(TObject *Sender)
{
  ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
void __fastcall TFrEditLibs::FormActivate(TObject *Sender)
{ AnsiString vsSQLQw256,vsSQLQw32,vsSQLQw24;
 vsSQLQw256="SELECT iText FROM spl_LbText256 WHERE iLvl=:D0";
 vsSQLQw32="SELECT iText FROM spl_LbText32 WHERE iLvl=:D0";
 vsSQLQw24="SELECT iText FROM spl_LbText24 WHERE iLvl=:D0";
 QWTable->Close(); QWTable->SQL->Clear();
  switch (fType)
  {case 1:  //Размер скидки
   QWTable->SQL->Add(vsSQLQw256);
   QWTable->Parameters->Items[0]->Value=1516;
   break;
   case 2:  //Специальные акции
   QWTable->SQL->Add(vsSQLQw256);
   QWTable->Parameters->Items[0]->Value=1517;
   break;
   case 3:  //Цель акции
   QWTable->SQL->Add(vsSQLQw256);
   QWTable->Parameters->Items[0]->Value=1519;
   break;
   case 4:  //Группа клиентов, учавствующих в акции
   QWTable->SQL->Add(vsSQLQw256);
   QWTable->Parameters->Items[0]->Value=1520;
   break;
   case 5:  //Канал продвижения
   QWTable->SQL->Add(vsSQLQw256);
   QWTable->Parameters->Items[0]->Value=1521;
   break;
   case 6: //Вид распоряжения
   QWTable->SQL->Add(vsSQLQw256);
   QWTable->Parameters->Items[0]->Value=1523;
   break;
   case 7:  //Еденицы измерения номенклатурных едениц(НЕ)
   QWTable->SQL->Add(vsSQLQw32);
   QWTable->Parameters->Items[0]->Value=1531;
   break;
   case 8:  //Типы номенклатурных едениц(НЕ)
   QWTable->SQL->Add(vsSQLQw32);
   QWTable->Parameters->Items[0]->Value=1532;
   break;
   case 9:  //Типы подписных индексов
   QWTable->SQL->Add(vsSQLQw24);
   QWTable->Parameters->Items[0]->Value=1354;
   break;
  }
  QWTable->Open();
	
}
//---------------------------------------------------------------------------
void __fastcall TFrEditLibs::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
   if(Key == VK_ESCAPE) Close();	
}
//---------------------------------------------------------------------------

