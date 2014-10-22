//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
#include "Init.h"
#include "ControlEditProduce.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cxControls"
#pragma link "cxCustomData"
#pragma link "cxDBTL"
#pragma link "cxGraphics"
#pragma link "cxInplaceContainer"
#pragma link "cxMaskEdit"
#pragma link "cxStyles"
#pragma link "cxTL"
#pragma link "cxTLData"
#pragma link "RzButton"
#pragma link "RzEdit"
#pragma link "RzLabel"
#pragma link "RzPanel"
#pragma link "RzPrgres"
#pragma link "RzRadChk"
#pragma link "RzSplit"
#pragma link "cxImageComboBox"
#pragma link "cxCalendar"
#pragma link "cxClasses"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
#pragma link "cxTLdxBarBuiltInMenu"
//#pragma link "dxSkinsCore"
//#pragma link "dxSkinsDefaultPainters"
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
//#pragma link "dxSkinSeven"
//#pragma link "dxSkinSharp"
//#pragma link "dxSkinSilver"
//#pragma link "dxSkinSpringTime"
//#pragma link "dxSkinStardust"
//#pragma link "dxSkinSummer2008"
//#pragma link "dxSkinValentine"
//#pragma link "dxSkinXmas2008Blue"
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
#pragma resource "*.dfm"
TFrControlEditProduce *FrControlEditProduce;
char flFrControlEditProduce;
//---------------------------------------------------------------------------
__fastcall TFrControlEditProduce::TFrControlEditProduce(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrControlEditProduce::btCloseClick(TObject *Sender)
{
 Close();
}
//---------------------------------------------------------------------------
void __fastcall TFrControlEditProduce::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
   if(Key == VK_ESCAPE) Close();	
}
//---------------------------------------------------------------------------

void __fastcall TFrControlEditProduce::RzToolButton1Click(TObject *Sender)
{
 tlRaspDetail->FullCollapse();	
}
//---------------------------------------------------------------------------

void __fastcall TFrControlEditProduce::RzToolButton2Click(TObject *Sender)
{
 tlRaspDetail->FullExpand();		
}
//---------------------------------------------------------------------------

void __fastcall TFrControlEditProduce::RzBitBtn4Click(TObject *Sender)
{
 QProduce->Close();
 QProduce->Open(); 	
}
//---------------------------------------------------------------------------

void __fastcall TFrControlEditProduce::RzBitBtn8Click(TObject *Sender)
{int viTmp;
  viTmp=0;
  QControl->Close();
  if(RzRadioButton1->Checked) viTmp=0;
  if(RzRadioButton2->Checked) viTmp=1;
  QControl->Parameters->Items[0]->Value=viTmp;
  QControl->Open();
}
//---------------------------------------------------------------------------

void __fastcall TFrControlEditProduce::RzBitBtn5Click(TObject *Sender)
{
 int viIdn;
   viIdn=QControlidn->AsInteger;
  QProduce->Close();
  QProduce->Open();

  try{Opts.Clear();locvalues[0]=Variant(viIdn);QProduce->Locate("Idn",locvalues,Opts);}catch(...){};	
}
//---------------------------------------------------------------------------


void __fastcall TFrControlEditProduce::cxDBTreeList1CustomDrawDataCell(TcxCustomTreeList *Sender,
          TcxCanvas *ACanvas, TcxTreeListEditCellViewInfo *AViewInfo,
          bool &ADone)
{   /*
  if(QControl->Active==false)return;
else{
		if(AViewInfo->Selected==true){ACanvas->Brush->Color=clHighlight;}
	else{
				if(AViewInfo->Node->Values[5].IsNull()) ACanvas->Brush->Color = clWindow;//Не удален
				if(!AViewInfo->Node->Values[5].IsNull()) ACanvas->Brush->Color = clRed;//Удален

		 }
	  }      */
}
//---------------------------------------------------------------------------


void __fastcall TFrControlEditProduce::tlRaspDetailGetNodeImageIndex(TcxCustomTreeList *Sender,
          TcxTreeListNode *ANode, TcxTreeListImageIndexType AIndexType,
          Uitypes::TImageIndex &AIndex)
{
// Подставить иконку
int i=ANode->Values[tlRaspDetailcxDBTreeListColumn3->ItemIndex];
  {switch(i)
   {case 1:
   if( ANode->Expanded==true)AIndex=1; else AIndex=1;
   break;

   case 2:
   if( ANode->Expanded==true)AIndex=2; else AIndex=2;

   break;
   case 3:
   if( ANode->Expanded==true)AIndex=3; else AIndex=3;
   break;

   case 4:
   if( ANode->Expanded==true)AIndex=4; else AIndex=4;
   break;
   }
  }
}
//---------------------------------------------------------------------------

void __fastcall TFrControlEditProduce::cxDBTreeList1GetNodeImageIndex(TcxCustomTreeList *Sender,
          TcxTreeListNode *ANode, TcxTreeListImageIndexType AIndexType,
          Uitypes::TImageIndex &AIndex)
{
// Подставить иконку
int i=ANode->Values[cxDBTreeListColumn1->ItemIndex];
  {switch(i)
   {case 1:
   if( ANode->Expanded==true)AIndex=1; else AIndex=1;
   break;

   case 2:
   if( ANode->Expanded==true)AIndex=2; else AIndex=2;

   break;
   case 3:
   if( ANode->Expanded==true)AIndex=3; else AIndex=3;
   break;

   case 4:
   if( ANode->Expanded==true)AIndex=4; else AIndex=4;
   break;
   }
  }
}
//---------------------------------------------------------------------------


