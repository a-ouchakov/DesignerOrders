//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "LookSheet.h"
#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzPanel"
#pragma link "cxControls"
#pragma link "cxCustomData"
#pragma link "cxDBTL"
#pragma link "cxGraphics"
#pragma link "cxInplaceContainer"
#pragma link "cxStyles"
#pragma link "cxTL"
#pragma link "cxTLData"

#pragma link "cxMaskEdit"
#pragma link "cxClasses"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
#pragma link "cxTLdxBarBuiltInMenu"
#pragma link "dxSkinsCore"
#pragma link "dxSkinsDefaultPainters"
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
#pragma link "dxSkinMetropolis"
#pragma link "dxSkinMetropolisDark"
#pragma link "dxSkinOffice2013DarkGray"
#pragma link "dxSkinOffice2013LightGray"
#pragma link "dxSkinOffice2013White"
#pragma resource "*.dfm"
TFrLookSheet *FrLookSheet;
//---------------------------------------------------------------------------
__fastcall TFrLookSheet::TFrLookSheet(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrLookSheet::btCloseClick(TObject *Sender)
{
 Close();
}
//---------------------------------------------------------------------------
void __fastcall TFrLookSheet::RzToolButton1Click(TObject *Sender)
{
 tlRaspDetail->FullCollapse();		
}
//---------------------------------------------------------------------------
void __fastcall TFrLookSheet::RzToolButton2Click(TObject *Sender)
{
  tlRaspDetail->FullExpand();	
}
//---------------------------------------------------------------------------
void __fastcall TFrLookSheet::TmProduceTimer(TObject *Sender)
{
  TmProduce->Enabled=false;
  QSelectNE->Close();
  QSelectNE->Parameters->Clear();
  AnsiString aaaaaaa= QSelectNE->SQL->Text;
  QSelectNE->Open();
}
//---------------------------------------------------------------------------
void __fastcall TFrLookSheet::FormActivate(TObject *Sender)
{
 TmProduce->Enabled=true;	
}
//---------------------------------------------------------------------------
void __fastcall TFrLookSheet::FormKeyDown(TObject *Sender, WORD &Key,
	  TShiftState Shift)
{
 if(Key == VK_ESCAPE) Close();
}
//---------------------------------------------------------------------------

void __fastcall TFrLookSheet::tlRaspDetailGetNodeImageIndex(TcxCustomTreeList *Sender,
          TcxTreeListNode *ANode, TcxTreeListImageIndexType AIndexType,
          Uitypes::TImageIndex &AIndex)
{
// Подставить иконку
int i=ANode->Values[tlRaspDetailVOrder->ItemIndex];
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

