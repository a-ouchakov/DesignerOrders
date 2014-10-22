//---------------------------------------------------------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "BlockProducePeriod.h"
#include "BlockProduceCost.h"
#include "BlockProduceAddEd.h"
#include "main.h"
#include "Init.h"
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
#pragma link "RzEdit"
#pragma link "RzLabel"
#pragma link "RzCmboBx"
#pragma resource "*.dfm"
TFrBlockProducePeriod *FrBlockProducePeriod;

  extern TIniFile *Ini;

  String flrec = "N";
  String mode  = "Cost";
  String m1 = "SELECT bc.idn, bc.IdFAdv, bc.Cycle, bc.Description, bc.CycleMonth, bc.DateIns, "
					 "A1.auFamUser + ' ' + SUBSTRING(A1.auNamUser, 1,1) + '.' + SUBSTRING(A1.auOtcUser, 1,1) + '.' AS Creator, "
					 "bc.DateEdit, "
					 "A2.auFamUser + ' ' + SUBSTRING(A2.auNamUser, 1,1) + '.' + SUBSTRING(A2.auOtcUser, 1,1) + '.' AS Editor "
			  "  FROM dbo.ProduceBlockCycle AS bc "
			  "       LEFT OUTER JOIN dbo.aa_Users AS A1 ON bc.IdIns = A1.auId "
			  "       LEFT OUTER JOIN dbo.aa_Users AS A2 ON bc.IdEdit = A2.auId ";

//---------------------------------------------------------------------------------------------------------------------------
void TFrBlockProducePeriod::QCycle()
{
  CycleQuer->SQL->Clear();
  CycleQuer->SQL->Add(m1);
  CycleQuer->Open();

  if (flrec == "N")
	 {CycleQuer->Last();}

  if (flrec == "E")
	 {
	  CycleQuer->GotoBookmark(SavePos);
	  CycleQuer->FreeBookmark(SavePos);
	  }
}
//---------------------------------------------------------------------------------------------------------------------------
String cd = "";
   int mv = 0;

