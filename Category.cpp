//*************************************************************************************************************************//
//*************************************************************************************************************************//
//                                                                                                                         //
//                                                  СПРАВОЧНИК "КАТЕГОРИЯ/ВИД"                                             //
//                                                                                                                         //
//*************************************************************************************************************************//
//*************************************************************************************************************************//

#include <vcl.h>
#pragma hdrstop

#include "Category.h"                                                         //                   Справочник "Категория/Вид"
#include "CategoryNE.h"                                                       //Добавление/редактирования для "Категория/Вид"
#include "main.h"                                                             //              модуль главной формы приложения
#include "Init.h"
#include "IniFiles.hpp"                                                       //                      для работы с INI-файлом
//---------------------------------------------------------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzPanel"
#pragma link "cxControls"
#pragma link "cxCustomData"
#pragma link "cxDBTL"
#pragma link "cxGraphics"
#pragma link "cxInplaceContainer"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
#pragma link "cxStyles"
#pragma link "cxTL"
#pragma link "cxTLData"
#pragma link "cxTLdxBarBuiltInMenu"
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
#pragma link "cxMaskEdit"
#pragma link "RzEdit"
#pragma link "RzLabel"
#pragma link "dxSkinMetropolis"
#pragma link "dxSkinMetropolisDark"
#pragma link "dxSkinOffice2013DarkGray"
#pragma link "dxSkinOffice2013LightGray"
#pragma link "dxSkinOffice2013White"
#pragma resource "*.dfm"
TFrCategory *FrCategory;

  extern TIniFile *Ini;
	bool flType = 0;                                        //флаг для режима добавления новой записи: 0 = Категория, 1 = Вид
	bool flAdEd = 0;                                        //флаг для режима с записью:   0 = добавление, 1 = редактирование
     int rec = -1;
  String ctg = "SELECT recId, Idn, PIdn, iText, iType "
			   "  FROM dbo.bm_CategorySpecialization "
			   " WHERE DateDel IS NULL";
  String cvs = "";
  extern String idT;
  extern String idP;

