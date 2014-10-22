//------------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
//------------------------------------------------------------------------------
#include "EditRaspDetail.h"
#include "EditRaspDetailComplect.h"
#include "FindProduce.h"
#include "AddProduce.h"
#include "Init.h"
//#include "cmath.h"
#include "main.h"
#include "EditLibs.h"
#include "HelpsText.h"
#include "SelectAdvPriseList.h"
#include "GetPI.h"
#include "GetNE.h"
//------------------------------------------------------------------------------
#pragma package(smart_init)
//------------------------------------------------------------------------------
#pragma link "RzButton"
#pragma link "RzPanel"
#pragma link "RzCmboBx"
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
#pragma link "RzSplit"
#pragma link "RzEdit"
#pragma link "RzSpnEdt"
#pragma link "cxDBNavigator"
#pragma link "cxNavigator"
#pragma link "cxContainer"
#pragma link "cxTextEdit"
#pragma link "RzLabel"
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "RzRadChk"
#pragma link "RzTabs"
#pragma link "cxCheckComboBox"
#pragma link "cxDropDownEdit"
#pragma link "cxMaskEdit"
#pragma link "cxExtEditRepositoryItems"
#pragma link "cxDBLookupComboBox"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
//#pragma link "dxSkinBlack"
//#pragma link "dxSkinBlue"
//#pragma link "dxSkinCaramel"
//#pragma link "dxSkinCoffee"
//#pragma link "dxSkinDarkRoom"
//#pragma link "dxSkinDarkSide"
//#pragma link "dxSkinFoggy"
//#pragma link "dxSkinGlassOceans"
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
//#pragma link "dxSkinsCore"
//#pragma link "dxSkinscxPCPainter"
//#pragma link "dxSkinsDefaultPainters"
//#pragma link "dxSkinSeven"
//#pragma link "dxSkinSharp"
//#pragma link "dxSkinSilver"
//#pragma link "dxSkinSpringTime"
//#pragma link "dxSkinStardust"
//#pragma link "dxSkinSummer2008"
//#pragma link "dxSkinValentine"
//#pragma link "dxSkinXmas2008Blue"
//#pragma link "cxCheckBox"
//#pragma link "dxSkinBlueprint"
//#pragma link "dxSkinDevExpressDarkStyle"
//#pragma link "dxSkinDevExpressStyle"
//#pragma link "dxSkinHighContrast"
//#pragma link "dxSkinSevenClassic"
//#pragma link "dxSkinSharpPlus"
//#pragma link "dxSkinTheAsphaltWorld"
//#pragma link "dxSkinVS2010"
//#pragma link "dxSkinWhiteprint"
//#pragma link "dxSkinMetropolis"
//#pragma link "dxSkinMetropolisDark"
//#pragma link "dxSkinOffice2013DarkGray"
//#pragma link "dxSkinOffice2013LightGray"
//#pragma link "dxSkinOffice2013White"
#pragma link "cxDBCheckComboBox"
#pragma resource "*.dfm"
//------------------------------------------------------------------------------
  TFrEditRaspDetail *FrEditRaspDetail;
//------------------------------------------------------------------------------
  bool Event           = false;
  String Blink         = "";
  String HLine         = "";
  String recType       = "N";    //N - NULL, 1 - true, 0 - false
  String SAPinfo       = "";
  String SAPinvs       = "";
  String SAPordr       = "";
  String DMordr        = "";
  //флаг возможности удалить номенклаутрную единицу в SAP
	bool SAPdeleteNEtrue = 0;
  //флаг возможности удалить номенклаутрную единицу в  DM
	bool DMdeleteNEtrue  = 0;
//------------------------------------------------------------------------------
//void __fastcall TFrEditRaspDetail::CheckComplect()
//{
//  String q1 =
//    " SELECT idn "
//    "   FROM dbo.bm_RaspDetail "
//    "     WHERE Idn = "     + IntToStr(QRaspDetail("PIdn")->AsInteger) + String(" "
//    "       AND idRasp = ") + IntToStr(QRaspDetail("idRasp")->AsInteger) + String(" "
//    "       AND fType = 1 "
//    "       AND DateDel IS NULL");

//  CmplQuer->Close();
//  CmplQuer->SQL->Clear();
//  CmplQuer->SQL->Add(q1);
//  CmplQuer->Open();
//  if (CmplQuer->RecordCount != 0)
//	{
    // если это ПИ из комплекта - разрешаем ввод количества
