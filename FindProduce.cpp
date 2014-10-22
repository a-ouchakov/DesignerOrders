//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FindProduce.h"
#include "EditRaspDetail.h"
#include "BlockProduceAddEd.h"
#include "main.h"
#include "Init.h"

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

#pragma link "cxDBTL"
#pragma link "cxInplaceContainer"
#pragma link "cxMaskEdit"
#pragma link "cxTL"
#pragma link "cxTLData"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
#pragma link "cxTLdxBarBuiltInMenu"
#pragma link "dxSkinsCore"
#pragma link "dxSkinsDefaultPainters"
#pragma link "dxSkinBlack"
#pragma link "dxSkinBlue"
#pragma link "dxSkinCaramel"
#pragma link "dxSkinCoffee"
#pragma link "dxSkinDarkRoom"
#pragma link "dxSkinDarkSide"
#pragma link "dxSkinFoggy"
#pragma link "dxSkinGlassOceans"
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
#pragma link "dxSkinSharp"
#pragma link "dxSkinSilver"
#pragma link "dxSkinSpringTime"
#pragma link "dxSkinStardust"
#pragma link "dxSkinSummer2008"
#pragma link "dxSkinValentine"
#pragma link "dxSkinXmas2008Blue"
#pragma link "dxSkinBlueprint"
#pragma link "dxSkinDevExpressDarkStyle"
#pragma link "dxSkinDevExpressStyle"
#pragma link "dxSkinHighContrast"
#pragma link "dxSkinSevenClassic"
#pragma link "dxSkinSharpPlus"
#pragma link "dxSkinTheAsphaltWorld"
#pragma link "dxSkinVS2010"
#pragma link "dxSkinWhiteprint"
#pragma link "RzCmboBx"
#pragma link "RzLabel"
#pragma resource "*.dfm"
TFrFindProduce *FrFindProduce;

  extern TIniFile *Ini;
  extern String flAdd;
  extern String idtmp;
  extern String regimDlg;
  extern String idBlock;
  extern String IdProduct;
