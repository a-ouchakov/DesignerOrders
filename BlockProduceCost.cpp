//---------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "BlockProduceCost.h"
#include "BlockProduceAddEd.h"
#include "BlockProducePeriod.h"
#include "BlockProduce.h"
#include "main.h"
#include "Init.h"
//---------------------------------------------------------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzPanel"
#pragma link "RzButton"
#pragma link "RzEdit"
#pragma link "RzLabel"
#pragma link "RzRadChk"
#pragma link "RzSpnEdt"
#pragma link "RzCmboBx"
#pragma link "cxCheckBox"
#pragma link "cxCheckComboBox"
#pragma link "cxContainer"
#pragma link "cxControls"
#pragma link "cxDropDownEdit"
#pragma link "cxEdit"
#pragma link "cxGraphics"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
#pragma link "cxMaskEdit"
#pragma link "cxTextEdit"
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
#pragma resource "*.dfm"
TFrBlockProduceCost *FrBlockProduceCost;

  extern TIniFile *Ini;

		 String flreg = "N";
			  int Cid = -1;
	          int Can = -1;
  extern String mode;

//---------------------------------------------------------------------------------------------------------------------------
void TFrBlockProduceCost::List1()
{
  PeriodBox->Items->Clear();

  ListQuer->Active = true;
  ListQuer->SQL->Clear();
  ListQuer->SQL->Add("SELECT DISTINCT idn, Description FROM dbo.ProduceBlockCycle");
  ListQuer->Open();
  ListQuer->First();
  while (!ListQuer->Eof)
		{
		 PeriodBox->Items->Add(ListQuerDescription->Value);
		 ListQuer->Next();
		 }
  ListQuer->Active = false;
}
//---------------------------------------------------------------------------------------------------------------------------
void TFrBlockProduceCost::List2()
{
  int i = 0;
  chcbKanalSale->Properties->Items->Clear();

  DeptQuer->Active = true;
  DeptQuer->SQL->Clear();
  DeptQuer->SQL->Add("SELECT idn, DeptName FROM dbo.Depts WHERE (FL IS NOT NULL) ORDER BY DeptName");
  DeptQuer->Open();
  DeptQuer->First();
  while (!DeptQuer->Eof)
		{
		 chcbKanalSale->Properties->Items->AddCheckItem(DeptQuer->Fields->Fields[1]->AsString, DeptQuer->Fields->Fields[1]->AsString);
		 chcbKanalSale->Properties->Items->Items[i]->Tag = DeptQuer->Fields->Fields[0]->AsInteger;
         i++;
		 DeptQuer->Next();
		 }
  DeptQuer->Active = false;
}

