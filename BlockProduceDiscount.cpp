//---------------------------------------------------------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "BlockProduceDiscount.h"
#include "BlockProduceAddEd.h"
#include "BlockProduce.h"
#include "main.h"
#include "Init.h"
//---------------------------------------------------------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzEdit"
#pragma link "RzLabel"
#pragma link "RzPanel"
#pragma link "RzRadChk"
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
#pragma link "cxCheckBox"
#pragma link "cxCheckComboBox"
#pragma link "cxContainer"
#pragma link "cxDropDownEdit"
#pragma link "cxMaskEdit"
#pragma link "cxTextEdit"
#pragma resource "*.dfm"
TFrBlockProduceDiscount *FrBlockProduceDiscount;

  String flrDis = "N";
	 int Cyclid = -1;

  String qd = "SELECT pd.idn, pd.BlockId, pd.PStart, pd.PEnd, pd.MINdis, pd.MAXdis, pd.Description, pd.CycleId, pd.AllCycle, "
			  "       pd.DateIns, pd.DateEdit, pd.Active, "
			  "       A1.auFamUser + ' ' + SUBSTRING(A1.auNamUser, 1,1) + '.' + SUBSTRING(A1.auOtcUser, 1,1) + '.' AS Creator, "
			  "       A2.auFamUser + ' ' + SUBSTRING(A2.auNamUser, 1,1) + '.' + SUBSTRING(A2.auOtcUser, 1,1) + '.' AS Editor "
			  "FROM ProduceBlockDiscount AS pd "
			  "     LEFT OUTER JOIN dbo.aa_Users AS A1 ON pd.IdIns = A1.auId "
			  "     LEFT OUTER JOIN dbo.aa_Users AS A2 ON pd.IdEdit = A2.auId ";

  String ap = "";