//	  RzGroupBox18->Enabled = true;
//	  ColPIEd->Enabled      = true;
//	}
//  CmplQuer->Close();
//}
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
__fastcall TFrEditRaspDetail::TFrEditRaspDetail(TComponent* Owner) : TForm(Owner)
{
  dmRaspDetail = new TdmRaspDetail(this);
//  dmRaspDetail->QueryPI->Open();
  btAddId32NameUnit->Visible  = MainForm->flCommentsCheckLists;
  btId32NameItemType->Visible = MainForm->flCommentsCheckLists;
  RzBitBtn8->Visible          = MainForm->flCommentsCheckLists;

  viIdGetPI = 0;
  List();
  ListCycle();
  OpenForm();
}
//------------------------------------------------------------------------------
TField* __fastcall TFrEditRaspDetail::RaspDetail(AnsiString fieldName)
{
  return dmRaspDetail->RaspDetailField(fieldName);
}
//------------------------------------------------------------------------------
AnsiString __fastcall TFrEditRaspDetail::RaspDetailValue(AnsiString fieldName)
{
  return dmRaspDetail->RaspDetailValue(fieldName);
}
//------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::ListCycle()
{
  cbfAdv->Items->Clear();
  CyclQuer->Active = true;
  CyclQuer->SQL->Clear();
  CyclQuer->SQL->Add(
    "SELECT Description, CycleMonth FROM dbo.ProduceBlockCycle"
    );
  CyclQuer->Open();
  CyclQuer->First();
  while (!CyclQuer->Eof)
		{
		 cbfAdv->Items->Add(CyclQuerDescription->Value);
		 CyclQuer->Next();
		 }
  CyclQuer->Active = false;
}
//------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::CheckNDS()
{
  Currency viWithNDS, viWithoutNDS;

  viWithNDS    = (Currency)((double) edCostWithNDS->Value);
  viWithoutNDS = ((Currency)((double)edCostWithoutNDS->Value));
  viWithoutNDS = viWithoutNDS * (Currency)
                                (double)(100.0 + StrToFloat(cbProcNDS->Text));
  viWithNDS    = viWithNDS * 100;
  if (
      (viWithNDS <= (viWithoutNDS + 0.005)) &&
      (viWithNDS >= (viWithoutNDS - 0.005))
     )
  {
	  TmAlarmNoNDS->Enabled = false;
	  lbNoNDS->Visible      = false;
	}
	else
	{
	  TmAlarmNoNDS->Enabled = true;
		lbNoNDS->Visible      = true;
  }
}
//------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::btCloseClick(TObject *Sender)
{
  ModalResult = mrCancel;
}
//------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::btedProduceClick(TObject *Sender)
{
  TFrFindProduce *LocalFrFindProduce = new TFrFindProduce (Application);
  LocalFrFindProduce->fEditRaspDetail = true;
  LocalFrFindProduce->ShowModal();
  LocalFrFindProduce->WindowState = wsMinimized;
  if (LocalFrFindProduce->ModalResult == mrOk)
  {
	  edProduce->Text = LocalFrFindProduce->QProduceiText->AsString;
	  edProduceIdn    = LocalFrFindProduce->QProduceidn->AsInteger;
	  if (cbTypeName->ItemIndex == -1)
    {
		  vsSQLQw = "SELECT DISTINCT TOP 1 C.iText "
                "  FROM dbo.all_AdvProduceClass a "
                "       LEFT JOIN spl_LbText24 C ON C.Idn = A.Id24TypeName "
                " WHERE idnp = :D0";
		  Qw->Close();
		  Qw->SQL->Clear();
		  Qw->SQL->Add(vsSQLQw);
		  Qw->Parameters->Items[0]->Value =
                LocalFrFindProduce->QProduce->Fields->Fields[0]->AsInteger;
		  Qw->Open();
		  AnsiString s = Qw->Fields->Fields[0]->AsString;
		  cbTypeName->ItemIndex =
                cbTypeName->Items->IndexOf(Qw->Fields->Fields[0]->AsString);
		  Qw->Close();
    }
	  cbfAdvChange(Sender);          //для работы с блоками
	  cbTypeNameChange(Sender);      //для работы с блоками
  }
  delete LocalFrFindProduce;
}
//------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::CheckHotLine(TObject *Sender)
{
  String hl =
    "DECLARE @Didn AS int "
    "    SET @Didn = " + RaspDetailValue("Idn") + " "
//    "    SET @Didn = " + IntToStr(FrEditRaspDetail->QRaspDetailIdn->Value) + " "
    " SELECT rl.Choice "
    "   FROM dbo.bm_RaspDetail AS rd "
    "     LEFT JOIN dbo.ProduceBlockRaspLink AS rl "
    "       ON (rl.IdRaspDetail = rd.Idn) "
    "     LEFT JOIN dbo.ProduceBlock AS pb ON (pb.idn = rl.IdBlock) "
    "        LEFT JOIN dbo.spl_LbText AS lb ON (lb.Idn = pb.idMBlockName) "
    "  WHERE rd.Idn = @Didn "
	  "    AND rd.DateDel IS NULL "
	  "    AND rl.IdRaspDetail IS NOT NULL "
	  "    AND lb.iText LIKE 'горячая линия%' "
	  "    AND rl.Choice = 1";
  HotLQuer->Active = true;
  HotLQuer->SQL->Clear();
  HotLQuer->SQL->Add(hl);
  HotLQuer->Open();

  if (HotLQuer->RecordCount == 1 && HotLQuerChoice->Value == 1)
	 {
	  Blink = "CheckDblBlock";
	  ShowMessage(
      "Внимание!\n\n"
			"Если Вы желаете подключить другой блок, исключите ранее выбранный."
      );
	  HotLQuer->Active = false;
	  return;
	  }

  HotLQuer->Active = false;
  if ((HotLQuer->RecordCount == 1 && HotLQuerChoice->Value == 0) ||
       HotLQuerChoice->IsNull == true)
    Blink = "IncludeBlock";

  if (Blink == "IncludeBlock")
	{
	  if (HotLQuerChoice->IsNull == true)
		  HLine = "null";
    else
    {
  	  if (HotLQuerChoice->Value == 1)
        HLine = "1";
	    else if (HotLQuerChoice->Value == 0)
        HLine = "0";
    }
  }
}
//------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::btInsRaspDetailClick(TObject *Sender)
{
  int viTmpResult;

  meIndex->Text = edAlterName->Text + " " + edNoteName->Text;

  if( IdInsUser != PermisHdr.KeyUserStartProgramm &&
      !MainForm->flEditAllRasp &&
      !fPermission )
  {
    ShowMessage("Сохранение невозможно. \n"
                " Только создавший запись может ее сохранить");
    return;
  }

  vsSQLQw = "SELECT VidRasp  FROM  bm_Rasp WHERE Idn=:D0";
  Qw->Close();
  Qw->SQL->Clear();
  Qw->SQL->Add(vsSQLQw);
  Qw->Parameters->Items[0]->Value = viRaspIdn;
  Qw->Open();

  if(cxCheckComboBoxPI->Text.Trim().Length() == 0 ||
     cxCheckComboBoxPI->Text == "None selected")
  {
    ShowMessage("Сохранение невозможно.\n Укажите \"Состав ПИ\".");
    cxCheckComboBoxPI->StyleFocused->Color = clYellow;
    cxCheckComboBoxPI->Style->Color = clYellow;
    cxCheckComboBoxPI->Focused();
    return;
  }
  else
  {
    cxCheckComboBoxPI->StyleFocused->Color = clWhite;
    cxCheckComboBoxPI->Style->Color = clWhite;
  }

  dtDateEventStart->Color = clWhite;
  if (Event == true)
  {
    if(Trim(dtDateEventStart->Text) == "")
    {
      ShowMessage("Сохранение невозможно.\n"
                  " Укажите \"Дату начала проведения образовательного"
                  " мероприятия\".");
      dtDateEventStart->Color = clYellow;
      dtDateEventStart->Focused();
	    return;
    }
    else if (Trim(dtDateEventEnd->Text) == "")
	  {
	    ShowMessage("Сохранение невозможно.\n"
                  " Укажите \"Дату окончания проведения образовательного"
                  " мероприятия\".");
  	  dtDateEventEnd->Color = clYellow;
	    dtDateEventEnd->Focused();
	    return;
	  }
  }

  if(Qw->Fields->Fields[0]->AsInteger != 4742383)
  {
    //Если не распоряжение о замене ПИ
	  vsSQLQw=
        " DECLARE @vsTmp varchar(512);"
			  " SET @vsTmp =dbo.fnLb_TextTrim(LTRIM(RTRIM(:D0))) ;"
			  "   SELECT A.Idn FROM  bm_RaspDetail A "
        "     LEFT JOIN bm_Rasp B ON B.Idn=A.IdRasp "
			  "   WHERE B.Id24NameStatus IN (5448352,5448350,5448428) "
        "   AND (LTRIM(RTRIM(A.NameRaspDetail)))=@vsTmp "
			  "   AND A.Idn<>:D1 "
        "   and A.fType=2 "
        "   and A.DateDel is null ";
	  Qw->Close();
    Qw->SQL->Clear();
    Qw->SQL->Add(vsSQLQw);
	  Qw->Parameters->Items[0]->Value = meIndex->Text;
	  Qw->Parameters->Items[1]->Value = viIdnDetail;
	  Qw->Open();
	  if (Qw->RecordCount>0)
    {
      ShowMessage("Сохранение невозможно. \n "
                  "ПИ с таким названием уже существует.");
      Qw->Close();
      return;
    }
	  Qw->Close();

	  vsSQLQw =
      " DECLARE @vsTmp varchar(512);"
	    " SET @vsTmp =dbo.fnLb_TextTrim(LTRIM(RTRIM(:D0))) ; "
	    " SELECT A.Idn FROM  bm_RaspDetail A "
      "   LEFT JOIN bm_Rasp B ON B.Idn=A.IdRasp "
	    " WHERE (LTRIM(RTRIM(A.NameRaspDetail)))=@vsTmp  "
      "   and  A.Idn<>:D1 "
      "   and A.fType=2 "
      "   and A.DateDel is null "
      "   and A.idRasp=:D2 ";
    Qw->SQL->Clear();
    Qw->SQL->Add(vsSQLQw);
	  Qw->Parameters->Items[0]->Value = meIndex->Text;
	  Qw->Parameters->Items[1]->Value = viIdnDetail;
	  Qw->Parameters->Items[2]->Value = viRaspIdn;
	  Qw->Open();
	  if (Qw->RecordCount>0)
    {
      ShowMessage("Сохранение невозможно. \n ПИ с таким "
                  "названием уже существует в данном распоряжении.");
      Qw->Close();
      return;
    }
	  Qw->Close();
  }
  else
  {
	  vsSQLQw =
      " SELECT Idn FROM bm_RaspDetail "
			"   WHERE Idn=(SELECT IdGetPI FROM bm_RaspDetail WHERE Idn=:D0) "
      "     AND (CostWithNDS<>:D1 "
      "     OR CostWithoutNDS<>:D2); ";
	  Qw->SQL->Clear();
    Qw->SQL->Add(vsSQLQw);
	  Qw->Parameters->Items[0]->Value = viIdnDetail;
	  Qw->Parameters->Items[1]->Value = edCostWithNDS->Value;
	  Qw->Parameters->Items[2]->Value = edCostWithoutNDS->Value;;
	  Qw->Open();
	  if (Qw->RecordCount>0)
    {
      ShowMessage("Сохранение невозможно. \n "
                  "Цена ПИ должна остаться неизменной.");
      Qw->Close();
      return;
    }
	  Qw->Close();
  }

  if (Trim(edProduce->Text) == "")
  {
	  ShowMessage("Сохранение невозможно. \n Выберите \"Продукт\".");
	  edProduce->Color = clYellow;
	  edProduce->Focused();
	  return;
  }
	else
	  edProduce->Color = clInfoBk;

  if (Trim(edAlterName->Text) == "")
	{
	  ShowMessage("Сохранение невозможно. \n "
                "Укажите \"Наименование подписного индекса\".");
	  edAlterName->Color = clYellow;
	  edAlterName->Focused();
	  return;
  }
  else
		edAlterName->Color = clWhite;

  if (cbTypeName->ItemIndex == -1)
  {
	  ShowMessage("Сохранение невозможно. \n "
                "Укажите \"Тип подписного индекса\".");
	  cbTypeName->Focused();
	  return;
  }

  if (cbfAdv->ItemIndex == -1)
	{
	  ShowMessage("Сохранение невозможно. \n Укажите \"Период подписки\".");
	  cbfAdv->Focused();
	  return;
  }

  if (cbProcNDS->ItemIndex == -1)
	{
	  ShowMessage("Сохранение невозможно. \n Укажите \"Значение НДС\".");
	  cbProcNDS->Focused();
	  return;
	}

  if (Trim(dtDateJobMIN->Text) == "")
	{
	  ShowMessage("Сохранение невозможно. \n "
                "Укажите \"Дату начала действия ПИ\".");
	  dtDateJobMIN->Color = clYellow;
	  dtDateJobMIN->Focused();
	  return;
  }
	else
		dtDateJobMIN->Color = clWhite;

  if (Trim(dtDateJobMAX->Text) == "")
	{
	  ShowMessage("Сохранение невозможно. \n "
                "Укажите \"Дату окончания действия ПИ\".");
	  dtDateJobMAX->Color = clYellow;
	  dtDateJobMAX->Focused();
    return;
	}
	else
		dtDateJobMAX->Color = clWhite;

  if (Trim(chcbKanalSale->Text) == "")
	{
	  ShowMessage("Сохранение невозможно. \n Укажите \"Канал продаж\".");
	  chcbKanalSale->StyleFocused->Color = clYellow;
	  chcbKanalSale->Style->Color = clYellow;
	  chcbKanalSale->Focused();
	  return;
	}
	else
	{
	  chcbKanalSale->StyleFocused->Color = clWhite;
		chcbKanalSale->Style->Color = clWhite;
  }

  vsSQLQw =
    " SELECT Idn FROM bm_RaspDetail "
		"   WHERE DateDel is null "
    "     AND PIdn=:D0 "
    "     AND ((isnull(Id32NameUnit,0)=0) "
    "     OR (isnull(Id32NameItemType,0)=0))";
  Qw->SQL->Clear();
  Qw->SQL->Add(vsSQLQw);
  Qw->Parameters->Items[0]->Value = viIdnDetail;
  Qw->Open();
  if (Qw->RecordCount>0)
	{
    ShowMessage("Сохранение невозможно. \n "
                "Единицы измерения или тип номенклатуры указан "
                "не у всех номенклатурных единиц.");
    Qw->Close();
    return;
  }
  Qw->Close();

  // начало проверки на выбор блока с названием "Горячая линия"
  // если выбран ПИ "Горячая линия" в списке "Состав ПИ" (cxCheckComboBoxPI),
  // но нет отметки выбора блока в таблице
  AnsiString ch1 = Trim(cxCheckComboBoxPI->Text);
  if(ch1.Pos("Горячая линия") > 0)
  {
	  int b = 0;
	  String g1 =
      " SELECT COUNT(Choice) AS ChoiceCount "
			"   FROM ProduceBlockRaspLink "
      "   WHERE IdRasp = " + IntToStr(viRaspIdn) + " "
      "     AND IdRaspDetail = " + RaspDetail("Idn")->AsInteger + " "
//      "     AND IdRaspDetail = " + IntToStr(FrEditRaspDetail->QRaspDetailIdn->Value) + " "
      "     AND Choice = 1";
	  BchkQuer->Close();
	  BchkQuer->SQL->Clear();
	  BchkQuer->SQL->Add(g1);
	  BchkQuer->Open();
	  b = (dmRaspDetail->QRaspDetail->RecordCount - BchkQuerChoiceCount->Value);
	  BchkQuer->Close();

//	  AnsiString h = Trim(cxCheckComboBoxPI->Text);
//			 int l = h.Pos("Горячая линия");
//	  if ((b != 0) && (l > 0))
    if (b != 0)
		{
		  PageCtrl->ActivePageIndex = 2;
		  ShowMessage("В составе ПИ указан тип ''Горячая линия'', - "
                  "следует выбрать один из соответствующих блоков!");
		  return;
    }

	  // если есть отметка выбора блока в таблице, но не выбран ПИ "Горячая линия"
    // в списке "Состав ПИ" (cxCheckComboBoxPI)

//	  AnsiString s = Trim(cxCheckComboBoxPI->Text);
//			 int p = s.Pos("Горячая линия");
//	  if ((b == 0) && (p == 0))
    // Данный блок никогда не выполниться, так как проверка на P == 0 была
    // уже произведена и мы входим сюда если он не равен нулю, а блок
    // else выпониться всегда
//    {
//		  ShowMessage(
//            "Вы подключили Блок ''Горячая линия'', "
//            "но не отметили его в составе ПИ!\n\n"
//					  "Пожалуйста, отметьте тип ''Горячая линия'' "
//            "в списке ''Состав ПИ''.");
//		  cxCheckComboBoxPI->StyleFocused->Color = clYellow;
//		  cxCheckComboBoxPI->Style->Color        = clYellow;
//		  cxCheckComboBoxPI->Focused();
//		  return;
//    }
//		else
//		{
		  cxCheckComboBoxPI->StyleFocused->Color = clWhite;
			cxCheckComboBoxPI->Style->Color        = clWhite;
//    }
  }

  // начало проверки на выбор блока с названием "Дистанционное обучение"
  // если выбран ПИ "Дистанционное обучение" в списке "Состав ПИ",
  // но нет отметки выбора блока в таблице
  AnsiString ch2 = Trim(cxCheckComboBoxPI->Text);
//  int chm = ch2.Pos("Дистанционное обучение");
//  if (chm > 0)
  if (ch2.Pos("Дистанционное обучение") > 0)
  {
	  int c = 0;
	  String g2 =
      " SELECT COUNT(Choice) AS ChoiceCount "
			"   FROM ProduceBlockRaspLink "
      "     WHERE IdRasp = " + IntToStr(viRaspIdn) + " "
      "     AND IdRaspDetail = " + RaspDetailValue("Idn") + " "
//      "     AND IdRaspDetail = " + IntToStr(FrEditRaspDetail->QRaspDetailIdn->Value) + " "
      "     AND Choice = 1";
	  BchkQuer->SQL->Clear();
	  BchkQuer->SQL->Add(g2);
	  BchkQuer->Open();
	  c = (dmRaspDetail->QRaspDetail->RecordCount - BchkQuerChoiceCount->Value);
	  BchkQuer->Close();

//	  AnsiString d1 = Trim(cxCheckComboBoxPI->Text);
//			 int m1 = d1.Pos("Дистанционное обучение");
//	  if ((c != 0) && (m1 > 0))
//    нет смысла проверять m1 > 0 так как в данный блок мы попадаем по
//    данному условию
    if (c != 0)
    {
		  PageCtrl->ActivePageIndex = 2;
		  ShowMessage("В составе ПИ указан тип ''Дистанционное обучение'', - "
                  "следует выбрать этот блок!");
		  return;
    }

	  // если есть отметка выбора блока в таблице, но не выбран
    // ПИ "Дистанционное обучение" в списке "Состав ПИ"
    // как и в прошлый раз у нас с = 0( инапе блок выше выполнит return,
    // и m2 > 0)
//	  AnsiString d2 = Trim(cxCheckComboBoxPI->Text);
//			 int m2 = d2.Pos("Дистанционное обучение");
//	  if ((c == 0) && (m2 == 0))
//		 {
//		  ShowMessage("Вы подключили Блок ''Дистанционное обучение'', но не отметили его в составе ПИ!\n\n"
//					  "Пожалуйста, отметьте тип ''Дистанционное обучение'' в списке ''Состав ПИ''.");
//		  cxCheckComboBoxPI->StyleFocused->Color = clYellow;
//		  cxCheckComboBoxPI->Style->Color        = clYellow;
//		  cxCheckComboBoxPI->Focused();
//		  return;
//		  }
//		  else
//			  {
    cxCheckComboBoxPI->StyleFocused->Color = clWhite;
		cxCheckComboBoxPI->Style->Color        = clWhite;
//			   }
  }

  int iTmpCount = 1;
  QNE->First();
  // проверка на электронные продукты отключена
  // if((int)cbTypeName->Items->Objects[cbTypeName->ItemIndex]==2403131)
  // {iTmpCount=edNumbNE->Value;}
  // else   {iTmpCount=1;}

	while(QNE->Eof==false)
  {
    if( (( (QNECostWithNDS->AsCurrency    * 100 / iTmpCount) % 1) > 0) ||
        (( (QNECostWithoutNDS->AsCurrency * 100 / iTmpCount) % 1) > 0))
    {
      ShowMessage("Сохранение невозможно. \n "
                  "Сперва приведите значения цен с НДС и без НДС для "
                  "номенклатурных единиц к целым копейкам.");
      return;
    }
		QNE->Next();
  }

/*	   if(false) // проверка на электронные продукты отключена(int)cbTypeName->Items->Objects[cbTypeName->ItemIndex]==2403131)
		 {if(QNE->RecordCount!=1)
			{
			 ShowMessage("Сохранение невозможно. \n Не допускается более одного наименования номенклатур в электронных продуктах.");
			 return;
			 }
		  }
	   else */
  {
    if(QNE->RecordCount != edNumbNE->Value)
		{
		  ShowMessage("Сохранение невозможно. \n Не допускается "
                  "разное значение количества номенклатурных "
                  "единиц(НЕ) и реальных записей.");
      QNE->Close();
	    return;
    }
  }

  if(QNE->RecordCount == 0)
  {
    ShowMessage("Сохранение невозможно. \n Необходимо наличие хоть "
                "одной номенклатурной единицы(НЕ)");
  	QNE->Close();
    return;
  }

	QNE->Close();
  vsSQLQw =
    " SELECT ProcNDS FROM  bm_RaspDetail "
    "   WHERE PIdn=:D0  "
    "     and fType=2 "
    "     and DateDel is null "
    "     and ProcNDS<>" + cbProcNDS->Text;
  Qw->SQL->Clear();
  Qw->SQL->Add(vsSQLQw);
  Qw->Parameters->Items[0]->Value = RaspDetail("PIdn")->AsInteger;
//  Qw->Parameters->Items[0]->Value = FrEditRaspDetail->QRaspDetailPIdn->AsInteger;
  Qw->Open();
//  if (Qw->RecordCount>0)
//  {
//    ShowMessage("Сохранение невозможно. \n В одном комплекте "
//                "все %НДС должны иметь равное значение");
//    Qw->Close();
//    return;
//  }
  Qw->Close();

  if(chbAvtoCost->Checked)
    btCountCostWithNDSClick(Sender);

  QINS_EditRaspDetail->Close();
  QINS_EditRaspDetail->SQL->Clear();
  vsSQLEditRaspDetail=
    " UPDATE bm_RaspDetail 		"
		"  SET  idRasp  = :D0 		"
		", Id24TypeProduceIndex=:D1 "
		", idAdvProduceClass  = :D2	"
		", NameRaspDetail  = dbo.fnLb_TextTrim(:D3)   	"
		", NumbNE  = :D4           	"
		", [Year]  = :D5             	"
		", CostWithNDS  = :D6      	"
		", CostWithoutNDS  = :D7   	"
		", CostNDS  = :D8          	"
		", ProcNDS  = :D9          	"
		", Discount  =  :D10        "
		", ProcDiscount  =  :D11   	"
		", fAdv  = :D12            	"
		", fAdvMIN  = :D13          "
		", CostMINWithNDS  = :D14      	"
		", CostMINWithoutNDS  = :D15   	"
		", CostBaseWithNDS  = :D16   	"
		", CostBudjetWithNDS  = :D17   	"
		", DateJobMIN  = :D18   	"
		", DateJobMAX  = :D19   	"
		", KanalSale  = :D20   	";

  if(FrBisniessMenedger->fFlagEditInsert == 0)
    vsSQLEditRaspDetail = vsSQLEditRaspDetail +
      ", DateIns = GetDate(), IdIns  = :D21 ";
  else
	  vsSQLEditRaspDetail=vsSQLEditRaspDetail +
      ", DateMod = GetDate(), IdMod  = :D21 ";

  vsSQLEditRaspDetail = vsSQLEditRaspDetail +
    ", fNoNDS=:D22 "
		", AlterName  = dbo.fnLb_TextTrim(:D23)    	"     //!!!!
		", NoteName  = dbo.fnLb_TextTrim(:D24)      "
		", CompositionOfPI  = :D25 "
		", ColPI = :D26 ";

  vsSQLEditRaspDetail = vsSQLEditRaspDetail +
		"	WHERE Idn= :D27 ;";

  QINS_EditRaspDetail->SQL->Add(vsSQLEditRaspDetail);
	QINS_EditRaspDetail->Parameters->Items[0]->Value = viRaspIdn;
  if (cbTypeName->ItemIndex == -1)
    viTmpResult = 0;
   else
    viTmpResult = (int)cbTypeName->Items->Objects[cbTypeName->ItemIndex];

  // Назначение параметров для updateSQL
  QINS_EditRaspDetail->Parameters->Items[1]->Value = viTmpResult;

  if (edProduceIdn > 0)
    QINS_EditRaspDetail->Parameters->Items[2]->Value = edProduceIdn;
  else
    QINS_EditRaspDetail->Parameters->Items[2]->Value.Clear();

  QINS_EditRaspDetail->Parameters->Items[3]->Value = Trim(meIndex->Text);

  if(Trim(edNumbNE->Text) != "")
    QINS_EditRaspDetail->Parameters->Items[4]->Value = edNumbNE->Value;
  else
    QINS_EditRaspDetail->Parameters->Items[4]->Value.Clear();

  QINS_EditRaspDetail->Parameters->Items[5]->Value = spYear->Value;

  if(Trim(edCostWithNDS->Text) != "")
    QINS_EditRaspDetail->Parameters->Items[6]->Value = (edCostWithNDS->Value);
  else
    QINS_EditRaspDetail->Parameters->Items[6]->Value.Clear();

  if(Trim(edCostWithoutNDS->Text) != "")
    QINS_EditRaspDetail->Parameters->Items[7]->Value = (edCostWithoutNDS->Value);
  else
    QINS_EditRaspDetail->Parameters->Items[7]->Value.Clear();

  if(Trim(edCostNDS->Text) != "")
    QINS_EditRaspDetail->Parameters->Items[8]->Value = (edCostNDS->Value);
  else
    QINS_EditRaspDetail->Parameters->Items[8]->Value.Clear();

  QINS_EditRaspDetail->Parameters->Items[9]->Value = StrToCurr(cbProcNDS->Text);

  if(Trim(edDiscount->Text) != "")
    QINS_EditRaspDetail->Parameters->Items[10]->Value = (edDiscount->Value);
  else
    QINS_EditRaspDetail->Parameters->Items[10]->Value.Clear();

  if(Trim(edProcDiscount->Text) != "")
    QINS_EditRaspDetail->Parameters->Items[11]->Value = (edProcDiscount->Value);
  else
    QINS_EditRaspDetail->Parameters->Items[11]->Value.Clear();

  if ((cbfAdv->ItemIndex == -1))
    QINS_EditRaspDetail->Parameters->Items[12]->Value.Clear();
  else
    QINS_EditRaspDetail->Parameters->Items[12]->Value = cbfAdv->ItemIndex;

  if(Trim(edfAdvMIN->Text) != "")
    QINS_EditRaspDetail->Parameters->Items[13]->Value = (edfAdvMIN->Value);
  else
    QINS_EditRaspDetail->Parameters->Items[13]->Value.Clear();

  if(Trim(edCostMINWithNDS->Text) != "")
    QINS_EditRaspDetail->Parameters->Items[14]->Value = (edCostMINWithNDS->Value);
  else
    QINS_EditRaspDetail->Parameters->Items[14]->Value.Clear();

  if(Trim(edCostMINWithoutNDS->Text) != "")
    QINS_EditRaspDetail->Parameters->Items[15]->Value = (edCostMINWithoutNDS->Value);
  else
    QINS_EditRaspDetail->Parameters->Items[15]->Value.Clear();

  if(Trim(edCostBaseWithNDS->Text) != "")
    QINS_EditRaspDetail->Parameters->Items[16]->Value = (edCostBaseWithNDS->Value);
  else
  QINS_EditRaspDetail->Parameters->Items[16]->Value.Clear();

  if(Trim(edCostBudjetWithNDS->Text) != "")
    QINS_EditRaspDetail->Parameters->Items[17]->Value = (edCostBudjetWithNDS->Value);
  else
    QINS_EditRaspDetail->Parameters->Items[17]->Value.Clear();

  if(Trim(dtDateJobMIN->Text) != "")
    QINS_EditRaspDetail->Parameters->Items[18]->Value = (dtDateJobMIN->Date);
  else
    QINS_EditRaspDetail->Parameters->Items[18]->Value.Clear();

  if(Trim(dtDateJobMAX->Text) != "")
    QINS_EditRaspDetail->Parameters->Items[19]->Value = (dtDateJobMAX->Date);
  else
    QINS_EditRaspDetail->Parameters->Items[19]->Value.Clear();

  if(Trim(chcbKanalSale->Text) != "")
    QINS_EditRaspDetail->Parameters->Items[20]->Value = (chcbKanalSale->Value);
  else
    QINS_EditRaspDetail->Parameters->Items[20]->Value.Clear();

  QINS_EditRaspDetail->Parameters->Items[21]->Value = PermisHdr.KeyUserStartProgramm;

  //Проверяем соответствие цены с пересчетом НДС
	Currency viWithNDS    = (Currency)((double) edCostWithNDS->Value);
	Currency viWithoutNDS = (Currency)((double)edCostWithoutNDS->Value);
	viWithoutNDS *= (Currency)(double)(100.0 + StrToFloat(cbProcNDS->Text));
	viWithNDS    *= 100.0;
  if ((viWithNDS <= (viWithoutNDS + 0.005)) &&
      (viWithNDS >= (viWithoutNDS - 0.005)))
    QINS_EditRaspDetail->Parameters->Items[22]->Value = 0;
  else
    QINS_EditRaspDetail->Parameters->Items[22]->Value = 1;

  QINS_EditRaspDetail->Parameters->Items[23]->Value = Trim(edAlterName->Text);
  QINS_EditRaspDetail->Parameters->Items[24]->Value = Trim(edNoteName->Text);

  if(Trim(cxCheckComboBoxPI->Text) != "")
    QINS_EditRaspDetail->Parameters->Items[25]->Value = (cxCheckComboBoxPI->Value);
  else
    QINS_EditRaspDetail->Parameters->Items[25]->Value.Clear();

  if (Trim(ColPIEd->Text) != "")
	  QINS_EditRaspDetail->Parameters->Items[26]->Value = (ColPIEd->Text.Trim());
  else
	  QINS_EditRaspDetail->Parameters->Items[26]->Value.Clear();

  QINS_EditRaspDetail->Parameters->Items[27]->Value = viIdnDetail;

  QINS_EditRaspDetail->SQL->Add(vsSQLEditRaspDetail);
  QINS_EditRaspDetail->ExecSQL();

  QIns_idAdvTNClass->Close();
  QIns_idAdvTNClass->Parameters->Items[0]->Value = edProduceIdn;
  QIns_idAdvTNClass->Parameters->Items[1]->Value = viIdnDetail;
  QIns_idAdvTNClass->ExecSQL();
  fOkButton = true;
  ///Проставляем признак неверных данных расcчитанных без автоматичечкого НДС
  vsSQLQw=
    " DECLARE @PIdn int; SET @PIdn=:D0;"
		" UPDATE bm_RaspDetail SET fNoNDS=1 "
    "   WHERE  datedel is null  "
    "     and (CostWithNDS<>(CostWithoutNDS*(100+ProcNDS)/100)) "
    "     AND PIdn=@PIdn "
		" UPDATE bm_RaspDetail SET fNoNDS=0 "
    "   WHERE  datedel is null  "
    "     and (CostWithNDS= (CostWithoutNDS*(100+ProcNDS)/100))  "
    "     AND PIdn=@PIdn ";
  Qw->SQL->Clear();
  Qw->SQL->Add(vsSQLQw);
	Qw->Parameters->Items[0]->Value = viIdnDetail;
  Qw->ExecSQL();
  Qw->Close();
 ///Проставляем DateLastExport для данного ПИ и его НЕ в null
	vsSQLQw=
    " DECLARE @Idn int; SET @Idn=:D0;"
		" UPDATE  bm_RaspDetail SET DateLastExport=null "
    "   WHERE Idn=@Idn AND PIdn=@Idn";
  Qw->SQL->Clear();
  Qw->SQL->Add(vsSQLQw);
	Qw->Parameters->Items[0]->Value = viIdnDetail;
  Qw->ExecSQL();
  Qw->Close();
  if (Event == true)
  {
	  String de =
      "BEGIN TRY "
			"BEGIN TRANSACTION; "

      "DECLARE @DateEventStart AS smalldatetime "
			"    SET @DateEventStart = CONVERT(DATETIME, '" +
          dtDateEventStart->Date.FormatString("yyyy-mm-dd") +
          "', 102) "
			"DECLARE @DateEventEnd   AS smalldatetime "
			"    SET @DateEventEnd   = CONVERT(DATETIME, '" +
          dtDateEventEnd->Date.FormatString("yyyy-mm-dd") +
          "', 102) "
			" UPDATE [dbo].[bm_RaspDetail] "
			"    SET DateEventStart = @DateEventStart, DateEventEnd = @DateEventEnd "
			"  WHERE idRasp = " + IntToStr(viRaspIdn) + " "
			"    AND DateDel IS NULL "
			"    AND idn = " + RaspDetailValue("Idn") + " "
//			"    AND idn = " + IntToStr(FrEditRaspDetail->QRaspDetailIdn->Value) + " "

			"COMMIT TRANSACTION; "
			"END TRY "

			"BEGIN CATCH "
			"      ROLLBACK TRANSACTION; "
			"      PRINT 'Error transaction!'; "
			"END CATCH;";

    EvntComm->CommandText = de;
	  EvntComm->Execute();
  }
  else
  {
	  String de =
      "BEGIN TRY "
			"BEGIN TRANSACTION; "

			"DECLARE @DateEventStart AS smalldatetime "
			"    SET @DateEventStart = NULL "
			"DECLARE @DateEventEnd   AS smalldatetime "
			"    SET @DateEventEnd   = NULL "
			" UPDATE [dbo].[bm_RaspDetail] "
			"    SET DateEventStart = @DateEventStart, DateEventEnd = @DateEventEnd "
			"  WHERE idRasp = " + IntToStr(viRaspIdn) + " "
			"    AND DateDel IS NULL "
			"    AND idn = " + RaspDetailValue("Idn") + " "
//			"    AND idn = " + IntToStr(FrEditRaspDetail->QRaspDetailIdn->Value) + " "

			"COMMIT TRANSACTION; "
			"END TRY "

			"BEGIN CATCH "
			"      ROLLBACK TRANSACTION; "
			"      PRINT 'Error transaction!'; "
			"END CATCH;";

    EvntComm->CommandText = de;
		EvntComm->Execute();
  }
  ModalResult = mrOk;
}
//------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::RzBitBtn1Click(TObject *Sender)
{
  cbfAdv->ItemIndex = -1;
  PageCtrl->ActivePageIndex = 0;
}
//------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::RzBitBtn2Click(TObject *Sender)
{
  if(QNE->Fields->FieldByName("IdIns")->AsInteger ==
                                            PermisHdr.KeyUserStartProgramm  ||
     MainForm->flEditAllRasp)
  {
    if(MessageDlg("Вы уверены, что хотите удалить все номенклатурные единицы?",
		            	mtInformation,
                  TMsgDlgButtons() << mbYes << mbNo,
                  0) != mrYes)
    {
      Abort(); // с какого хрена Abort?
      return;
    }

  ///Проверка на использование в DM
  vsSQLQw = " SELECT IdAdvPriseList FROM bm_RaspDetail Where Idn=:D0; ";
  Qw->Close();
  Qw->SQL->Clear();
  Qw->SQL->Add(vsSQLQw);
  Qw->Parameters->Items[0]->Value = viIdGetPI;
  Qw->Open();

  vsSQLQw = " exec tc_AdvPriseListDel @IdnAdvPriseList = :D0, @Ver = 1 ";

  Qw_DM->Close();
  Qw_DM->SQL->Clear();
  Qw_DM->SQL->Add(vsSQLQw);
  Qw_DM->Parameters->Items[0]->Value = Qw->Fields->Fields[0]->AsInteger;

  try
  {
		Qw_DM->ExecSQL();
  }
  catch (Exception &exception)
	{
		Application->ShowException(&exception);
		if (MessageDlg("Имеются выставленные счета на данную номенклатуру"
                   " в Контакт-центре. Всё равно удалить?",
		               mtConfirmation,
                   TMsgDlgButtons() << mbYes << mbNo,
                   0) != mrYes)
      return;
  }

  //Проверка на использование в CАП
  vsSQLQw=" SELECT IdAdvPriseList FROM bm_RaspDetail Where Idn=:D0; ";
  Qw->Close();
  Qw->SQL->Clear();
  Qw->SQL->Add(vsSQLQw);
  Qw->Parameters->Items[0]->Value = viIdGetPI;
  Qw->Open();

  vsSQLQw=" exec tc_AdvCondDel @IdnAdvPriseList = :D0, @Ver = 1 ";
  try
  {
    Qw_NM->Close();
		Qw_NM->SQL->Clear();
		Qw_NM->SQL->Add(vsSQLQw);
		Qw_NM->Parameters->Items[0]->Value = Qw->Fields->Fields[0]->AsInteger;
		Qw_NM->ExecSQL();
  }
	catch (Exception &exception)
  {
	  Application->ShowException(&exception);
	  if (MessageDlg("Имеются выставленные счета и заказы на данную номенклатуру"
                   " в САП, либо у Вас нет прав на данную проверку."
                   " Всё равно удалить?",
					         mtConfirmation,
                   TMsgDlgButtons() << mbYes << mbNo,
                   0) != mrYes)
      return;
  }

   Qw->Close();
   Qw->SQL->Clear();
   vsSQLQw=" UPDATE bm_RaspDetail "
		       " SET DateDel=GetDate() , IdDel= :D0 "
		       " WHERE PIdn=:D1 and DateDel is NULL and fType=3; ";
   Qw->Close();
   Qw->SQL->Clear();
   Qw->SQL->Add(vsSQLQw);
   Qw->Parameters->Items[0]->Value = PermisHdr.KeyUserStartProgramm;
   Qw->Parameters->Items[1]->Value = viIdnDetail;
   Qw->ExecSQL();

   QNE->Close();
   QNE->Open();
   btGreateNE->Enabled=true;
 }
}
//------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::edProcDiscountKeyPress(TObject *Sender, char &Key)
{
  if (Key=='.')
    Key = ',';
  if(!((Key >= '0' && Key <= '9') || Key == VK_BACK || Key == ','))
    Key = 0x00;
  if( Key != VK_BACK &&
      Trim(edProcDiscount->Text) != "" &&
     edProcDiscount->Value > 100)
    Key = 0x00;
}
//------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::edProcDiscountChange(TObject *Sender)
{
  if (lbAlarm->Visible)
    lbAlarm->Visible=false;
  if (Trim(edProcDiscount->Text) != "" &&
      edProcDiscount->Value > 100)
    TmAlarm->Enabled=true;
  else
    TmAlarm->Enabled=false;
  CheckNDS();
}
//------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::TmAlarmTimer(TObject *Sender)
{
  if (lbAlarm->Visible)
    lbAlarm->Visible=false;
  else
    lbAlarm->Visible=true;
}
//------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)
{
  if (Key == VK_ESCAPE)
	  ModalResult = mrCancel;
}
//------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::RzBitBtn3Click(TObject *Sender)
{
  edProduce->Text = "";
   edProduceIdn = 0;
}
//------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::cbProcNDSChange(TObject *Sender)
{
  ShowMessage("Внимание! Вы изменяете %НДС.\n Будет необходимо "
              "пересчитать Цену с НДС и Сумму НДС для номенклатурных единиц. ");
  if(edCostWithoutNDS->Text != "")
    edCostWithNDS->Value = (edCostWithoutNDS->Value *
                            (100.0 + StrToFloat(cbProcNDS->Text)) / 100.0);
  if(edCostWithNDS->Text != "")
    edCostWithoutNDS->Value = (edCostWithNDS->Value * 100.0) /
                            (100.0 + StrToFloat(cbProcNDS->Text));
  edCostNDS->Value = edCostWithNDS->Value - edCostWithoutNDS->Value;
  if(edCostNEWithoutNDS->Text != "")
    edCostNEWithNDS->Value = (edCostNEWithoutNDS->Value *
                            (100.0 + StrToFloat(cbProcNDS->Text)) / 100.0);
  if(edCostNEWithNDS->Text != "")
    edCostNEWithoutNDS->Value = (edCostNEWithNDS->Value*100.0) /
                            (100.0 + StrToFloat(cbProcNDS->Text));
}
//------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::QNEBeforePost(TDataSet *DataSet)
{ int i,j, viAdv;

 if(DataSet->Modified==true)//Былали модификация данных
 {  	 if((IdInsUser!=PermisHdr.KeyUserStartProgramm)&&(!MainForm->flEditAllRasp))
		{ShowMessage("Сохранение невозможно. \n Только создавший запись может ее сохранить"); return; }

  switch(DataSet->State)
   {case dsInsert:break;  //Режим создания новой записи

	case dsEdit:
		{  //Режим редактирования
         chbAvtoCost->Checked=false;//Снимаем автоматический пересчет при сохранений "Сверху в низ""
		for(int i=0,j=DataSet->FieldCount;i<j;i++)
		   {if(DataSet->Fields->Fields[i]->NewValue!=DataSet->Fields->Fields[i]->OldValue)

			  { vsSQLQw=  "UPDATE bm_RaspDetail SET "+DataSet->Fields->Fields[i]->FieldName+"=:D0 , DateMod= getdate(),IdMod=:D1 where idn="+IntToStr(QNEIdn->AsInteger)+";";
			   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
			   if(DataSet->Fields->Fields[i]->FieldName=="NameRaspDetail") Qw->Parameters->Items[0]->Value=DataSet->Fields->Fields[i]->AsString;
			   else  Qw->Parameters->Items[0]->Value=DataSet->Fields->Fields[i]->AsCurrency;
			   Qw->Parameters->Items[1]->Value=PermisHdr.KeyUserStartProgramm;
			   Qw->ExecSQL();
			   Qw->Close();
			  }
			}
		 if (DataSet->FieldByName("CostWithNDS")->NewValue!=DataSet->FieldByName("CostWithNDS")->OldValue)
			{   vsSQLQw="SELECT SUM(CostWithNDS) FROM bm_RaspDetail WHERE  PIdn=:D0 and IdIns=:D1 and fType=3 and DateDel is null;";
				Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
				Qw->Parameters->Items[0]->Value= viIdnDetail;
				Qw->Parameters->Items[1]->Value= PermisHdr.KeyUserStartProgramm;
				Qw->Open();
				edCostWithNDS->Value=Qw->Fields->Fields[0]->AsCurrency;
				edCostWithoutNDS->Value=(edCostWithNDS->Value*100)/(100+StrToFloat(cbProcNDS->Text)) ;
				edCostNDS->Value=edCostWithNDS->Value-edCostWithoutNDS->Value;
				vsSQLQw= "DECLARE @Idn int, @ProcNDS money;"
				" SET @Idn=:D0; SET @ProcNDS=:D1;";
				if(chbEditCallResult->Checked)
				   {
					  vsSQLQw=vsSQLQw+" UPDATE bm_RaspDetail SET CostWithoutNDS=((CostWithNDS*100)/(100+@ProcNDS)), CostNDS=(CostWithNDS-((CostWithNDS*100)/(100+@ProcNDS)))  WHERE Idn= @Idn ;";
				   }
				   else
				   {
					  vsSQLQw=vsSQLQw+" UPDATE bm_RaspDetail SET  CostNDS= CostWithNDS-CostWithoutNDS/*(CostWithNDS-((CostWithNDS*100)/(100+@ProcNDS)))*/  WHERE Idn= @Idn ;";

					  vsSQLQw2="SELECT SUM(CostWithNDS),SUM(CostWithoutNDS),SUM(CostWithNDS-CostWithoutNDS) FROM bm_RaspDetail WHERE  PIdn=:D0 and IdIns=:D1 and fType=3 and DateDel is null;";
						Qw2->Close();Qw2->SQL->Clear();Qw2->SQL->Add(vsSQLQw2);
						Qw2->Parameters->Items[0]->Value= viIdnDetail;
						Qw2->Parameters->Items[1]->Value= PermisHdr.KeyUserStartProgramm;
						Qw2->Open();
						edCostWithNDS->Value=Qw2->Fields->Fields[0]->AsCurrency;
						edCostWithoutNDS->Value=Qw2->Fields->Fields[1]->AsCurrency;
						edCostNDS->Value=Qw2->Fields->Fields[2]->AsCurrency;
				   }
				Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
				Qw->Parameters->Items[0]->Value=DataSet->FieldByName("Idn")->AsInteger;
				Qw->Parameters->Items[1]->Value=StrToFloat(cbProcNDS->Text);
				Qw->ExecSQL();
				Qw->Close();
			}
		 if (DataSet->FieldByName("CostWithoutNDS")->NewValue!=DataSet->FieldByName("CostWithoutNDS")->OldValue)
			{   vsSQLQw="SELECT SUM(CostWithoutNDS) FROM bm_RaspDetail WHERE  PIdn=:D0 and IdIns=:D1 and fType=3 and DateDel is null;";
				Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
				Qw->Parameters->Items[0]->Value= viIdnDetail;
				Qw->Parameters->Items[1]->Value= PermisHdr.KeyUserStartProgramm;
				Qw->Open();
				edCostWithoutNDS->Value=Qw->Fields->Fields[0]->AsCurrency;
				edCostWithNDS->Value=(edCostWithoutNDS->Value*(100+StrToFloat(cbProcNDS->Text))/100);
				edCostNDS->Value=edCostWithNDS->Value-edCostWithoutNDS->Value;
				if(chbEditCallResult->Checked)
				   {
						vsSQLQw= "UPDATE bm_RaspDetail SET CostWithNDS=(CostWithoutNDS*(100+"+cbProcNDS->Text+")/100) ,  CostNDS=((CostWithoutNDS*"+cbProcNDS->Text+")/100)  WHERE Idn= :D0 ;";
				   }
				   else
				   {
					   vsSQLQw= "UPDATE bm_RaspDetail SET   CostNDS= CostWithNDS-CostWithoutNDS  WHERE Idn= :D0 ;";   /*((CostWithoutNDS*"+cbProcNDS->Text+")/100)*/

					   vsSQLQw2="SELECT SUM(CostWithNDS),SUM(CostWithoutNDS),SUM(CostWithNDS-CostWithoutNDS) FROM bm_RaspDetail WHERE  PIdn=:D0 and IdIns=:D1 and fType=3 and DateDel is null;";
						Qw2->Close();Qw2->SQL->Clear();Qw2->SQL->Add(vsSQLQw2);
						Qw2->Parameters->Items[0]->Value= viIdnDetail;
						Qw2->Parameters->Items[1]->Value= PermisHdr.KeyUserStartProgramm;
						Qw2->Open();
						edCostWithNDS->Value=Qw2->Fields->Fields[0]->AsCurrency;
						edCostWithoutNDS->Value=Qw2->Fields->Fields[1]->AsCurrency;
						edCostNDS->Value=Qw2->Fields->Fields[2]->AsCurrency;
                   }
				Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
				Qw->Parameters->Items[0]->Value=DataSet->FieldByName("Idn")->AsInteger;
				Qw->ExecSQL();
				Qw->Close();
			}
		 if (DataSet->FieldByName("ProcDiscount")->NewValue!=DataSet->FieldByName("ProcDiscount")->OldValue)
			{   //if ((QNEProcDiscount->AsFloat)>edProcDiscount->Value) edProcDiscount->Value=QNEProcDiscount->AsFloat;
				float vfTmpDiscount, vfTmpCostWithNDS,vfTmpCostWithoutNDS, vfTmpCostNDS ;
				vfTmpDiscount=QNECostWithNDS->AsFloat;
				//vfTmpCostWithNDS=vfTmpDiscount*(100-QNEProcDiscount->AsFloat)/100;
				float vfNewValue=DataSet->FieldByName("ProcDiscount")->NewValue;
				float vfOldValue=DataSet->FieldByName("ProcDiscount")->OldValue;
				vfTmpDiscount=vfTmpDiscount*100/(100-vfOldValue);
				vfTmpCostWithNDS=vfTmpDiscount*(100-(vfNewValue))/100;
				vfTmpDiscount=vfTmpDiscount-vfTmpCostWithNDS;//Сумма скидки;
				vfTmpCostWithoutNDS=(vfTmpCostWithNDS*100)/(100+StrToFloat(cbProcNDS->Text)) ;
				vfTmpCostNDS=vfTmpCostWithNDS-vfTmpCostWithoutNDS;
				vsSQLQw= "UPDATE bm_RaspDetail SET Discount=:D0,  CostWithNDS=:D1 ,  CostNDS=:D2 ,  CostWithoutNDS=:D3  WHERE Idn= :D4 ;";
				Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
				Qw->Parameters->Items[0]->Value= vfTmpDiscount;
				Qw->Parameters->Items[1]->Value= vfTmpCostWithNDS;
				Qw->Parameters->Items[2]->Value= vfTmpCostNDS;
				Qw->Parameters->Items[3]->Value= vfTmpCostWithoutNDS;
				Qw->Parameters->Items[4]->Value=DataSet->FieldByName("Idn")->AsInteger;
				Qw->ExecSQL();
				Qw->Close();
				vsSQLQw="SELECT SUM(CostWithoutNDS) FROM bm_RaspDetail WHERE  PIdn=:D0 and IdIns=:D1 and fType=3 and DateDel is null;";
				Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
				Qw->Parameters->Items[0]->Value= viIdnDetail;
				Qw->Parameters->Items[1]->Value= PermisHdr.KeyUserStartProgramm;
				Qw->Open();
				edCostWithoutNDS->Value=Qw->Fields->Fields[0]->AsCurrency;
				edCostWithNDS->Value=(edCostWithoutNDS->Value*(100+StrToFloat(cbProcNDS->Text))/100);
				edCostNDS->Value=edCostWithNDS->Value-edCostWithoutNDS->Value;
				vsSQLQw="SELECT MAX(ProcDiscount), SUM(Discount) FROM bm_RaspDetail WHERE  PIdn=:D0 and IdIns=:D1 and fType=3 and DateDel is null;";
				Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
				Qw->Parameters->Items[0]->Value= viIdnDetail;
				Qw->Parameters->Items[1]->Value= PermisHdr.KeyUserStartProgramm;
				Qw->Open();
				edProcDiscount->Value=Qw->Fields->Fields[0]->AsCurrency;
                edDiscount->Value=Qw->Fields->Fields[1]->AsCurrency;
				Qw->Close();
				 vsSQLQw="UPDATE bm_RaspDetail SET "
				"  CostWithNDS=:D0"
				", CostWithoutNDS=:D1"
				", CostNDS=:D2"
				", ProcNDS=:D3"
				", Discount=:D4"
				", ProcDiscount=:D5"
				", DateMod=GetDate()"
				", IdMod=:D6"
				" WHERE Idn=:D7 ; ";
				Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
				Qw->Parameters->Items[0]->Value= edCostWithNDS->Value;
				Qw->Parameters->Items[1]->Value= edCostWithoutNDS->Value;
				Qw->Parameters->Items[2]->Value= edCostWithNDS->Value-edCostWithoutNDS->Value; //Цена НДС
				Qw->Parameters->Items[3]->Value=edProcDiscount->Value;
				Qw->Parameters->Items[4]->Value= edDiscount->Value;
				Qw->Parameters->Items[5]->Value= edProcDiscount->Value;
				Qw->Parameters->Items[6]->Value= PermisHdr.KeyUserStartProgramm;
				Qw->Parameters->Items[7]->Value= viIdnDetail;
				Qw->ExecSQL();//Заносим данные о ПИ
 				Qw->Close();
			}
	if (edfAdvMIN->Value > 0)
	  {
	  /*
	  switch(cbfAdv->ItemIndex)
	 {case 0:
		viAdv=12;
		break;
	  case 1:
		viAdv=6;
		break;
	  case 2:
		viAdv=6;
		break;
	  case 3:
		viAdv=4;
		break;
	  case 4:
		viAdv=4;
		break;
	  case 5:
		viAdv=4;
		break;
	  case 6:
		viAdv=4;
		break;
	  case 7:
		viAdv=1;
		break;
	  case 8:
		viAdv=18;
		break;
	  case 9:
		viAdv=36;
		break;
	 } */

	   //switch исключён 20.01.2014 по причине того, что в нём жёстко заданы значения индекса списка периода подписки, что
	   //противоречит гибкости работы со списком периодов при добавлении новых периодов - changed by R.Perkatov 2014-01-20
	   CyclQuer->Active = true;
	   CyclQuer->SQL->Clear();
	   CyclQuer->SQL->Add("SELECT Description, CycleMonth FROM dbo.ProduceBlockCycle WHERE Description = '" + cbfAdv->Text + "'");
	   CyclQuer->Open();
				 viAdv = CyclQuerCycleMonth->Value;
	   edfAdvMIN->Text = CyclQuerCycleMonth->Value;
	   CyclQuer->Active = false;

	   edCostMINWithoutNDS->Value=edCostWithoutNDS->Value/(viAdv/edfAdvMIN->Value);
	   edCostMINWithNDS->Value=edCostWithNDS->Value/(viAdv/edfAdvMIN->Value);
	  }
		 }
	 }
   }
   TmNE->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::edCostWithoutNDSExit(TObject *Sender)
{ /*
if(edCostWithoutNDS->Text!="")edCostWithNDS->Value=(edCostWithoutNDS->Value*(100+StrToCurr(cbProcNDS->Text))/100);
edCostNDS->Value=edCostWithNDS->Value-edCostWithoutNDS->Value;     */
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::edCostWithoutNDSChange(TObject *Sender)
{
  if((edCostWithoutNDS->Text!="")&&(edCostWithoutNDS->Focused()))
   {edCostWithNDS->Value=(edCostWithoutNDS->Value*(100+StrToFloat(cbProcNDS->Text))/100);
	edCostNDS->Value=edCostWithNDS->Value-edCostWithoutNDS->Value;
   }
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::edCostWithNDSChange(TObject *Sender)
{
  int viAdv;
  if ((edCostWithNDS->Text != "") && (edCostWithNDS->Focused()))
	 {
	  edCostWithoutNDS->Value = (edCostWithNDS->Value*100)/(100+StrToFloat(cbProcNDS->Text));
	  edCostNDS->Value        = edCostWithNDS->Value-edCostWithoutNDS->Value;
	  if (QNE->RecordCount>0)
		   edCostNEWithNDS->Value = edCostWithNDS->Value/QNE->RecordCount;
	  else edCostNEWithNDS->Value = edCostWithNDS->Value;
	  edCostNEWithoutNDS->Value = (edCostNEWithNDS->Value*100)/(100+StrToFloat(cbProcNDS->Text));
	  if (edfAdvMIN->Value > 0)
		 {
		  /*
		  switch(cbfAdv->ItemIndex)
				{case 0:
		viAdv=12;
		break;
	  case 1:
		viAdv=6;
		break;
	  case 2:
		viAdv=6;
		break;
	  case 3:
		viAdv=4;
		break;
	  case 4:
		viAdv=4;
		break;
	  case 5:
		viAdv=4;
		break;
	  case 6:
		viAdv=4;
		break;
	  case 7:
		viAdv=1;
		break;
		case 8:
		viAdv=18;
		break;
	 } */

	   //switch исключён 20.01.2014 по причине того, что в нём жёстко заданы значения индекса списка периода подписки, что
	   //противоречит гибкости работы со списком периодов при добавлении новых периодов - changed by R.Perkatov 2014-01-20
	   CyclQuer->Active = true;
	   CyclQuer->SQL->Clear();
	   CyclQuer->SQL->Add("SELECT Description, CycleMonth FROM dbo.ProduceBlockCycle WHERE Description = '" + cbfAdv->Text + "'");
	   CyclQuer->Open();
				 viAdv = CyclQuerCycleMonth->Value;
	   edfAdvMIN->Text = CyclQuerCycleMonth->Value;
	   CyclQuer->Active = false;

	   edCostMINWithoutNDS->Value=edCostWithoutNDS->Value/(viAdv/edfAdvMIN->Value);
	   edCostMINWithNDS->Value=edCostWithNDS->Value/(viAdv/edfAdvMIN->Value);
	  }
   }
   CheckNDS();
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::btDiscountClick(TObject *Sender)
{ /*
  if(edProcDiscount->Text!="")
	 {edDiscount->Value=(edCostWithNDS->Value*edProcDiscount->Value)/100;
	  edCostWithNDS->Value=(edCostWithNDS->Value*(100-edProcDiscount->Value))/100;
	 }
	if(edCostWithNDS->Text!="")
	  {edCostWithoutNDS->Value=(edCostWithNDS->Value*100)/(100+StrToFloat(cbProcNDS->Text));
	   edCostNDS->Value=edCostWithNDS->Value-edCostWithoutNDS->Value;

	  }
	else ShowMessage("Введите Сумму без НДС.");
  */
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::btEditClick(TObject *Sender)
{
   QNE->Edit();
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::btPostClick(TObject *Sender)
{// Сохранить изменения
/*DSNE->AutoEdit=false;*/if(QNE->State==dsEdit || QNE->State==dsInsert)QNE->Post();
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::btAddClick(TObject *Sender)
{
if(cbTypeName->ItemIndex==-1) {ShowMessage("Сперва необходимо указать тип подписного индекса");return;}
//Создать данные
 vsSQLQw=" SELECT TOP 1 Idn FROM  bm_RaspDetail WHERE PIdn=:D0 and IdIns=:D1 and LTRIM(RTRIM(NameRaspDetail))='Новая номенклатурная еденица' and DateDel is null";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value=viIdnDetail;
 Qw->Parameters->Items[1]->Value=PermisHdr.KeyUserStartProgramm;
 Qw->Open();
 if(Qw->RecordCount==0)
	{	vsSQLQw=
		" INSERT INTO bm_RaspDetail"
				" ( PIdn" //
				", idRasp" //
				", NameRaspDetail" //
				", fType"   //
				", DateIns"
				", IdIns "
				", MergedCount )"
		" VALUES (:D0" //PIdn
				",:D1" //idRasp
				",'Новая номенклатурная еденица'" //NameRaspDetail
				",3" //fType
				",GetDate()" //DateIns
				",:D2"
				",:D3);"  //IdIns
		" declare @viTmp int; SET  @viTmp=SCOPE_IDENTITY(); "
		" SELECT @viTmp";
		Qw->Close(); Qw->SQL->Clear(); Qw->SQL->Add(vsSQLQw);
		Qw->Parameters->Items[0]->Value=viIdnDetail;
		Qw->Parameters->Items[1]->Value=viRaspIdn;
		Qw->Parameters->Items[2]->Value=PermisHdr.KeyUserStartProgramm;    //ID пользователя
//  if (false) // проверка на электронные продукты отключена(int)cbTypeName->Items->Objects[cbTypeName->ItemIndex]==2403131)         //Если электронные продукты, то отображаем одно НЕ, с ценой за общее количество дней.
//		Qw->Parameters->Items[3]->Value=edNumbNE->Value ;
//    else
      Qw->Parameters->Items[3]->Value = 1;

		Qw->Open();
	   TmNETimer(Sender);

	 }
	  int TmpIdn=Qw->Fields->Fields[0]->AsInteger;
		Qw->Close();

	  try{Opts.Clear();locvalues[0]=Variant(TmpIdn);QNE->Locate("Idn",locvalues,Opts);}catch(...){};
	 QNE->Edit();
}
//-------------------------- Удаление НЕ из ПИ ------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::btDelClick(TObject *Sender)
{
  if ((QNE->Fields->FieldByName("IdIns")->AsInteger == PermisHdr.KeyUserStartProgramm) || (MainForm->flEditAllRasp))
	 {
	  if (MessageDlg("Вы уверены, что хотите удалить номенклатурную единицу:\n\n" +
					 QNENameRaspDetail->AsString, mtInformation, TMsgDlgButtons()<<mbYes<<mbNo, 0) != mrYes)
		 {return;}

	  //Проверка на использование в DM
	  vsSQLQw = "SELECT IdAdvPriseList FROM bm_RaspDetail Where Idn = :D0; ";
	  Qw->Close();
	  Qw->SQL->Clear();
	  Qw->SQL->Add(vsSQLQw);                         //??? viIdGetPI ???
	  Qw->Parameters->Items[0]->Value = viIdGetPI;   //??? здесь получить Idn номенклатуры, которую пытаемся удалить ???
	  Qw->Open();

	  vsSQLQw = "/*ПО КР*/ EXEC tc_AdvPriseListDel @IdnAdvPriseList = :D0, @Ver = 1 ";

	  Qw_DM->Close();
	  Qw_DM->SQL->Clear();
	  Qw_DM->SQL->Add(vsSQLQw);
	  Qw_DM->Parameters->Items[0]->Value = Qw->Fields->Fields[0]->AsInteger;

	  try
		{
		 Qw_DM->ExecSQL();
		 }
		 catch (Exception &exception)
			   {
				Application->ShowException(&exception);
				if (MessageDlg("Имеются выставленные счета на данную номенклатуру в Контакт-центре. Всё равно удалить?",
								mtConfirmation, TMsgDlgButtons()<<mbYes<<mbNo, 0) != mrYes)
				   {return;}
				}

	  //--- Проверка на использование в CАП
	  //--- 1 выбираем из dbo.all_AdvPriseListEtalon для проверки НЕ, которую будем пытаться удалить
	  SAPinfo = "";
	  SAPinvs = "";
	  SAPordr = "";
	  DMordr  = "";

	  String sp = "SELECT Idn, PIDn FROM dbo.all_AdvPriseListEtalon WHERE IdnDO_NE = " + IntToStr(QNEIdn->Value);
	  SAPQuer->Active = true;
	  SAPQuer->SQL->Clear();
	  SAPQuer->SQL->Add(sp);
	  SAPQuer->Open();
	  if ((!SAPQuerIdn->IsNull) && (!SAPQuerPIDn->IsNull))
		 {
		  //ShowMessage("Idn = " + IntToStr(SAPQuerIdn->Value) + ";  PIDn = " + IntToStr(SAPQuerPIDn->Value));
		  SAPinfo = "all_AdvPriseListEtalon: (Idn: " + IntToStr(SAPQuerIdn->Value) + "); (PIDn: " + IntToStr(SAPQuerPIDn->Value) + ")";
		  //--- проверка на наличие Номенклатурных Единиц в Счетах в SAP
		  String ch = "SELECT ip.IssuePriceID "
					  "  FROM nd_IssuePrices AS ip "
					  "       JOIN dbo.InvoiceIssues AS ii ON (ii.IssuePriceID = ip.IssuePriceID) "
					  " WHERE ip.IdAdvPriseList = " + IntToStr(SAPQuerIdn->Value);
		  SapDQuer->Active = true;
		  SapDQuer->SQL->Clear();
		  SapDQuer->SQL->Add(ch);
		  SapDQuer->Open();
		  if (SapDQuer->RecordCount == 0)
			 {
			  SAPinvs = "Счетов в SAP нет.";
			  SAPdeleteNEtrue = 1;              //флаг возможности удалить номенклаутрную единицу в SAP (1 - зя!, 0 - низзя!)
			  }
		  if (SapDQuer->RecordCount != 0)
			 {
			  SAPdeleteNEtrue = 0;              //флаг возможности удалить номенклаутрную единицу в SAP (0 - низзя!, 1 - зя!)
			  SAPinvs = IntToStr(SapDQuer->RecordCount);
			  /*ShowMessage("Имеется выставленных счетов в количестве (" + IntToStr(SapDQuer->RecordCount) +
						  ") на выбранную Номенклатурную Единицу.\n\n"
						  "Её удаление невозможно!");*/
			  }
		  SapDQuer->Active = false;
		  }

	  //--- проверка на наличие Номенклатурных Единиц в Заказах в SAP
	  if ((!SAPQuerIdn->IsNull) && (!SAPQuerPIDn->IsNull))
		 {
		  String oi = "SELECT ip.IssuePriceID "
					  "  FROM nd_IssuePrices AS ip "
					  "       JOIN dbo.OrderItems AS oi ON (oi.IssuePriceID = ip.IssuePriceID) "
					  " WHERE ip.IdAdvPriseList = " + IntToStr(SAPQuerIdn->Value);
		  SapOQuer->Active = true;
		  SapOQuer->SQL->Clear();
		  SapOQuer->SQL->Add(oi);
		  SapOQuer->Open();
		  if (SapOQuer->RecordCount == 0)
			 {
			  SAPordr = "Заказов в SAP нет.";
			  SAPdeleteNEtrue = 1;              //флаг возможности удалить номенклаутрную единицу в SAP (0 - низзя!, 1 - зя!)
			  }
		  if (SapOQuer->RecordCount != 0)
			 {
			  SAPdeleteNEtrue = 0;              //флаг возможности удалить номенклаутрную единицу в SAP (0 - низзя!, 1 - зя!)
			  SAPordr = IntToStr(SapOQuer->RecordCount);
			  /*ShowMessage("Имеется заказов в количестве (" + IntToStr(SapOQuer->RecordCount) +
						  ") на выбранную Номенклатурную Единицу.\n\n"
						  "Её удаление невозможно!"); */
			  }
		  SapOQuer->Active = false;
		  }

	  //--- проверка в DM (BT)
	  String dm = "SELECT pl.idn "
				  "  FROM dbo.all_AdvPriseList AS pl "
				  "  JOIN dbo.all_OrderDetal   AS od ON (od.IssuePriceID = pl.IssuePriceID) "
				  " WHERE pl.idn = " + IntToStr(SAPQuerIdn->Value) + " "
				  "   AND pl.itype = 3 "
				  "   AND pl.DateDel IS NULL";
	  CCchQuer->Active = true;
	  CCchQuer->SQL->Clear();
	  CCchQuer->SQL->Add(dm);
	  CCchQuer->Open();
	  if (CCchQuer->RecordCount == 0)
		 {
		  DMordr = "Заказов в DM нет.";
		  DMdeleteNEtrue = 1;                    //флаг возможности удалить номенклаутрную единицу в DM (0 - низзя!, 1 - зя!)
		  }
	  if (CCchQuer->RecordCount != 0)
		 {
		  DMdeleteNEtrue = 0;                    //флаг возможности удалить номенклаутрную единицу в DM (0 - низзя!, 1 - зя!)
		  DMordr = IntToStr(CCchQuer->RecordCount);
		  /*ShowMessage("Имеется заказов в количестве (" + IntToStr(CCchQuer->RecordCount) +
						  ") на выбранную Номенклатурную Единицу в Контакт-центре.\n\n"
						  "Её удаление невозможно!"); */
		  }
	  CCchQuer->Active = false;

	  SAPQuer->Active = false;
	  //return;
	  /*if (SAPdeleteNEtrue == 0) {ShowMessage("нельзя удалить в SAP!");}
	  if (SAPdeleteNEtrue == 1) {ShowMessage("можно удалить в SAP...");}
	  if (DMdeleteNEtrue  == 0) {ShowMessage("нельзя удалить в DM!");}
	  if (DMdeleteNEtrue  == 1) {ShowMessage("можно удалить в DM...");}   */

	  vsSQLQw = "SELECT IdAdvPriseList FROM bm_RaspDetail Where Idn=:D0; ";
	  Qw->Close();
	  Qw->SQL->Clear();
	  Qw->SQL->Add(vsSQLQw);
	  Qw->Parameters->Items[0]->Value = viIdGetPI;
	  Qw->Open();

	  vsSQLQw = "/*ПО КР*/ exec tc_AdvCondDel @IdnAdvPriseList = :D0, @Ver = 1 ";
	  try
		 {
		  Qw_NM->Close();
		  Qw_NM->SQL->Clear();
		  Qw_NM->SQL->Add(vsSQLQw);
		  Qw_NM->Parameters->Items[0]->Value = Qw->Fields->Fields[0]->AsInteger;
		  Qw_NM->ExecSQL();
		  }
		  catch (Exception &exception)
				{
				 Application->ShowException(&exception);
				 if (MessageDlg("Имеются выставленные счета и заказы на данную номенклатуру в САП, "
								"либо у Вас нет прав на данную проверку. Всё равно удалить?",
								mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0) != mrYes)
					{return;}
				 }
	  ///
	  /*if (viId24NameStatus != 5448351) //кто произвёл удаление (если распоряжение не черновик) added by R.Perkatov 2014-04-16
		 {TryDelNE();}   */

	  TryDelNE();

	  Qw->Close();
	  Qw->SQL->Clear();
	  vsSQLQw = "UPDATE bm_RaspDetail "
				"   SET DateDel = GetDate(), IdDel = :D0 "
				" WHERE Idn = :D1;";
	  Qw->Close();
	  Qw->SQL->Clear();
	  Qw->SQL->Add(vsSQLQw);
	  Qw->Parameters->Items[0]->Value = PermisHdr.KeyUserStartProgramm;
	  Qw->Parameters->Items[1]->Value = QNEIdn->AsInteger;
	  Qw->ExecSQL();

	  QNE->Next();
	  if (QNE->Eof == true)
		 {QNE->Prior();}

	  viNEIdn = QNEIdn->AsInteger;
	  TmNETimer(Sender);
	  {
	   try{Opts.Clear();
	   locvalues[0] = Variant(viNEIdn);
	   QNE->Locate("Idn", locvalues, Opts);
	   }
	   catch(...)
			{};
	   };

	  vsSQLQw = " SELECT Idn FROM bm_RaspDetail WHERE PIdn=:D0 and IdIns=:D1 and fType=3 and DateDel is null";
	  Qw->Close();
	  Qw->SQL->Clear();
	  Qw->SQL->Add(vsSQLQw);
	  Qw->Parameters->Items[0]->Value = viIdnDetail;
	  Qw->Parameters->Items[1]->Value = PermisHdr.KeyUserStartProgramm;
	  Qw->Open();

	  if (Qw->RecordCount>0)
		  btGreateNE->Enabled = false;
	  else
		  btGreateNE->Enabled = true;

	  vsSQLQw = "SELECT SUM(CostWithNDS) FROM bm_RaspDetail WHERE PIdn=:D0 and IdIns=:D1 and fType=3 and DateDel is null;";
	  Qw->Close();
	  Qw->SQL->Clear();
	  Qw->SQL->Add(vsSQLQw);
	  Qw->Parameters->Items[0]->Value = viIdnDetail;
	  Qw->Parameters->Items[1]->Value = PermisHdr.KeyUserStartProgramm;
	  Qw->Open();
	  edCostWithNDS->Value    = Qw->Fields->Fields[0]->AsCurrency;
	  edCostWithoutNDS->Value = (edCostWithNDS->Value*100)/(100+StrToFloat(cbProcNDS->Text));
	  edCostNDS->Value        = edCostWithNDS->Value-edCostWithoutNDS->Value;
	  }
		 //}  //после раскомментирования удалить
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::btRefreshClick(TObject *Sender)
{
  TmNE->Enabled = false;
  TmNE->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::TmNETimer(TObject *Sender)
{
 TmNE->Enabled = false;
 if (QNE->Active) viNEIdn=QNEIdn->AsInteger; else viNEIdn=0;
 QNE->DisableControls();
 QNE->Close();
 QNE->Parameters->Items[0]->Value=viIdnDetail;
 QNE->Open();
 ListBlock();

 QNE->EnableControls();
 if (viNEIdn > 0)
 try
	{
	 Opts.Clear();
	 locvalues[0] = Variant(viNEIdn);
	 QNE->Locate("Idn", locvalues, Opts);
	 }
	 catch(...)
		  {};
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::btGreateNEClick(TObject *Sender)
{
  int i, j,/* viAdv, */viTmpResult;
  double vfCostOneWithNDS, vfCostOneWithoutNDS;
  AnsiString vsTmp;
  AnsiString vsTmpNumbNE;
//  bool fCanFalseButton;
  int viTmpK; //Коэффициент для эл.продуктов.

  if (cbTypeName->ItemIndex == -1)
	 {
	  ShowMessage("Сперва необходимо указать тип подписного индекса");
	  return;
	  }

//  fCanFalseButton=false;

  //Тип подписного индекса 0-годовой; 1-1п\г; 2-2п\г; 3-1 квартал;  4-2 квартал; 5-3 квартал; 6 - 4 квартал; 7-Ежемесячный.
/*  viAdv = 0;
  switch (cbfAdv->ItemIndex)
		 {
		  case  0: viAdv = 0;
				   break;
		  case  1: viAdv = 0;
				   break;
		  case  2: viAdv = 6;
				   break;
		  case  3: viAdv = 0;
				   break;
		  case  4: viAdv = 3;
				   break;
		  case  5: viAdv = 6;
				   break;
		  case  6: viAdv = 9;
				   break;
		  case  7: viAdv = 0;
				   break;
		  case  8: viAdv = 18;
				   break;
		  }
 */
  if (edNumbNE->Value <= 0)
	  return;
//  if (true /*QNE->RecordCount==0*/)// Проверка на наличие НЕ
	 {
	  vfCostOneWithNDS    = edCostWithNDS->Value/edNumbNE->Value;
	  vfCostOneWithoutNDS = edCostWithoutNDS->Value/edNumbNE->Value;

   //	if(MessageDlg("Вы хотите выбрать номенклатуры из ранее созданных?" ,mtConfirmation ,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
//	if(true)
   {

#ifdef  TFR
#undef  TFR
#undef  FR
#endif
#define TFR TFrSelectAdvPriseList
#define FR  FrSelectAdvPriseList

  StrID="0";
  FR=new TFR(Application);
	FR->viIdnProduce=0;
	FR->lbNameProduce->Caption=" Нет выбранных продуктов";
	if (edProduceIdn>0)
	   { FR->viIdnProduce=edProduceIdn;
		 FR->lbNameProduce->Caption=" Выбран продукт: "+edProduce->Text;
	   }

	FR->viSrc=viSrc ;
	FR->viYear=spYear->Value;
	FR->vcNDS=StrToCurr(cbProcNDS->Text);
	FR->vcNDSNew=FR->vcNDS;
//  if (false) /*(int)cbTypeName->Items->Objects[cbTypeName->ItemIndex]==2403131*///проверка на электронный продукт и спецобработку отключена)
//	{
//    viTmpK=edNumbNE->Value;
//  	FR->cxGridDBBandedTableView1->OptionsSelection->MultiSelect=false;//при электронном продукте позволяем выбирать только 1 номенклатуру.
//  }
//  else
	{
    viTmpK=1;
    FR->cxGridDBBandedTableView1->OptionsSelection->MultiSelect=true;
	}

   ////Обработка для режима "Замена ПИ"
   if (btGetChangePI->Visible) //Возможно стоит переделать на флаг или проверку по запросу, но видимость этой кнопки сама выступает флагом. Обдумать.
   {
	 FR->rbGetNE->Checked=true;
	 FR->RzPanel2->Visible=false;
	 FR->RzPanel6->Visible=true;
	 RzPanel7->Enabled=false;
   }
   else
   {
	 FR->rbGetNE->Checked=false;
	 FR->RzPanel2->Visible=true;
	 FR->RzPanel6->Visible=false;
   }

   ////
  FR->ShowModal();
  FR->WindowState=wsMinimized;
	  if (FR->ModalResult == mrOk)
		{
		 StrID=FR->StrID;
		 if(StrID=="")StrID="0";
		 vcNDSNew=FR->vcNDSNew;
				}
//	  if (FR->ModalResult == mrCancel) {fCanFalseButton=true; }
  delete (FR);

	 if (StrToCurr(cbProcNDS->Text)!=vcNDSNew)
	  { 	switch (vcNDSNew)
			   {
			  case	0: cbProcNDS->ItemIndex=0;break;
			  case	10: cbProcNDS->ItemIndex=1;break;
			  case	18: cbProcNDS->ItemIndex=2;break;
			   }
		  ShowMessage("Значение НДС изменилось в соответствии с НДС выбранных номенклатур.");
	  }

		  vsSQLQw=
		" INSERT INTO bm_RaspDetail"
				" ( PIdn" //
				", idRasp" //
				", NameRaspDetail" //
				", CostWithNDS"
				", CostWithoutNDS"
				", CostNDS"
				", fType"   //
				", DateIns"
				", IdIns"
				", NumbNE"
				", Year"
				", Id32NameUnit"
				", Id32NameItemType"
				", ProcNDS"
				", MergedCount"
				", ItemId"
				", IdnAxapta"
				", NameAxapta"
				", ItemIdAxapta)"
		" SELECT  :D0"
				",:D1" //idRasp
				",ItemName" //NameRaspDetail
				",:D2" //viCostOneWithNDS
				",:D3"//viCostOneWithoutNDS
				",:D4"//CostNDS
				",3" //fType
				",GetDate()" //DateIns
				",:D5 "  //IdIns
				",Number"  //NumbNE
				",iYear"  //Year
				",:D6"  //Id32NameUnit
				",:D7" //Id32NameItemType
				",:D8"//ProcNDS
				",:D9 "  //MergedCount
				",ItemId"
				",Idn"
				",ItemName"
				",ItemId"
				" FROM ax_Nomenclatura WHERE Idn IN ("+StrID+");";
			Qw->Close(); Qw->SQL->Clear(); Qw->SQL->Add(vsSQLQw);
			Qw->Parameters->Items[0]->Value=viIdnDetail;
			Qw->Parameters->Items[1]->Value=viRaspIdn;
			Qw->Parameters->Items[2]->Value=vfCostOneWithNDS*viTmpK;
			Qw->Parameters->Items[3]->Value=vfCostOneWithoutNDS*viTmpK;
			Qw->Parameters->Items[4]->Value=vfCostOneWithNDS*viTmpK-vfCostOneWithoutNDS*viTmpK;
			Qw->Parameters->Items[5]->Value=PermisHdr.KeyUserStartProgramm;    //ID пользователя
			if ((cbId32NameUnit->ItemIndex==-1)) {viTmpResult=0;} else {viTmpResult=(int)cbId32NameUnit->Items->Objects[cbId32NameUnit->ItemIndex]; }
			Qw->Parameters->Items[6]->Value=viTmpResult;
			if ((cbId32NameItemType->ItemIndex==-1)) {viTmpResult=0;} else {viTmpResult=(int)cbId32NameItemType->Items->Objects[cbId32NameItemType->ItemIndex]; }
			Qw->Parameters->Items[7]->Value=viTmpResult;
			Qw->Parameters->Items[8]->Value=StrToCurr(cbProcNDS->Text);
			Qw->Parameters->Items[9]->Value=1*viTmpK;
			Qw->ExecSQL();
   }
/*  else
  {

	  if (Trim(cbTypeName->Text)=="Сборник")
		 { //Формируем NE сборник
	   for(i=1, j=edNumbNE->Value-1;i<=j;i++)
		  {vsSQLQw=
		" INSERT INTO bm_RaspDetail"
				" ( PIdn" //
				", idRasp" //
				", NameRaspDetail" //
				", CostWithNDS"
				", CostWithoutNDS"
				", CostNDS"
				", fType"   //
				", DateIns"
				", IdIns"
				", NumbNE"
				", Year"
				", Id32NameUnit"
				", Id32NameItemType"
				", ProcNDS"
				", MergedCount)"
		" VALUES (:D0"
				",:D1" //idRasp
				",:D2" //NameRaspDetail
				",:D3" //viCostOneWithNDS
				",:D4"//viCostOneWithoutNDS
				",:D5"//CostNDS
				",3" //fType
				",GetDate()" //DateIns
				",:D6 "  //IdIns
				",:D7"  //NumbNE
				",:D8"  //Year
				",:D9"  //Id32NameUnit
				",:D10" //Id32NameItemType
				",:D11"//ProcNDS
				",:D12);";//MergedCount
		Qw->Close(); Qw->SQL->Clear(); Qw->SQL->Add(vsSQLQw);
		Qw->Parameters->Items[0]->Value=viIdnDetail;
		Qw->Parameters->Items[1]->Value=viRaspIdn;
		vsTmpNumbNE=IntToStr(viAdv+i); if(vsTmpNumbNE.Length()==1) vsTmpNumbNE="0"+vsTmpNumbNE;
		if(edProduce->Text!="") vsTmp=edProduce->Text+" ";
		else if (Trim(cbTypeName->Text)!="") vsTmp=cbTypeName->Text;
			 else vsTmp="Новая номенклатурная еденица ";
		vsTmp="Обновление, "+vsTmp+" №"+vsTmpNumbNE+" "+IntToStr(spYear->Value)+"г. ";
		Qw->Parameters->Items[2]->Value=vsTmp;
		Qw->Parameters->Items[3]->Value=vfCostOneWithNDS;
		Qw->Parameters->Items[4]->Value=vfCostOneWithoutNDS;
		Qw->Parameters->Items[5]->Value=vfCostOneWithNDS-vfCostOneWithoutNDS;
		Qw->Parameters->Items[6]->Value=PermisHdr.KeyUserStartProgramm;    //ID пользователя
		Qw->Parameters->Items[7]->Value=viAdv+i;
		Qw->Parameters->Items[8]->Value=spYear->Value;
		if ((cbId32NameUnit->ItemIndex==-1)) {viTmpResult=0;} else {viTmpResult=(int)cbId32NameUnit->Items->Objects[cbId32NameUnit->ItemIndex]; }
		Qw->Parameters->Items[9]->Value=viTmpResult;
		if ((cbId32NameItemType->ItemIndex==-1)) {viTmpResult=0;} else {viTmpResult=(int)cbId32NameItemType->Items->Objects[cbId32NameItemType->ItemIndex]; }
		Qw->Parameters->Items[10]->Value=viTmpResult;
		Qw->Parameters->Items[11]->Value=StrToCurr(cbProcNDS->Text);
		Qw->Parameters->Items[12]->Value=1;
		Qw->ExecSQL();
		}
		//Дописываем к сборнику ТОМ
		vsSQLQw=" INSERT INTO bm_RaspDetail"
				" ( PIdn" //
				", idRasp" //
				", NameRaspDetail" //
				", CostWithNDS"
				", CostWithoutNDS"
				", CostNDS"
				", fType"   //
				", DateIns"
				", IdIns"
				", NumbNE"
				", Year"
				", Id32NameUnit"
				", Id32NameItemType"
				", ProcNDS"
				", MergedCount)"
		" VALUES (:D0"
				",:D1" //idRasp
				",:D2" //NameRaspDetail
				",:D3" //viCostOneWithNDS
				",:D4"//viCostOneWithoutNDS
				",:D5"//CostNDS
				",3" //fType
				",GetDate()" //DateIns
				",:D6 "  //IdIns
				",:D7"  //NumbNE
				",:D8"  //Year
				",:D9"  //Id32NameUnit
				",:D10" //Id32NameItemType
				",:D11"//ProcNDS
				",:D12);";//MergedCount
		Qw->Close(); Qw->SQL->Clear(); Qw->SQL->Add(vsSQLQw);
		Qw->Parameters->Items[0]->Value=viIdnDetail;
		Qw->Parameters->Items[1]->Value=viRaspIdn;
		if(edProduce->Text!="") vsTmp=edProduce->Text+" ";
		else if (Trim(cbTypeName->Text)!="") vsTmp=cbTypeName->Text;
			 else vsTmp="Новая номенклатурная еденица ";
		vsTmp="Том, "+vsTmp+" "+IntToStr(spYear->Value)+"г. ";
		Qw->Parameters->Items[2]->Value=vsTmp;
		Qw->Parameters->Items[3]->Value=vfCostOneWithNDS;
		Qw->Parameters->Items[4]->Value=vfCostOneWithoutNDS;
		Qw->Parameters->Items[5]->Value=vfCostOneWithNDS-vfCostOneWithoutNDS;
		Qw->Parameters->Items[6]->Value=PermisHdr.KeyUserStartProgramm;    //ID пользователя
		Qw->Parameters->Items[7]->Value=viAdv+i;
		Qw->Parameters->Items[8]->Value=spYear->Value;
		if ((cbId32NameUnit->ItemIndex==-1)) {viTmpResult=0;} else {viTmpResult=(int)cbId32NameUnit->Items->Objects[cbId32NameUnit->ItemIndex]; }
		Qw->Parameters->Items[9]->Value=viTmpResult;
		if ((cbId32NameItemType->ItemIndex==-1)) {viTmpResult=0;} else {viTmpResult=(int)cbId32NameItemType->Items->Objects[cbId32NameItemType->ItemIndex]; }
		Qw->Parameters->Items[10]->Value=viTmpResult;
		Qw->Parameters->Items[11]->Value=StrToCurr(cbProcNDS->Text);
		Qw->Parameters->Items[12]->Value=1;
		Qw->ExecSQL();


		 }
	   else
		 {  ///формируем NЕ не сборник

	 if (false)// проверка на электронные продукты отключена (int)cbTypeName->Items->Objects[cbTypeName->ItemIndex]==2403131)         //Если электронные продукты, то отображаем одно НЕ, с ценой за общее количество дней.
	 { ShowMessage("Внимание!!! \n На ЭЛЕКТРОННЫЙ ПРОДУКТ создается ОДНА номенклатурная единица С ЦЕНОЙ ЗА ОБЩЕЕ КОЛИЧЕСТВО ДНЕЙ подключений.");
		vsSQLQw=
		" INSERT INTO bm_RaspDetail"
				" ( PIdn" //
				", idRasp" //
				", NameRaspDetail" //
				", CostWithNDS"
				", CostWithoutNDS"
				", CostNDS"
				", fType"   //
				", DateIns"
				", IdIns"
				", NumbNE"
				", Year"
				", Id32NameUnit"
				", Id32NameItemType"
				", ProcNDS"
				", MergedCount)"
		" VALUES (:D0"
				",:D1" //idRasp
				",:D2" //NameRaspDetail
				",:D3" //viCostOneWithNDS
				",:D4"//viCostOneWithoutNDS
				",:D5"//CostNDS
				",3" //fType
				",GetDate()" //DateIns
				",:D6 "  //IdIns
				",:D7"  //NumbNE
				",:D8"  //Year
				",:D9"  //Id32NameUnit
				",:D10" //Id32NameItemType
				",:D11"//ProcNDS
				",:D12);";//MergedCount
			Qw->Close(); Qw->SQL->Clear(); Qw->SQL->Add(vsSQLQw);
			Qw->Parameters->Items[0]->Value=viIdnDetail;
			Qw->Parameters->Items[1]->Value=viRaspIdn;
			vsTmpNumbNE=IntToStr(viAdv+i); if(vsTmpNumbNE.Length()==1) vsTmpNumbNE="00"+vsTmpNumbNE;  if(vsTmpNumbNE.Length()==2) vsTmpNumbNE="0"+vsTmpNumbNE;
			if(edProduce->Text!="") vsTmp=edProduce->Text+" ";
			else if (Trim(cbTypeName->Text)!="") vsTmp=cbTypeName->Text;
				 else vsTmp="Новая номенклатурная еденица ";
			vsTmp=vsTmp+" "+IntToStr(spYear->Value)+"г. ";
			Qw->Parameters->Items[2]->Value=vsTmp;
			Qw->Parameters->Items[3]->Value=vfCostOneWithNDS*edNumbNE->Value;
			Qw->Parameters->Items[4]->Value=vfCostOneWithoutNDS*edNumbNE->Value;
			Qw->Parameters->Items[5]->Value=(vfCostOneWithNDS-vfCostOneWithoutNDS)*edNumbNE->Value;
			Qw->Parameters->Items[6]->Value=PermisHdr.KeyUserStartProgramm;    //ID пользователя
			Qw->Parameters->Items[7]->Value.Clear();
			Qw->Parameters->Items[8]->Value=spYear->Value;
			if ((cbId32NameUnit->ItemIndex==-1)) {viTmpResult=0;} else {viTmpResult=(int)cbId32NameUnit->Items->Objects[cbId32NameUnit->ItemIndex]; }
			Qw->Parameters->Items[9]->Value=viTmpResult;
			if ((cbId32NameItemType->ItemIndex==-1)) {viTmpResult=0;} else {viTmpResult=(int)cbId32NameItemType->Items->Objects[cbId32NameItemType->ItemIndex]; }
			Qw->Parameters->Items[10]->Value=viTmpResult;
			Qw->Parameters->Items[11]->Value=StrToCurr(cbProcNDS->Text);
			Qw->Parameters->Items[12]->Value=edNumbNE->Value;
			Qw->ExecSQL();
	 }
	 else
	 {
	   for(i=1, j=edNumbNE->Value;i<=j;i++)
		  {vsSQLQw=
		" INSERT INTO bm_RaspDetail"
				" ( PIdn" //
				", idRasp" //
				", NameRaspDetail" //
				", CostWithNDS"
				", CostWithoutNDS"
				", CostNDS"
				", fType"   //
				", DateIns"
				", IdIns"
				", NumbNE"
				", Year"
				", Id32NameUnit"
				", Id32NameItemType"
				", ProcNDS"
				", MergedCount)"
		" VALUES (:D0"
				",:D1" //idRasp
				",:D2" //NameRaspDetail
				",:D3" //viCostOneWithNDS
				",:D4"//viCostOneWithoutNDS
				",:D5"//CostNDS
				",3" //fType
				",GetDate()" //DateIns
				",:D6 "  //IdIns
				",:D7"  //NumbNE
				",:D8"  //Year
				",:D9"  //Id32NameUnit
				",:D10" //Id32NameItemType
				",:D11"//ProcNDS
				",:D12);";//MergedCount
			Qw->Close(); Qw->SQL->Clear(); Qw->SQL->Add(vsSQLQw);
			Qw->Parameters->Items[0]->Value=viIdnDetail;
			Qw->Parameters->Items[1]->Value=viRaspIdn;
			vsTmpNumbNE=IntToStr(viAdv+i); if(vsTmpNumbNE.Length()==1) vsTmpNumbNE="00"+vsTmpNumbNE;  if(vsTmpNumbNE.Length()==2) vsTmpNumbNE="0"+vsTmpNumbNE;
			if(edProduce->Text!="") vsTmp=edProduce->Text+" ";
			else if (Trim(cbTypeName->Text)!="") vsTmp=cbTypeName->Text;
				 else vsTmp="Новая номенклатурная еденица ";
			vsTmp=vsTmp+" №"+vsTmpNumbNE+" "+IntToStr(spYear->Value)+"г. ";
			Qw->Parameters->Items[2]->Value=vsTmp;
			Qw->Parameters->Items[3]->Value=vfCostOneWithNDS;
			Qw->Parameters->Items[4]->Value=vfCostOneWithoutNDS;
			Qw->Parameters->Items[5]->Value=vfCostOneWithNDS-vfCostOneWithoutNDS;
			Qw->Parameters->Items[6]->Value=PermisHdr.KeyUserStartProgramm;    //ID пользователя
			Qw->Parameters->Items[7]->Value=viAdv+i;
			Qw->Parameters->Items[8]->Value=spYear->Value;
			if ((cbId32NameUnit->ItemIndex==-1)) {viTmpResult=0;} else {viTmpResult=(int)cbId32NameUnit->Items->Objects[cbId32NameUnit->ItemIndex]; }
			Qw->Parameters->Items[9]->Value=viTmpResult;
			if ((cbId32NameItemType->ItemIndex==-1)) {viTmpResult=0;} else {viTmpResult=(int)cbId32NameItemType->Items->Objects[cbId32NameItemType->ItemIndex]; }
			Qw->Parameters->Items[10]->Value=viTmpResult;
			Qw->Parameters->Items[11]->Value=StrToCurr(cbProcNDS->Text);
			Qw->Parameters->Items[12]->Value=1;
			Qw->ExecSQL();
		  }
	 }
		 
		  }//эл.Продукт
	   }//выборка из прейскуранта */
	// btGreateNE->Enabled=fCanFalseButton;
	 TmNE->Enabled=true;

	 ///
    	 vsSQLQw="SELECT SUM(CostWithNDS) FROM bm_RaspDetail WHERE  PIdn=:D0 and IdIns=:D1 and fType=3 and DateDel is null;";
				Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
				Qw->Parameters->Items[0]->Value= viIdnDetail;
				Qw->Parameters->Items[1]->Value= PermisHdr.KeyUserStartProgramm;
				Qw->Open();
				edCostWithNDS->Value=Qw->Fields->Fields[0]->AsCurrency;
				edCostWithoutNDS->Value=(edCostWithNDS->Value*100)/(100.0+StrToFloat(cbProcNDS->Text)) ;
				edCostNDS->Value=edCostWithNDS->Value-edCostWithoutNDS->Value;
	 ///
	 }//Проверка наличия НЕ
//  else ShowMessage("Необходимо, чтобы не было созданных номенклатурных единиц.");
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRaspDetail::btCountCostWithNDSClick(TObject *Sender)
{
	 int viTmpCount, viAdv, viTmpResult;
  Double vfCostOneWithNDS, vfCostOneWithoutNDS;

  if (cbTypeName->ItemIndex == -1)
	 {
	  ShowMessage("Сперва необходимо указать тип подписного индекса");
	  return;
	  }

//  if (false) // проверка на электронные продукты отключена (int)cbTypeName->Items->Objects[cbTypeName->ItemIndex]==2403131)
//	 {viTmpCount = edNumbNE->Value;}
//  else
	  {
	   vsSQLQw = " SELECT Idn FROM  bm_RaspDetail WHERE PIdn=:D0  and fType=3 and DateDel is null";
	   Qw->Close();
	   Qw->SQL->Clear();
	   Qw->SQL->Add(vsSQLQw);
	   Qw->Parameters->Items[0]->Value = viIdnDetail;
	   Qw->Open();
	   viTmpCount = Qw->RecordCount;
	   }

  vfCostOneWithNDS = 0;
  vfCostOneWithoutNDS = 0;

  if (viTmpCount > 0)
	 {
	  //Если заведена цена за 1 номенклатуру считаем от нее. Иначе пересчет пойдет от общей суммы.
	  if ((edCostNEWithNDS->Value != 0) && (edCostNEWithNDS->Value != edCostWithNDS->Value))
		 {
		  edCostWithNDS->Value    = edCostNEWithNDS->Value*viTmpCount;
		  edCostWithoutNDS->Value = edCostNEWithoutNDS->Value*viTmpCount;
		  vfCostOneWithNDS        = edCostNEWithNDS->Value;
		  vfCostOneWithoutNDS     = edCostNEWithoutNDS->Value;
		  }
	  else
		  {
		   vfCostOneWithNDS    = edCostWithNDS->Value/viTmpCount;
		   vfCostOneWithoutNDS = edCostWithoutNDS->Value/viTmpCount;
		   }
  edCostNDS->Value = edCostWithNDS->Value-edCostWithoutNDS->Value;

  if (edfAdvMIN->Value > 0)
	 {
	   /*
	   switch(cbfAdv->ItemIndex)
			 {
			  case 0: viAdv = 12;
					  break;
			  case 1: viAdv = 6;
					  break;
			  case 2: viAdv = 6;
					  break;
	  case 3:
		viAdv=3;
		break;
	  case 4:
		viAdv=3;
		break;
	  case 5:
		viAdv=3;
		break;
	  case 6:
		viAdv=3;
		break;
	  case 7:
		viAdv=1;
		break;
	  case 8:
		viAdv=18;
		break;
	  }          */
	 //cbfAdvChange(Sender);

	  // switch исключён 20.01.2014 по причине того, что в нём жёстко заданы значения индекса списка периода подписки, что
	  // противоречит гибкости работы со списком периодов при добавлении новых периодов - changed by R.Perkatov 2014-01-20
	  CyclQuer->Active = true;
	  CyclQuer->SQL->Clear();
	  CyclQuer->SQL->Add("SELECT Description, CycleMonth FROM dbo.ProduceBlockCycle WHERE Description = '" + cbfAdv->Text + "'");
	  CyclQuer->Open();
				viAdv = CyclQuerCycleMonth->Value;
	  edfAdvMIN->Text = CyclQuerCycleMonth->Value;
	  CyclQuer->Active = false;

	   //viAdv=edNumbNE->Value;
	   edCostMINWithoutNDS->Value=edCostWithoutNDS->Value/(viAdv/edfAdvMIN->Value);
	   edCostMINWithNDS->Value=edCostWithNDS->Value/(viAdv/edfAdvMIN->Value);
	  }

 //При пересчете цены  изменения значений цен сразу заносится в БД для номенклатур и, в части касающейся цен, подписных индексов.
 vsSQLQw=       " DECLARE @Id32NameUnit int,@Id32NameItemType int;  "
				" SET @Id32NameUnit=:D0; SET @Id32NameItemType=:D1; "
				"UPDATE bm_RaspDetail SET "
				"  CostWithNDS=:D2"
				", CostWithoutNDS=:D3"
				", CostNDS=:D4"
				", Discount=:D5"
				", ProcDiscount=:D6"
				", DateMod=GetDate()"
				", IdMod=:D7";
			   if ((cbId32NameUnit->ItemIndex!=-1))vsSQLQw=vsSQLQw+	", Id32NameUnit=@Id32NameUnit";
			   if ((cbId32NameItemType->ItemIndex!=-1))vsSQLQw=vsSQLQw+	", Id32NameItemType=@Id32NameItemType";
			   vsSQLQw=vsSQLQw+	" WHERE PIdn=:D8 and IdIns=:D9 and fType=3 and DateDel is null; ";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);

// if(false) // проверка на электронные продукты отключена (int)cbTypeName->Items->Objects[cbTypeName->ItemIndex]==2403131)
 //{
 //Qw->Parameters->Items[2]->Value= edCostWithNDS->Value;
 //Qw->Parameters->Items[3]->Value= edCostWithoutNDS->Value;
 //Qw->Parameters->Items[4]->Value= edCostWithNDS->Value-edCostWithoutNDS->Value; //Цена НДС
 //}
 //else
 {
 Qw->Parameters->Items[2]->Value= vfCostOneWithNDS;
 Qw->Parameters->Items[3]->Value= vfCostOneWithoutNDS;
 Qw->Parameters->Items[4]->Value= vfCostOneWithNDS-vfCostOneWithoutNDS; //Цена НДС
 }
 //Qw->Parameters->Items[3]->Value= edCostNEWithNDS->Value-(edCostNEWithNDS->Value*(100-edProcDiscount->Value)/100);//edDiscount->Value;
 Qw->Parameters->Items[5]->Value=((edCostNEWithNDS->Value/(100-edProcDiscount->Value)))*edProcDiscount->Value;//*15;
 Qw->Parameters->Items[6]->Value= edProcDiscount->Value;
 Qw->Parameters->Items[7]->Value= PermisHdr.KeyUserStartProgramm;


 if ((cbId32NameUnit->ItemIndex==-1)) {viTmpResult=0;} else {viTmpResult=(int)cbId32NameUnit->Items->Objects[cbId32NameUnit->ItemIndex]; }
 Qw->Parameters->Items[0]->Value=viTmpResult;
 if ((cbId32NameItemType->ItemIndex==-1)) {viTmpResult=0;} else {viTmpResult=(int)cbId32NameItemType->Items->Objects[cbId32NameItemType->ItemIndex]; }
 Qw->Parameters->Items[1]->Value=viTmpResult;

 Qw->Parameters->Items[8]->Value= viIdnDetail;
 Qw->Parameters->Items[9]->Value= PermisHdr.KeyUserStartProgramm;


 Qw->ExecSQL(); //заносим данные о номенклатурных еженицах
 vsSQLQw="SELECT  SUM(Discount) FROM bm_RaspDetail WHERE  PIdn=:D0 and IdIns=:D1 and fType=3 and DateDel is null;";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value= viIdnDetail;
 Qw->Parameters->Items[1]->Value= PermisHdr.KeyUserStartProgramm;
 Qw->Open();
 edDiscount->Value=Qw->Fields->Fields[0]->AsCurrency;
 Qw->Close();

 vsSQLQw="UPDATE bm_RaspDetail SET 	"
				"  CostWithNDS=:D0	"
				", CostWithoutNDS=:D1"
				", CostNDS=:D2		"
				", ProcNDS=:D3		"
				", Discount=:D4		"
				", ProcDiscount=:D5	"
				", DateMod=GetDate()"
				", IdMod=:D6		"
				" WHERE Idn=:D7 ; 	";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value= edCostWithNDS->Value;
 Qw->Parameters->Items[1]->Value= edCostWithoutNDS->Value;
 Qw->Parameters->Items[2]->Value= edCostWithNDS->Value-edCostWithoutNDS->Value; //Цена НДС
 Qw->Parameters->Items[3]->Value= StrToCurr(cbProcNDS->Text);
 Qw->Parameters->Items[4]->Value= edDiscount->Value;
 Qw->Parameters->Items[5]->Value= edProcDiscount->Value;
 Qw->Parameters->Items[6]->Value= PermisHdr.KeyUserStartProgramm;
 Qw->Parameters->Items[7]->Value= viIdnDetail;
 Qw->ExecSQL();//Заносим данные о ПИ
 Qw->Close();
	  }
 TmNE->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRaspDetail::edNumbNEChange(TObject *Sender)
{
  if (edNumbNE->Value > 0)
	   btGreateNE->Enabled = true;
  else btGreateNE->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::cxGridTableViewEmplUserEditKeyDown(
	  TcxCustomGridTableView *Sender, TcxCustomGridTableItem *AItem,
	  TcxCustomEdit *AEdit, WORD &Key, TShiftState Shift)
{
  if(Key==13 )//Enter
  { if(QNE->State==dsEdit || QNE->State==dsInsert)QNE->Post();  }
}
//---------------------------------------------------------------------------




void __fastcall TFrEditRaspDetail::QNEAfterInsert(TDataSet *DataSet)
{
  btGreateNE->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::btCreateNamePIClick(TObject *Sender)
{ AnsiString vscbfAdv, vsspYear,vsedProduce, vscbTypeName;
if(edAlterName->Text!="Новый подписной индекс")
{if(MessageDlg("Вы уверены, что хотите сформировать имя автоматически?\n"
               "Это действие сотрет текущие имя!" ,mtWarning,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrNo){return;}}
 if ((Trim(cbTypeName->Text)=="Сборник")||(Trim(cbTypeName->Text)=="Обновления")) vscbTypeName=cbTypeName->Text+", "; else vscbTypeName="";
if(edProduce->Text!="") vsedProduce=edProduce->Text+", "; else vsedProduce="" ;
if(cbfAdv->Text!="") vscbfAdv=cbfAdv->Text+", "; else vscbfAdv="" ;
 vsspYear=IntToStr(spYear->Value)+"г.";
edAlterName->Text=vscbTypeName+vsedProduce+vscbfAdv+vsspYear;

}
//---------------------------------------------------------------------------



void __fastcall TFrEditRaspDetail::edCostNEWithoutNDSChange(TObject *Sender)
{
  if(chbEditCallResult->Checked)
  {
	  if(edCostNEWithoutNDS->Text != "" &&
       edCostNEWithoutNDS->Focused())
      edCostNEWithNDS->Value =
          (edCostNEWithoutNDS->Value * (100.0 + StrToFloat(cbProcNDS->Text)))
                      / 100.0;
	}
  CheckNDS();
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRaspDetail::edCostNEWithNDSChange(TObject *Sender)
{
 if(chbEditCallResult->Checked)
	{
	   if((edCostNEWithNDS->Text!="")&&(edCostNEWithNDS->Focused()))
		  {edCostNEWithoutNDS->Value=(edCostNEWithNDS->Value*100)/(100.0+StrToFloat(cbProcNDS->Text)) ;}
	}
	CheckNDS();
}
//---------------------------------------------------------------------------


void __fastcall TFrEditRaspDetail::btCountCostProcDiscountClick(TObject *Sender)
{
  float vfTmpDiscount;

  if(chbEditCallResult->Checked)
	{
	   vfNewValueProcDiscount=edProcDiscount->Value;
	   vfTmpDiscount=edCostNEWithNDS->Value;
	   vfTmpDiscount=vfTmpDiscount*100/(100-vfOldValueProcDiscount);
	   edCostNEWithNDS->Value=vfTmpDiscount*(100-(vfNewValueProcDiscount))/100;
	   edCostNEWithoutNDS->Value=(edCostNEWithNDS->Value*100)/(100.0+StrToFloat(cbProcNDS->Text)) ;
	   //edCostNEWithNDS->Value=(edCostNEWithNDS->Value*(100-edProcDiscount->Value)/100);
	   edDiscount->Value=vfTmpDiscount-edCostNEWithNDS->Value;
	   vfOldValueProcDiscount=vfNewValueProcDiscount;
	}
  CheckNDS();

  /*
  float a = 0, b = 0, c = 0;
		a = edCostWithNDS->Value;
		b = edProcDiscount->Value;
		c = (a/100)*b;
		edDiscount->Value = c;      */
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::FormActivate(TObject *Sender)
{
  // Определяем состав ПИ из базы
//  dmRaspDetail->OpenPI();
//  int i = cxCheckComboBoxPI->Properties->Items->Count;
//  if(cxCheckComboBoxPI->Properties->Items == NULL)
//    cxCheckComboBoxPI->Properties->Items = new TcxCheckComboBoxItems(NULL, NULL);
//  cxCheckComboBoxPI->Properties = new TcxCheckComboBoxProperties(NULL);
//  cxCheckComboBoxPI->Properties->OnChange = cxCheckComboBoxPIPropertiesChange;
//  cxCheckComboBoxPI->Properties->Items->BeginUpdate();
//  cxCheckComboBoxPI->RepositoryItem->Properties->
//  CheckComboBoxPI->Properties->Items->Clear();
//  dmRaspDetail->TmpQuery->First();
//  int idx = 1;
//  while(dmRaspDetail->TmpQuery->Eof != true)
//  {
//    TcxCheckComboBoxItem * itm = CheckComboBoxPI->Properties->Items->AddCheckItem(dm->TmpQueryValue("iText"));
//    itm->Description =  FrEditRaspDetail->TmpQueryValue("iText");
//    itm->Tag = idx++;
//    dmRaspDetail->TmpQuery->Next();
//  }

  //Заполняем не в конструкторе, так как после создания формы при вызове и до
  // ShowModal передаем начальные(входные) параметры формы.

  edAddProduce->Visible=false;
  // if ((viVidRasp==4742152)||(viVidRasp==4742153))
  // {edAddProduce->Visible=true;} else {edAddProduce->Visible=false;}
  if(MainForm->flEditCallResult)
    chbEditCallResult->Visible = true;
  else
  chbEditCallResult->Visible = false;

  dmRaspDetail->QRaspDetail->Close();
  dmRaspDetail->QRaspDetail->Parameters->Items[0]->Value = viRaspIdn;
  dmRaspDetail->QRaspDetail->Parameters->Items[1]->Value = viIdnDetail;
  dmRaspDetail->QRaspDetail->Open();
  fOkButton=false;

  edProduceIdn=0;

  QLookComboId32NameUnit->Close();
  QLookComboId32NameUnit->Open();
  cbId32NameUnit->Clear();
  while(QLookComboId32NameUnit->Eof == false)
  {
    cbId32NameUnit->AddObject(
               QLookComboId32NameUnit->Fields->Fields[1]->AsString,
              (TObject*)QLookComboId32NameUnit->Fields->Fields[0]->AsInteger);
    QLookComboId32NameUnit->Next();
  }
  cbId32NameUnit->ItemIndex=-1;
  /*cbId32NameUnit->Items->IndexOf("Ед"); */
  QLookComboId32NameItemType->Close();
  QLookComboId32NameItemType->Open();
  cbId32NameItemType->Clear();
  while(QLookComboId32NameItemType->Eof == false)
  {
    cbId32NameItemType->AddObject(
              QLookComboId32NameItemType->Fields->Fields[1]->AsString,
             (TObject*)QLookComboId32NameItemType->Fields->Fields[0]->AsInteger);
             QLookComboId32NameItemType->Next();
  }
  cbId32NameItemType->ItemIndex = -1;
  /*cbId32NameItemType->Items->IndexOf("Товар");*/

/*  if(!btGetChangePI->Visible)
  {
	 meComplect->Caption="";
	 if(QRaspDetailPIdn->AsInteger>0)
		{Qw->Close();
		 Qw->SQL->Clear();
		 vsSQLQw= "SELECT NameRaspDetail FROM bm_RaspDetail WHERE Idn="+QRaspDetailPIdn->AsString+";";
		 Qw->SQL->Add(vsSQLQw);
		 Qw->Open();
		 meComplect->Caption=Qw->Fields->Fields[0]->AsString;
		}
  }   */
  meIndex->Text=RaspDetailValue("NameRaspDetail");
  edAlterName->Text=RaspDetailValue("AlterName");
//  meIndex->Text=FrEditRaspDetail->QRaspDetailNameRaspDetail->AsString;
//  edAlterName->Text=FrEditRaspDetail->QRaspDetailAlterName->AsString;
  edNoteName->Text=RaspDetailValue("NoteName");
  if (edNoteName->Text.Length() > 80)   //added by R.Perkatov 2014-04-09
	 {RzSizePanel1->Height = 100;}      //added by R.Perkatov 2014-04-09

  if (Trim(edAlterName->Text)=="")
	 {edAlterName->Text=Trim(meIndex->Text);edNoteName->Text="Разделите наименование подписного индекса на 'Название' и 'Примечание'";  }

  dtDateJobMIN->Date = RaspDetail("DateJobMIN")->AsDateTime;
  if (dtDateJobMIN->Date.FormatString("yyyy") == "1899")
	  dtDateJobMIN->Text = "";

  dtDateJobMAX->Date = RaspDetail("DateJobMAX")->AsDateTime;
  if (dtDateJobMAX->Date.FormatString("yyyy") == "1899")
	  dtDateJobMAX->Text = "";

/*  dtDateEventStart->Date = QRaspDetailDateEventStart->AsDateTime;
  if (dtDateEventStart->Date.FormatString("yyyy") == "1899")
	  dtDateEventStart->Text = "";

  dtDateEventEnd->Date = QRaspDetailDateEventEnd->AsDateTime;
  if (dtDateEventEnd->Date.FormatString("yyyy") == "1899")
	  dtDateEventEnd->Text = "";  */

//  CheckComboBox1 QRaspDetailCompositionOfPI

 if(RaspDetail("Id24TypeProduceIndex")->AsInteger>0){try{cbTypeName->ItemIndex=cbTypeName->Items->IndexOfObject((TObject*)RaspDetail("Id24TypeProduceIndex")->AsInteger);}catch(...){};}
 if(cbTypeName->Text == "Сборник")
   {
	chbAvtoCost->Checked = false;
	chbAvtoCost->Enabled = false;
	}
	else
		{
		 chbAvtoCost->Checked = true;
		 chbAvtoCost->Enabled = true;
		 }

 if((RaspDetailValue("fAdv") != "")&&(RaspDetail("fAdv")->AsInteger> - 1))
   {cbfAdv->ItemIndex=RaspDetail("fAdv")->AsInteger;}
 edfAdvMIN->Value=RaspDetail("fAdvMIN")->AsInteger;
 spYear->Value=RaspDetail("Year")->AsInteger;

 Qw->Close();
 Qw->SQL->Clear();
 vsSQLQw=" SELECT  A.idn, B.iText"
		" from all_AdvProduceClass A"
		" LEFT JOIN spl_LbText512 B ON B.Idn=id512Name"
		" where A.idn="+IntToStr(RaspDetail("idAdvProduceClass")->AsInteger);
 Qw->SQL->Add(vsSQLQw);
 Qw->Open();
 edProduceIdn=Qw->Fields->Fields[0]->AsInteger;
 edProduce->Text=Qw->Fields->Fields[1]->AsString;

 switch (RaspDetail("ProcNDS")->AsCurrency)
		{
		 case	 0: cbProcNDS->ItemIndex = 0;   break;
		 case	10: cbProcNDS->ItemIndex = 1;   break;
		 case	18: cbProcNDS->ItemIndex = 2;   break;
         }


   edCostNDS->Value           = RaspDetail("CostNDS")->AsCurrency;
   edCostWithNDS->Value       = RaspDetail("CostWithNDS")->AsCurrency;
   edCostWithoutNDS->Value    = RaspDetail("CostWithoutNDS")->AsCurrency;
   edNumbNE->Value            = RaspDetail("NumbNE")->AsInteger;
   edProcDiscount->Value      = RaspDetail("ProcDiscount")->AsCurrency;
   edDiscount->Value          = RaspDetail("Discount")->AsCurrency;
   edCostMINWithNDS->Value    = RaspDetail("CostMINWithNDS")->AsCurrency;
   edCostMINWithoutNDS->Value = RaspDetail("CostMINWithoutNDS")->AsCurrency;
   edCostBaseWithNDS->Text    = "0,0000р.";
   edCostBudjetWithNDS->Text  = "0,0000р.";
   if (RaspDetail("CostBaseWithNDS")->AsCurrency>0)
	   edCostBaseWithNDS->Value=RaspDetail("CostBaseWithNDS")->AsCurrency;
   if (RaspDetail("CostBudjetWithNDS")->AsCurrency>0)
	   edCostBudjetWithNDS->Value=RaspDetail("CostBudjetWithNDS")->AsCurrency;


 TmNE->Enabled=true;
   vsSQLQw=" SELECT Idn,CostWithoutNDS,CostWithNDS FROM  bm_RaspDetail WHERE PIdn=:D0  and fType=3 and DateDel is null";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value=RaspDetail("Idn")->AsInteger;
 //Qw->Parameters->Items[1]->Value=PermisHdr.KeyUserStartProgramm;
 Qw->Open();
 if (edNumbNE->Value<=0)  btGreateNE->Enabled=false; else btGreateNE->Enabled=true;

 if (Qw->RecordCount>0) //Выставляю цену за 1 ед с НДИ и  без по первому значению в наборе данных.
	{Qw->First();
//	if (false) // проверка на электронные продукты отключена(int)cbTypeName->Items->Objects[cbTypeName->ItemIndex]==2403131)//Электронный продукт
//		{
//		 edCostNEWithoutNDS->Value=(Qw->Fields->Fields[1]->AsCurrency)/(double)edNumbNE->Value;
//		 edCostNEWithNDS->Value=(Qw->Fields->Fields[2]->AsCurrency)/(double)edNumbNE->Value;
//		}
//	else
		{
		 edCostNEWithoutNDS->Value=Qw->Fields->Fields[1]->AsCurrency;
		 edCostNEWithNDS->Value=Qw->Fields->Fields[2]->AsCurrency;
		}
	}
  Qw->Close();

  CheckNDS();
 // if (QRaspDetailfNoNDS->AsInteger==0) {TmAlarmNoNDS->->Enabled=false;/*lbNoNDS->Visible=false;*/} else {TmAlarmNoNDS->->Enabled=true;/*lbNoNDS->Visible=true;*/}

   chcbKanalSale->Value=RaspDetail("KanalSale")->AsInteger;
   //cxCheckComboBoxPI->Text="";
   cxCheckComboBoxPI->Value=RaspDetail("CompositionOfPI")->AsInteger;
   //if(cxCheckComboBoxPI->Text=="None selected"){cxCheckComboBoxPI->Text="";}
  vfOldValueProcDiscount=edProcDiscount->Value;
  cbTypeNameChange(Sender);

  ColPIEd->Text = RaspDetailValue("ColPI");

  //это проверка: где было создано распоряжение 0 - КР, 1 - 'Согласование скидок'
  String qd = "SELECT TermsDiscount FROM dbo.bm_RaspDiscountLink WHERE RaspIdn = " + IntToStr(viRaspIdn);
  DiscQuer->Active = true;
  DiscQuer->SQL->Clear();
  DiscQuer->SQL->Add(qd);
  DiscQuer->Open();

  if (DiscQuer->RecordCount > 0)
	 {
	  chbAvtoCost->Checked = false;
	  chbAvtoCost->Enabled = false;

	  chbEditCallResult->Checked = false;
	  chbEditCallResult->Enabled = false;

	  btCountCostProcDiscount->Enabled = false;
	  btCountCostWithNDS->Enabled      = false;


	  cxGridTableViewEmplUser->OptionsData->Deleting  = false;
	  cxGridTableViewEmplUser->OptionsData->DeletingConfirmation = false;
	  cxGridTableViewEmplUser->OptionsData->Editing   = false;
	  cxGridTableViewEmplUser->OptionsData->Inserting = false;

	  RzPanel2->Enabled = false;   // временно закомментированно от 2014-04-16 для проверки удаления НЕ из ПИ

	  lbNoNDS->Visible = true;
	  lbNoNDS->Caption = "Цены, суммы, скидки, НДС заведены в ''Согласование скидок''";
	  }

  DiscQuer->Active = false;

  if (dmRaspDetail->RaspDetailCheckComplect() ==true)
	{
    // если это ПИ из комплекта - разрешаем ввод количества
	  RzGroupBox18->Enabled = true;
	  ColPIEd->Enabled      = true;
	}
  OpenForm();
}
//---------------------------------------------------------------------------
 void __fastcall TFrEditRaspDetail::List()
{
  vsSQLQw = " SELECT Idn,iText "
            "FROM dbo.spl_LbText24 "
            "WHERE iLvl=1354 and DateDel is null";
  Qw->Close();
  Qw->SQL->Clear();
  Qw->SQL->Add(vsSQLQw);
  Qw->Open();

  cbTypeName->Clear();
  while(Qw->Eof == false)
  {
    cbTypeName->AddObject(Qw->Fields->Fields[1]->AsString,
                          (TObject*)Qw->Fields->Fields[0]->AsInteger);
    Qw->Next();
  }
  Qw->Close();

//  vsSQLQw = " select DeptID,DeptName,Fl "
//            "from dbo.Depts "
//            "where Fl is not null and DelData is null order by Fl " ;
//  Qw->Close();
//  Qw->SQL->Clear();
//  Qw->SQL->Add(vsSQLQw);
//  Qw->Open();

//  PLFrom->Properties->Items->Clear();
//  Qw->First();
//  while(Qw->Eof == false)
//  {
//    PLFrom->Properties->Items->AddCheckItem(Qw->Fields->Fields[1]->AsString,
//                                            Qw->Fields->Fields[1]->AsString);
//    PLFrom->Properties->Items->Items[i]->Tag = Qw->Fields->Fields[2]->AsInteger;
//	  Qw->Next();
//    i++;
//  }
//  Qw->Close();
}

void __fastcall TFrEditRaspDetail::edAddProduceClick(TObject *Sender)
{
#ifdef  TFR
#undef  TFR
#undef  FR
#endif
#define TFR TFrAddProduce
#define FR  FrAddProduce

  FR=new TFR(Application);
  FR->ShowModal();
  FR->WindowState=wsMinimized;
	  if (FR->ModalResult == mrOk)
		{ edProduce->Text= FR->edT512Name->Text;
		  edProduceIdn= FR->viIdnProduce;
		/*  vsSQLQw=  " SELECT  DISTINCT TOP 1 C.iText  FROM dbo.all_AdvProduceClass a  LEFT JOIN spl_LbText24 C ON C.Idn=A.Id24TypeName  WHERE idnp=:D0";
			   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
			   Qw->Parameters->Items[0]->Value=FR->viIdnProduce;
			   Qw->Open();
			   cbTypeName->ItemIndex=cbTypeName->Items->IndexOf(Qw->Fields->Fields[0]->AsString);
			   Qw->Close();*/
		}
  delete (FR);
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::cbfAdvChange(TObject *Sender)
{   
/*  switch(cbfAdv->ItemIndex)
	 {case 0:
		edfAdvMIN->Value=12;
		break;
	  case 1:
		edfAdvMIN->Value=6;
		break;
	  case 2:
		edfAdvMIN->Value=6;
		break;
	  case 3:
		edfAdvMIN->Value=3;
		break;
	  case 4:
		edfAdvMIN->Value=3;
		break;
	  case 5:
		edfAdvMIN->Value=3;
		break;
	  case 6:
		edfAdvMIN->Value=3;
		break;
	  case 7:
		edfAdvMIN->Value=1;
		break;
	  case 8:
		edfAdvMIN->Value=18;
		break;
	  case 9:
		edfAdvMIN->Value=0;
		break;
	 }   */

/*  if (cbfAdv->ItemIndex > 9)
	 {}  */

  CyclQuer->Active = true;
  CyclQuer->SQL->Clear();
  CyclQuer->SQL->Add("SELECT Description, CycleMonth FROM dbo.ProduceBlockCycle WHERE Description = '" + cbfAdv->Text + "'");
  CyclQuer->Open();
  edfAdvMIN->Text = CyclQuerCycleMonth->Value;
  CyclQuer->Active = false;

  //если будет меняться период подписки - будем выбирать только те блоки,
  cbTypeNameChange(Sender);               //которые имеют такой же период
  ListBlock();

  //Timer1->Enabled=false;
  //Timer1->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::cbTypeNameChange(TObject *Sender)
{
  if (cbTypeName->Text == "Сборник")
	{
	  chbAvtoCost->Checked = false;
	  chbAvtoCost->Enabled = false;
  }
	else
	{
	  chbAvtoCost->Checked = true;
	  chbAvtoCost->Enabled = true;
	}

  AnsiString piName = Trim(cbTypeName->Text);
  if (piName == "Вебинар"         ||
	    piName == "Деловой завтрак" ||
	    piName == "Конференция"     ||
	    piName == "Семинар")
  {
	  RzGroupBox11->Height = 66;
	  Event = true;
	  dtDateEventStart->Date = RaspDetail("DateEventStart")->AsDateTime;
	  if (dtDateEventStart->Date.FormatString("yyyy") == "1899")
		  dtDateEventStart->Text = "";

	  dtDateEventEnd->Date = RaspDetail("DateEventEnd")->AsDateTime;
	  if (dtDateEventEnd->Date.FormatString("yyyy") == "1899")
		  dtDateEventEnd->Text = "";
  }
  else
  {
	  RzGroupBox11->Height = 38;
	  Event = false;
	  dtDateEventStart->Clear();
	  dtDateEventEnd->Clear();
  }
}
//...........................................................................................................................
void _fastcall TFrEditRaspDetail::ListBlock()
{
  dmRaspDetail->getBlockList(int(cxCheckComboBoxPI->Value),
                             cbfAdv->Text);
    if(dmRaspDetail->QBlock->RecordCount != 0)
    {
			cxGrid3->Visible      = true;
			TabSheet2->TabVisible = true;
    }
    else
    {
			cxGrid3->Visible      = false;
			TabSheet2->TabVisible = false;
    }
}
//...........................................................................................................................

//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::QNEBeforeDelete(TDataSet *DataSet)
{
  btDelClick(NULL);
  Abort();
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRaspDetail::Timer1Timer(TObject *Sender)
{
Timer1->Enabled=false;

//Базовая
 /*Q1->DisableControls();
 Q1->Close();
 Q1->Parameters->Items[0]->Value=edProduceIdn;
 Q1->Parameters->Items[1]->Value=spYear->Value;
 Q1->Parameters->Items[2]->Value=cbfAdv->ItemIndex;
 Q1->Open();
 Q1->EnableControls();

if(edCostBaseWithNDS->Value==0)
	{
	 if (Q1->RecordCount==1) edCostBaseWithNDS->Text=Q1BCDField1->AsCurrency;
	}

//Бюджетная
 Q2->DisableControls();
 Q2->Close();
 Q2->Parameters->Items[0]->Value=edProduceIdn;
 Q2->Parameters->Items[1]->Value=spYear->Value;
 Q2->Parameters->Items[2]->Value=cbfAdv->ItemIndex;
 Q2->Open();
 Q2->EnableControls();

 if(edCostBudjetWithNDS->Value==0)
	{
	if (Q2->RecordCount==1) edCostBudjetWithNDS->Text=BCDField1->AsCurrency;
	}  */
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRaspDetail::edProduceChange(TObject *Sender)
{
  Timer1->Enabled = false;
  Timer1->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::spYearChange(TObject *Sender)
{
  Timer1->Enabled = false;
  Timer1->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::cxGridDBBandedTableView2CellClick(
      TcxCustomGridTableView *Sender,
      TcxGridTableDataCellViewInfo *ACellViewInfo, TMouseButton AButton,
      TShiftState AShift, bool &AHandled)
{
edCostBaseWithNDS->Text=Q1BCDField1->AsCurrency;

}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::cxGridDBBandedTableView1CellClick(
      TcxCustomGridTableView *Sender,
      TcxGridTableDataCellViewInfo *ACellViewInfo, TMouseButton AButton,
      TShiftState AShift, bool &AHandled)
{
edCostBudjetWithNDS->Text=BCDField1->AsCurrency;

}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::RzBitBtn6Click(TObject *Sender)
{
 cbTypeName->ItemIndex=-1;
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::btAddId32NameUnitClick(TObject *Sender)
{
#ifdef  TFR
#undef  TFR
#undef  FR

#endif
#define TFR TFrEditLibs
#define FR  FrEditLibs

  FR=new TFR(Application);

	FR->fType=7; FR->Caption="Единицы измерения номенклатурных единиц(НЕ)";
	FR->ShowModal();
	FR->WindowState=wsMinimized;
	if (FR->ModalResult==mrOk)
	  {
		  QLookComboId32NameUnit->Close();
		  QLookComboId32NameUnit->Open();
		  cbId32NameUnit->Items->Clear();

		while(QLookComboId32NameUnit->Eof==false)
		  {
		   cbId32NameUnit->Items->AddObject(QLookComboId32NameUnit->Fields->Fields[1]->AsString.Trim(),(TObject*)QLookComboId32NameUnit->Fields->Fields[0]->AsInteger);
		   QLookComboId32NameUnit->Next();
		  }
		QLookComboId32NameUnit->Close();
	  }
  delete (FR);

}
//---------------------------------------------------------------------------

void __fastcall TFrEditRaspDetail::btId32NameItemTypeClick(TObject *Sender)
{
 #ifdef  TFR
#undef  TFR
#undef  FR

#endif
#define TFR TFrEditLibs
#define FR  FrEditLibs

  FR=new TFR(Application);

	FR->fType=8; FR->Caption="Типы номенклатурных единиц(НЕ)";
	FR->ShowModal();
	FR->WindowState=wsMinimized;
	if (FR->ModalResult==mrOk)
	  {
		  QLookComboId32NameItemType->Close();
		  QLookComboId32NameItemType->Open();
		  cbId32NameItemType->Items->Clear();

		while(QLookComboId32NameItemType->Eof==false)
		  {
		   cbId32NameItemType->Items->AddObject(QLookComboId32NameItemType->Fields->Fields[1]->AsString.Trim(),(TObject*)QLookComboId32NameItemType->Fields->Fields[0]->AsInteger);
		   QLookComboId32NameItemType->Next();
		  }
		QLookComboId32NameItemType->Close();
	  }
  delete (FR);
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::TmAlarmNoNDSTimer(TObject *Sender)
{
   if (lbNoNDS->Visible)lbNoNDS->Visible=false;
	 else lbNoNDS->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRaspDetail::RzBitBtn4Click(TObject *Sender)
{
/*
#ifdef  TFR
#undef  TFR
#undef  FR

#endif
#define TFR TFrEditLibs
#define FR  FrEditLibs

  FR=new TFR(Application);

	FR->fType=9; FR->Caption="Типы подписных индексов";
	FR->ShowModal();
	FR->WindowState=wsMinimized;
	if (FR->ModalResult==mrOk)
	  {
  vsSQLQw=" SELECT Idn,iText FROM dbo.spl_LbText24 WHERE iLvl=1354 and DateDel is null" ;
  Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
  Qw->Open();cbTypeName->Clear();
  while(Qw->Eof==false){cbTypeName->AddObject(Qw->Fields->Fields[1]->AsString,(TObject*)Qw->Fields->Fields[0]->AsInteger);Qw->Next();}Qw->Close();
   edProduceIdn=0;
	  }
  delete (FR);   */
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRaspDetail::RzBitBtn5Click(TObject *Sender)
{
#ifdef  TFR
#undef  TFR
#undef  FR

#endif
#define TFR TFrHelpsText
#define FR  FrHelpsText

  FR=new TFR(Application);


	FR->ShowModal();
	FR->WindowState=wsMinimized;
	if (FR->ModalResult==mrOk)
	  {

	  }
  delete (FR);
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::cbTypeNameDropDown(TObject *Sender)
{
/*	vsSQLQw=" SELECT Idn FROM  bm_RaspDetail WHERE PIdn=:D0  and fType=3 and DateDel is null";
	 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	 Qw->Parameters->Items[0]->Value=viIdnDetail;
	 Qw->Open();
 	if( Qw->RecordCount>0) {ShowMessage("Невозможно сменить тип. \n Необходимо сперва удалить все номенклатурные единицы.");edProduce->SetFocus(); }
  */
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::RzBitBtn7Click(TObject *Sender)
{
   edProduce->Text="";
   edProduceIdn=0;
   cbTypeName->ItemIndex=-1;
   cbfAdv->ItemIndex=-1;
   edNumbNE->Value=0;
   edfAdvMIN->Value=0;
   edAlterName->Text="Новый подписной индекс";


	if((QNE->Fields->FieldByName("IdIns")->AsInteger==PermisHdr.KeyUserStartProgramm)||(MainForm->flEditAllRasp))
	{

	  Qw->Close();
	   Qw->SQL->Clear();
	   vsSQLQw=" UPDATE bm_RaspDetail "
					" SET   DateDel=GetDate() "
					" ,IdDel= :D0 "
					" WHERE PIdn=:D1 and DateDel is NULL and fType=3; ";
	   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	   Qw->Parameters->Items[0]->Value=PermisHdr.KeyUserStartProgramm;
	   Qw->Parameters->Items[1]->Value=viIdnDetail;
	   Qw->ExecSQL();

	   QNE->Close();
	   QNE->Open();
		btGreateNE->Enabled=true;
	}
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::btGetChangePIClick(TObject *Sender)
{
#ifdef  TFR
#undef  TFR
#undef  FR

#endif
#define TFR TFrGetPI
#define FR  FrGetPI
  viIdGetPI=0;
  FR=new TFR(Application);

	FR->vIdRasp=viRaspIdn;
	FR->lbHintAlert->Visible=true;
	FR->ShowModal();
	FR->WindowState=wsMinimized;
	if (FR->ModalResult==mrOk)
	  {
	   viIdGetPI = FR->QGetPIIdGetPI->AsInteger;
	   QStatic->Close();
	   QStatic->Parameters->Items[0]->Value=viIdGetPI;
	   QStatic->Parameters->Items[1]->Value=viIdnDetail;
	   QStatic->Parameters->Items[2]->Value=viRaspIdn;
	   QStatic->Parameters->Items[3]->Value=PermisHdr.KeyUserStartProgramm;;
	   QStatic->ExecSQL();

	   ////
		 vsSQLQw=" SELECT ' Изменяем подписной индекс: '+A.NameRaspDetail+'\n Распоряжение: '+B.NumbRaspName "
			 "	+' от ', B.DateRasp  "
			 "	FROM bm_RaspDetail A "
			 "	LEFT JOIN bm_Rasp B ON A.IdRasp=B.Idn "
			 "	WHERE A.Idn="+IntToStr(viIdGetPI);
	 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	 Qw->Open();
	 AnsiString TmpDate;
	 TmpDate=Qw->Fields->Fields[1]->AsDateTime.FormatString("dd.mm.yyyy");
	 if (TmpDate=="30.12.1899") TmpDate="";
	 meComplect->Caption=Qw->Fields->Fields[0]->AsString+TmpDate;
	   ////

	   FormActivate(Sender);

	  }
  delete (FR);
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRaspDetail::cbProcNDSDropDown(TObject *Sender)
{
	vsSQLQw=" SELECT Idn FROM  bm_RaspDetail WHERE PIdn=:D0  and fType=3 and DateDel is null";
	 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	 Qw->Parameters->Items[0]->Value=viIdnDetail;
	 Qw->Open();
	if( Qw->RecordCount>0)
	  {
	   ShowMessage("Невозможно сменить %НДС. \n Необходимо сперва удалить все номенклатурные единицы.");
	   edProduce->SetFocus();
	   return;
	   }
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRaspDetail::btGetChangeNEClick(TObject *Sender)
{
#ifdef  TFR
#undef  TFR
#undef  FR

#endif
#define TFR TFrGetNE
#define FR  FrGetNE

  FR=new TFR(Application);

	FR->viIdnDetail =  viIdnDetail;
	FR->viIdnProduce=0;
	if (edProduceIdn>0)   { FR->viIdnProduce=edProduceIdn; }
	FR->viSrc=viSrc ;
	FR->vcNDS=StrToCurr(cbProcNDS->Text);

	FR->ShowModal();
	FR->WindowState=wsMinimized;
	if (FR->ModalResult==mrOk)
	  {
	   FormActivate(Sender);
	  }
  delete (FR);

}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::OpenForm()
{
  int i;
	  vsSQLQw= "select Id256TypeRasp from dbo.bm_Rasp where idn=" +
              IntToStr(viRaspIdn);
	  //"4308804  ";
	 Qw->Close();
   Qw->SQL->Clear();
   Qw->SQL->Add(vsSQLQw);
//	 Qw->Parameters->Items[0]->Value=viRaspIdn;
	 Qw->Open();
	 i=Qw->Fields->Fields[0]->AsInteger;
	 Qw->Close();

  if (i == 4308804)
	if (btGetChangePI->Visible == true && meComplect->Caption=="" )
	   {
		RzPanel7->Enabled=false;
		RzGroupBox11->Enabled=false;
		RzSizePanel1->Enabled=false;
		RzGridPanel1->Enabled=false;
		RzSplitter1->Enabled=false;
		}
		else
			{
			 RzPanel7->Enabled=true;
			 RzGroupBox11->Enabled=true;
			 RzSizePanel1->Enabled=true;
			 RzGridPanel1->Enabled=true;
	         RzSplitter1->Enabled=true;
			 }
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::cxGrid3DBTableView1DblClick(TObject *Sender)
{
  ShowMessage("\t\t\tПодробная информация по блоку:\n\n"

//			  "Название продукта:\n" + BlockQuerProduct->Value +   "\n\n"
			  "Наименование блока: " + dmRaspDetail->QBlockValue("BlockName") + "\n\n"
			  "Условия поставки: \n" + dmRaspDetail->QBlockValue("BlockTerm") + "\n\n"
			  "Описание БЛОКА:   \n" + dmRaspDetail->QBlockValue("BlockDesc") + "\n\n"
			  "Период подписки:    " + dmRaspDetail->QBlockValue("Description") + "\n\n"
			  "Стоимость блока:    " + FloatToStr(dmRaspDetail->QBlockField("CostWitnDiscount")->AsFloat) + "р.");
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::cxCheckComboBoxPIPropertiesChange(TObject *Sender)
{
  AnsiString cxText = Trim(cxCheckComboBoxPI->Text);
//  int i = cxCheckComboBoxPI->Properties->Items->Count;
//  int j = CheckComboBoxPI->Properties->Items->Count;
  if(cxText.Pos("Вебинар")     != 0 ||
     cxText.Pos("Семинар")     != 0 ||
     cxText.Pos("Конференция") != 0)
		{
      // показываем обязательную для этого ПИ
      // "Дату проведения образовательного мероприятия"
      RzGroupBox11->Height = 66;
		  Event = true;
    }

    else
    {
      // если это не Вебинар или Семинар или Конференция
      // скрываем "Дату проведения мероприятия"
	    RzGroupBox11->Height = 38;
	    dtDateEventStart->Clear();
	    dtDateEventEnd->Clear();
	    Event = false;
	  }
  ListBlock();
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::FormClose(TObject *Sender, TCloseAction &Action)
{
  delete dmRaspDetail;
  dmRaspDetail = NULL;
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::FormShow(TObject *Sender)
{
  String qd = "SELECT TermsDiscount FROM dbo.bm_RaspDiscountLink"
              " WHERE DateDel is NULL AND PIidn = "
            + IntToStr(viIdnDetail);
  DiscQuer->Active = true;
  DiscQuer->SQL->Clear();
  DiscQuer->SQL->Add(qd);
  DiscQuer->Open();

  if (DiscQuer->RecordCount == 0)
  {
    TabSheet3->TabVisible = false;
  }
  else if (DiscQuer->RecordCount == 1) // если несколько записей?
  {
	  DiscountMemo->Text = DiscQuerTermsDiscount->Value;
	  chbAvtoCost->Checked = false;
	  chbAvtoCost->Enabled = false;

	  chbEditCallResult->Checked = false;
	  chbEditCallResult->Enabled = false;

	  lbNoNDS->Caption = "Цены, суммы, скидки, НДС заведены в ''Согласование скидок''";
  }

  float d = edProcDiscount->Value;
  //выводим информацию пользователю что происходит
  if (d <= 100)
  {
	  RzLabel7->Caption = "Сумма скидки ПИ:";
	  RzLabel8->Caption = "% скидки ПИ:";
	  cxGridTableViewEmplUserDiscount->Caption     = "Сумма Скидки";
	  cxGridTableViewEmplUserProcDiscount->Caption = "% Скидки";
  }
  else
	{
	  RzLabel7->Caption = "Сумма наценки ПИ:";
	  RzLabel8->Caption = "% наценки ПИ:";
	  cxGridTableViewEmplUserDiscount->Caption     = "Сумма наценки";
	  cxGridTableViewEmplUserProcDiscount->Caption = "% наценки";
  }
  DiscQuer->Active = false;
  dmRaspDetail->QBlock->Active = true;
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::PageCtrlChange(TObject *Sender)
{
  if (PageCtrl->ActivePage != TabSheet1)
	 RzPanel2->Visible = false;
  else
	 RzPanel2->Visible = true;
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::CreateLinkBlock()
{
  String ul = "BEGIN TRY "
			  "BEGIN TRANSACTION; "

			  "DECLARE @IdRasp         AS int "
			  "    SET @IdRasp         = " + RaspDetailValue("idRasp") + String(" "
			  "DECLARE @IdRaspDetail   AS int "
			  "    SET @IdRaspDetail   = ") + RaspDetailValue("Idn") + String(" "
			/*  "DECLARE @IdAdvProdClass AS int "
			  "    SET @IdAdvProdClass = NULL "                       //пока используем NULL по настоянию Дианы от 2014-03-19
			  //"    SET @IdAdvProdClass = " + IntToStr(BlockQuerProduceIdn->Value) + " "
			  "DECLARE @IdAdvPriceList AS int "
			  "    SET @IdAdvPriceList = NULL "  */
			  "DECLARE @IdProduct      AS int "
			  "    SET @IdProduct      = ") + RaspDetailValue("idAdvProduceClass") + String(" "
			  "DECLARE @IdBlock        AS int "
			  "    SET @IdBlock        = ") + IntToStr(dmRaspDetail->QBlockField("idn")->AsInteger) + String(" "
			  "DECLARE @IdCostBlock    AS int "
			  "    SET @IdCostBlock    = NULL "                       //пока используем NULL по настоянию Дианы от 2014-03-19
			  //"    SET @IdCostBlock    = " + IntToStr(BlockQuerIdCost->Value) + " "
			  "DECLARE @Choice         AS bit "
			  "DECLARE @DateIns        AS datetime "
			  "    SET @DateIns        = GETDATE() "
			  "DECLARE @IdIns          AS int "
			  "    SET @IdIns          = ") + IntToStr(PermisHdr.KeyUserStartProgramm) + String(" "
			  "DECLARE @DateMod        AS datetime "
			  "    SET @DateMod        = GETDATE() "
			  "DECLARE @IdMod          AS int "
			  "    SET @IdMod          = ") + IntToStr(PermisHdr.KeyUserStartProgramm) + String(" "
			  "DECLARE @DateDel        AS datetime "
			  "    SET @DateDel        = GETDATE() "
			  "DECLARE @IdDel          AS int "
			  "    SET @IdDel          = ") + IntToStr(PermisHdr.KeyUserStartProgramm) + String(" ");

  if (recType == "N")
	 {
		 ul += "INSERT INTO [dbo].[ProduceBlockRaspLink] "
			   "       (IdRasp, IdRaspDetail, IdProduct, IdBlock, IdCostBlock, Choice, DateIns, IdIns) "
			   "VALUES(@IdRasp, @IdRaspDetail, @IdProduct, @IdBlock, @IdCostBlock, 1, @DateIns, @IdIns ) ";
	  }
  if (recType == "1")
	 {
		 ul += "UPDATE [dbo].[ProduceBlockRaspLink] "
			   "   SET Choice = 0, DateDel = @DateDel, IdDel = @IdDel "
			   " WHERE idn = " + IntToStr(dmRaspDetail->QBlockField("LinkIdn")->AsInteger) + " ";
	  }
  if (recType == "0")
	 {
		 ul += "UPDATE [dbo].[ProduceBlockRaspLink] "
			   "   SET Choice = 1, DateMod = @DateMod, IdMod = @IdMod, DateDel = NULL " //, IdDel = NULL для интеграции не задействовать
			   " WHERE idn = " + IntToStr(dmRaspDetail->QBlockField("LinkIdn")->AsInteger) + " ";
	  }

		 ul +=  "COMMIT TRANSACTION; "
				"END TRY "

				"BEGIN CATCH "
				"      ROLLBACK TRANSACTION; "
				"      PRINT 'Error transaction!'; "
				"END CATCH;";

  LinkUnlinkBlockComm->CommandText = ul;
  LinkUnlinkBlockComm->Execute();
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::cxGrid3DBTableView1CellClick(TcxCustomGridTableView *Sender,
		  TcxGridTableDataCellViewInfo *ACellViewInfo, TMouseButton AButton, TShiftState AShift, bool &AHandled)
{
//  int blidn = BlockQueridn->Value;
  //String i = cxGrid3DBTableView1->DataController->GetFocusedRowIndex();
  //String i = cxGrid3DBTableView1->Controller->FocusedColumnIndex;
  //Blink = "CheckDblBlock";                //всегда сначала проверяем - чтобы нельзя было выбрать два блока "Горячая линия"!
  String l1 = "DECLARE @idRasp   AS int "
			  "    SET @idRasp   = " + RaspDetailValue("idRasp") + " "
			  "DECLARE @idDetail AS int "
			  "    SET @idDetail = " + RaspDetailValue("Idn") + " "
			  "DECLARE @BlockId  AS int "
			  "    SET @BlockId  = " + IntToStr(dmRaspDetail->QBlockField("idn")->AsInteger) + " "
			  " SELECT COUNT(@idDetail) AS Detail "
			  "   FROM dbo.ProduceBlockRaspLink "
			  "  WHERE IdRasp = @idRasp "
			  "    AND IdRaspDetail = @idDetail"
			  "    AND IdBlock = @BlockId";
  String l2 = "";
  LrecQuer->Active = true;
  LrecQuer->SQL->Clear();
  LrecQuer->SQL->Add(l1);
  LrecQuer->Open();
  l2 = IntToStr(LrecQuerDetail->Value);
  LrecQuer->Active = false;

  if ((cxGrid3DBTableView1->Controller->FocusedColumnIndex == 1) && (l2 == "0"))                      //(BlockQuerch->IsNull)
	 {
	  CheckHotLine(Sender);
	  if (Blink == "CheckDblBlock")
		  return;

	  String Caption = "Внимание!";
		 String Text = "Вы действительно хотите выбрать этот блок?";
	  switch (Application->MessageBox(Text.w_str(), Caption.w_str(), MB_YESNO + MB_ICONQUESTION + MB_DEFBUTTON2))
			 {
			  case IDYES: {
						   recType = "N";
						   CreateLinkBlock();
						   ListBlock();
						   Blink = "IncludeBlock";
						 /*  try
							  {
							   if (!BlockQuer->Eof)
								  {BlockQuer->Locate("idn", blidn, TLocateOptions() <<loCaseInsensitive);}
							   }
							   catch(...)
									{};    */
						   ShowMessage("Блок был успешно подключён!");
						   return;
						   }
//						   break;
			  case IDNO:  {return;}
			  }
	  }

  if ((cxGrid3DBTableView1->Controller->FocusedColumnIndex == 1) &&
      (dmRaspDetail->QBlockField("ch")->AsInteger == 1))
	 {
	  String Caption = "Внимание!";
		 String Text = "Вы действительно хотите исключить этот блок?";
	  switch (Application->MessageBox(Text.w_str(), Caption.w_str(), MB_YESNO + MB_ICONQUESTION + MB_DEFBUTTON2))
			 {
			  case IDYES: {
						   recType = "1";
						   CreateLinkBlock();
						   ListBlock();
						   /*try
							  {
							   if (!BlockQuer->Eof)
								  {BlockQuer->Locate("idn", blidn, TLocateOptions() <<loCaseInsensitive);}
							   }
							   catch(...)
									{};   */
						   ShowMessage("Блок был успешно исключён!");
						   return;
						   }
//						   break;

			  case IDNO:  {return;}
			  }
	  }

  if ((cxGrid3DBTableView1->Controller->FocusedColumnIndex == 1) &&
      (dmRaspDetail->QBlockField("ch")->AsInteger == 0))
	 {
	  CheckHotLine(Sender);
	  if (Blink == "CheckDblBlock")
		  return;

	  String Caption = "Внимание!";
		 String Text = "Вы действительно хотите вернуть этот блок?";
	  switch (Application->MessageBox(Text.w_str(), Caption.w_str(), MB_YESNO + MB_ICONQUESTION + MB_DEFBUTTON2))
			 {
			  case IDYES: {
						   recType = "0";
						   CreateLinkBlock();
						   ListBlock();
					   /*	   try
							  {
							   if (!BlockQuer->Eof)
								  {BlockQuer->Locate("idn", blidn, TLocateOptions() <<loCaseInsensitive);}
							   }
							   catch(...)
									{};    */
						   ShowMessage("Блок был успешно подключён!");
						   return;
						   }
//						   break;

			  case IDNO:  {return;}
			  }
	  }
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::ColPIEdChange(TObject *Sender)
{
  if (ColPIEd->Text.Length() == 0)
	 {ColPIEd->Text = "1";}
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::chcbKanalSalePropertiesClickCheck(TObject *Sender, int ItemIndex, bool &AllowToggle)
{
  //String ii = IntToStr(ItemIndex);
  //ShowMessage(ii);
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetail::TryDelNE()
{
  String s1 = "BEGIN TRY  "
			  "BEGIN TRANSACTION; "

			  "DECLARE @IdRasp  AS int "
			  "    SET @IdRasp  = " + IntToStr(QNEidRasp->Value) + " "                                  //ID     распоряжения
			  "DECLARE @Status  AS nvarchar(20) "
			  "    SET @Status  = (SELECT iText "
			  "                      FROM dbo.spl_LbText24 AS l "
			  "                          JOIN dbo.bm_Rasp AS r ON (r.Id24NameStatus = l.Idn) WHERE r.Idn = @IdRasp) "
			  "DECLARE @IdnNE   AS int "
			  "    SET @IdnNE   = " + IntToStr(QNEIdn->Value) + " "                                     //ID     номенклатуры
			  "DECLARE @NEname  AS nvarchar (255) "
			  "    SET @NEname  = (SELECT NameRaspDetail FROM dbo.bm_RaspDetail WHERE Idn = @IdnNE) "
			  "DECLARE @IdnPI   AS int "
			  "    SET @IdnPI   = " + IntToStr(QNEPIdn->Value) + " "                                    //ID родительского ПИ
			  "DECLARE @User    AS int "
			  "    SET @User    = " + IntToStr(PermisHdr.KeyUserStartProgramm) + " "                    //кто творит произвол
			  "DECLARE @Name    AS nvarchar(100) "
			  "    SET @Name    = (SELECT auFamIO + ' (e-mail: ' + auMailUser + ')' FROM dbo.aa_Users WHERE auId = @User) "
			  "DECLARE @SAPinfo AS nvarchar (100) "
			  "    SET @SAPinfo = '" + SAPinfo + "' "
			  "DECLARE @SAPinvs AS nvarchar (50) "
			  "    SET @SAPinvs = '" + SAPinvs + "' "
			  "DECLARE @SAPordr AS nvarchar (50) "
			  "    SET @SAPordr = '" + SAPordr + "' "
			  "DECLARE @DMordr  AS nvarchar (50) "
			  "    SET @DMordr  = '" + DMordr  + "' "

			  "DECLARE @subject AS nvarchar(255) "
			  "    SET @subject = 'Удаление номенклатурной единицы в Конструкторе распоряжений' "
			  "DECLARE @body    AS nvarchar(max) "
			  "    SET @body = 'Уважаемые коллеги.  ' + CHAR(10) + CHAR(10) + "
			  "                'Удалена номенклатурная единица:' + CHAR(10) + @NEname + CHAR(10) + "
			  "				   '            (ID_NE: ' + CAST(@IdnNE  AS nvarchar(10)) + ')' + CHAR(10) + "
			  "				   '            (ID_PI: ' + CAST(@IdnPI  AS nvarchar(10)) + ')' + CHAR(10) + "
			  "				   '  распоряжение (ID: ' + CAST(@IdRasp AS nvarchar(10)) + ')' + CHAR(10) + "
			  "                '            статус: ' + @Status + CHAR(10) + "
			  "				   '     дата удаления: ' + REPLACE((CAST(GETDATE() AS nvarchar(50))), ':', '-') + CHAR(10) + "
			  "				   '        кто удалил: ' + @Name + CHAR(10) + CHAR(10) "
			  "				   ' данные в каталоге: ' + @SAPinfo + CHAR(10) + "
			  "                '      счетов в SAP: ' + @SAPinvs + CHAR(10) + "
			  "                '     заказов в SAP: ' + @SAPordr + CHAR(10) + "
			  "                '     заказов в  DM: ' + @DMordr "

			  "EXEC msdb.dbo.sp_send_dbmail "
			  "     @profile_name    = 'RPerkatov', "
			  "     @recipients      = 'dskopintseva@mcfr.ru;aKiselev@mcfr.ru;rperkatov@mcfr.ru', "
			  "     @copy_recipients = 'rperkatov@mcfr.ru', "
			  //"     @copy_recipients = 'admin@local.com', "
			  "     @body            = @body, "
			  "     @body_format     = 'TEXT', "
			  "     @importance      = 'High', "
			  "     @subject         = @subject; "

			  "COMMIT TRANSACTION; "
			  "END TRY "

			  "BEGIN CATCH "
			  "      ROLLBACK TRANSACTION; "
			  "      PRINT 'Error transaction (TryDelNE)!'; "
			  "END CATCH; ";

  TryDelNEComm->CommandText = s1;
  TryDelNEComm->Execute();
}
//---------------------------------------------------------------------------------------------------------------------------