void TFrBlockProducePeriod::QString()
{
  int rt = StrToInt(CycleEd->Text);
  int ls = IntToStr(rt).Length();

  if (rt <= 9)
	 {
	  if (rt == 1)                                                                            {cd = CycleEd->Text + " день";}
	  if (rt == 2 || rt == 3 || rt == 4)                                                      {cd = CycleEd->Text + " дня"; }
	  if (rt == 0 || rt == 5 || rt == 6 || rt == 7 || rt == 8 || rt == 9)                     {cd = CycleEd->Text + " дней";}
	  }
  if (rt > 9 && rt < 15)                                                                      {cd = CycleEd->Text + " дней";}
  if (rt >= 15)
	 {
	  AnsiString tmp = "";
				 tmp = IntToStr(rt);
	   char di = tmp[ls];
		if (di == '1')                                                                        {cd = CycleEd->Text + " день";}
		if (di == '2' || di == '3' || di == '4')                                              {cd = CycleEd->Text + " дня"; }
		if (di == '0' || di == '5' || di == '6' || di == '7' || di == '8' || di == '9')       {cd = CycleEd->Text + " дней";}
	  }

  if (rt < 29)
	 {mv = 0;}
  if (rt > 29)
	 {mv = floor(rt/30);}
}
//---------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------
__fastcall TFrBlockProducePeriod::TFrBlockProducePeriod(TComponent* Owner) : TForm(Owner)
{
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProducePeriod::btCloseClick(TObject *Sender)
{
  Close();
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProducePeriod::RzToolButton1Click(TObject *Sender)
{
  if (CycleEd->Text.Length() == 0)
	 {
	  ShowMessage("Запрещено сохранять пустые значения периодов.");
	  return;
	  }

  if (CycleEd->Text == "0")
	 {
	  ShowMessage("Не имеет смысла сохранять период с нулевым значением!");
	  CycleEd->SetFocus();
	  CycleEd->SelectAll();
	  return;
	  }

  String q0 = "";

  if (cbfAdv->ItemIndex == -1)
	 {cd = cd + "";}
  if (cbfAdv->ItemIndex != -1)
	 {cd = cd + " (" + cbfAdv->Text + ")";}

  if (flrec == "N")
	 {
	  CycleQuer->First();
	  while (!CycleQuer->Eof)
			{
			 String v1 = TrimRight(TrimLeft(CycleQuerDescription->Value));
			 String v2 = TrimRight(TrimLeft(cd));

			 for (int i = 0; i < v1.Length(); ++i)
				  v1 = v1.LowerCase();
			 for (int i = 0; i < v2.Length(); ++i)
				  v2 = v2.LowerCase();

			 if (v1 == v2)
				{
				 String Caption = "Ошибка при записи нового периода!";
					String Text = "Такое значение периода подписки: ''" + cd + "'' уже существует в справочнике!";
				 Application->MessageBox(Text.w_str(), Caption.w_str(), MB_ICONHAND | MB_OK);
				 return;
				 }
			 CycleQuer->Next();
			 }

	  /*
	  Для совместимости с предыдущими индексами (cbfAdv->ItemIndex) и работе по новым требованиям, добавлена сия проверка
	  на RecordCount из таблицы <ProduceBlockCycle> и дальнейшей корректной интеграции с другими системами, так как в них
	  будет передаваться значение поля 'IdFAdv'. Все значения листа с 0 по 9 должны оставаться строго! в этом же порядке.
	  Все новые значения периода подписки, которых не было прежде будут получать значение 'IdFAdv' по следующему правилу:
	  берём RecordCount таблицы (KeyField != 0) - это и будет значением 'IdFAdv' (и шуба цела и на ёлку влезли)
	  */

	  int ii = -1;

	  if (CycleQuer->RecordCount <= 9)  {ii = cbfAdv->ItemIndex;}
	  if (CycleQuer->RecordCount > 9)   {ii = CycleQuer->RecordCount;}

	  q0 = "BEGIN TRY "
			  "BEGIN TRANSACTION; "

			  "      DECLARE @IdFAdv      AS int "
			  "          SET @IdFAdv      = " + IntToStr(ii) + " "
			  "      DECLARE @Cycle       AS int "
			  "          SET @Cycle       = " + CycleEd->Text + " "
			  "      DECLARE @Description AS nvarchar(30) "
			  "          SET @Description = '" + cd +  "' "
			  "      DECLARE @CycleMonth  AS int "
			  "          SET @CycleMonth  = " + mv + " "
			  "      DECLARE @DateIns     AS datetime "
			  "          SET @DateIns     = GETDATE() "
			  "      DECLARE @IdIns       AS int "
			  "          SET @IdIns       =  " + IntToStr(PermisHdr.KeyUserStartProgramm) + " "
			  "       INSERT INTO [dbo].[ProduceBlockCycle] "
			  "            VALUES(@IdFAdv, @Cycle, @Description, @CycleMonth, @DateIns, @IdIns, NULL, NULL) "

			  "COMMIT TRANSACTION; "
			  "END TRY "

		   "BEGIN CATCH "
		   "      ROLLBACK TRANSACTION; "
		   "      PRINT 'Error transaction!'; "
		   "END CATCH;";

	  CycleComm->CommandText = q0;
	  CycleComm->Execute();
	  }

  if (flrec == "E")
	 {
	  q0 = "BEGIN TRY "
			  "BEGIN TRANSACTION; "
			  "      DECLARE @Cycle        AS int "
			  "          SET @Cycle        = " + CycleEd->Text + " "
			  "      DECLARE @Description  AS nvarchar(30) "
			  "          SET @Description  = '" + cd +  "' "
			  "      DECLARE @CycleMonth   AS int "
			  "          SET @CycleMonth   = " + mv + " "
			  "      DECLARE @DateEdit     AS datetime "
			  "          SET @DateEdit     = GETDATE() "
			  "      DECLARE @IdEdit       AS int "
			  "          SET @IdEdit       =  " + IntToStr(PermisHdr.KeyUserStartProgramm) + " "
			  "       UPDATE [dbo].[ProduceBlockCycle] "
			  "          SET Cycle = @Cycle, Description = @Description, "
			  "              CycleMonth = @CycleMonth, DateEdit = @DateEdit, IdEdit = @IdEdit "
			  "        WHERE idn = " + IntToStr(CycleQueridn->Value) + " "

			  "COMMIT TRANSACTION; "
			  "END TRY "

		   "BEGIN CATCH "
		   "      ROLLBACK TRANSACTION; "
		   "      PRINT 'Error transaction!'; "
		   "END CATCH;";

	  CycleComm->CommandText = q0;
	  CycleComm->Execute();
	  }

  QCycle();
  if (mode == "Cost")
	 {FrBlockProduceCost->List1();}

  if (mode == "Prod")
	 {FrBlockProduceAddEd->List1();}

  CycleEd->Text = "0";
  cbfAdv->ItemIndex = -1;

  if (flrec == "N")
	 {ShowMessage("Новое значение успешно добавлено!");}
  if (flrec == "E")
	 {ShowMessage("Значение успешно отредактировано!");}

  flrec = "N";
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProducePeriod::FormShow(TObject *Sender)
{
  CycleQuer->Active = true;
  QCycle();

  Caption = "Добавление (просмотр) периодов, всего: " + IntToStr(CycleQuer->RecordCount);
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProducePeriod::FormClose(TObject *Sender, TCloseAction &Action)
{
  CycleQuer->Active = false;

  Ini->WriteInteger("BlockProducePeriod", "Top",    FrBlockProducePeriod->Top);
  Ini->WriteInteger("BlockProducePeriod", "Left",   FrBlockProducePeriod->Left);
  Ini->WriteInteger("BlockProducePeriod", "Width",  FrBlockProducePeriod->Width);
  Ini->WriteInteger("BlockProducePeriod", "Height", FrBlockProducePeriod->Height);
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProducePeriod::cxGrid1DBTableView1CellDblClick(TcxCustomGridTableView *Sender,
		  TcxGridTableDataCellViewInfo *ACellViewInfo, TMouseButton AButton, TShiftState AShift, bool &AHandled)
{
  if (CycleQuer->RecordCount == 0)
	 {
	  ShowMessage("Нет данных для просмотра или редактирования.");
	  return;
	  }

  SavePos = CycleQuer->GetBookmark();
  flrec = "E";
  CycleEd->Text     = IntToStr(CycleQuerCycle->Value);
  cbfAdv->ItemIndex = CycleQuerIdFAdv->Value;
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProducePeriod::CycleQuerCalcFields(TDataSet *DataSet)
{
  //--- для совместимости с предыдущей версией списка (статической)
  if (CycleQuerIdFAdv->Value == -1) {CycleQuerListValue->Value = "";}
  if (CycleQuerIdFAdv->Value == 0)  {CycleQuerListValue->Value = "годовой";}
  if (CycleQuerIdFAdv->Value == 1)  {CycleQuerListValue->Value = "1 полугодие";}
  if (CycleQuerIdFAdv->Value == 2)  {CycleQuerListValue->Value = "2 полугодие";}
  if (CycleQuerIdFAdv->Value == 3)  {CycleQuerListValue->Value = "1 квартал";}
  if (CycleQuerIdFAdv->Value == 4)  {CycleQuerListValue->Value = "2 квартал";}
  if (CycleQuerIdFAdv->Value == 5)  {CycleQuerListValue->Value = "3 квартал";}
  if (CycleQuerIdFAdv->Value == 6)  {CycleQuerListValue->Value = "4 квартал";}
  if (CycleQuerIdFAdv->Value == 7)  {CycleQuerListValue->Value = "1 месяц";}
  if (CycleQuerIdFAdv->Value == 8)  {CycleQuerListValue->Value = "18 месяцев";}
  if (CycleQuerIdFAdv->Value == 9)  {CycleQuerListValue->Value = "3 дня";}

  //--- для всех новых периодов подписки
  if ((CycleQuerIdFAdv->Value > 9) && (CycleQuerCycleMonth->Value > 0))
	 {
	  String word = "";
		   int rt = CycleQuerCycleMonth->Value;
		   int ls = IntToStr(rt).Length();

	  if (rt <= 9)
		 {
		  if (rt == 1)                                                                            {word = " месяц";}
		  if (rt == 2 || rt == 3 || rt == 4)                                                      {word = " месяца"; }
		  if (rt == 0 || rt == 5 || rt == 6 || rt == 7 || rt == 8 || rt == 9)                     {word = " месяцев";}
		  }
	  if (rt > 9 && rt < 15)                                                                      {word = " месяцев";}
	  if (rt >= 15)
		 {
		  AnsiString tmp = "";
					 tmp = IntToStr(rt);
		   char di = tmp[ls];
			if (di == '1')                                                                        {word = " месяц";}
			if (di == '2' || di == '3' || di == '4')                                              {word = " месяца"; }
			if (di == '0' || di == '5' || di == '6' || di == '7' || di == '8' || di == '9')       {word = " месяцев";}
		  }
	  CycleQuerListValue->Value = IntToStr(CycleQuerCycleMonth->Value) + word;
	  }
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProducePeriod::CycleEdChange(TObject *Sender)
{
  if (CycleEd->Text.Length() == 0)
	 {
	  CycleEd->Text = "0";
      CycleEd->SelectAll();
	  }

  QString();
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProducePeriod::CycleEdKeyPress(TObject *Sender, System::WideChar &Key)
{
 if ((Key >= '0') && (Key <= '9'))
	   return;

  if (Key == VK_BACK)
	  return;

  if (Key == VK_RETURN)
	 {RzToolButton1Click(Sender);}

  Key = 0;
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProducePeriod::FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)
{
  if (Key == VK_ESCAPE)
	 {
	  CycleEd->Text = "0";
	  cbfAdv->ItemIndex = -1;
	  CycleQuer->FreeBookmark(SavePos);
	  CycleQuer->First();
	  }

  if (Key == VK_DELETE)
	 {
	  if (CycleQuer->RecordCount == 0)
		 {
		  ShowMessage("Нет данных для удаления!");
		  return;
		  }

	  if (CycleQuerListValue->Value != "")  //предохранитель от удаления исторически созданного списка периодов подписки
		 {
		  ShowMessage("Удалить выбранный период подписки нельзя - он имеет исторические корни!");
		  return;
		  }

	  if (CycleQuerIdFAdv->Value < 10)                               //вторая линия обороны от удаления "старых значений"
		 {
		  ShowMessage("Удалить выбранный период подписки нельзя - он тоже имеет исторические корни!");
		  return;
		  }

	  String Caption = "Запрос перед удалением периода";
		 String Text = "Вы действительно хотите удалить период подписки '" + CycleQuerDescription->Value + "'?";
	  switch (Application->MessageBox(Text.w_str(), Caption.w_str(), MB_YESNO + MB_ICONEXCLAMATION + MB_DEFBUTTON2))
			 {
			  case IDYES: {
						   /*перед полным удалением сделать проверку на связь по другим таблицам, чтобы избежать коллапса */
						   DelCQuer->Active = true;
						   DelCQuer->SQL->Clear();
						   DelCQuer->SQL->Add("SELECT CycleId FROM dbo.ProduceBlockCost WHERE CycleId = " + IntToStr(CycleQueridn->Value) + "");
						   DelCQuer->Open();
						   if (DelCQuer->RecordCount != 0)
							  {
							   ShowMessage("Удалить выбранный период подписки нельзя - есть связь в таблице ''Стоимость блоков''.");
							   DelCQuer->Active = false;
							   return;
							   }
						   DelCQuer->Active = false;

						   RaspQuer->Active = true;
						   RaspQuer->SQL->Clear();
						   RaspQuer->SQL->Add("SELECT fAdv FROM dbo.bm_RaspDetail WHERE fAdv = " + IntToStr(CycleQueridn->Value) + "");
						   RaspQuer->Open();
						   if (RaspQuer->RecordCount != 0)
							  {
							   ShowMessage("Удалить выбранный период подписки нельзя - есть связь в таблице ''Детали распоряжений''.");
							   RaspQuer->Active = false;
							   return;
							   }
						   RaspQuer->Active = false;


						   String d1 = "BEGIN TRY "
									   "BEGIN TRANSACTION; "
											  "DELETE FROM [dbo].[ProduceBlockCycle] "
											  "      WHERE (idn = " + IntToStr(CycleQueridn->Value) + ") "
									   "COMMIT TRANSACTION; "
									   "END TRY "
									   "BEGIN CATCH "
									   "      ROLLBACK TRANSACTION; "
									   "      PRINT 'Error transaction!'; "
									   "END CATCH;";

						   DelCComm->CommandText = d1;
						   DelCComm->Execute();

						   QCycle();
						   ShowMessage("Период подписки был успешно удалён!");
						   }
						   break;

			  case  IDNO: {return;}
			  }
	  }
}
//---------------------------------------------------------------------------------------------------------------------------
