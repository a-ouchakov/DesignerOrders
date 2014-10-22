//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FindProduceNE.h"
#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cxClasses"
#pragma link "cxControls"
#pragma link "cxCustomData"
#pragma link "cxDBTL"
#pragma link "cxGraphics"
#pragma link "cxInplaceContainer"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
#pragma link "cxMaskEdit"
#pragma link "cxStyles"
#pragma link "cxTL"
#pragma link "cxTLData"
#pragma link "cxTLdxBarBuiltInMenu"
#pragma link "dxSkinsCore"
#pragma link "dxSkinsDefaultPainters"
#pragma link "RzButton"
#pragma link "RzEdit"
#pragma link "RzPanel"
#pragma link "cxCheckBox"
#pragma link "RzChkLst"
#pragma link "RzLstBox"
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
#pragma link "dxSkinMetropolis"
#pragma link "dxSkinMetropolisDark"
#pragma link "dxSkinOffice2013DarkGray"
#pragma link "dxSkinOffice2013LightGray"
#pragma link "dxSkinOffice2013White"
#pragma resource "*.dfm"
TFrFindProduceNE *FrFindProduceNE;
TcxTreeListNode *NdExp, *NdClick;
//---------------------------------------------------------------------------
__fastcall TFrFindProduceNE::TFrFindProduceNE(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrFindProduceNE::btCloseClick(TObject *Sender)
{
ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
void __fastcall TFrFindProduceNE::btGiveProduceClick(TObject *Sender)
{
 ModalResult = mrOk;
}
//---------------------------------------------------------------------------
void __fastcall TFrFindProduceNE::QProduceCalcFields(TDataSet *DataSet)
{
DataSet->Fields->Fields[0]->Value=QProducechek->AsInteger;
}
//---------------------------------------------------------------------------

void __fastcall TFrFindProduceNE::tlRaspDetailClick(TObject *Sender)
{
if (NdExp!=0) {NdExp=0; return;}
int k;
TcxTreeListNode *Nd;

if(tlRaspDetail->FocusedColumn->Tag!=1){return;}//Клик не на первом


tlRaspDetail->BeginUpdate();Nd=NdClick;

if(Nd->Values[0].IsNull()==true)Nd->Values[0]=0;
k=0;if(((Nd->Values[0])&0x1)==0)k=1; Nd->Values[0]=k;
if(Nd->HasChildren==true){MainForm->SetSelectNodes(Nd,k);}       //Имеет дочерние
tlRaspDetail->EndUpdate();

if (NdClick!=0) {NdClick=0;}
}
//---------------------------------------------------------------------------

void __fastcall TFrFindProduceNE::tlRaspDetailMouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y)
{
NdClick=tlRaspDetail->GetNodeAt(X,Y);
NdExp=0;
}
//---------------------------------------------------------------------------

void __fastcall TFrFindProduceNE::tlRaspDetailGetNodeImageIndex(TcxCustomTreeList *Sender,
          TcxTreeListNode *ANode, TcxTreeListImageIndexType AIndexType,
          Uitypes::TImageIndex &AIndex)
{
// Подставить иконку
int i=ANode->Values[tlRaspDetailcxDBTreeListColumn2->ItemIndex];
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

void __fastcall TFrFindProduceNE::TmProduceTimer(TObject *Sender)
{
TmProduce->Enabled=false;
QProduce->Open();
tlRaspDetail->FullCollapse();
}
//---------------------------------------------------------------------------

void __fastcall TFrFindProduceNE::FormActivate(TObject *Sender)
{
 TmProduce->Enabled=true;

}
//---------------------------------------------------------------------------

void __fastcall TFrFindProduceNE::RzToolButton1Click(TObject *Sender)
{
 tlRaspDetail->FullCollapse();
}
//---------------------------------------------------------------------------

void __fastcall TFrFindProduceNE::RzToolButton2Click(TObject *Sender)
{
tlRaspDetail->FullExpand();
}
//---------------------------------------------------------------------------

void __fastcall TFrFindProduceNE::RzToolButton3Click(TObject *Sender)
{
//  TStrings *S;
//  TField *F,*Fi;
//  TADOQuery *Qi;
//  AnsiString vsSQL;

  bool fEnable;
  int IIp,IIc,iI,jJ,*Pii,*Vii;
  char *Cii,*Cpi;
  struct ListItems *LI;
  TcxTreeListNode *Nd;
  int CountCheckOld = RzCheckList1->Items->Count ;
  int *viIdnPI = new int [CountCheckOld];

  int i,y;
  AnsiString vsIdnPI = "";

  for(i = 0; i < CountCheckOld; i++)
  {
    viIdnPI[i] = (int)RzCheckList1->Items->Objects[i];
  }

  /*{vsIdnPI=vsIdnPI+ ","+IntToStr((int)RzCheckList1->Items->Objects[i]);}
   vsIdnPI=vsIdnPI.Delete(1,1);*/

  Nd = tlRaspDetail->Root;
  RzCheckList1->Items->BeginUpdate();
  IIp = 0;
  while(Nd != NULL && IIp < QProduce->RecordCount-1)
  {
    if(Nd->Values[0].IsNull() == true)
    {
      Nd = Nd->GetNext();
      continue;
    }
//	  int iii = Nd->Values[0];

	  if((Nd->Values[0]&0x01) == 1)
	  {
      if(Nd->Values[0].IsNull() == true)
      {
        Nd = Nd->GetNext();
        continue;
      }

	    /* Qw->Close();Qw->SQL->Clear();
  	  vsSQL=   " SELECT  A.Idn,B.iText "
	  			" FROM all_AdvProduceClass A "
		  		" LEFT JOIN spl_LbText512 B ON B.Idn=A.id512Name "
			  	" WHERE A.Idn = "+Nd->Values[3];
  	  Qw->SQL->Add(vsSQL);
	  	Qw->Open(); Fi=Qw->Fields->Fields[0];F=Qw->Fields->Fields[1];
		  RzCheckList1->AddObject(F->AsString,(TObject*)Fi->AsInteger); */

  		fEnable = false;
	  	for(i = 0; i < CountCheckOld; i++)
		  {
//        int qqq = viIdnPI[i];
//        int www = Nd->Values[3];
  		  if (viIdnPI[i] == Nd->Values[3])
          fEnable=true;
      }

  		if (((Nd->Values[2]) == 4)&& !fEnable)
      {
        RzCheckList1->AddObject(Nd->Values[1],(TObject*)(int)Nd->Values[3]);
      }

  	}
    Nd= Nd->GetNext();
  	IIp++;
  }
  RzCheckList1->Items->EndUpdate();
}
//---------------------------------------------------------------------------

void __fastcall TFrFindProduceNE::RzToolButton5Click(TObject *Sender)
{  int CountCheckOld=RzCheckList1->Items->Count,i ;
		for(i=CountCheckOld-1;i >=0;i--)
		{ if (RzCheckList1->ItemChecked[i] )RzCheckList1->Items->Delete(i);
		}
}
//---------------------------------------------------------------------------

void __fastcall TFrFindProduceNE::RzToolButton4Click(TObject *Sender)
{
  RzCheckList1->Items->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFrFindProduceNE::tlRaspDetailExpanding(TcxCustomTreeList *Sender,
          TcxTreeListNode *ANode, bool &Allow)
{
NdExp=ANode;
}
//---------------------------------------------------------------------------