//---------------------------------------------------------------------------------------------------------------------------
__fastcall TFrBlockProduceCost::TFrBlockProduceCost(TComponent* Owner) : TForm(Owner)
{
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceCost::FormShow(TObject *Sender)
{
  List1();
  List2();
  DescMemoChange(Sender);

  if (flreg == "N")
	 {PeriodBox->ItemIndex = -1;}

  if (flreg == "E")
	 {
	  if (FrBlockProduceAddEd->CostQuerCycleId->Value == -1)
		 {
		  PeriodBox->ItemIndex = -1;
						   Cid = -1;
		  }
	  if (FrBlockProduceAddEd->CostQuerCycleId->Value != -1)
		 {
				   Cid = FrBlockProduceAddEd->CostQuerCycleId->Value;
		  String srchs = FrBlockProduceAddEd->CostQuerCycle->Value;
		  int io = PeriodBox->Perform(CB_FINDSTRING, -1,(LPARAM)srchs.c_str());		  if (io != CB_ERR)			 {PeriodBox->ItemIndex = io;}

	  if (BaseCheck->Checked == true)    //если это базовая стоимость, тогда запрещаем менять период и выбор таблицы периодов
		 {                               //допускаем пользователя только для дальнейшей работы с каналами продаж и добавления
		  PeriodBox->Enabled = false;    //                                                   комментария к стоимости периода
		  RzBitBtn1->Enabled = false;
		  }

		  }
	  if (FrBlockProduceAddEd->CostQuerDept->Value != -1)
		 {chcbKanalSale->Value = FrBlockProduceAddEd->CostQuerDept->Value;}
	  }
}
//-------------------------- Если пользователь стёр введённое значение - заполняем нулевой суммой ---------------------------
void __fastcall TFrBlockProduceCost::CostBlockEdChange(TObject *Sender)
{
  if (CostBlockEd->Text.Length() == 0)
	 {
	  CostBlockEd->Text = "0,00";
	  CostBlockEd->SetFocus();
	  CostBlockEd->SelectAll();
	  }

/*  if (DiscountEd->Value == 0 && BaseCheck->Checked == true) //если скидка не указана - стоимость со скидкой равна стоимости введённой
	 {
	  DiscountEdChange(TObject *Sender)}
  if (DiscountEd->Value > 0)  */                      //    если значение скидки отлично от нуля - считаем стоимость со скидкой
	 DiscountEdChange(Sender);
}
//-------------------------- Преобразование числа в форматированный вид -----------------------------------------------------
void __fastcall TFrBlockProduceCost::CostBlockEdExit(TObject *Sender)
{
  double sl = StrToFloat(CostBlockEd->Text);
						 CostBlockEd->Text = FloatToStrF(sl, ffFixed, 10,2);
}
//-------------------------- Передать фокус ввода следующему компоненту -----------------------------------------------------
void __fastcall TFrBlockProduceCost::CostBlockEdKeyPress(TObject *Sender, System::WideChar &Key)
{
 if ((Key >= '0') && (Key <= '9'))
	  return;

 if (Key == FormatSettings.DecimalSeparator)
	{
	 if ((CostBlockEd->Text).Pos(FormatSettings.DecimalSeparator) != 0)
		  Key = 0;
		  return;
	 }

  if (Key == VK_BACK)
	  return;

  if (Key == VK_RETURN)
	  FindNextControl((TWinControl *)Sender, true, true, false)->SetFocus();

  Key = 0;
}
//---------------------------------------------------------------------------
void __fastcall TFrBlockProduceCost::RzToolButton1Click(TObject *Sender)
{
  if (PeriodBox->ItemIndex == -1)
	 {
	  ShowMessage("Для сохранения цены блока необходимо выбрать период.");
	  PeriodBox->SetFocus();
	  return;
	  }

  float c = StrToFloat(CostBlockEd->Text);

  if (c == 0 && BaseCheck->Checked == true)
	 {
	  ShowMessage("Нельзя сохранить базовую стоимость БЛОКА без указания его базовой стоимости!");
	  CostBlockEd->SetFocus();
	  CostBlockEd->SelectAll();
	  return;
	  }

  if ((FrBlockProduceAddEd->CostQuer->RecordCount == 0 && BaseCheck->Checked != true && ActivCheck->Checked != true) ||
      (FrBlockProduceAddEd->CostQuer->RecordCount == 0 && BaseCheck->Checked != true && ActivCheck->Checked == true))
	 {
      ShowMessage("Сначала требуется создать АКТУАЛЬНУЮ БАЗОВУЮ стоимость блока, прежде чем создавать СОСТАВНУЮ!");
	  return;
	  }

  if (flreg == "N")   //Эту проверку следует переделать???
	 {
	  FrBlockProduceAddEd->CostQuer->First();
	  while (!FrBlockProduceAddEd->CostQuer->Eof)
			{
			 String v1 = TrimRight(TrimLeft(FrBlockProduceAddEd->CostQuerCycle->Value));
			 String v2 = TrimRight(TrimLeft(PeriodBox->Text));

			 for (int i = 0; i < v1.Length(); ++i)
				  v1 = v1.LowerCase();
			 for (int i = 0; i < v2.Length(); ++i)
				  v2 = v2.LowerCase();

			 if (v1 == v2)
				{
				 String Caption = "Ошибка при записи стоимости блока!";
					String Text = "Такое значение: ''" + PeriodBox->Text + "'' периодичности стоимости блока уже существует!";
				 Application->MessageBox(Text.w_str(), Caption.w_str(), MB_ICONHAND | MB_OK);
				 return;
				 }
			 FrBlockProduceAddEd->CostQuer->Next();
			 }
	  }

  String bc = "";
  if (BaseCheck->Checked == true)  {bc = "1";}                                 //установлен признак  "Базовая стоимость блока
  if (BaseCheck->Checked != true)  {bc = "0";}                                 //      снят признак  "Базовая стоимость блока
  String ac = "";
  if (ActivCheck->Checked == true) {ac = "1";}                                 //установлен признак "Активная стоимость блока
  if (ActivCheck->Checked != true) {ac = "0";}                                 //      снят признак "Активная стоимость блока

  if (flreg == "N")
	 {
	  String q1 = "BEGIN TRY "
				  "BEGIN TRANSACTION; "

				  "DECLARE @BlockId     AS int "
				  "    SET @BlockId     = " + IntToStr(FrBlockProduce->BlockQueridn->Value) + " "
				  "DECLARE @CycleId     AS int "
				  "    SET @CycleId     = " + IntToStr(Cid) + " "
				  "DECLARE @Cost        AS money "
				  "    SET @Cost        = " + StringReplace(CostBlockEd->Text, ",", ".", TReplaceFlags()<<rfReplaceAll) + " "
				  "DECLARE @Disc        AS int "
				  "    SET @Disc        = " + DiscountEd->IntValue + " "
				  "DECLARE @CostWD      AS money "
				  "    SET @CostWD      = " + StringReplace(WithDiscEd->Text, ",", ".", TReplaceFlags()<<rfReplaceAll) + " "
				  "DECLARE @BaseCost    AS bit "
				  "    SET @BaseCost    = " + bc + " "
				  "DECLARE @Description	AS nvarchar(255) "
				  "    SET @Description = '" + DescMemo->Text + "' "
				  "DECLARE @Dept        AS int "
				  "    SET @Dept        = " + chcbKanalSale->Value + " "
				  "DECLARE @IdIns       AS int "
				  "    SET @IdIns       = " + IntToStr(PermisHdr.KeyUserStartProgramm) + " "
				  "DECLARE @DateDel     AS datetime "
				  "    SET @DateDel     = NULL "
				  "DECLARE @IdDel       AS int "
				  "    SET @IdDel       = NULL "
				  "DECLARE @Active      AS bit "
				  "    SET @Active      = " + ac + " "
				  "INSERT INTO [dbo].[ProduceBlockCost] "
				  "VALUES(@BlockId, @CycleId, @Cost, @Disc, @CostWD, @BaseCost, @Description, @Dept, GETDATE(), @IdIns, "
				  "       NULL, NULL, @DateDel, @IdDel, @Active) "

				  "COMMIT TRANSACTION; "
				  "END TRY "

				  "BEGIN CATCH "
				  "      ROLLBACK TRANSACTION; "
				  "      PRINT 'Error transaction!'; "
				  "END CATCH;";

	  CostComm->CommandText = q1;
	  CostComm->Execute();
	  FrBlockProduceAddEd->QCost();
	  ShowMessage("Новые стоимость блока и период успешно добавлены!");
	  }

  if (flreg == "E")
	 {
	  String q1 = "BEGIN TRY "
				  "BEGIN TRANSACTION; "

				  "DECLARE @CycleId     AS int "
				  "    SET @CycleId     = " + IntToStr(Cid) + " "
				  "DECLARE @Cost        AS money "
				  "    SET @Cost        = " + StringReplace(CostBlockEd->Text, ",", ".", TReplaceFlags()<<rfReplaceAll) + " "
				  "DECLARE @Disc        AS int "
				  "    SET @Disc        = " + DiscountEd->IntValue + " "
				  "DECLARE @CostWD      AS money "
				  "    SET @CostWD      = " + StringReplace(WithDiscEd->Text, ",", ".", TReplaceFlags()<<rfReplaceAll) + " "
				  "DECLARE @BaseCost    AS bit "
				  "    SET @BaseCost    = " + bc + " "
				  "DECLARE @Description	AS nvarchar(255) "
				  "    SET @Description = '" + DescMemo->Text + "' "
				  "DECLARE @Dept        AS int "
				  "    SET @Dept        = " + chcbKanalSale->Value + " "
				  "DECLARE @DateEdit    AS datetime "
				  "    SET @DateEdit    = GETDATE() "
				  "DECLARE @IdEdit      AS int "
				  "    SET @IdEdit      = " + IntToStr(PermisHdr.KeyUserStartProgramm) + " "
				  "DECLARE @Active      AS bit "
				  "    SET @Active      = " + ac + " "
				  " UPDATE [dbo].[ProduceBlockCost] "
				  "    SET CycleId = @CycleId, Cost = @Cost, Discount = @Disc, CostWitnDiscount = @CostWD, BaseCost = @BaseCost, "
				  "        Description = @Description, Dept = @Dept, DateEdit = @DateEdit, IdEdit = @IdEdit, Active = @Active "
				  "  WHERE idn = " + IntToStr(FrBlockProduceAddEd->CostQueridn->Value) + " "

				  "COMMIT TRANSACTION; "
				  "END TRY "

				  "BEGIN CATCH "
				  "      ROLLBACK TRANSACTION; "
				  "      PRINT 'Error transaction!'; "
				  "END CATCH;";

	  CostComm->CommandText = q1;
	  CostComm->Execute();
	  FrBlockProduceAddEd->QCost();
	  ShowMessage("Стоимость блока успешно изменена!");
	  }

  Close();
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceCost::btCloseClick(TObject *Sender)
{
  Close();
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceCost::DescMemoChange(TObject *Sender)
{
  RzGroupBox4->Caption = " Примечание к стоимости блока: (введено символов " + IntToStr(DescMemo->Text.Length()) + " из 255)";
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceCost::RzBitBtn1Click(TObject *Sender)
{
  #ifdef  TFR
  #undef  TFR
  #undef  FR
  #endif
  #define TFR TFrBlockProducePeriod
  #define FR  FrBlockProducePeriod

  mode = "Cost";
  FR = new TFR(Application);

  FR->Top    = Ini->ReadInteger("BlockProducePeriod", "Top",    100);
  FR->Left   = Ini->ReadInteger("BlockProducePeriod", "Left",   100);
  FR->Width  = Ini->ReadInteger("BlockProducePeriod", "Width",  400);
  FR->Height = Ini->ReadInteger("BlockProducePeriod", "Height", 310);

  FR->ShowModal();
  delete (FR);
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceCost::PeriodBoxChange(TObject *Sender)
{
  ListQuer->Active = true;
  ListQuer->SQL->Clear();
  ListQuer->SQL->Add("SELECT idn, Description FROM dbo.ProduceBlockCycle "
					 " WHERE (Description = '" + PeriodBox->Text + "')");

  ListQuer->Open();
  Cid = ListQueridn->Value;
  if (PeriodBox->ItemIndex == -1)
	 {Cid = -1;}
  ListQuer->Active = false;
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceCost::PeriodBoxKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)
{
  if (Key == VK_ESCAPE)
	 {
	  PeriodBox->ItemIndex = -1;
	  Cid = -1;
	  }

  if (Key == VK_F5)
	 {List1();}
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceCost::BaseCheckClick(TObject *Sender)
{
/*  if (FrBlockProduceAddEd->BaseBox->Checked == true) //если блок создан как базовый - запрещаем пользователю изменить его тип
	 {
	  BaseCheck->Checked = true;
      ShowMessage("Нельзя изменить тип у базового блока на составной!");
	  return;
	  }  */

  if (BaseCheck->Checked == true)
	 {
	  BaseCheck->Font->Color = clBlack;

	  RzLabel1->Font->Color   = clBtnShadow;
	  DiscountEd->Font->Color = clBtnShadow;
	  DiscountEd->Value       = 0;
	  DiscountEd->Enabled     = false;

	  RzLabel2->Font->Color   = clBtnShadow;
	  WithDiscEd->Text        = CostBlockEd->Text;
	  WithDiscEd->ReadOnly    = true;


	  //проверяем - если есть блок с базовой стоимостью и актуальный, тогда подставляем его значения

	  }

  if (BaseCheck->Checked != true)
	 {
	  BaseCheck->Font->Color = clBtnShadow;

	  RzLabel1->Font->Color   = clBlack;
	  DiscountEd->Enabled     = true;
	  DiscountEd->Font->Color = clBlack;

	  RzLabel2->Font->Color   = clBlack;
	  WithDiscEd->Enabled     = true;
	  WithDiscEd->ReadOnly    = false;
	  WithDiscEd->Color       = clWindow;
	  }
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceCost::DiscountEdChange(TObject *Sender)
{
  if (DiscountEd->Value == 0)
	 {WithDiscEd->Text = CostBlockEd->Text;}

  if (DiscountEd->Value == 0 && StrToFloat(CostBlockEd->Text) == 0 ||
	  DiscountEd->Value == 0 && StrToFloat(CostBlockEd->Text) != 0 ||
	  DiscountEd->Value != 0 && StrToFloat(CostBlockEd->Text) == 0)
	 {return;}

  if (DiscountEd->Value != 0 && StrToFloat(CostBlockEd->Text) != 0)
	 {
	  float a = StrToFloat(CostBlockEd->Text);
	  float b = DiscountEd->Value;
	  float c = a - ((a/100)*b);
	  WithDiscEd->Text = FloatToStrF(c, ffFixed, 10,2);
	  }
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceCost::WithDiscEdChange(TObject *Sender)
{
  if (WithDiscEd->Text.Length() == 0)
	 {
	  WithDiscEd->Text = "0,00";
	  WithDiscEd->SetFocus();
	  WithDiscEd->SelectAll();
	  }
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceCost::WithDiscEdKeyPress(TObject *Sender, System::WideChar &Key)
{
 if ((Key >= '0') && (Key <= '9'))
	  return;

 if (Key == FormatSettings.DecimalSeparator)
	{
	 if ((WithDiscEd->Text).Pos(FormatSettings.DecimalSeparator) != 0)
		  Key = 0;
		  return;
	 }

  if (Key == VK_BACK)
	  return;

  if (Key == VK_RETURN)
	  FindNextControl((TWinControl *)Sender, true, true, false)->SetFocus();

  Key = 0;
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceCost::WithDiscEdExit(TObject *Sender)
{
  double sl = StrToFloat(WithDiscEd->Text);
						 WithDiscEd->Text = FloatToStrF(sl, ffFixed, 10,2);
}
//---------------------------------------------------------------------------------------------------------------------------
