//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "SelectAdvPriseList.h"
#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzEdit"
#pragma link "RzPanel"
#pragma link "cxControls"
#pragma link "cxCustomData"
#pragma link "cxDBTL"
#pragma link "cxGraphics"
#pragma link "cxInplaceContainer"
#pragma link "cxMaskEdit"
#pragma link "cxStyles"
#pragma link "cxTL"
#pragma link "cxTLData"

#pragma link "cxClasses"
#pragma link "cxCurrencyEdit"
#pragma link "cxData"
#pragma link "cxDataStorage"
#pragma link "cxDBData"
#pragma link "cxEdit"
#pragma link "cxFilter"
#pragma link "cxGrid"
#pragma link "cxGridBandedTableView"
#pragma link "cxGridCustomTableView"
#pragma link "cxGridCustomView"
#pragma link "cxGridDBBandedTableView"
#pragma link "cxGridDBTableView"
#pragma link "cxGridLevel"
#pragma link "cxGridTableView"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
#pragma link "dxSkinsCore"
#pragma link "dxSkinscxPCPainter"
#pragma link "dxSkinsDefaultPainters"
#pragma link "RzRadChk"
#pragma link "RzLabel"
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
#pragma resource "*.dfm"
TFrSelectAdvPriseList *FrSelectAdvPriseList;
//---------------------------------------------------------------------------
__fastcall TFrSelectAdvPriseList::TFrSelectAdvPriseList(TComponent* Owner) : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrSelectAdvPriseList::TmProduceTimer(TObject *Sender)
{
  TmProduce->Enabled = false;

  String LE = "";        //added by R.Perkatov 2014-04-11
  if (viSrc == 1000)
	 {
	  RzLabel3->Caption = "Продукты для ЗАО ''МЦФЭР''";
	  LE = "ЗАО ''МЦФЭР''";
	  }
  if (viSrc == 3000)
	 {
	  RzLabel3->Caption = "Продукты для НОУ ''МЦФЭР''";
	  LE = "НОУ ''МЦФЭР''";
	  }

  String axn = TrimLeft(TrimRight(edProduce->Text));
  String sax = "SELECT ItemId, ItemName, CASE WHEN src = 1000 THEN 'ЗАО МЦФЭР' ELSE 'НОУ МЦФЭР' END src, src"
			   "  FROM dbo.ax_Nomenclatura "
			   " WHERE ItemId   = '" + axn + "' "
			   "    OR ItemName = '" + axn + "'";


  if (edProduce->Text.Length() > 0)    //added by R.Perkatov 2014-04-11
	 {
	  AxNEQuer->Active = true;
	  AxNEQuer->SQL->Clear();
	  AxNEQuer->SQL->Add(sax);
	  AxNEQuer->Open();
	  if (AxNEQuer->RecordCount != 0 && AxNEQuersrc_1->Value != viSrc)
		 {
		  ShowMessage("Вы осуществляете поиск номенклатуры, принадлежащей юридическому лицу:\n" + AxNEQuersrc->Value +
					  "\n,а распоряжение создано на юридическое лицо: " + LE +
					  "\n\nПожалуйста, если Вы ошибочно создали распоряжение не на то юрлицо - внесите исправление в распоряжение!"
					  "\n\nЕсли распоряжение создано на верное юридическое лицо - выбирайте другую номенклатуру, принадлежащую ему!");
		  }
      AxNEQuer->Active = false;
	  }


  if(rbInProduce->Checked)
	 {
	   QSelectNE->Close();
	   DSSelectNE->DataSet=QSelectNE;
	   QSelectNE->Parameters->Items[0]->DataType=ftInteger;
	   QSelectNE->Parameters->Items[0]->Value=viIdnProduce;
	   QSelectNE->Parameters->Items[1]->Value=edProduce->Text;
	   QSelectNE->Parameters->Items[2]->Value=viYear;
	   QSelectNE->Parameters->Items[3]->Value=vcNDS;
	   QSelectNE->Parameters->Items[4]->Value=viSrc;
	   QSelectNE->Open();
	   cxGridDBBandedTableView1Column4->Visible=false;
	   cxGridDBBandedTableView1->Bands->Items[0]->Width=1000;
	   btInsNE->Enabled=true;
	  }
  if(rbOutProduce->Checked)
	 {
	   QSelectNEOut->Close();
	   DSSelectNE->DataSet=QSelectNEOut;
	   QSelectNEOut->Parameters->Items[0]->DataType=ftInteger;
	   QSelectNEOut->Parameters->Items[0]->Value=viIdnProduce;
	   QSelectNEOut->Parameters->Items[1]->Value=edProduce->Text;
	   QSelectNEOut->Parameters->Items[2]->Value=viYear;
	   QSelectNEOut->Parameters->Items[3]->Value=vcNDS;
	   QSelectNEOut->Parameters->Items[4]->Value=viSrc;
	   QSelectNEOut->Open();
	   cxGridDBBandedTableView1Column4->Visible=false;
	   cxGridDBBandedTableView1->Bands->Items[0]->Width=1000;
	   btInsNE->Enabled=true;
	  }
  if(rbOutProduceNDS->Checked)
	 {
	   QOutProduceNDS->Close();
	   DSSelectNE->DataSet=QOutProduceNDS;
	   QOutProduceNDS->Parameters->Items[0]->DataType=ftInteger;
	   QOutProduceNDS->Parameters->Items[0]->Value=viIdnProduce;
	   QOutProduceNDS->Parameters->Items[1]->Value=edProduce->Text;
	   QOutProduceNDS->Parameters->Items[2]->Value=viYear;
	   QOutProduceNDS->Parameters->Items[3]->Value=vcNDS;
	   QOutProduceNDS->Parameters->Items[4]->Value=viSrc;
	   QOutProduceNDS->Open();
	   cxGridDBBandedTableView1Column4->Visible=false;
	   cxGridDBBandedTableView1->Bands->Items[0]->Width=1000;
	   btInsNE->Enabled=true;
	  }
  if(rbOutProduceNDSyear->Checked)
	 {
	   QOutProduceNDSyear->Close();
	   DSSelectNE->DataSet=QOutProduceNDSyear;
	   QOutProduceNDSyear->Parameters->Items[0]->DataType=ftInteger;
	   QOutProduceNDSyear->Parameters->Items[0]->Value=viIdnProduce;
	   QOutProduceNDSyear->Parameters->Items[1]->Value=edProduce->Text;
	   QOutProduceNDSyear->Parameters->Items[2]->Value=viYear;
	   QOutProduceNDSyear->Parameters->Items[3]->Value=vcNDS;
	   QOutProduceNDSyear->Parameters->Items[4]->Value=viSrc;
	   QOutProduceNDSyear->Open();
	   cxGridDBBandedTableView1Column4->Visible=false;
	   cxGridDBBandedTableView1->Bands->Items[0]->Width=1000;
	   btInsNE->Enabled=true;

	   /*ShowMessage("viIdnProduce    = " + IntToStr(viIdnProduce) + "\n"
				   "edProduce->Text = " + edProduce->Text + "\n"
				   "viYear          = " + IntToStr(viYear) + "\n"
				   "vcNDS           = " + IntToStr(vcNDS) + "\n"
				   "viSrc           = " + IntToStr(viSrc)
				   );  */
	  }

		if(rbGetNE->Checked)
	 {
	   QGetNE->Close();
	   DSSelectNE->DataSet=QGetNE;
	   QGetNE->Parameters->Items[0]->DataType=ftInteger;
	   QGetNE->Parameters->Items[0]->Value=viIdnProduce;
	   QGetNE->Parameters->Items[1]->Value=edProduce->Text;
	   QGetNE->Parameters->Items[2]->Value=vcNDS;
	   QGetNE->Parameters->Items[3]->Value=viSrc;
	   QGetNE->Open();
	   cxGridDBBandedTableView1Column4->Visible=false;
	   cxGridDBBandedTableView1->Bands->Items[0]->Width=1000;
	   btInsNE->Enabled=true;
	  }
		if(rbAll->Checked)
	 {
	   QSelectAll->Close();
	   DSSelectNE->DataSet=QSelectAll;
	   QSelectAll->Parameters->Items[0]->DataType=ftString;
	   QSelectAll->Parameters->Items[0]->Value=edProduce->Text;
	   QSelectAll->Parameters->Items[1]->Value=viSrc;
	   QSelectAll->Open();
	   cxGridDBBandedTableView1Column4->Visible=true;
	   cxGridDBBandedTableView1->Bands->Items[0]->Width=1655;
	   btInsNE->Enabled=false;
	  }
}
//---------------------------------------------------------------------------
void __fastcall TFrSelectAdvPriseList::FormActivate(TObject *Sender)
{
  TmProduce->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TFrSelectAdvPriseList::btCloseClick(TObject *Sender)
{
  ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
void __fastcall TFrSelectAdvPriseList::cxGridDBBandedTableView1SelectionChanged(TcxCustomGridTableView *Sender)
{
  int i;
  if (cxGridLevel1->Active == true)
	 {
	  StrID = "";
	  for (i = 0,StrCol = 0; i < cxGridDBBandedTableView1->Controller->SelectedRowCount; i++)
		  {
		   StrCol = StrCol+1;
		   StrID  = StrID+cxGridDBBandedTableView1->Controller->SelectedRecords[i]->Values[0]+",";
		   }
	  }

  StrID = StrID.Delete(StrID.Trim().Length(),1);
}
//---------------------------------------------------------------------------
void __fastcall TFrSelectAdvPriseList::btInsNEClick(TObject *Sender)
{
  AnsiString vsSQLQw;

  if (Trim(StrID) != "")
	 {
	  QChekNDS->Close();
	  QChekNDS->SQL->Clear();
	  vsSQLQw = "SELECT DISTINCT NDS FROM ax_Nomenclatura WHERE Idn IN ("+StrID+")" ;
	  QChekNDS->SQL->Add(vsSQLQw);
	  QChekNDS->Open();
	  if (QChekNDS->RecordCount>1)
		 {
		  ShowMessage("Выбранные номенклатуры имеют разный НДС. Измените свой выбор. ");
		  return;
		  }
	  vcNDSNew = QChekNDS->Fields->Fields[0]->AsCurrency;
	  }

  ModalResult = mrOk;
}
//---------------------------------------------------------------------------
void __fastcall TFrSelectAdvPriseList::edProduceChange(TObject *Sender)
{
  TmProduce->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TFrSelectAdvPriseList::rbInProduceClick(TObject *Sender)
{
 TmProduce->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TFrSelectAdvPriseList::rbOutProduceClick(TObject *Sender)
{
 TmProduce->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TFrSelectAdvPriseList::rbAllClick(TObject *Sender)
{
 TmProduce->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TFrSelectAdvPriseList::cxGridDBBandedTableView1DblClick(TObject *Sender)
{
//ShowMessage(IntToStr(viIdnProduce));
//ShowMessage(QOutProduceNDSyear->SQL->Strings.c_str());
}
//---------------------------------------------------------------------------

