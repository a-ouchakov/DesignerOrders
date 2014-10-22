//---------------------------------------------------------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "BlockProduce.h"
#include "BlockProduceAddEd.h"
#include "main.h"
#include "Init.h"
#include "IniFiles.hpp"                                                                             //для работы с INI-файлом
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
#pragma link "cxClasses"
#pragma link "cxData"
#pragma link "cxDataStorage"
#pragma link "cxDBData"
#pragma link "cxEdit"
#pragma link "cxFilter"
#pragma link "cxGrid"
#pragma link "cxGridCustomTableView"
#pragma link "cxGridCustomView"
#pragma link "cxGridDBTableView"
#pragma link "cxGridLevel"
#pragma link "cxGridTableView"
#pragma link "dxSkinscxPCPainter"
#pragma link "RzCmboBx"
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "frxExportHTML"
#pragma link "frxExportImage"
#pragma link "frxExportPDF"
#pragma link "frxExportRTF"
#pragma resource "*.dfm"
TFrBlockProduce *FrBlockProduce;
  char flBlockProduce;

  extern TIniFile *Ini;
  extern String flAdd;

  String s1 = "SELECT pb.idn, L1.iText AS BlockName, CASE WHEN BlockType = 0 THEN 'Составной' ELSE 'Базовый' END BlockType, "
			  "       pb.DateIns, A1.auFamIO AS InsBy, pb.DateEdit, A2.auFamIO AS EditBy, pb.LinkIdBlock, pb.LinkDateLast, "
			  "       pb.ListId, pb.CompositionOfPI, L2.iText AS BlockTerm, L3.iText AS BlockDesc, "
			  "       idMBlockName, idMBlockTerm, idMBlockDesc "
			  "  FROM dbo.ProduceBlock AS pb "
			  //"       LEFT OUTER JOIN dbo.ProduceBlockLink AS bl ON (bl.IdBlock = pb.idn)"   ???????
			  "       LEFT OUTER JOIN dbo.spl_LbText       AS L1 ON (L1.Idn = pb.idMBlockName) "
			  "       LEFT OUTER JOIN dbo.spl_LbText       AS L2 ON (L2.Idn = pb.idMBlockDesc) "
			  "       LEFT OUTER JOIN dbo.spl_LbText       AS L3 ON (L3.Idn = pb.idMBlockTerm) "
			  "       LEFT OUTER JOIN dbo.aa_Users         AS A1 ON (pb.IdIns = A1.auId) "
			  "       LEFT OUTER JOIN dbo.aa_Users         AS A2 ON (pb.IdEdit = A2.auId) ";
  String s2 = "";
  String s4 = "";
  String s5 = "";

  String c1 = "SELECT bc.idn, bc.BlockId, pb.idn AS CycleId, pb.Description AS Cycle, bc.Cost, bc.Discount, "
			  "       bc.CostWitnDiscount, bc.BaseCost, bc.Description, bc.Dept, bc.Active "
			  "  FROM dbo.ProduceBlockCost AS bc "
			  "  LEFT OUTER JOIN dbo.ProduceBlockCycle AS pb ON pb.idn = bc.CycleId ";

  String d7 = "SELECT L.ProduceBlockId, L.ProduceBlockDiscId, bd.PStart, bd.PEnd, bd.MINdis, bd.MAXdis, "
			  "       bd.Description, bd.AllCycle, CASE WHEN bd.Active = 0 THEN 'Не активно' ELSE 'Активно' END Active "
			  "  FROM dbo.ProduceBlockDiscountLink AS L "
			  "       LEFT OUTER JOIN dbo.ProduceBlockDiscount AS bd ON L.ProduceBlockDiscId = bd.idn "
			  "       LEFT OUTER JOIN dbo.ProduceBlockCycle AS bc ON bd.CycleId = bc.IdFAdv ";