//---------------------------------------------------------------------------------------------------------------------------
void TFrBlockProduceDiscount::QDisc()
{
  DiscQuer->SQL->Clear();
  if (flrDis == "N")
	 {DiscQuer->SQL->Add(qd + "WHERE pd.idn = -1");}
  if (flrDis == "E")
	 {DiscQuer->SQL->Add(qd + "WHERE pd.idn = " + IntToStr(FrBlockProduceAddEd->DiscQuerProduceBlockDiscId->Value));}
  DiscQuer->Open();
}
//---------------------------------------------------------------------------------------------------------------------------
void TFrBlockProduceDiscount::List1()
{
  int i = 0;
  chcbPeriod->Properties->Items->Clear();

  ListQuer->Active = true;
  ListQuer->SQL->Clear();
  ListQuer->SQL->Add("SELECT IdFAdv, Description FROM dbo.ProduceBlockCycle");
  ListQuer->Open();
  ListQuer->First();
  while (!ListQuer->Eof)
		{
		 chcbPeriod->Properties->Items->AddCheckItem(ListQuer->Fields->Fields[1]->AsString, ListQuer->Fields->Fields[1]->AsString);
		 chcbPeriod->Properties->Items->Items[i]->Tag = ListQuer->Fields->Fields[0]->AsInteger;
         i++;
		 ListQuer->Next();
		 }
  ListQuer->Active = false;
}
//---------------------------------------------------------------------------------------------------------------------------
void TFrBlockProduceDiscount::SaveDisc()
{
  String s = "";
  String ac = "";

  if (ActiveBox->Checked == true) {ac = "1";}                                //установлен признак "јктивность периода скидок"
  if (ActiveBox->Checked != true) {ac = "0";}                                //сн€т       признак "јктивность периода скидок"

  if (flrDis == "N")
	 {
	  s = "BEGIN TRY "
		  "BEGIN TRANSACTION; "

				"DECLARE @BlockId     AS int "
				"    SET @BlockId     = " + IntToStr(FrBlockProduce->BlockQueridn->Value) + " "
				"DECLARE @PStart      AS datetime "
				"    SET @PStart      = CONVERT(DATETIME, '" + StartDTP->Date.FormatString("yyyy-mm-dd") + "', 102) "
				"DECLARE @PEnd        AS datetime "
				"    SET @PEnd        = CONVERT(DATETIME, '" + EndDtDTP->Date.FormatString("yyyy-mm-dd") + "', 102) "
				"DECLARE @MINdis      AS float "
				"    SET @MINdis      = " + StringReplace(MINdiscEd->Text, ",", ".", TReplaceFlags()<<rfReplaceAll) + " "
				"DECLARE @MAXdis      AS float "
				"    SET @MAXdis      = " + StringReplace(MAXdiscEd->Text, ",", ".", TReplaceFlags()<<rfReplaceAll) + " "
				"DECLARE @Description AS nvarchar(128) "
				"    SET @Description = '" + CommentEd->Text + "' "
				"DECLARE @CycleId     AS int "
				"    SET @CycleId     = "  + chcbPeriod->Value + " "
				"DECLARE @AllCycle    AS nvarchar(MAX) "
				"    SET @AllCycle    = '" + ap + "' "
				"DECLARE @IdIns       AS int "
				"    SET @IdIns       = " + IntToStr(PermisHdr.KeyUserStartProgramm) + " "
				"DECLARE @DateDel     AS datetime "
				"    SET @DateDel     = NULL "
				"DECLARE @IdDel       AS int "
				"    SET @IdDel       = NULL "
				"DECLARE @Active      AS bit "
				"    SET @Active      = " + ac + " "
				" INSERT INTO [dbo].[ProduceBlockDiscount] "
				"      VALUES(@BlockId, @PStart, @PEnd, @MINdis, @MAXdis, @Description, @CycleId, @AllCycle, "
				"             GETDATE(), @IdIns, NULL, NULL, @DateDel, @IdDel, @Active) "

				"DECLARE @newID AS int "
				"    SET @newID = SCOPE_IDENTITY(); "
				" SELECT @newID "

				//здесь добавл€ем запись в таблицу св€зи по блоку и скидки
				"DECLARE @ProduceBlockId      AS int "
				"    SET @ProduceBlockId      = " + IntToStr(FrBlockProduce->BlockQueridn->Value) + " "
				"DECLARE @ProduceBlockCycleId AS int "
				"    SET @ProduceBlockCycleId = " + IntToStr(Cyclid) + " "
				"DECLARE @ProduceBlockDiscId  AS int "
				"    SET @ProduceBlockDiscId  = @newID "         //это idn из ProduceBlockDiscount - только что созданный
				" INSERT INTO [dbo].[ProduceBlockDiscountLink] "
				" VALUES(@ProduceBlockId, @ProduceBlockCycleId, @ProduceBlockDiscId, GETDATE(), @IdIns, NULL, NULL, NULL, NULL) "

		  "COMMIT TRANSACTION; "
		  "END TRY "

		  "BEGIN CATCH "
		  "      ROLLBACK TRANSACTION; "
		  "      PRINT 'Error transaction!'; "
		  "END CATCH;";

	  DiscComm->CommandText = s;
	  DiscComm->Execute();

	  FrBlockProduceAddEd->QDisc();
	  flrDis = "E";
	  QDisc();

	  ShowMessage("Ќовые период и скидки дл€ блока успешно добавлены!");
	  Close();
	  return;
	  }

  if (flrDis == "E")
	 {
	  s = "BEGIN TRY "
		  "BEGIN TRANSACTION; "

				"DECLARE @PStart      AS datetime "
				"    SET @PStart      = CONVERT(DATETIME, '" + StartDTP->Date.FormatString("yyyy-mm-dd") + "', 102) "
				"DECLARE @PEnd        AS datetime "
				"    SET @PEnd        = CONVERT(DATETIME, '" + EndDtDTP->Date.FormatString("yyyy-mm-dd") + "', 102) "
				"DECLARE @MINdis      AS float "
				"    SET @MINdis      = " + StringReplace(MINdiscEd->Text, ",", ".", TReplaceFlags()<<rfReplaceAll) + " "
				"DECLARE @MAXdis      AS float "
				"    SET @MAXdis      = " + StringReplace(MAXdiscEd->Text, ",", ".", TReplaceFlags()<<rfReplaceAll) + " "
				"DECLARE @Description AS nvarchar(128) "
				"    SET @Description = '" + CommentEd->Text + "' "
				"DECLARE @CycleId     AS int "
				"    SET @CycleId     = "  + chcbPeriod->Value + " "
				"DECLARE @AllCycle    AS nvarchar(MAX) "
				"    SET @AllCycle    = '" + ap + "' "
				"DECLARE @DateEdit    AS datetime "
				"    SET @DateEdit    = GETDATE() "
				"DECLARE @IdEdit      AS int "
				"    SET @IdEdit      = " + IntToStr(PermisHdr.KeyUserStartProgramm) + " "
				"DECLARE @Active      AS bit "
				"    SET @Active      = " + ac + " "
				" UPDATE [dbo].[ProduceBlockDiscount] "
				"    SET PStart = @PStart, PEnd = @PEnd, MINdis = @MINdis, MAXdis = @MAXdis, Description = @Description, "
				"        CycleId = @CycleId, AllCycle = @AllCycle, DateEdit = @DateEdit, IdEdit = @IdEdit, Active = @Active "
				"  WHERE idn = " + IntToStr(DiscQueridn->Value) + " "

				"DECLARE @EditDate AS datetime "
				"    SET @EditDate = GETDATE() "
				" UPDATE [dbo].[ProduceBlockDiscountLink] "
				"    SET DateEdit = @EditDate, IdEdit = @IdEdit "
				"  WHERE ProduceBlockDiscId = " + IntToStr(DiscQueridn->Value) + " "

		  "COMMIT TRANSACTION; "
		  "END TRY "

		  "BEGIN CATCH "
		  "      ROLLBACK TRANSACTION; "
		  "      PRINT 'Error transaction!'; "
		  "END CATCH;";

	  DiscComm->CommandText = s;
	  DiscComm->Execute();
	  QDisc();
	  FrBlockProduceAddEd->QDisc();
	  FrBlockProduceAddEd->DiscQuer->Locate("ProduceBlockDiscId", DiscQueridn->Value, TLocateOptions()<<loCaseInsensitive);
	  ShowMessage("ƒанные о периоде скидок дл€ блока успешно изменены!");
	  Close();
	  }
}
//---------------------------------------------------------------------------------------------------------------------------
__fastcall TFrBlockProduceDiscount::TFrBlockProduceDiscount(TComponent* Owner) : TForm(Owner)
{
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceDiscount::btCloseClick(TObject *Sender)
{
  Close();
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceDiscount::SaveButtClick(TObject *Sender)
{
  TDateTime dts = StartDTP->Date.FormatString("dd.mm.yyyy");
  TDateTime dte = EndDtDTP->Date.FormatString("dd.mm.yyyy");

  if ((double)(dte < dts))
	 {
	  ShowMessage("ƒата окончани€ периода не может быть раньше даты начала!");
	  EndDtDTP->Date = StartDTP->Date;
	  EndDtDTP->SetFocus();
	  return;
	  }

  if ((double)(dte == dts))
	 {
	  ShowMessage("ƒаты начала и окончани€ периода совпадают.\nѕожалуйста, установите разницу в датах хот€ бы в один день!");
	  EndDtDTP->SetFocus();
	  return;
	  }

  if (MINdiscEd->Value == 0 && MAXdiscEd->Value == 0)
	 {
      ShowMessage("¬ы не указали значени€ минимальной и максимальной скидок!");
	  return;
	  }

  if ((MAXdiscEd->Value > 0 && MINdiscEd->Value > 0) && (MAXdiscEd->Value < MINdiscEd->Value))
	 {
	  ShowMessage("ћаксимальное значение предоставл€емой скидки не может быть ниже минимальной (увеличьте значение)!");
	  MAXdiscEd->SetFocus();
	  MAXdiscEd->SelectAll();
	  return;
	  }

  if ((MINdiscEd->Value > 0 && MAXdiscEd->Value > 0) && (MINdiscEd->Value == MAXdiscEd->Value))
	 {
	  ShowMessage("ѕожалуйста, измените минимальное или максимальное значение скидки, сейчас они тождественны!");
	  return;
	  }

  if (MAXdiscEd->Value != 0 && MINdiscEd->Value != 0 && MAXdiscEd->Value > MINdiscEd->Value)
	 {
	  chcbPeriodExit(Sender);
	  if (ap.Length() == 0)
		 {
		  ShowMessage("“ребуетс€ выбрать хот€ бы один период подписки!");
		  return;
		  }
	  }

  if (flrDis == "N")
	 {
	  String Caption = "«апрос перед сохранением...";
		 String Text = "ѕожалуйста, перед сохранением подтвердите, что периодичность выпуска блока выбрана верно!\n\n"
		               "ѕосле сохранени€ изменить набор выбранных периодов будет нельз€!\n\n"
					   "—ейчас вы выбрали следующие периоды: \n\n" + ap + "\n\n"
					   "ѕодтверждете ¬аш выбор?\n''ƒа'' - данные будут сохранены.\n''Ќет'' - ¬ы можете изменить набор периодов.";
	  switch (Application->MessageBox(Text.w_str(), Caption.w_str(), MB_YESNO + MB_ICONEXCLAMATION + MB_DEFBUTTON2))
			 {
			  case IDYES:
						  {SaveDisc();}
						   break;
			  case  IDNO: {return;}
			  }
	  return;
	  }

  if (flrDis == "E")
	 {SaveDisc();}
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceDiscount::ActiveBoxClick(TObject *Sender)
{
  if (ActiveBox->Checked == true)
	 {ActiveBox->Caption = "јктивность периода скидок (период активен)";}
  else {ActiveBox->Caption = "јктивность периода скидок (период неактивен)";}
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceDiscount::FormShow(TObject *Sender)
{
  DiscQuer->Active = true;
  QDisc();
  List1();

  //          если при создании нового блока не выбран ни один период подписки - блокируем полностью список периодов подписки
  if (FrBlockProduce->BlockQuerListId->Value == -1)
	 {
      chcbPeriod->StyleDisabled->Color = clBtnFace;
	  chcbPeriod->Enabled = false;
	  }

  if (flrDis == "N")
	 {//когда создаЄм новый период скидок, грузим в список периодов все отмеченные, чтобы у пользовател€ было из чего выбирать
	  Cyclid = FrBlockProduceAddEd->CostQuerCycleId->Value;
	  chcbPeriod->Value = FrBlockProduce->BlockQuerListId->Value;

	  for (int i = 0; i < chcbPeriod->Properties->Items->Count; i++)
		  {
		   if (chcbPeriod->States[i] != cbsChecked)
			  {chcbPeriod->Properties->Items->Items[i]->Enabled = false;}
		   }
	  }

  if (flrDis == "E")
	 {
	  StartDTP->Date    = FrBlockProduceAddEd->DiscQuerPStart->Value;
	  EndDtDTP->Date    = FrBlockProduceAddEd->DiscQuerPEnd->Value;
	  MINdiscEd->Value  = FrBlockProduceAddEd->DiscQuerMINdis->Value;
	  MAXdiscEd->Value  = FrBlockProduceAddEd->DiscQuerMAXdis->Value;
	  CommentEd->Text   = FrBlockProduceAddEd->DiscQuerDescription->Value;
	  chcbPeriod->Value = DiscQuerCycleId->Value;
	  if (FrBlockProduceAddEd->DiscQuerActive->Value == 0)
		 {ActiveBox->Checked = false;}
	  if (FrBlockProduceAddEd->DiscQuerActive->Value == 1)
		 {ActiveBox->Checked = true;}

	  if (FrBlockProduce->BlockQuerListId->Value != -1)
		 {
		  chcbPeriod->Value = DiscQuerCycleId->Value;

		  for (int i = 0; i < chcbPeriod->Properties->Items->Count; i++)
			  {
			   if (chcbPeriod->States[i] != cbsChecked)
				  {chcbPeriod->Properties->Items->Items[i]->Enabled = false;}
			   if (chcbPeriod->States[i] == cbsChecked)
				  {chcbPeriod->Properties->Items->Items[i]->Enabled = false;}
			   }
		  }
	  }
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceDiscount::FormClose(TObject *Sender, TCloseAction &Action)
{
  DiscQuer->Active = false;
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceDiscount::chcbPeriodExit(TObject *Sender)
{
  ap = "";
  for (int i = 0; i < chcbPeriod->Properties->Items->Count; i++)
	  {
	   if (chcbPeriod->States[i] == cbsChecked)
		  {ap = ap + chcbPeriod->Properties->Items->Items[i]->Description + ", ";}
	   }
  ap = ap.TrimRight();
  ap = ap.Delete(ap.Length(), 1);
}
//---------------------------------------------------------------------------------------------------------------------------