//...........................................................................................................................
void TFrCategory::CatgList()
{
  int x = 0;
  int y = 0;

  if (SearchEd->Text.Length() == 0)
	 {cvs = "";}
  if (SearchEd->Text.Length() != 0)
	 {cvs = " AND iText LIKE '%" + SearchEd->Text + "%'";}

  CatgQuer->SQL->Clear();
  CatgQuer->SQL->Add(ctg + cvs);
  CatgQuer->Open();
  CatgQuer->First();
  while (!CatgQuer->Eof)
		{
		 if (CatgQueriType->AsInteger == 0)
			{x++;}
		 if (CatgQueriType->AsInteger == 1)
			{y++;}
		 CatgQuer->Next();
		 }

  Caption = "Справочник ''Категория/Вид'' (Категорий: " + IntToStr(x) + ", Видов: " + IntToStr(y) + ")";
}
//---------------------------------------------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------------------------------------------
__fastcall TFrCategory::TFrCategory(TComponent* Owner) : TForm(Owner)
{
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrCategory::FormShow(TObject *Sender)
{
  FrCategory->Top    = Ini->ReadInteger("Category", "Top",    100);
  FrCategory->Left   = Ini->ReadInteger("Category", "Left",   200);
  FrCategory->Width  = Ini->ReadInteger("Category", "Width",  688);
  FrCategory->Height = Ini->ReadInteger("Category", "Height", 190);

  MainForm->N45->Enabled = false;                                  //           заблокировать пункт меню открытия справочника
  CatgQuer->Active = true;
  CatgList();
  try
	 {
	  cxDBTreeList1->FullCollapse();
	  }
	  catch(...)
		   {}
}
//-------------------------- Отобразить иконку в дереве ---------------------------------------------------------------------
void __fastcall TFrCategory::cxDBTreeList1GetNodeImageIndex(TcxCustomTreeList *Sender, TcxTreeListNode *ANode,
															TcxTreeListImageIndexType AIndexType, Uitypes::TImageIndex &AIndex)
{
  if (ANode->HasChildren == true)
	 {
	  if (ANode->Expanded == true)
		  AIndex = 1;
	  else
		  AIndex = 0;
	  }
}
//-------------------------- Новая категория --------------------------------------------------------------------------------
void __fastcall TFrCategory::btNewCatClick(TObject *Sender)
{
  flType = 0;
  flAdEd = 0;
  Application->CreateForm(__classid(TFrCategNE), &FrCategNE);
}
//-------------------------- Новый вид --------------------------------------------------------------------------------------
void __fastcall TFrCategory::btNewVidClick(TObject *Sender)
{
  if (CatgQuer->RecordCount == 0)
	 {
      ShowMessage("Нельзя создать новый ''Вид'', пока не создано ни одной категории!");
	  return;
	  }
  if (!CatgQuerPIdn->IsNull)
	 {
      ShowMessage("Нельзя создать новый ''Вид'' в виде, выберите категорию!");
	  return;
	  }

  flType = 1;
  flAdEd = 0;
  idP = cxDBTreeList1Idn->Value;

  Application->CreateForm(__classid(TFrCategNE), &FrCategNE);
}
//-------------------------- Редактирование Категории или вида --------------------------------------------------------------
void __fastcall TFrCategory::cxDBTreeList1DblClick(TObject *Sender)
{
  if (CatgQueriType->AsInteger == 0) //редактируем название категории
	 {
	  flType = 0;
	  flAdEd = 1;
		 rec = CatgQuerrecId->AsInteger;
		 idT = CatgQuerIdn->AsString;
	  Application->CreateForm(__classid(TFrCategNE), &FrCategNE);
										 FrCategNE->TextEd->Text = CatgQueriText->AsString;
	  }
  if (CatgQueriType->AsInteger == 1) //редактируем название вида
	 {
	  flType = 1;
	  flAdEd = 1;
         rec = CatgQuerrecId->AsInteger;
		 idT = CatgQuerIdn->AsString;
	  Application->CreateForm(__classid(TFrCategNE), &FrCategNE);
										 FrCategNE->TextEd->Text = CatgQueriText->AsString;
	  }
}
//-------------------------- Обновить ---------------------------------------------------------------------------------------
void __fastcall TFrCategory::btDelPIClick(TObject *Sender)
{
  CatgList();
}
//-------------------------- Раскрыть все -----------------------------------------------------------------------------------
void __fastcall TFrCategory::RzToolButton1Click(TObject *Sender)
{
  cxDBTreeList1->FullExpand();
}
//-------------------------- Свернуть всё -----------------------------------------------------------------------------------
void __fastcall TFrCategory::RzToolButton2Click(TObject *Sender)
{
  try
	 {
	  cxDBTreeList1->FullCollapse();
	  }
	  catch(...)
		   {}
}
//-------------------------- Происходит поиск категории или вида ------------------------------------------------------------
void __fastcall TFrCategory::SearchEdChange(TObject *Sender)
{
  CatgList();
}
//-------------------------- Очитсить строку поиска -------------------------------------------------------------------------
void __fastcall TFrCategory::RzToolButton3Click(TObject *Sender)
{
  if (SearchEd->Text.Length() == 0)
     {return;}
  SearchEd->Clear();
  CatgList();
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrCategory::btCloseClick(TObject *Sender)
{
  Close();
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrCategory::FormClose(TObject *Sender, TCloseAction &Action)
{
  CatgQuer->Active = false;
  MainForm->N45->Enabled = true;                                   //          разблокировать пункт меню открытия справочника

  Ini->WriteInteger("Category", "Top",    FrCategory->Top);
  Ini->WriteInteger("Category", "Left",   FrCategory->Left);
  Ini->WriteInteger("Category", "Width",  FrCategory->Width);
  Ini->WriteInteger("Category", "Height", FrCategory->Height);

  Action = caFree;
}
//---------------------------------------------------------------------------------------------------------------------------

//*************************************************** THE END OF FILE *****************************************************//
//                                                 All Rights Reserved.                                                    //
//*************************************************************************************************************************//