//---------------------------------------------------------------------------------------------------------------------------
void TFrBlockProduce::List2()                                                              //заполнить именованиями    блоков
{
  BlockBox->Items->Clear();
  String l2 = "SELECT DISTINCT lb.iText AS BlockName "
			  "  FROM dbo.ProduceBlock AS pb "
			  "       LEFT OUTER JOIN dbo.spl_LbText AS lb ON (lb.Idn = pb.idMBlockName) "
			  " ORDER BY lb.iText";
  BlocQuer->Active = true;
  BlocQuer->SQL->Clear();
  BlocQuer->SQL->Add(l2);
  BlocQuer->Open();
  BlockBox->Items->Add("ВСЕ");
  while(!BlocQuer->Eof)
	   {
		BlockBox->Items->Add(BlocQuerBlockName->Value);
		BlocQuer->Next();
		}
  BlocQuer->Active = false;
  BlockBox->ItemIndex = 0;
}
//---------------------------------------------------------------------------------------------------------------------------
void TFrBlockProduce::List3()
{
//for future
}
//---------------------------------------------------------------------------------------------------------------------------
void TFrBlockProduce::PrintC()
{
  CostQuer->SQL->Clear();
  CostQuer->SQL->Add(c1 + "WHERE bc.BlockId = " + IntToStr(BlockQueridn->Value));
  CostQuer->Open();
}
//---------------------------------------------------------------------------------------------------------------------------
void TFrBlockProduce::PrintD()
{
  DiscQuer->SQL->Clear();
  DiscQuer->SQL->Add(d7 + "WHERE L.ProduceBlockId = " + IntToStr(BlockQueridn->Value));
  DiscQuer->Open();
}
//---------------------------------------------------------------------------------------------------------------------------
void TFrBlockProduce::QOpen()
{
  if (cxGrid1DBTableView1->DataController->Filter->FilterText.Length() == 0)
	 {
	  s5 = "";
	  if (BlockTypeBox->ItemIndex == 0) {s2 = "WHERE pb.DateDel IS NULL AND pb.BlockType IN(0, 1) ";}
	  if (BlockTypeBox->ItemIndex == 1) {s2 = "WHERE pb.DateDel IS NULL AND pb.BlockType = 1 ";}                  //  базовый
	  if (BlockTypeBox->ItemIndex == 2) {s2 = "WHERE pb.DateDel IS NULL AND pb.BlockType = 0 ";}                  //составной
	  if (BlockBox->ItemIndex == 0)     {s4 = "";}
	  if (BlockBox->ItemIndex != 0)     {s4 = "AND L1.iText LIKE '%" + BlockBox->Text + "%' ";}
	  }

  if (cxGrid1DBTableView1->DataController->Filter->FilterText.Length() != 0)
	 {
	  s2 = "";
	  s4 = "";
	  s5 = "WHERE " + cxGrid1DBTableView1->DataController->Filter->FilterText;
	  s5 = StringReplace(s5, "idn",          "pb.idn", TReplaceFlags()<<rfReplaceAll);
	  s5 = StringReplace(s5, "BlockName",    "L1.iText", TReplaceFlags()<<rfReplaceAll);
	  s5 = StringReplace(s5, "'Базовый'",    "1", TReplaceFlags()<<rfReplaceAll);
	  s5 = StringReplace(s5, "'Составной'",  "0", TReplaceFlags()<<rfReplaceAll);
	  s5 = StringReplace(s5, "DateIns",      "pb.DateIns", TReplaceFlags()<<rfReplaceAll);
	  s5 = StringReplace(s5, "InsBy",        "A1.auFamIO", TReplaceFlags()<<rfReplaceAll);
	  s5 = StringReplace(s5, "DateEdit",     "pb.DateEdit", TReplaceFlags()<<rfReplaceAll);
	  s5 = StringReplace(s5, "EditBy",       "A2.auFamIO", TReplaceFlags()<<rfReplaceAll);
	  s5 = StringReplace(s5, "LinkIdBlock",  "pb.LinkIdBlock", TReplaceFlags()<<rfReplaceAll);
	  s5 = StringReplace(s5, "LinkDateLast", "pb.LinkDateLast", TReplaceFlags()<<rfReplaceAll);
	  }

  BlockQuer->SQL->Clear();
  BlockQuer->SQL->Add(s1 + s2 + s4 + s5);
  BlockQuer->Open();

  Caption = "Справочник блоков (всего блоков: " + IntToStr(BlockQuer->RecordCount) + ")";

  if (flAdd == "E")
	 {
	  BlockQuer->GotoBookmark(SavePosS);
	  BlockQuer->FreeBookmark(SavePosS);
	  }
}
//---------------------------------------------------------------------------------------------------------------------------



