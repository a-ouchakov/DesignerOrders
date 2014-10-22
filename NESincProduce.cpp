//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "NESincProduce.h"
#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzPanel"
#pragma link "RzSplit"
#pragma link "cxClasses"
#pragma link "cxControls"
#pragma link "cxCurrencyEdit"
#pragma link "cxCustomData"
#pragma link "cxData"
#pragma link "cxDataStorage"
#pragma link "cxDBData"
#pragma link "cxDBTL"
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
#pragma link "cxImageComboBox"
#pragma link "cxInplaceContainer"
#pragma link "cxMaskEdit"
#pragma link "cxStyles"
#pragma link "cxTL"
#pragma link "cxTLData"

#pragma link "RzSpnEdt"
#pragma link "RzEdit"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
#pragma link "cxTLdxBarBuiltInMenu"
#pragma link "dxSkinsCore"
#pragma link "dxSkinscxPCPainter"
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
#pragma link "cxNavigator"
#pragma link "dxSkinMetropolis"
#pragma link "dxSkinMetropolisDark"
#pragma link "dxSkinOffice2013DarkGray"
#pragma link "dxSkinOffice2013LightGray"
#pragma link "dxSkinOffice2013White"
#pragma resource "*.dfm"
TFrNESincProduce *FrNESincProduce;
//---------------------------------------------------------------------------
__fastcall TFrNESincProduce::TFrNESincProduce(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrNESincProduce::TmNE_AxaptaTimer(TObject *Sender)
{ if (QNE_Axapta->Active) viIdnNE_Axapta=QNE_AxaptaIdn->AsInteger;else viIdnNE_Axapta=0;
 TmNE_Axapta->Enabled=false;
 QNE_Axapta->DisableControls();
 QNE_Axapta->Close();
 QNE_Axapta->Open();
  if(viIdnNE_Axapta>0)
 {try{Opts.Clear();locvalues[0]=Variant(viIdnNE_Axapta);QNE_Axapta->Locate("Idn",locvalues,Opts);}catch(...){};};
 QNE_Axapta->EnableControls();
}
//---------------------------------------------------------------------------
void __fastcall TFrNESincProduce::FormActivate(TObject *Sender)
{
  TmNE_Axapta->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TFrNESincProduce::DSNE_AxaptaDataChange(TObject *Sender,
      TField *Field)
{
 edCod->Text=QNE_AxaptaIdn->AsString;
 edName->Text=QNE_AxaptaItemName->AsString;
 TmProduce->Enabled=true;
 TmProduce->Enabled=true;	
}
//---------------------------------------------------------------------------
void __fastcall TFrNESincProduce::TmProduceTimer(TObject *Sender)
{
  if (QProduce->Active) viIdnProduce=QProduceidn->AsInteger; else viIdnProduce=0;
  TmProduce->Enabled=false;
  QProduce->DisableControls();
  QProduce->Close();
  QProduce->Parameters->Items[0]->Value=QNE_AxaptaIdn->AsInteger;
  QProduce->Open();
   if(viIdnProduce>0)
 {try{Opts.Clear();locvalues[0]=Variant(viIdnProduce);QProduce->Locate("Idn",locvalues,Opts);}catch(...){};};  
  QProduce->EnableControls();
}
//---------------------------------------------------------------------------
void __fastcall TFrNESincProduce::RzBitBtn1Click(TObject *Sender)
{
  TmNE_Axapta->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TFrNESincProduce::RzBitBtn2Click(TObject *Sender)
{
TmProduce->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TFrNESincProduce::btCloseClick(TObject *Sender)
{
ModalResult = mrCancel;	
}
//---------------------------------------------------------------------------
void __fastcall TFrNESincProduce::RzToolButton1Click(TObject *Sender)
{
 tlRaspDetail->FullCollapse();	
}
//---------------------------------------------------------------------------
void __fastcall TFrNESincProduce::RzToolButton2Click(TObject *Sender)
{
 tlRaspDetail->FullExpand();	
}
//---------------------------------------------------------------------------
void __fastcall TFrNESincProduce::RzBitBtn3Click(TObject *Sender)
{
 if (QProduceiType->AsInteger!=3)
	{ShowMessage("Необходимо выбрать продукт, к которому будут перепривязаны все подписные индексы данной номенклатуры."); return; }
 if(MessageDlg("Вы уверенны, что хотите перепривязать все ПИ данной номенклатуры к выбраному продукту?\nИзменения будут необратимы!!!" ,mtWarning,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrNo){return;}

				   QSinc->Close();
				   QSinc->Parameters->Items[0]->Value=QNE_AxaptaIdn->AsInteger;
				   QSinc->Parameters->Items[1]->Value=QProduceidn->AsInteger;
				   QSinc->ExecSQL();
 TmProduce->Enabled=true;				   
                                      
}
//---------------------------------------------------------------------------
void __fastcall TFrNESincProduce::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
   if(Key == VK_ESCAPE) Close();	
}
//---------------------------------------------------------------------------
void __fastcall TFrNESincProduce::DSProduceDataChange(TObject *Sender,
      TField *Field)
{
  if(QProduceiType->AsInteger==4) TmNE->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TFrNESincProduce::TmNETimer(TObject *Sender)
{
  TmNE->Enabled=false;
  QNE->Close();
  QNE->Parameters->Items[0]->Value=QProduceidn->AsInteger;
  QNE->Open();
  	
}
//---------------------------------------------------------------------------

void __fastcall TFrNESincProduce::tlRaspDetailGetNodeImageIndex(TcxCustomTreeList *Sender,
          TcxTreeListNode *ANode, TcxTreeListImageIndexType AIndexType,
          Uitypes::TImageIndex &AIndex)
{
// Выбор иконки [2] для компаний продвижения
  switch((int)AIndex)
   {case 0:  //Не выбрано
	   AIndex=1; break;
	case 1:   //Комплект
		  AIndex=1; break;//if( ANode->Expanded==true)AIndex=56;else AIndex=56;break;
	case 2: //Подписной индекс
	   AIndex=2; break;
	case 3: //Номенклатурная еденица
		AIndex=3; break;
	case 4: //Номенклатурная еденица
		AIndex=4; break;
	default: AIndex=QProduceiType->AsInteger;
   }
}
//---------------------------------------------------------------------------

