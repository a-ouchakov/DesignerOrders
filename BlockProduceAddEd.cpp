//---------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "BlockProduceAddEd.h"
#include "BlockProduceCost.h"
#include "BlockProduceDiscount.h"
#include "BlockProduce.h"
#include "FindProduce.h"
#include "BlockProducePeriod.h"
#include "main.h"
#include "Init.h"
//---------------------------------------------------------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzPanel"
#pragma link "RzEdit"
#pragma link "RzLabel"
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
#pragma link "cxExtEditRepositoryItems"
#pragma resource "*.dfm"
TFrBlockProduceAddEd *FrBlockProduceAddEd;
char flBlockProduceAddEd;

  extern TIniFile *Ini;

		 String flAdd = "";
		 String idBlock = "";
		 String IdProduct = "";                                                       //    FrFindProduce->QProduceidn->Value
		 String regimDlg;
  extern String flreg;
  extern String flrDis;
  extern int Cyclid;
  extern String mode;
  String idtmp = "{00000000-0000-0000-0000-000000000000}";                            //временный idn вместо SCOPE_IDENTITY()

  String q1 = "SELECT bc.idn, bc.BlockId, pb.idn AS CycleId, pb.Description AS Cycle, bc.Cost, bc.Discount, "
			  "       bc.CostWitnDiscount, bc.BaseCost, bc.Description, bc.Dept, bc.DateIns, bc.DateEdit, bc.Active, "
			  "       A1.auFamUser + ' ' + SUBSTRING(A1.auNamUser, 1,1) + '.' + SUBSTRING(A1.auOtcUser, 1,1) + '.' AS Creator, "
			  "       A2.auFamUser + ' ' + SUBSTRING(A2.auNamUser, 1,1) + '.' + SUBSTRING(A2.auOtcUser, 1,1) + '.' AS Editor "
			  "  FROM dbo.ProduceBlockCost AS bc "
			  "       LEFT OUTER JOIN dbo.ProduceBlockCycle AS pb ON pb.idn = bc.CycleId "
			  "       LEFT OUTER JOIN dbo.aa_Users AS A1 ON bc.IdIns = A1.auId "
			  "       LEFT OUTER JOIN dbo.aa_Users AS A2 ON bc.IdEdit = A2.auId ";
  String q2 = "";

  String d1 = "SELECT L.ProduceBlockId, L.ProduceBlockCycleId, L.ProduceBlockDiscId, bd.PStart, bd.PEnd, bd.MINdis, "
			  "       bd.MAXdis, bd.Description, bd.AllCycle, bc.Description AS Period, bd.DateIns, bd.IdIns, bd.DateEdit, "
			  "       bd.IdEdit, bd.Active "
			  "  FROM dbo.ProduceBlockDiscountLink AS L "
			  "       LEFT OUTER JOIN dbo.ProduceBlockDiscount AS bd ON L.ProduceBlockDiscId = bd.idn "
			  "       LEFT OUTER JOIN dbo.ProduceBlockCycle AS bc ON bd.CycleId = bc.IdFAdv ";
  String d2 = "";

