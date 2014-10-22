//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "GetNE.h"
#include "SelectAdvPriseList.h"
#include "Init.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
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
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
#pragma link "cxStyles"
#pragma link "dxSkinsCore"
#pragma link "dxSkinscxPCPainter"
#pragma link "dxSkinsDefaultPainters"
#pragma link "RzButton"
#pragma link "RzPanel"
#pragma link "cxButtonEdit"
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
TFrGetNE *FrGetNE;
//---------------------------------------------------------------------------
__fastcall TFrGetNE::TFrGetNE(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrGetNE::btRefreshClick(TObject *Sender)
{
 QNE->Close();
 QNE->Parameters->Items[0]->Value=viIdnDetail;
 QNE->Open();
}
//---------------------------------------------------------------------------
void __fastcall TFrGetNE::FormActivate(TObject *Sender)
{
 btRefreshClick(Sender);
}
//---------------------------------------------------------------------------
void __fastcall TFrGetNE::btCloseClick(TObject *Sender)
{
  ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
void __fastcall TFrGetNE::btInsRaspClick(TObject *Sender)
{
  ModalResult = mrOk;
}
//---------------------------------------------------------------------------
void __fastcall TFrGetNE::cxGridTableViewEmplUserColumn1PropertiesButtonClick(TObject *Sender,
          int AButtonIndex)
{
#ifdef  TFR
#undef  TFR
#undef  FR
#endif
#define TFR TFrSelectAdvPriseList
#define FR  FrSelectAdvPriseList

  FR=new TFR(Application);

  FR->cxGridDBBandedTableView1->OptionsSelection->MultiSelect=false;
  FR->RzGroupBox2->Visible=false;
  FR->rbGetNE->Checked=true;

	FR->viIdnProduce=viIdnProduce;
	FR->lbNameProduce->Caption=" Выбираем замещающую номенклатуру.";
	FR->viSrc=viSrc ;
	FR->vcNDS=vcNDS;


  FR->ShowModal();
  FR->WindowState=wsMinimized;
	  if (FR->ModalResult == mrOk)
		{
			////
	vsSQLQw= " DECLARE @ItemName varchar(256),@ItemId varchar(24),@Idn int,@Number int; "
			 " SELECT @ItemName=ItemName,@ItemId=ItemId,@Idn=Idn,@Number=Number FROM dbo.ax_Nomenclatura "
			 " WHERE Idn="+IntToStr(FR->IntegerField5->AsInteger)+" "
			 " UPDATE bm_RaspDetail SET NameRaspDetail=@ItemName,NameAxapta=@ItemName,ItemId=ItemId,ItemIdAxapta=@ItemId,IdnAxapta=@Idn,NumbNE=@Number "
			 " WHERE Idn = "+IntToStr(QNEIdn->AsInteger);
   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
   Qw-> ExecSQL();

	btRefreshClick(Sender);
   ////
		}
	  if (FR->ModalResult == mrCancel) {}
  delete (FR);
}
//---------------------------------------------------------------------------
void __fastcall TFrGetNE::btDelClick(TObject *Sender)
{

 if(MessageDlg("Вы уверенны, что хотите удалить номенклатурную единицу "+QNENameRaspDetail->AsString,mtInformation,TMsgDlgButtons()<<mbYes<<mbNo,0)!=mrYes) {Abort();return;}
   Qw->Close();
   Qw->SQL->Clear();
   vsSQLQw=" UPDATE bm_RaspDetail "
				" SET   DateDel=GetDate() "
				" ,IdDel= :D0 "
				" WHERE Idn=:D1; ";
   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
   Qw->Parameters->Items[0]->Value=PermisHdr.KeyUserStartProgramm;
   Qw->Parameters->Items[1]->Value=QNEIdn->AsInteger;
   Qw->ExecSQL();

   QNE->Next();
   if (QNE->Eof==true) {QNE->Prior();}
    btRefreshClick(Sender);
}
//---------------------------------------------------------------------------