//---------------------------------------------------------------------------
__fastcall TFrFindProduce::TFrFindProduce(TComponent* Owner) : TForm(Owner)
{
  TmProduce->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TFrFindProduce::btCloseClick(TObject *Sender)
{
  ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
void __fastcall TFrFindProduce::edProduceChange(TObject *Sender)
{
  TmProduce->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TFrFindProduce::TmProduceTimer(TObject *Sender)
{
  TmProduce->Enabled = false;
  QProduce->Close();
  QProduce->SQL->Clear();
  AnsiString vsTmp = "";

  if ((fEditRaspDetail) && (FrEditRaspDetail->cbTypeName->ItemIndex != -1))
	 {
	  vsTmp = " AND A.Id24TypeName="+IntToStr((int)FrEditRaspDetail->cbTypeName->Items->Objects[FrEditRaspDetail->cbTypeName->ItemIndex]);
	  }

/*  String where = "";
  if (flAdd != "N")
	 {where = " where A.iType<>4 and A.idn in(select idn from #WsTempTreeId) ";}
  if (flAdd == "N")
	 {where = " where A.iType<>4 and A.idn in(select idn from #WsTempTreeId) AND B.iText LIKE 'База данных Электронная система%' ";}   */

  QProduce->SQL->Add("DECLARE @MyStr varchar(256); "
" SET @MyStr=:D0;"
" if(exists(select * from tempdb..sysobjects where id = object_id('tempdb..#WsTempTreeId')))"
" TRUNCATE TABLE #WsTempTreeId;ELSE CREATE TABLE #WsTempTreeId(Idn int NULL);"
" set @MyStr='A.Id512NameCatalog IN (9113095,0) "+vsTmp+" and (/* A.iType=4 or */ A.iType=3 ) and A.datedel is null AND B.iText LIKE ''%'+@MyStr+'%''';"
" insert into #WsTempTreeId(Idn)"
//" exec pr_All_Get_TreeValues @NameTable='dbo.all_AdvProduceClass',@idn='idn',@idnP='idnP',@fwork=1,@Usl=@MyStr;"
" exec pr_All_Get_TreeValues @NameTable='all_AdvProduceClass A LEFT JOIN spl_LbText512 B ON B.Idn=id512Name',@idn='A.idn',@idnP='A.idnP',@fwork=1,@Usl=@MyStr;"
" select DISTINCT A.idn, A.idnP,B.iText, A.iType,C.iText"
" from all_AdvProduceClass A"
" LEFT JOIN spl_LbText512 B ON B.Idn=A.id512Name"
//" LEFT JOIN spl_LbText24 C ON C.Idn=A.Id24TypeName " + where + " ");
" LEFT JOIN spl_LbText24 C ON C.Idn=A.Id24TypeName "
" where A.iType<>4 and A.idn in(select idn from #WsTempTreeId) ");

  QProduce->SQL->Add("  ORDER BY   A.iType, B.iText");
  QProduce->Parameters->Items[0]->Value = edProduce->Text;

  QProduce->Open();
  tlRaspDetail->FullExpand();
}
//---------------------------------------------------------------------------
void __fastcall TFrFindProduce::RzToolButton1Click(TObject *Sender)
{
  tlRaspDetail->FullCollapse();
}
//---------------------------------------------------------------------------
void __fastcall TFrFindProduce::RzToolButton2Click(TObject *Sender)
{
  tlRaspDetail->FullExpand();
}
//...........................................................................................................................
void TFrFindProduce::NewProductInsert()
{
  IdProduct = IntToStr(QProduceidn->Value);

  String q1 = "SELECT IdProduct "
			  "  FROM dbo.ProduceBlockLink "
			  " WHERE IdProduct = " + IntToStr(QProduceidn->Value) +
			  "   AND IdBlock = " + idBlock;

  CheckProdDoubleQuer->Active = true;
  CheckProdDoubleQuer->SQL->Clear();
  CheckProdDoubleQuer->SQL->Add(q1);
  CheckProdDoubleQuer->Open();

  if (CheckProdDoubleQuer->RecordCount > 0)
	 {
      FrBlockProduceAddEd->ProdQuer->Locate("idn", QProduceidn->Value, TLocateOptions() <<loCaseInsensitive);
	  ShowMessage("В выбранный блок уже включён продукт с названием:\n\n" + QProduceiText->Value +
				  "\n\nДублирование продуктов в составе одного блока запрещено!");
	  CheckProdDoubleQuer->Active = false;
	  return;
	  }

  String np = "BEGIN TRY "
			  "BEGIN TRANSACTION; "

			  "DECLARE @IdBlock   AS int "
			  "    SET @IdBlock   = " + idBlock + " "
			  "DECLARE @IdProduct AS int "
			  "    SET @IdProduct = " + IdProduct + " "
			  "DECLARE @DateIns   AS datetime "
			  "    SET @DateIns   = GETDATE() "
			  "DECLARE @DateDel   AS datetime "
			  "    SET @DateDel   = NULL "
			  "DECLARE @IdIns     AS int "
			  "    SET @IdIns     = " + IntToStr(PermisHdr.KeyUserStartProgramm) + " "
			  "DECLARE @IdDel     AS int "
			  "    SET @IdDel     = NULL "

			  "INSERT INTO [dbo].[ProduceBlockLink] "
			  "VALUES(@IdBlock, @IdProduct, @DateIns, @DateDel, @IdIns, @IdDel) "

			  "COMMIT TRANSACTION; "
			  "END TRY "

			  "BEGIN CATCH "
			  "      ROLLBACK TRANSACTION; "
			  "      PRINT 'Error transaction!'; "
			  "END CATCH;";

  ProdComm->CommandText = np;
  ProdComm->Execute();

  CheckProdDoubleQuer->Active = false;
  FrBlockProduceAddEd->QProducts();
}
//...........................................................................................................................
void TFrFindProduce::CategoryList()
{
  cbCategory->Items->Clear();
  CtgrQuer->Active = true;
  CtgrQuer->SQL->Clear();
  CtgrQuer->SQL->Add("SELECT iText FROM dbo.bm_CategorySpecialization WHERE DateDel IS NULL AND iType = 0 ORDER BY iText");
  CtgrQuer->Open();
  CtgrQuer->First();
  while (!CtgrQuer->Eof)
		{
		 cbCategory->Items->Add(CtgrQueriText->Value);
		 CtgrQuer->Next();
		 }
  CtgrQuer->Active = false;
}
//...........................................................................................................................
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrFindProduce::btGiveProduceClick(TObject *Sender)
{
  if (QProduce->Active)
	 {
	  if (QProduceiType->AsInteger != 3)
		  return;
	  else
		  ModalResult = mrOk;

	 if (regimDlg == "block")
		{
		 String Caption = "Запрос перед добавлением продукта в блок";
			String Text = "Вы действительно хотите добавить новый продукт:\n\n'" + QProduceiText->Value + "',\n\n"
						  "в блок с названием: " + FrBlockProduceAddEd->NameMemo->Text + "?";
		 switch (Application->MessageBox(Text.w_str(), Caption.w_str(), MB_YESNO + MB_ICONEXCLAMATION + MB_DEFBUTTON2))
				{
				 case IDYES: {NewProductInsert();}
							  break;
				 case IDNO:  {return;}
				 }
		 }
	  }
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrFindProduce::tlRaspDetailChange(TObject *Sender)
{      /*
 if (QProduce->Active)
  {
 if(QProduceiType->AsInteger!=3) btGiveProduce->Enabled=false;
  else  btGiveProduce->Enabled=true;
  }  */
}
//---------------------------------------------------------------------------
void __fastcall TFrFindProduce::FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)
{
 if (Key == VK_ESCAPE)
	 ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
void __fastcall TFrFindProduce::DSProduceDataChange(TObject *Sender, TField *Field)
{
  TmProduceChange->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TFrFindProduce::TmProduceChangeTimer(TObject *Sender)
{
  if (QProduce->Active)
	 {
	  if (QProduceiType->AsInteger != 3)
		  btGiveProduce->Enabled = false;
	  else
	      btGiveProduce->Enabled = true;
      }
}
//---------------------------------------------------------------------------
void __fastcall TFrFindProduce::tlRaspDetailKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)
{
  if (Key == VK_RETURN)
	 {btGiveProduceClick(Sender);}
}
//---------------------------------------------------------------------------
void __fastcall TFrFindProduce::FormDestroy(TObject *Sender)
{
  regimDlg = "";
}
//---------------------------------------------------------------------------
void __fastcall TFrFindProduce::FormShow(TObject *Sender)
{
  CategoryList();
}
//---------------------------------------------------------------------------