//---------------------------------------------------------------------------------------------------------------------------
__fastcall TFrBlockProduce::TFrBlockProduce(TComponent* Owner): TForm(Owner)
{
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduce::FormShow(TObject *Sender)
{
  FrBlockProduce->Top    = Ini->ReadInteger("BlockProduce", "Top",    10);
  FrBlockProduce->Left   = Ini->ReadInteger("BlockProduce", "Left",   10);
  FrBlockProduce->Width  = Ini->ReadInteger("BlockProduce", "Width",  1000);
  FrBlockProduce->Height = Ini->ReadInteger("BlockProduce", "Height", 600);

  List2();

  BlockQuer->Active = true;
  QOpen();

  CostQuer->Active  = true;
  DiscQuer->Active  = true;
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduce::NewBButtClick(TObject *Sender)
{
#ifdef  TFR
#undef  TFR
#undef  FR
#endif
#define TFR TFrBlockProduceAddEd
#define FR  FrBlockProduceAddEd

  flAdd = "N";

  FR = new TFR(Application);
  FR->Caption = "Создание нового блока";
  FR->ShowModal();
  delete (FR);
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduce::CopyBButtClick(TObject *Sender)
{
  if (BlockQuer->RecordCount == 0)
	 {
      ShowMessage("Нет данных для создания копии блока...");
	  return;
	  }

  String Caption = "Внимание!";
	 String Text = "Вы действительно хотите создать новый блок на основе существующего?";
  switch (Application->MessageBox(Text.w_str(), Caption.w_str(), MB_YESNO + MB_ICONEXCLAMATION + MB_DEFBUTTON2))
		 {
		  case IDYES: {
					   #ifdef  TFR
					   #undef  TFR
					   #undef  FR
					   #endif
					   #define TFR TFrBlockProduceAddEd
					   #define FR  FrBlockProduceAddEd

					   flAdd = "K";

					   FR = new TFR(Application);
					   FR->Caption = "Создание нового блока (через копирование)";
					   FR->ShowModal();
					   delete (FR);
					   }
			   break;
		  case IDNO: {return;}
		  }
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduce::btInsRaspClick(TObject *Sender)
{
  if (BlockQuer->RecordCount == 0)
	 {
	  ShowMessage("Нет данных для редактирования!");
	  return;
	  }

  #ifdef  TFR
  #undef  TFR
  #undef  FR
  #endif
  #define TFR TFrBlockProduceAddEd
  #define FR  FrBlockProduceAddEd

  flAdd = "E";
  SavePosS = BlockQuer->GetBookmark();

  FR = new TFR(Application);
  FR->Caption = "Редактирование блока";
  FR->ShowModal();
  delete (FR);
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduce::cxGrid1DBTableView1CellDblClick(TcxCustomGridTableView *Sender,
          TcxGridTableDataCellViewInfo *ACellViewInfo, TMouseButton AButton, TShiftState AShift, bool &AHandled)
{
  btInsRaspClick(Sender);
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduce::DelBButtClick(TObject *Sender)
{
  if (BlockQuer->RecordCount == 0)
	 {
	  ShowMessage("Нет данных для удаления!");
	  return;
	  }

  String Caption = "Запрос перед удалением блока";
	 String Text = "Вы действительно хотите удалить блок '" + BlockQuerBlockName->Value + "'?";
  switch (Application->MessageBox(Text.w_str(), Caption.w_str(), MB_YESNO + MB_ICONEXCLAMATION + MB_DEFBUTTON2))
		 {
		  case IDYES: {
					   /*перед полным удалением сделать проверку на связь по другим таблицам, чтобы избежать коллапсa*/
					/*   String q0 = "SELECT ProduceIdn FROM dbo.ProduceBlockCost WHERE ProduceIdn = " +
									IntToStr(BlockQueridn->Value);
					   CDelQuer->Active = true;
					   CDelQuer->SQL->Clear();
					   CDelQuer->SQL->Add(q0);
					   CDelQuer->Open();
					   if (CDelQuer->RecordCount != 0)
						  {
						   CDelQuer->Active = false;
						   ShowMessage("Удалить БЛОК нельзя - есть связанные данные в таблице ''Варианты стоимости блока''!");
						   return;
						   }
					   CDelQuer->Active = false;   */

					   String q1 = "BEGIN TRY "
								   "BEGIN TRANSACTION; ";
								   /*		  "DELETE FROM [dbo].[ProduceBlock] WHERE (idn = " +
														IntToStr(BlockQueridn->Value) + ") "  */
						 if (!BlockQueridMBlockName->IsNull)
							{
							 q1 += "UPDATE [dbo].[spl_LbText] "
								   "   SET DateDel = GETDATE() "
								   " WHERE idn = " + IntToStr(BlockQueridMBlockName->Value) + " ";
							 }

						 if (!BlockQueridMBlockTerm->IsNull)
							{
							 q1 += "UPDATE [dbo].[spl_LbText] "
								   "   SET DateDel = GETDATE() "
								   " WHERE idn = " + IntToStr(BlockQueridMBlockTerm->Value) + " ";
							 }

						 if (!BlockQueridMBlockDesc->IsNull)
							{
							 q1 += "UPDATE [dbo].[spl_LbText] "
								   "   SET DateDel = GETDATE() "
								   " WHERE idn = " + IntToStr(BlockQueridMBlockDesc->Value) + " ";
							 }

							 q1 += "UPDATE [dbo].[ProduceBlockDiscount] "
								   "   SET DateDel = GETDATE(), IdDel = " + IntToStr(PermisHdr.KeyUserStartProgramm) + ", "
								   "       Active = 0 "
								   " WHERE BlockId = " + IntToStr(BlockQueridn->Value) + " "

								   "UPDATE [dbo].[ProduceBlockCost] "
								   "   SET DateDel = GETDATE(), IdDel = " + IntToStr(PermisHdr.KeyUserStartProgramm) + ", "
								   "       Active = 0 "
								   " WHERE BlockId = " + IntToStr(BlockQueridn->Value) + " "

								   "UPDATE [dbo].[ProduceBlockDiscountLink] "
								   "   SET DateDel = GETDATE(), IdDel = " + IntToStr(PermisHdr.KeyUserStartProgramm) + " "
								   " WHERE ProduceBlockId = " + IntToStr(BlockQueridn->Value) + " "

								   "UPDATE [dbo].[ProduceBlock] "
								   "   SET DateDel = GETDATE(), IdDel = " + IntToStr(PermisHdr.KeyUserStartProgramm) + " "
								   " WHERE idn = " + IntToStr(BlockQueridn->Value) + " "

								   "COMMIT TRANSACTION; "
								   "END TRY "
								   "BEGIN CATCH "
								   "      ROLLBACK TRANSACTION; "
								   "      PRINT 'Error transaction!'; "
								   "END CATCH;";

					   BDelComm->CommandText = q1;
					   BDelComm->Execute();

					   QOpen();
					   List2();
					   ShowMessage("Блок был успешно удалён!");
					   }
					  break;

		  case  IDNO: {return;}
		  }
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduce::ExclButtClick(TObject *Sender)
{
  if (BlockQuer->RecordCount == 0)
	 {
	  ShowMessage("Нет данных для экспорта.");
	  return;
	  }

  MainForm->SaveXlsFiles(cxGrid1, "FrBlockProduce", "");
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduce::PrntButtClick(TObject *Sender)
{
  if (BlockQuer->RecordCount == 0)
	 {
      ShowMessage("Нет данных для печати.");
	  return;
	  }
			String c = "Справочник блоков";
  BlockPDF->FileName = c;
  BlockRTF->FileName = c;
  BlockHTM->FileName = c;
  BlockTIF->FileName = c;

  BlockReport->ShowReport(true);
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduce::cxGrid1DBTableView1DataControllerFilterChanged(TObject *Sender)
{
  QOpen();
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduce::ClearFilterButtClick(TObject *Sender)
{
  cxGrid1DBTableView1->DataController->Filter->Clear();
  s5 = "";
  BlockBox->ItemIndex     = 0;
  BlockTypeBox->ItemIndex = 0;
  QOpen();
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduce::BlockDataDataChange(TObject *Sender, TField *Field)
{
  if (BlockQuer->Active == true)
	 {
	  PrintC();
	  PrintD();
	  }
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduce::BlockBoxChange(TObject *Sender)
{
  if (BlockBox->Text.Length() == 0)
	 {BlockBox->Text = "ВСЕ";}
  QOpen();
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduce::btCloseClick(TObject *Sender)
{
  Close();
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduce::FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)
{
  if (Key == VK_ESCAPE)
	  Close();
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBlockProduce::FormClose(TObject *Sender, TCloseAction &Action)
{
  CostQuer->Active  = false;
  DiscQuer->Active  = false;
  BlockQuer->Active = false;

  Ini->WriteInteger("BlockProduce", "Top",    FrBlockProduce->Top);
  Ini->WriteInteger("BlockProduce", "Left",   FrBlockProduce->Left);
  Ini->WriteInteger("BlockProduce", "Width",  FrBlockProduce->Width);
  Ini->WriteInteger("BlockProduce", "Height", FrBlockProduce->Height);
}
//---------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------