//---------------------------------------------------------------------------------------------------------------------------
void TFrBlockProduceAddEd::QCost()
{
  if (flAdd == "N")
	 {q2 = "WHERE bc.BlockId = -1";}
  if (flAdd == "E")
	 {q2 = "WHERE bc.BlockId = " + IntToStr(FrBlockProduce->BlockQueridn->Value);}

  CostQuer->SQL->Clear();
  CostQuer->SQL->Add(q1 + q2);
  CostQuer->Open();

  if (flreg == "N")
	 {CostQuer->Last();}

  if (flreg == "E")
	 {
	  CostQuer->GotoBookmark(SaveCost);
	  CostQuer->FreeBookmark(SaveCost);
	  }
}
//---------------------------------------------------------------------------------------------------------------------------
void TFrBlockProduceAddEd::QDisc()
{
  if (flAdd == "N")
	 {d2 = "WHERE L.ProduceBlockId = -1";}
  if (flAdd == "E")
	 {d2 = "WHERE L.ProduceBlockId = " + IntToStr(FrBlockProduce->BlockQueridn->Value);}
  if (flAdd == "K")
	 {d2 = "WHERE L.ProduceBlockId = " + IntToStr(FrBlockProduce->BlockQueridn->Value);}

  DiscQuer->SQL->Clear();
  DiscQuer->SQL->Add(d1 + d2);
  DiscQuer->Open();

  if (flrDis == "N")
	 {DiscQuer->Last();}
}
//---------------------------------------------------------------------------------------------------------------------------
void TFrBlockProduceAddEd::List1()
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
void TFrBlockProduceAddEd::QProducts()
{
  String qp = "SELECT bl.idn AS PBLidn, pc.idn, lb.iText "
			  "  FROM dbo.ProduceBlockLink AS bl "
			  "       LEFT OUTER JOIN dbo.all_AdvProduceClass AS pc ON (pc.idn = bl.IdProduct) "
			  "       LEFT OUTER JOIN dbo.spl_LbText512       AS lb ON (lb.Idn = pc.id512Name) "
			  " WHERE IdBlock = " + idBlock + " "
			  "   AND lb.DateDel IS NULL"
			  "   AND bl.DateDel IS NULL";
  ProdQuer->SQL->Clear();
  ProdQuer->SQL->Add(qp);
  ProdQuer->Open();

  RzGroupBox2->Caption = " Продукты, включённые в состав блока: (всего продуктов в блоке: "
                         + IntToStr(ProdQuer->RecordCount) + ")";
}
//---------------------------------------------------------------------------------------------------------------------------
void TFrBlockProduceAddEd::DeleteProduct()
{
	  String Caption = "Внимание!";
		 String Text = "Вы действительно хотите удалить продукт?";
	  switch (Application->MessageBox(Text.w_str(), Caption.w_str(), MB_YESNO + MB_ICONEXCLAMATION + MB_DEFBUTTON2))
			 {
			  case IDYES: {
						   String dp = "BEGIN TRY "
									   "BEGIN TRANSACTION; "

									   "DECLARE @DateDel AS datetime "
									   "    SET @DateDel = GETDATE() "
									   "DECLARE @IdDel   AS int "
									   "    SET @IdDel   = " + IntToStr(PermisHdr.KeyUserStartProgramm) + " "

									   "UPDATE [dbo].[ProduceBlockLink] "
									   "   SET DateDel = @DateDel, IdDel = @IdDel "
									   " WHERE idn = " + IntToStr(ProdQuerPBLidn->Value) + " "

									   "COMMIT TRANSACTION; "
									   "END TRY "

									   "BEGIN CATCH "
									   "      ROLLBACK TRANSACTION; "
									   "      PRINT 'Error transaction!'; "
									   "END CATCH;";

						   DelPComm->CommandText = dp;
						   DelPComm->Execute();
						   QProducts();
						   ShowMessage("Выбранный продукт был успешно удалён из состава блока.");
						   }
				   break;
			  case IDNO:  {return;}
			  }
}
//---------------------------------------------------------------------------------------------------------------------------
void TFrBlockProduceAddEd::IDgen()
{
  HRESULT hr;
  GUID guid;		  hr = CoCreateGuid(&guid);  if (!FAILED(hr))	 {	  LPOLESTR szGUID = new WCHAR[39];	  StringFromGUID2(guid, szGUID, 39);	  idtmp = szGUID;	  }	  else		 {		  ShowMessage("ID is fail!");		  return;		  }
}
//---------------------------------------------------------------------------------------------------------------------------
void TFrBlockProduceAddEd::CopyBlock()
{
  int PrevBlockIdn = FrBlockProduce->BlockQueridn->Value;         //idn Copy-блока для получения Цены блока и Периодов скидки

  NameMemo->Text   = "КОПИЯ_" + FrBlockProduce->BlockQuerBlockName->Value;
  TermsMemo->Text  = FrBlockProduce->BlockQuerBlockTerm->Value;
  DescRich->Text   = FrBlockProduce->BlockQuerBlockDesc->Value;

  if (FrBlockProduce->BlockQuerListId->Value != -1)
	 {chcbPeriod->Value = FrBlockProduce->BlockQuerListId->Value;}
  if (!FrBlockProduce->BlockQuerCompositionOfPI->IsNull)
	 {CompositionPIBox->Value = FrBlockProduce->BlockQuerCompositionOfPI->Value;}

  if (FrBlockProduce->BlockQuerBlockType->Value == "Базовый")
	 {BaseButt->Checked = true;}
  if (FrBlockProduce->BlockQuerBlockType->Value == "Составной")
	 {MultButt->Checked = true;}

  //здесь создаём "Новый Блок", затем создаём-копируем цены блока из выбранного для копирования блока
  String q0 = "";
  String type = "";
  if (BaseButt->Checked == true)
	 {type = "1";}
  if (MultButt->Checked == true)
	 {type = "0";}

  IDgen();                         //создаём временный idtmp ({00000000-0000-0000-0000-000000000000}) вместо SCOPE_IDENTITY()
  q0 = "BEGIN TRY "
	   "BEGIN TRANSACTION; "

	   /*                          //при создании блока через копирование - не вносим его название при создании записи
	   "DECLARE @BlockName    AS nvarchar(MAX) "
	   "    SET @BlockName    = '" + NameMemo->Text + "' "
	   "DECLARE @idMBlockName AS int "
	   */
	   "DECLARE @BlockTerm    AS nvarchar(MAX) "
	   "    SET @BlockTerm    = '" + TermsMemo->Text + "' "
	   "DECLARE @idMBlockTerm AS int "

	   "DECLARE @BlockDesc    AS nvarchar(MAX) "
	   "    SET @BlockDesc    = '" + DescRich->Text + "' "
	   "DECLARE @idMBlockDesc AS int "

	   "DECLARE @idLevel      AS int "

	   "DECLARE @ListId     AS int "
	   "    SET @ListId     = " + chcbPeriod->Value + " "
	   "DECLARE @BlockType  AS bit "
	   "    SET @BlockType  = " + type + " "
	   "DECLARE @DateIns    AS datetime "
	   "    SET @DateIns    = GETDATE() "
	   "DECLARE @IdIns      AS int "
	   "    SET @IdIns      =  " + IntToStr(PermisHdr.KeyUserStartProgramm) + " "
	   "DECLARE @DateDel    AS datetime "
	   "    SET @DateDel    = NULL "
	   "DECLARE @IdDel      AS int "
	   "    SET @IdDel      = NULL "
	   "DECLARE @tmpidn     AS uniqueidentifier "
	   "    SET @tmpidn     = '" + idtmp + "' "
	   "DECLARE @CompositionOfPI AS int "
	   "    SET @CompositionOfPI = " + CompositionPIBox->Value + " "
	   "DECLARE @LinkIdBlock  AS int "
	   "    SET @LinkIdBlock  = NULL "
	   "DECLARE @LinkDateLast AS datetime "
	   "    SET @LinkDateLast = NULL "
	   /*
	   "EXEC dbo.prLb_TextTrim @BlockName OUTPUT "
	   "IF LEN(@BlockName) > 0 "
	   "EXEC dbo.prLb_GetNumField 'ProduceBlock','idMBlockName','spl_LbText', @BlockName OUTPUT, @idLevel OUTPUT, @idMBlockName OUTPUT "
	   */
	   "EXEC dbo.prLb_TextTrim @BlockTerm OUTPUT "
	   "IF LEN(@BlockTerm) > 0 "
	   "EXEC dbo.prLb_GetNumField 'ProduceBlock','idMBlockTerm','spl_LbText', @BlockTerm OUTPUT, @idLevel OUTPUT, @idMBlockTerm OUTPUT "

	   "EXEC dbo.prLb_TextTrim @BlockDesc OUTPUT "
	   "IF LEN(@BlockDesc) > 0 "
	   "EXEC dbo.prLb_GetNumField 'ProduceBlock','idMBlockDesc','spl_LbText', @BlockDesc OUTPUT, @idLevel OUTPUT, @idMBlockDesc OUTPUT "

	   "INSERT INTO [dbo].[ProduceBlock] "
	   /*"VALUES(@idMBlockName, @idMBlockTerm, @idMBlockDesc, @ListId, @BlockType, @DateIns, @IdIns, "
	   "       NULL, NULL, @DateDel, @IdDel, @tmpidn, @CompositionOfPI, @LinkIdBlock, @LinkDateLast) "*/
	   "VALUES(NULL, @idMBlockTerm, @idMBlockDesc, @ListId, @BlockType, @DateIns, @IdIns, "
	   "       NULL, NULL, @DateDel, @IdDel, @tmpidn, @CompositionOfPI, @LinkIdBlock, @LinkDateLast) "

	   "COMMIT TRANSACTION; "
	   "END TRY "

	   "BEGIN CATCH "
	   "      ROLLBACK TRANSACTION; "
	   "      PRINT 'Error transaction!'; "
	   "END CATCH;";

  BlockComm->CommandText = q0;
  BlockComm->Execute();

  String q5 = "SELECT idn "                                    //по временному idtmp выбираем полученный idn созданного блока
			  "  FROM dbo.ProduceBlock "
			  " WHERE tmpidn = '" + idtmp + "'";

  InsBQuer->Active = true;
  InsBQuer->SQL->Clear();
  InsBQuer->SQL->Add(q5);
  InsBQuer->Open();

  idBlock = IntToStr(InsBQueridn->Value);

  FrBlockProduce->QOpen();
  FrBlockProduce->BlockQuer->Locate("idn", InsBQueridn->Value, TLocateOptions() <<loCaseInsensitive);
  FrBlockProduce->SavePosS = FrBlockProduce->BlockQuer->GetBookmark();

  String q6 = "SELECT * FROM dbo.ProduceBlockCost "
			  " WHERE BlockId = " + IntToStr(PrevBlockIdn) + " "
			  "   AND DateDel IS NULL";
  q6Quer->Active = true;
  q6Quer->SQL->Clear();
  q6Quer->SQL->Add(q6);
  q6Quer->Open();
  if (q6Quer->RecordCount > 0)
	 {
	  q6Quer->First();        //если для блока-родителя были указаны периодичность и стоимость - копируем все DateDel IS NULL
	  while (!q6Quer->Eof)
			{
			 String bit = "";
			 if (q6QuerBaseCost->Value == 1) {bit = "1";}
			 if (q6QuerBaseCost->Value == 0) {bit = "0";}

			 String q61 = "BEGIN TRY "
						  "BEGIN TRANSACTION; "

						  "DECLARE @BlockId     AS int "
						  "    SET @BlockId     = " + idBlock + " "
						  "DECLARE @CycleId     AS int "
						  "    SET @CycleId     = " + IntToStr(q6QuerCycleId->Value) + " "
						  "DECLARE @Cost        AS money "
						  "    SET @Cost        = " + q6QuerCost->Value + " "
						  "DECLARE @Disc        AS int "
						  "    SET @Disc        = " + q6QuerDiscount->Value + " "
						  "DECLARE @CostWD      AS money "
						  "    SET @CostWD      = " + q6QuerCostWitnDiscount->Value + " "
						  "DECLARE @BaseCost    AS bit "
						  "    SET @BaseCost    = " + bit + " "
						  "DECLARE @Description	AS nvarchar(255) "
						  "    SET @Description = '" + q6QuerDescription->Value + "' "
						  "DECLARE @Dept        AS int "
						  "    SET @Dept        = " + q6QuerDept->Value + " "
						  "DECLARE @IdIns       AS int "
						  "    SET @IdIns       = " + IntToStr(PermisHdr.KeyUserStartProgramm) + " "
						  "DECLARE @DateDel     AS datetime "
						  "    SET @DateDel     = NULL "
						  "DECLARE @IdDel       AS int "
						  "    SET @IdDel       = NULL "
						  "DECLARE @Active      AS bit "
						  "    SET @Active      = 1 "
						  "INSERT INTO [dbo].[ProduceBlockCost] "
						  "     VALUES(@BlockId, @CycleId, @Cost, @Disc, @CostWD, @BaseCost, @Description, @Dept, "
						  "            GETDATE(), @IdIns, NULL, NULL, @DateDel, @IdDel, @Active) "

						  "COMMIT TRANSACTION; "
						  "END TRY "

						  "BEGIN CATCH "
						  "      ROLLBACK TRANSACTION; "
						  "      PRINT 'Error transaction!'; "
						  "END CATCH;";

			 CostComm->CommandText = q61;
			 CostComm->Execute();
			 q6Quer->Next();
			 }   //end while (!q6Quer->Eof)
	  }          //end if (q6Quer->RecordCount != 0)
  q6Quer->Active = false;

  String q7 = "SELECT * FROM dbo.ProduceBlockDiscount "
			  " WHERE BlockId = " + IntToStr(PrevBlockIdn) + " "
			  "   AND DateDel IS NULL";
  q7Quer->Active = true;
  q7Quer->SQL->Clear();
  q7Quer->SQL->Add(q7);
  q7Quer->Open();
  if (q7Quer->RecordCount > 0)
	 {
	  q7Quer->First();  //если для блока-родителя были указаны Период действия и доступные скидки для блока - копируем все DateDel IS NULL
	  while (!q7Quer->Eof)
			{
			 String q71 = "BEGIN TRY "
						  "BEGIN TRANSACTION; "

						  "DECLARE @BlockId     AS int "
						  "    SET @BlockId     = " + idBlock + " "
						  "DECLARE @PStart      AS datetime "
						  "    SET @PStart      = CONVERT(DATETIME, '" + q7QuerPStart->Value.FormatString("yyyy-mm-dd") + "', 102) "
						  "DECLARE @PEnd        AS datetime "
						  "    SET @PEnd        = CONVERT(DATETIME, '" + q7QuerPEnd->Value.FormatString("yyyy-mm-dd") + "', 102) "
						  "DECLARE @MINdis      AS float "
						  "    SET @MINdis      = " + q7QuerMINdis->Value + " "
						  "DECLARE @MAXdis      AS float "
						  "    SET @MAXdis      = " + q7QuerMAXdis->Value + " "
						  "DECLARE @Description AS nvarchar(128) "
						  "    SET @Description = '" + q7QuerDescription->Value + "' "
						  "DECLARE @CycleId     AS int "
						  "    SET @CycleId     = "  + IntToStr(q7QuerCycleId->Value) + " "
						  "DECLARE @AllCycle    AS nvarchar(MAX) "
						  "    SET @AllCycle    = '" + q7QuerAllCycle->Value + "' "
						  "DECLARE @DateIns     AS datetime "
						  "    SET @DateIns     = GETDATE() "
						  "DECLARE @IdIns       AS int "
						  "    SET @IdIns       = " + IntToStr(PermisHdr.KeyUserStartProgramm) + " "
						  "DECLARE @DateEdit    AS datetime "
						  "    SET @DateEdit    = NULL "
						  "DECLARE @IdEdit      AS int "
						  "    SET @IdEdit      = NULL "
						  "DECLARE @DateDel     AS datetime "
						  "    SET @DateDel     = NULL "
						  "DECLARE @IdDel       AS int "
						  "    SET @IdDel       = NULL "
						  "DECLARE @Active      AS bit "
						  "    SET @Active      = 1 "
						  " INSERT INTO [dbo].[ProduceBlockDiscount] "
						  "      VALUES(@BlockId, @PStart, @PEnd, @MINdis, @MAXdis, @Description, @CycleId, @AllCycle, "
						  "             @DateIns, @IdIns, @DateEdit, @IdEdit, @DateDel, @IdDel, @Active) "

						  "DECLARE @newID AS int "
						  "    SET @newID = SCOPE_IDENTITY(); "
						  " SELECT @newID "

						  //здесь добавляем запись в таблицу связи по блоку и скидки
						  "DECLARE @ProduceBlockId      AS int "
						  "    SET @ProduceBlockId      = " + idBlock + " "
						  "DECLARE @ProduceBlockCycleId AS int "
						  "    SET @ProduceBlockCycleId = " + IntToStr(q7QuerCycleId->Value) + " "
						  "DECLARE @ProduceBlockDiscId  AS int "
						  "    SET @ProduceBlockDiscId  = @newID "         //это idn из ProduceBlockDiscount - только что созданный
						  " INSERT INTO [dbo].[ProduceBlockDiscountLink] "
						  " VALUES(@ProduceBlockId, @ProduceBlockCycleId, @ProduceBlockDiscId, "
						  "        GETDATE(), @IdIns, NULL, NULL, NULL, NULL) "

						  "COMMIT TRANSACTION; "
						  "END TRY "

						  "BEGIN CATCH "
						  "      ROLLBACK TRANSACTION; "
						  "      PRINT 'Error transaction!'; "
						  "END CATCH;";

			 DiscComm->CommandText = q71;
			 DiscComm->Execute();
			 q7Quer->Next();
			 }    //end while (!q7Quer->Eof)
	  }           //end if (q7Quer->RecordCount != 0)
  q7Quer->Active = false;


  String q8 = "SELECT IdBlock, IdProduct "
			  "  FROM dbo.ProduceBlockLink "
			  " WHERE DateDel IS NULL "
			  "   AND IdBlock = " + IntToStr(PrevBlockIdn);
  q8Quer->Active = true;
  q8Quer->SQL->Clear();
  q8Quer->SQL->Add(q8);
  q8Quer->Open();

  if (q8Quer->RecordCount > 0)
	 {
	  q8Quer->First();         //если для блока-родителя были указаны продукты в составе блока - копируем все DateDel IS NULL
	  while (!q8Quer->Eof)
			{
			 String q81 = "BEGIN TRY "
						  "BEGIN TRANSACTION; "

						  "DECLARE @IdBlock   AS int "
						  "    SET @IdBlock   = " + idBlock + " "
						  "DECLARE @IdProduct AS int "
						  "    SET @IdProduct = " + IntToStr(q8QuerIdProduct->Value) + " "
						  "DECLARE @DateIns   AS datetime "
						  "    SET @DateIns   = GETDATE() "
						  "DECLARE @DateDel   AS datetime "
						  "    SET @DateDel   = NULL "
						  "DECLARE @IdIns     AS int "
						  "    SET @IdIns     = " + IntToStr(PermisHdr.KeyUserStartProgramm) + " "
						  "DECLARE @IdDel     AS int "
						  "    SET @IdDel     = NULL "

						  " INSERT INTO [dbo].[ProduceBlockLink] "
						  " VALUES(@IdBlock, @IdProduct, @DateIns, @DateDel, @IdIns, @IdDel) "

						  "COMMIT TRANSACTION; "
						  "END TRY "

						  "BEGIN CATCH "
						  "      ROLLBACK TRANSACTION; "
						  "      PRINT 'Error transaction!'; "
						  "END CATCH;";

			 ProdComm->CommandText = q81;
			 ProdComm->Execute();
             q8Quer->Next();
			 }
	  }
  q8Quer->Active = false;

  InsBQuer->Active = false;

  if (BaseButt->Checked == true)
	 {
	  BaseButt->Enabled = false;                   //      запрещаем пользователю (при типе блока "БАЗОВЫЙ") изменять его тип
	  MultButt->Enabled = false;                   //      запрещаем пользователю (при типе блока "БАЗОВЫЙ") изменять его тип
	  }

  btMoney->Enabled    = true;      //разрешаем пользователю при редактировании блока добавлять и редактировать периоды и цены
  btDiscount->Enabled = true;      //разрешаем пользователю при редактировании блока добавлять и редактировать периоды скидок

  flAdd = "E";                                                                  //   переводимся в режим редактирования блока
  QCost();                                                                      //вызываем функцию обновления периодов  и цен
  QDisc();                                                                      //вызываем функцию обновления периодов скидок
  idBlock = IntToStr(FrBlockProduce->BlockQueridn->Value);
  QProducts();
  Caption = "Редактирование блока";

  ShowMessage("Новый блок успешно создан!\n\n"
              "Теперь Вы можете добавить дополнительные периоды и цены для блока.");
}
//---------------------------------------------------------------------------------------------------------------------------
__fastcall TFrBlockProduceAddEd::TFrBlockProduceAddEd(TComponent* Owner) : TForm(Owner)
{
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceAddEd::FormShow(TObject *Sender)
{
  CostQuer->Active = true;
  ProdQuer->Active = true;

  if (flAdd == "E")         //будем показывать "Период действия и доступные скидки для блока" только при редактировании блока
	 {
	  DiscQuer->Active = true;
	  idBlock = IntToStr(FrBlockProduce->BlockQueridn->Value);
	  QProducts();
	  }

  QCost();
  List1();

  if (FrBlockProduce->BlockQuerBlockType->Value == "Базовый" && flAdd == "E")
	 {
	  NameMemo->ReadOnly = true;                   //при редактировании блока запрещаем пользователю изменять название блока!
	  NameMemo->Color    = clInfoBk;
	  BaseButt->Enabled  = false;                  //      запрещаем пользователю (при типе блока "БАЗОВЫЙ") изменять его тип
	  MultButt->Enabled  = false;                  //      запрещаем пользователю (при типе блока "БАЗОВЫЙ") изменять его тип
	  }

  if (flAdd == "E")
	 {
	  NameMemo->Text   = FrBlockProduce->BlockQuerBlockName->Value;
	  NameMemo->ReadOnly = true;
	  TermsMemo->Text  = FrBlockProduce->BlockQuerBlockTerm->Value;
	  DescRich->Text   = FrBlockProduce->BlockQuerBlockDesc->Value;

	  if (FrBlockProduce->BlockQuerListId->Value != -1)
		 {chcbPeriod->Value = FrBlockProduce->BlockQuerListId->Value;}
	  if (!FrBlockProduce->BlockQuerCompositionOfPI->IsNull)
		 {CompositionPIBox->Value = FrBlockProduce->BlockQuerCompositionOfPI->Value;}

	  if (FrBlockProduce->BlockQuerBlockType->Value == "Базовый")
		 {BaseButt->Checked = true;}
	  if (FrBlockProduce->BlockQuerBlockType->Value == "Составной")
		 {MultButt->Checked = true;}

	  btMoney->Enabled     = true; //разрешаем пользователю при редактировании блока добавлять и редактировать периоды и цены
	  btDiscount->Enabled  = true; //разрешаем пользователю при редактировании блока добавлять и редактировать периоды скидок
	  }

  if (flAdd == "K")               //выбран режим копирования информации о "каком-то блоке"    - вызываем функцию: CopyBlock()
	 {
	  CopyBlock();
	  }
}
//---------------------------------------------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceAddEd::NameMemoExit(TObject *Sender)
{
  NameMemo->Text = TrimRight(TrimLeft(NameMemo->Text));
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceAddEd::TermsMemoExit(TObject *Sender)
{
  TermsMemo->Text = TrimRight(TrimLeft(TermsMemo->Text));
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceAddEd::DescRichExit(TObject *Sender)
{
  DescRich->Text = TrimRight(TrimLeft(DescRich->Text));
}
//---------------------------------------------------------------------------------------------------------------------------
/*void __fastcall TFrBlockProduceAddEd::ProdNameEdDblClick(TObject *Sender)
{
  if (flAdd == "N" || flAdd == "K")
	 {btedProduceClick(Sender);}
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceAddEd::ProdNameEdKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)
{
  if (flAdd == "N" || flAdd == "K")
	 {
	  if (Key == VK_RETURN)
		 {btedProduceClick(Sender);}
	  }
} */
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceAddEd::cxGrid1DBTableView1CellDblClick(TcxCustomGridTableView *Sender,
					   TcxGridTableDataCellViewInfo *ACellViewInfo, TMouseButton AButton, TShiftState AShift, bool &AHandled)
{
  if (CostQuer->RecordCount == 0)
	 {
	  ShowMessage("Нет данных для просмотра или редактирования.");
	  return;
	  }

  #ifdef  TFR
  #undef  TFR
  #undef  FR
  #endif
  #define TFR TFrBlockProduceCost
  #define FR  FrBlockProduceCost

  flreg = "E";
  SaveCost = CostQuer->GetBookmark();

  FR = new TFR(Application);

  FR->Caption = "Редактирование периода и стоимости блока";
  FR->CostBlockEd->Text = CostQuerCost->Value;
  FR->CostBlockEdExit(Sender);
  FR->DiscountEd->Text  = CostQuerDiscount->Value;
  FR->WithDiscEd->Text  = CostQuerCostWitnDiscount->Value;
  FR->WithDiscEdExit(Sender);

  if (CostQuerBaseCost->Value == 0)
	 {FR->BaseCheck->Checked = false;}
  if (CostQuerBaseCost->Value == 1)
	 {FR->BaseCheck->Checked = true;}
	  FR->DescMemo->Text = CostQuerDescription->Value;
  if (CostQuerActive->Value == 0)
	 {FR->ActivCheck->Checked = false;}
  if (CostQuerActive->Value == 1)
	 {FR->ActivCheck->Checked = true;}

  if (CostQuer->RecordCount > 0 && BaseButt->Checked == true)
	 {
	  FR->BaseCheck->Checked = true;
	  FR->BaseCheckClick(Sender);
	  FR->BaseCheck->Enabled = false;
	  }

  FR->ShowModal();
  delete(FR);
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceAddEd::btMoneyClick(TObject *Sender)
{
  #ifdef  TFR
  #undef  TFR
  #undef  FR
  #endif
  #define TFR TFrBlockProduceCost
  #define FR  FrBlockProduceCost

  flreg = "N";
  FR = new TFR(Application);
  FR->Caption = "Новые период и стоимость блока";
  if (BaseButt->Checked == true && CostQuer->RecordCount == 0)
	 {
	  FR->BaseCheck->Checked = true;
	  FR->BaseCheckClick(Sender);
	  FR->BaseCheck->Enabled = false;
	  }
  FR->ActivCheck->Checked = true;
  FR->ShowModal();
  delete(FR);
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceAddEd::btDiscountClick(TObject *Sender)
{
  if (CostQuer->RecordCount == 0)
	 {
      ShowMessage("Чтобы создать ''Период скидок'' для блока - создайте сначала ''Стоимость блока''!");
	  return;
	  }

  #ifdef  TFR
  #undef  TFR
  #undef  FR
  #endif
  #define TFR TFrBlockProduceDiscount
  #define FR   FrBlockProduceDiscount

  flrDis = "N";
  FR = new TFR(Application);
  FR->Caption = "Новые период и скидки для блока";
  FR->ShowModal();
  delete(FR);
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceAddEd::cxGrid2DBTableView1CellDblClick(TcxCustomGridTableView *Sender,
						TcxGridTableDataCellViewInfo *ACellViewInfo, TMouseButton AButton, TShiftState AShift, bool &AHandled)
{
  if (DiscQuer->RecordCount == 0)
	 {
	  ShowMessage("Нет данных для просмотра или редактирования.");
	  return;
	  }

  #ifdef  TFR
  #undef  TFR
  #undef  FR
  #endif
  #define TFR TFrBlockProduceDiscount
  #define FR   FrBlockProduceDiscount

  flrDis = "E";
  SaveCost = CostQuer->GetBookmark();

  FR = new TFR(Application);
  FR->Caption = "Редактирование периода действия скидок для блока";
  FR->ShowModal();
  delete(FR);
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceAddEd::CyclButtClick(TObject *Sender)
{
  #ifdef  TFR
  #undef  TFR
  #undef  FR
  #endif
  #define TFR TFrBlockProducePeriod
  #define FR  FrBlockProducePeriod

  mode = "Prod";
  FR = new TFR(Application);

  FR->Top    = Ini->ReadInteger("BlockProducePeriod", "Top",    100);
  FR->Left   = Ini->ReadInteger("BlockProducePeriod", "Left",   100);
  FR->Width  = Ini->ReadInteger("BlockProducePeriod", "Width",  400);
  FR->Height = Ini->ReadInteger("BlockProducePeriod", "Height", 310);

  FR->ShowModal();
  delete (FR);
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceAddEd::chcbPeriodExit(TObject *Sender)
{
  String s = "";
  for (int i = 0; i < chcbPeriod->Properties->Items->Count; i++)
	  {
	   if (chcbPeriod->States[i] == cbsChecked)
		  {
		   //s = s + chcbPeriod->Properties->Items->Items[i]->Description + ",";
		   s = s + chcbPeriod->Properties->Items->Items[i]->Tag + ",";
		   }
	   }
  s = s.Delete(s.Length(), 1);
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceAddEd::CostDataDataChange(TObject *Sender, TField *Field)
{
  QDisc();
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceAddEd::cxGrid2DBTableView1StylesGetContentStyle(TcxCustomGridTableView *Sender,
											  TcxCustomGridRecord *ARecord, TcxCustomGridTableItem *AItem, TcxStyle *&AStyle)
{
  if (ARecord->Values[7] == 0)
	 {AStyle = NotActive;}
  if (ARecord->Values[7] == 1)
	 {AStyle = Normal;}
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceAddEd::SaveButtClick(TObject *Sender)
{
  if (NameMemo->Text.Length() == 0)
	 {
	  NameMemo->Color = clYellow;
	  NameMemo->SetFocus();
	  ShowMessage("Для сохранения нового блока требуется обязательно заполнить наименование блока!");
	  return;
	  }
	  else
		  {NameMemo->Color = clWhite;}

  if (CompositionPIBox->Text.Trim().Length() == 0 || CompositionPIBox->Text == "None selected")
	 {
	  CompositionPIBox->StyleFocused->Color = clYellow;
	  CompositionPIBox->Style->Color = clYellow;
	  CompositionPIBox->Focused();
	  ShowMessage("Для сохранения нового блока требуется обязательно указать ''Состав Подписного Индекса''!");
	  return;
	  }
	  else
		  {
		   CompositionPIBox->StyleFocused->Color = clWhite;
		   CompositionPIBox->Style->Color = clWhite;
		   }

  if (DescRich->Text.Length() == 0)
	 {
	  DescRich->Color = clYellow;
	  DescRich->SetFocus();
	  ShowMessage("Для сохранения нового блока требуется обязательно заполнить описание блока!");
	  return;
	  }
	  else
		  {DescRich->Color = clWhite;}

  if (flAdd == "N")                  //проверка на дубликат наименования блока по выборке BlockName при создании нового блока
	 {
	  String ch = "SELECT DISTINCT lb.iText "
				  "  FROM dbo.ProduceBlock AS pb "
				  "       LEFT OUTER JOIN dbo.spl_LbText AS lb ON (lb.Idn = pb.idMBlockName) "
				  " WHERE lb.iText = '" + NameMemo->Text + "'";

	  ChckQuer->Active = true;
	  ChckQuer->SQL->Clear();
	  ChckQuer->SQL->Add(ch);
	  ChckQuer->Open();

	  String v1 = TrimRight(TrimLeft(ChckQueriText->Value));
	  String v2 = TrimRight(TrimLeft(NameMemo->Text));

	  for (int i = 0; i < v1.Length(); ++i)
		   v1 = v1.LowerCase();
	  for (int i = 0; i < v2.Length(); ++i)
		   v2 = v2.LowerCase();

	  if (v1 == v2)
		 {
		  String Caption = "Ошибка при записи нового блока!";
			 String Text = "Блок с названием '" + NameMemo->Text + "' уже существует в справочнике!\n\n"
						   "Пожалуйста, дайте блоку другое название или воспользуйтесь уже существующим.\n"
						   "Сохранение блоков в базу данных с одинаковым названием не допускается!";
		  Application->MessageBox(Text.w_str(), Caption.w_str(), MB_ICONHAND | MB_OK);
		  ChckQuer->Active = false;
		  return;
		  }
	  ChckQuer->Active = false;
	  }

  String q0 = "";
  String type = "";
  if (BaseButt->Checked == true)
	 {type = "1";}
  if (MultButt->Checked == true)
	 {type = "0";}

  //--- 1: сохранение только что созданного блока
  if (flAdd == "N")
	 {
	  IDgen();                     //создаём временный idtmp ({00000000-0000-0000-0000-000000000000}) вместо SCOPE_IDENTITY()
	  q0 = "BEGIN TRY "
		   "BEGIN TRANSACTION; "

		   "DECLARE @BlockName    AS nvarchar(MAX) "
		   "    SET @BlockName    = '" + NameMemo->Text + "' "
		   "DECLARE @idMBlockName AS int "

		   "DECLARE @BlockTerm    AS nvarchar(MAX) "
		   "    SET @BlockTerm    = '" + TermsMemo->Text + "' "
		   "DECLARE @idMBlockTerm AS int "

		   "DECLARE @BlockDesc    AS nvarchar(MAX) "
		   "    SET @BlockDesc    = '" + DescRich->Text + "' "
		   "DECLARE @idMBlockDesc AS int "

		   "DECLARE @ListId       AS int "
		   "    SET @ListId       = " + chcbPeriod->Value + " "
		   "DECLARE @BlockType    AS bit "
		   "    SET @BlockType    = " + type + " "
		   "DECLARE @DateIns      AS datetime "
		   "    SET @DateIns      = GETDATE() "
		   "DECLARE @IdIns        AS int "
		   "    SET @IdIns        =  " + IntToStr(PermisHdr.KeyUserStartProgramm) + " "
		   "DECLARE @DateDel      AS datetime "
		   "    SET @DateDel      = NULL "
		   "DECLARE @IdDel        AS int "
		   "    SET @IdDel        = NULL "
		   "DECLARE @tmpidn       AS uniqueidentifier "
		   "    SET @tmpidn       = '" + idtmp + "' "
		   "DECLARE @CompositionOfPI AS int "
		   "    SET @CompositionOfPI = " + CompositionPIBox->Value + " "
		   "DECLARE @LinkIdBlock  AS int "
		   "    SET @LinkIdBlock  = NULL "
		   "DECLARE @LinkDateLast AS datetime "
		   "    SET @LinkDateLast = NULL "

		   "DECLARE @idLevel      AS int "

		   "EXEC dbo.prLb_TextTrim @BlockName OUTPUT "
		   "IF LEN(@BlockName) > 0 "
		   "EXEC dbo.prLb_GetNumField 'ProduceBlock','idMBlockName','spl_LbText', @BlockName OUTPUT, @idLevel OUTPUT, @idMBlockName OUTPUT "

		   "EXEC dbo.prLb_TextTrim @BlockTerm OUTPUT "
		   "IF LEN(@BlockTerm) > 0 "
		   "EXEC dbo.prLb_GetNumField 'ProduceBlock','idMBlockTerm','spl_LbText', @BlockTerm OUTPUT, @idLevel OUTPUT, @idMBlockTerm OUTPUT "

		   "EXEC dbo.prLb_TextTrim @BlockDesc OUTPUT "
		   "IF LEN(@BlockDesc) > 0 "
		   "EXEC dbo.prLb_GetNumField 'ProduceBlock','idMBlockDesc','spl_LbText', @BlockDesc OUTPUT, @idLevel OUTPUT, @idMBlockDesc OUTPUT "

		   "INSERT INTO [dbo].[ProduceBlock] "
		   "VALUES(@idMBlockName, @idMBlockTerm, @idMBlockDesc, @ListId, @BlockType, @DateIns, @IdIns, "
		   "       NULL, NULL, @DateDel, @IdDel, @tmpidn, @CompositionOfPI, @LinkIdBlock, @LinkDateLast) "

		   "COMMIT TRANSACTION; "
		   "END TRY "

		   "BEGIN CATCH "
		   "      ROLLBACK TRANSACTION; "
		   "      PRINT 'Error transaction!'; "
		   "END CATCH;";

	  BlockComm->CommandText = q0;
	  BlockComm->Execute();

	  String q5 = "SELECT idn "
				  "  FROM dbo.ProduceBlock "
				  " WHERE tmpidn = '" + idtmp + "'";

	  InsBQuer->Active = true;
	  InsBQuer->SQL->Clear();
	  InsBQuer->SQL->Add(q5);
	  InsBQuer->Open();

	  idBlock = IntToStr(InsBQueridn->Value);

	  FrBlockProduce->QOpen();
	  FrBlockProduce->BlockQuer->Locate("idn", InsBQueridn->Value, TLocateOptions() <<loCaseInsensitive);
	  FrBlockProduce->SavePosS = FrBlockProduce->BlockQuer->GetBookmark();
	  InsBQuer->Active = false;

	  if (BaseButt->Checked == true)
		 {
		  BaseButt->Enabled = false;
		  MultButt->Enabled = false;
		  }

	  btMoney->Enabled    = true;
	  btDiscount->Enabled = true;

	  flAdd = "E";                                                             //    переводимся в режим редактирования блока
	  idtmp = "{00000000-0000-0000-0000-000000000000}";                        //            дефолтим временный идентификатор
	  Caption = "Редактирование блока";                                        //запрещаем пользователю менять название блока
	  NameMemo->ReadOnly = true;

	  ShowMessage("Новый блок успешно создан!\n\n"
				  "Теперь Вы можете указать периоды и цены для блока - нажмите кнопку ''Стоимость блока''");
	  return;
	  }

  //--- 2: редактирование существующего блока
  if (flAdd == "E" && idtmp == "{00000000-0000-0000-0000-000000000000}")
	 {
	  /*if (BaseButt->Enabled != false && NameMemo->ReadOnly != true)
		 {
		  //добавляем проверку на дублирование для особо хитрож... пользователей
		  String ch = "SELECT pb.idn, pb.BlockName, bl.IdProduct "
					  "  FROM dbo.ProduceBlock AS pb "
					  "       LEFT OUTER JOIN dbo.ProduceBlockLink    AS bl ON (bl.IdBlock = pb.idn) "
					  "       LEFT OUTER JOIN dbo.all_AdvProduceClass AS pc ON (pc.idn = bl.IdProduct) "
					  " WHERE bl.IdProduct = " + IdProduct + " "
					  "   AND pb.BlockName = '" + NameMemo->Text + "'";

		  ChckQuer->Active = true;
		  ChckQuer->SQL->Clear();
		  ChckQuer->SQL->Add(ch);
		  ChckQuer->Open();

		  if (ChckQuer->RecordCount == 1 && IntToStr(ChckQueridn->Value) != FrBlockProduce->BlockQueridn->Value)
			 {
			  ShowMessage("Дублирование названий блоков, к сожалению для вас, запрещено!\n\n"
						  "Пожалуйста, не пытайтесь сохранить БЛОК, используя в его названии схожие символы из русского или английского языка.\n\n"
						  "Не нарушайте целостность базы данных дублирующими записями!\n\n"
						  "Мы всегда сможем определить по дате и времени создания автора подобных ''ухищрений'' - не портите себе репутацию!\n\n"
						  "Если Вам так и не удалось создать дубль НАЗВАНИЯ БЛОКА - воспользуйтесь кнопкой ''Удалить блок''.\n\n");
			  ChckQuer->Active = false;
			  return;
			  }
		  ChckQuer->Active = false;
		  }  */

	  q0 = "BEGIN TRY "
		   "BEGIN TRANSACTION; "
		   /*
		   "DECLARE @BlockName    AS nvarchar(MAX) "
		   "    SET @BlockName    = '" + NameMemo->Text + "' "
		   "DECLARE @idMBlockName AS int "
		   */
		   "DECLARE @BlockTerm    AS nvarchar(MAX) "
		   "    SET @BlockTerm    = '" + TermsMemo->Text + "' "
		   "DECLARE @idMBlockTerm AS int "

		   "DECLARE @BlockDesc    AS nvarchar(MAX) "
		   "    SET @BlockDesc    = '" + DescRich->Text + "' "
		   "DECLARE @idMBlockDesc AS int "

		   "DECLARE @idLevel      AS int "

		   "DECLARE @ListId    AS int "
		   "    SET @ListId     = " + chcbPeriod->Value + " "
		   "DECLARE @BlockType AS bit "
		   "    SET @BlockType  = " + type + " "
		   "DECLARE @DateEdit  AS datetime "
		   "    SET @DateEdit   = GETDATE() "
		   "DECLARE @IdEdit    AS int "
		   "    SET @IdEdit     =  " + IntToStr(PermisHdr.KeyUserStartProgramm) + " "
		   "DECLARE @CompositionOfPI AS int "
		   "    SET @CompositionOfPI = " + CompositionPIBox->Value + " "
		   /*
		   "EXEC dbo.prLb_TextTrim @BlockName OUTPUT "
		   "IF LEN(@BlockName) > 0 "
		   "EXEC dbo.prLb_GetNumField 'ProduceBlock','idMBlockName','spl_LbText', @BlockName OUTPUT, @idLevel OUTPUT, @idMBlockName OUTPUT "
		   */
		   "EXEC dbo.prLb_TextTrim @BlockTerm OUTPUT "
		   "IF LEN(@BlockTerm) > 0 "
		   "EXEC dbo.prLb_GetNumField 'ProduceBlock','idMBlockTerm','spl_LbText', @BlockTerm OUTPUT, @idLevel OUTPUT, @idMBlockTerm OUTPUT "

		   "EXEC dbo.prLb_TextTrim @BlockDesc OUTPUT "
		   "IF LEN(@BlockDesc) > 0 "
		   "EXEC dbo.prLb_GetNumField 'ProduceBlock','idMBlockDesc','spl_LbText', @BlockDesc OUTPUT, @idLevel OUTPUT, @idMBlockDesc OUTPUT "

		   " UPDATE [dbo].[ProduceBlock] "
		   "    SET idMBlockTerm = @idMBlockTerm, idMBlockDesc = @idMBlockDesc, "
		   "        ListId = @ListId, BlockType = @BlockType, DateEdit = @DateEdit, IdEdit = @IdEdit, "
		   "        CompositionOfPI = @CompositionOfPI "
		   "  WHERE idn = " + IntToStr(FrBlockProduce->BlockQueridn->Value) + " "

		   "COMMIT TRANSACTION; "
		   "END TRY "

		   "BEGIN CATCH "
		   "      ROLLBACK TRANSACTION; "
		   "      PRINT 'Error transaction!'; "
		   "END CATCH;";

	  BlockComm->CommandText = q0;
	  BlockComm->Execute();

	  FrBlockProduce->QOpen();
	  FrBlockProduce->SavePosS = FrBlockProduce->BlockQuer->GetBookmark();
	  ShowMessage("Информация о блоке успешно изменена!");

	  if (BaseButt->Checked == true)
		 {
		  BaseButt->Enabled = false;
		  MultButt->Enabled = false;
		  }

	  flAdd = "E";
	  }

  //--- 3: сохранение данных блока поcле создания его через копирование
  if (flAdd == "E" && idtmp != "{00000000-0000-0000-0000-000000000000}")
	 {
	  AnsiString h = Trim(NameMemo->Text);
			 int l = h.Pos("КОПИЯ");
	  if (l > 0)
		 {
		  NameMemo->Color = clYellow;
		  NameMemo->SetFocus();
		  ShowMessage("Запрещено сохранять блок, в названии которого есть слово: ''КОПИЯ''!");
		  return;
		  }
	  if (l == 0)
		 {NameMemo->Color = clWhite;}



      //проверка на дубликат наименования блока по выборке BlockName при создании нового блока
	  String ch = "SELECT DISTINCT lb.iText "
				  "  FROM dbo.ProduceBlock AS pb "
				  "       LEFT OUTER JOIN dbo.spl_LbText AS lb ON (lb.Idn = pb.idMBlockName) "
				  " WHERE lb.iText = '" + NameMemo->Text + "'";

	  ChckQuer->Active = true;
	  ChckQuer->SQL->Clear();
	  ChckQuer->SQL->Add(ch);
	  ChckQuer->Open();

	  String v1 = TrimRight(TrimLeft(ChckQueriText->Value));
	  String v2 = TrimRight(TrimLeft(NameMemo->Text));

	  for (int i = 0; i < v1.Length(); ++i)
		   v1 = v1.LowerCase();
	  for (int i = 0; i < v2.Length(); ++i)
		   v2 = v2.LowerCase();

	  if (v1 == v2)
		 {
		  String Caption = "Ошибка при записи нового блока!";
			 String Text = "Блок с названием '" + NameMemo->Text + "' уже существует в справочнике!\n\n"
						   "Пожалуйста, дайте блоку другое название или воспользуйтесь уже существующим.\n"
						   "Сохранение блоков в базу данных с одинаковым названием не допускается!";
		  Application->MessageBox(Text.w_str(), Caption.w_str(), MB_ICONHAND | MB_OK);
		  ChckQuer->Active = false;
		  return;
		  }
	  ChckQuer->Active = false;



	  q0 = "BEGIN TRY "
		   "BEGIN TRANSACTION; "

		   "DECLARE @BlockName    AS nvarchar(MAX) "
		   "    SET @BlockName    = '" + NameMemo->Text + "' "
		   "DECLARE @idMBlockName AS int "

		   "DECLARE @BlockTerm    AS nvarchar(MAX) "
		   "    SET @BlockTerm    = '" + TermsMemo->Text + "' "
		   "DECLARE @idMBlockTerm AS int "

		   "DECLARE @BlockDesc    AS nvarchar(MAX) "
		   "    SET @BlockDesc    = '" + DescRich->Text + "' "
		   "DECLARE @idMBlockDesc AS int "

		   "DECLARE @idLevel      AS int "

		   "DECLARE @ListId    AS int "
		   "    SET @ListId     = " + chcbPeriod->Value + " "
		   "DECLARE @BlockType AS bit "
		   "    SET @BlockType  = " + type + " "
		   "DECLARE @DateEdit  AS datetime "
		   "    SET @DateEdit   = GETDATE() "
		   "DECLARE @IdEdit    AS int "
		   "    SET @IdEdit     =  " + IntToStr(PermisHdr.KeyUserStartProgramm) + " "
		   "DECLARE @CompositionOfPI AS int "
		   "    SET @CompositionOfPI = " + CompositionPIBox->Value + " "

		   "EXEC dbo.prLb_TextTrim @BlockName OUTPUT "
		   "IF LEN(@BlockName) > 0 "
		   "EXEC dbo.prLb_GetNumField 'ProduceBlock','idMBlockName','spl_LbText', @BlockName OUTPUT, @idLevel OUTPUT, @idMBlockName OUTPUT "

		   "EXEC dbo.prLb_TextTrim @BlockTerm OUTPUT "
		   "IF LEN(@BlockTerm) > 0 "
		   "EXEC dbo.prLb_GetNumField 'ProduceBlock','idMBlockTerm','spl_LbText', @BlockTerm OUTPUT, @idLevel OUTPUT, @idMBlockTerm OUTPUT "

		   "EXEC dbo.prLb_TextTrim @BlockDesc OUTPUT "
		   "IF LEN(@BlockDesc) > 0 "
		   "EXEC dbo.prLb_GetNumField 'ProduceBlock','idMBlockDesc','spl_LbText', @BlockDesc OUTPUT, @idLevel OUTPUT, @idMBlockDesc OUTPUT "

		   " UPDATE [dbo].[ProduceBlock] "
		   "    SET idMBlockName = @idMBlockName, idMBlockTerm = @idMBlockTerm, idMBlockDesc = @idMBlockDesc, "
		   "        ListId = @ListId, BlockType = @BlockType, DateEdit = @DateEdit, IdEdit = @IdEdit, "
		   "        CompositionOfPI = @CompositionOfPI "
		   "  WHERE idn = " + IntToStr(FrBlockProduce->BlockQueridn->Value) + " "

		   "COMMIT TRANSACTION; "
		   "END TRY "

		   "BEGIN CATCH "
		   "      ROLLBACK TRANSACTION; "
		   "      PRINT 'Error transaction!'; "
		   "END CATCH;";

	  BlockComm->CommandText = q0;
	  BlockComm->Execute();

	  FrBlockProduce->QOpen();
	  FrBlockProduce->SavePosS = FrBlockProduce->BlockQuer->GetBookmark();
	  ShowMessage("Информация о блоке успешно изменена!");

	  if (BaseButt->Checked == true)
		 {
		  BaseButt->Enabled = false;
		  MultButt->Enabled = false;
		  }

	  flAdd = "E";
	  }
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceAddEd::btCloseClick(TObject *Sender)
{
  Close();
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceAddEd::FormClose(TObject *Sender, TCloseAction &Action)
{
  q2 = "";
  flAdd = "N";
  idBlock = "";
  idtmp = "{00000000-0000-0000-0000-000000000000}";
  CostQuer->Active = false;
  DiscQuer->Active = false;
  ProdQuer->Active = false;
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceAddEd::NewProdButClick(TObject *Sender)
{
  if (flAdd == "N")
	 {
	  ShowMessage("Вы не можете добавить продукт в блок, пока новый блок не сохранён!");
	  return;
	  }

  String Caption = "Запрос перед добавлением продукта в блок";
	 String Text = "Вы действительно хотите добавить новый продукт в блок: '"
	              + FrBlockProduce->BlockQuerBlockName->Value + "?";
  switch (Application->MessageBox(Text.w_str(), Caption.w_str(), MB_YESNO + MB_ICONEXCLAMATION + MB_DEFBUTTON2))
		 {
		  case IDYES: {regimDlg = "block";

					   TFrFindProduce *FindProduce;
									   FindProduce = new TFrFindProduce (Application);
									   FindProduce->edProduce->Text = "БА%Электронная система";
									   FindProduce->ShowModal();
					   }
			   break;

		  case  IDNO: {return;}
		  }
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceAddEd::cxGrid3DBTableView1KeyDown(TObject *Sender, WORD &Key, TShiftState Shift)
{
  if (Key == VK_DELETE)
	 {DelProdButClick(Sender);}
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduceAddEd::DelProdButClick(TObject *Sender)
{
  if (ProdQuer->RecordCount == 0)
	 {
	  ShowMessage("Нет доступных продуктов для удаления из состава блока!");
	  return;
	  }

  DeleteProduct();
}
//---------------------------------------------------------------------------------------------------------------------------

