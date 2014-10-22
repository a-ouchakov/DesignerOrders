//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EditProduce.h"
#include "EditPIinProduce.h"
#include "AddProduceNew.h"
#include "main.h"
#include "Init.h"
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

#pragma link "cxImageComboBox"
#pragma link "cxClasses"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
#pragma link "cxTLdxBarBuiltInMenu"
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
#pragma link "dxSkinsCore"
#pragma link "dxSkinsDefaultPainters"
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
#pragma link "cxCalendar"
#pragma link "dxSkinMetropolis"
#pragma link "dxSkinMetropolisDark"
#pragma link "dxSkinOffice2013DarkGray"
#pragma link "dxSkinOffice2013LightGray"
#pragma link "dxSkinOffice2013White"
#pragma resource "*.dfm"
TFrEditProduce *FrEditProduce;
char flFrEditProduce;
//---------------------------------------------------------------------------
__fastcall TFrEditProduce::TFrEditProduce(TComponent* Owner) : TForm(Owner)
{
 fDel=false;
 TmProduce->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TFrEditProduce::btCloseClick(TObject *Sender)
{
Close();// ModalResult = mrCancel; 	
}
//---------------------------------------------------------------------------
void __fastcall TFrEditProduce::btInsRaspClick(TObject *Sender)
{
ModalResult=mrOk;	
}
//---------------------------------------------------------------------------
void __fastcall TFrEditProduce::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
 if(Key == VK_ESCAPE)Close();//  ModalResult = mrCancel;	
}
//---------------------------------------------------------------------------
void __fastcall TFrEditProduce::TmProduceTimer(TObject *Sender)
{
  TmProduce->Enabled = false;
  QProduce->DisableControls();
  QProduce->Close();
  QProduce->SQL->Clear();
  AnsiString vsTmp = "";
 /*if((fEditRaspDetail)&&(FrEditRaspDetail->cbTypeName->ItemIndex!=-1))
	{ vsTmp=" AND A.Id24TypeName="+IntToStr((int)FrEditRaspDetail->cbTypeName->Items->Objects[FrEditRaspDetail->cbTypeName->ItemIndex]);}
	*/
 QProduce->SQL->Add("DECLARE @MyStr varchar(256); "
					"    SET @MyStr = :D0;"
					"IF(exists(select * from tempdb..sysobjects where id = object_id('tempdb..#WsTempTreeId'))) TRUNCATE TABLE #WsTempTreeId; "
					"ELSE CREATE TABLE #WsTempTreeId(Idn int NULL);"
					" SET @MyStr = ' /* (A.srcActual=1) AND*/ A.Id512NameCatalog=/*9441225*/9113095 "+vsTmp+" and (A.iType=4 or A.iType=3 or A.iType=2) and A.datedel is null AND B.iText LIKE ''%'+@MyStr+'%''';"
					" insert into #WsTempTreeId(Idn)"
//" exec pr_All_Get_TreeValues @NameTable='dbo.all_AdvProduceClass',@idn='idn',@idnP='idnP',@fwork=1,@Usl=@MyStr;"
					" exec pr_All_Get_TreeValues @NameTable='all_AdvProduceClass A LEFT JOIN spl_LbText512 B ON B.Idn=id512Name',@idn='A.idn',@idnP='A.idnP',@fwork=1,@Usl=@MyStr;"
					" select DISTINCT A.idn, A.idnP,B.iText, A.iType,C.iText TypeName,A.IdIns, D.auFamIO, isnull(A.ISSN,'') ISSN, isnull(A.CodeB,'') CodeB, isnull(E.fActual,0) fActual , isnull(A.Id24TypeName,0) Id24TypeName, A.DateIns"
					" from all_AdvProduceClass  A "
					" LEFT JOIN spl_LbText512   B ON (B.Idn=A.id512Name) "
					" LEFT JOIN spl_LbText24    C ON (C.Idn=A.Id24TypeName) "
					" LEFT JOIN aa_Users        D ON (D.auId=A.IdIns) "
					" LEFT JOIN vwActualProduce E ON (E.Idn = A.Idn) "
					" WHERE /*A.iType<>4 AND*/ A.DateDel is null and A.idn in(select idn from #WsTempTreeId)/* AND (A.srcActual=1)*/ ");

  if (CheckBox1->Checked)
	  QProduce->SQL->Add(" AND A.Id24TypeName is null AND A.iType = 4 ");

  QProduce->SQL->Add(" ORDER BY A.iType, B.iText");
  QProduce->Parameters->Items[0]->Value = edProduce->Text;

  QProduce->Open();
 //tlRaspDetail->FullExpand();
  if (viIdnProduce > 0)
	 {
	  try
		 {
		  Opts.Clear();
		  locvalues[0] = Variant(viIdnProduce);
		  QProduce->Locate("Idn", locvalues, Opts);
		  }
		  catch(...)
			   {};
	  };

  if (fDel)
	  tlRaspDetail->FocusedNode->Expand(false);
  fDel = false;
  QProduce->EnableControls();
}
//---------------------------------------------------------------------------
void __fastcall TFrEditProduce::edProduceChange(TObject *Sender)
{
  TmProduce->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TFrEditProduce::RzToolButton1Click(TObject *Sender)
{
 tlRaspDetail->FullCollapse();	
}
//---------------------------------------------------------------------------
void __fastcall TFrEditProduce::RzToolButton2Click(TObject *Sender)
{
 tlRaspDetail->FullExpand();	
}
//---------------------------------------------------------------------------
void __fastcall TFrEditProduce::RzBitBtn3Click(TObject *Sender)
{
  AnsiString vsSQLQw;
  if (QProduceiType->AsInteger >= 3)
	 {
	  ShowMessage("Нельзя создавать раздел или продукт в продукте или подписном индексе.");
	  return;
	  }

 #ifdef  TFR
#undef  TFR
#undef  FR
#endif
#define TFR TFrAddProduceNew
#define FR  FrAddProduceNew

  FR = new TFR(Application);
  FR->viIdnPProduce = QProduceidn->AsInteger;
  FR->fEdit = false;
  FR->RzGroupBox1->Visible = true;
  vsSQLQw = "SELECT Idn FROM all_AdvProduceClass WHERE Idn=:D0 AND DateDel IS NULL AND idnP=0";
  Qw->Close();
  Qw->SQL->Clear();
  Qw->SQL->Add(vsSQLQw);
  Qw->Parameters->Items[0]->Value = QProduceidn->AsInteger;
  Qw->Open();
  if (Qw->RecordCount > 0)
	 {
	  FR->RzRadioButton2->Checked = true;
	  FR->RzRadioButton1->Enabled = false;
	  }
  FR->ShowModal();
  FR->WindowState = wsMinimized;
  if (FR->ModalResult == mrOk)
	 {
	  viIdnProduce=FR->viIdnProduce;
	  TmProduce->Enabled = true;
	  //{try{Opts.Clear();locvalues[0]=Variant(viIdnProduce);QProduce->Locate("Idn",locvalues,Opts);}catch(...){};};
	  }
  delete (FR);
}
//---------------------------------------------------------------------------
void __fastcall TFrEditProduce::RzBitBtn2Click(TObject *Sender)
{
  if (QProduceidn->AsInteger == 44477)    //added by R.Perkatov 2014-08-08 ибо нех удалять этот раздел
	 {
      ShowMessage("Удалить раздел продуктового каталога ''" + QProduceiText->AsString + "'' нельзя!");
	  return;
	  }

  AnsiString vsSQLQw;
//Проверяем раздел или продукт?
if ((QProduceiType->AsInteger!=3)&&(QProduceiType->AsInteger!=2))
 {ShowMessage("Можно удалять только продукт или раздел."); return; }
//Проверяем есть ли вложенное?
vsSQLQw="SELECT Idn FROM all_AdvProduceClass WHERE idnP=:D0 AND DateDel IS NULL";
	Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	Qw->Parameters->Items[0]->Value=QProduceidn->AsInteger;
	Qw->Open();
if (Qw->RecordCount>0) { ShowMessage("Запись не может быть удалена, так как содержит дочерние записи."); return; }

//bool rr=GetPerm(QProduceIdIns->AsInteger);

if(!GetPerm(QProduceIdIns->AsInteger)) {ShowMessage(" Удаление невозможно. \n Только создавший запись и его руководитель могут удалять данную запись."); return; }




if(MessageDlg("Вы уверены, что хотите удалить данную запись?\nПродолжение приведёт к полному удалению записи и связанных с нею данных из Базы!!!" ,mtWarning,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrNo){return;}

vsSQLQw="UPDATE all_AdvProduceClass SET DateDel=GetDate()  WHERE idn=:D0";
	Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	Qw->Parameters->Items[0]->Value=QProduceidn->AsInteger;
	Qw->ExecSQL();


 viIdnProduce=QProduceidnP->AsInteger;
 TmProduce->Enabled=true;

 fDel=true;


}
//---------------------------------------------------------------------------
void __fastcall TFrEditProduce::RzBitBtn1Click(TObject *Sender)
{ AnsiString vsSQLQw; int viTmpResult;
if (QProduceiType->AsInteger==1)
 {ShowMessage("Нельзя редактировать тематическое направление."); return; }
  if (QProduceiType->AsInteger==4)
 {  if(!MainForm->flEditUFL)  {ShowMessage("Редактировать данный подписной индекс невозможно.\nУ Вас не хватает прав."); return; }
#ifdef  TFR
#undef  TFR
#undef  FR
#endif
#define TFR TFrEditPIinProduce
#define FR  FrEditPIinProduce
  FR=new TFR(Application);
  FR->viIdnProduce=QProduceidn->AsInteger;
  FR->meIndex->Text=QProduceiText->AsString;
 vsSQLQw=" SELECT Idn,iText FROM dbo.spl_LbText24 WHERE iLvl=1354 and DateDel is null" ;
 FR->Qw->Close();FR->Qw->SQL->Clear();FR->Qw->SQL->Add(vsSQLQw);
 FR->Qw->Open();FR->cbTypeName->Clear();
  while(FR->Qw->Eof==false){FR->cbTypeName->AddObject(FR->Qw->Fields->Fields[1]->AsString,(TObject*)FR->Qw->Fields->Fields[0]->AsInteger);FR->Qw->Next();}FR->Qw->Close();
if(QProduceId24TypeName->AsInteger>0){try{FR->cbTypeName->ItemIndex=FR->cbTypeName->Items->IndexOfObject((TObject*)QProduceId24TypeName->AsInteger );}catch(...){};}

  FR->ShowModal();
  FR->WindowState=wsMinimized;
	  if (FR->ModalResult == mrOk)
		{
		viIdnProduce=FR->viIdnProduce;
		vsSQLQw=" UPDATE all_AdvProduceClass SET Id24TypeName=:D0, DateMod=GetDate(), IdMod=:D1  WHERE Idn=:D2 " ;
		FR->Qw->Close();FR->Qw->SQL->Clear();FR->Qw->SQL->Add(vsSQLQw);
		if ((FR->cbTypeName->ItemIndex==-1)) {viTmpResult=0;} else {viTmpResult=(int)FR->cbTypeName->Items->Objects[FR->cbTypeName->ItemIndex]; }
		FR->Qw->Parameters->Items[0]->Value=viTmpResult;
		FR->Qw->Parameters->Items[1]->Value=PermisHdr.KeyUserStartProgramm;;
		FR->Qw->Parameters->Items[2]->Value=viIdnProduce;
		FR->Qw->ExecSQL();



		TmProduce->Enabled=true;
		}
  delete (FR);
 }


 if ((QProduceiType->AsInteger==3)||(QProduceiType->AsInteger==2))
 {
 if(!GetPerm(QProduceIdIns->AsInteger)) {ShowMessage("Редактирование невозможно.\nТолько создавший запись и его руководитель могут редактировать данную запись."); return; }

#ifdef  TFR
#undef  TFR
#undef  FR
#endif
#define TFR TFrAddProduceNew
#define FR  FrAddProduceNew

  FR=new TFR(Application);
  FR->viIdnProduce=QProduceidn->AsInteger;
  FR->viIdnPProduce=QProduceidnP->AsInteger;
  FR->fEdit=true;
  FR->RzGroupBox1->Visible=false;
  if (QProduceiType->AsInteger==2) {FR->RzPanel2->Visible=false;FR->RzRadioButton2->Checked=true; }else {FR->RzPanel2->Visible=true;FR->RzRadioButton1->Checked=true;}
  FR->edT512Name->Text=Trim(QProduceiText->AsString)/*+IntToStr(QProduceidn->AsInteger)*/;
  FR->edISSN->Text=Trim(QProduceISSN->AsString);
  FR->edCodeB->Text=Trim(QProduceCodeB->AsString);
  FR->ShowModal();
  FR->WindowState=wsMinimized;
	  if (FR->ModalResult == mrOk)
		{
		viIdnProduce=FR->viIdnProduce;
		TmProduce->Enabled=true;
	  //{try{Opts.Clear();locvalues[0]=Variant(viIdnProduce);QProduce->Locate("Idn",locvalues,Opts);}catch(...){};};
		}
  delete (FR);
 }
}
//---------------------------------------------------------------------------
bool __fastcall TFrEditProduce::GetPerm(int IdIns)//Есть ли права на изменение записи
{ AnsiString  vsSQLQw;  bool vbTmp;
 vbTmp =false;
 if (MainForm->flUserSAP ) {vbTmp= true;}

 vsSQLQw=" SELECT PidManager FROM bm_GroupManager WHERE idManager=:D0 ";

 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value=IdIns;
 Qw->Open();

 if((IdIns==PermisHdr.KeyUserStartProgramm)||(Qw->Fields->Fields[0]->AsInteger==PermisHdr.KeyUserStartProgramm) )
 {vbTmp= true;}

  return vbTmp;

}
//---------------------------------------------------------------------------
void __fastcall TFrEditProduce::tlRaspDetailDblClick(TObject *Sender)
{
  RzBitBtn1Click(Sender);	
}
//---------------------------------------------------------------------------


void __fastcall TFrEditProduce::CheckBox1Click(TObject *Sender)
{
  TmProduce->Enabled=true; 
}
//---------------------------------------------------------------------------

void __fastcall TFrEditProduce::tlRaspDetailCustomDrawDataCell(TcxCustomTreeList *Sender,
		  TcxCanvas *ACanvas, TcxTreeListEditCellViewInfo *AViewInfo,
		  bool &ADone)
{
  if(QProduce->Active==false)return;
else{
		if(AViewInfo->Selected==true){ACanvas->Brush->Color=clHighlight;}
	else{   if(!MainForm->flEditClass)
			   {
				if((int)(AViewInfo->Node->Values[5]) ==1) ACanvas->Brush->Color = clLime;//Утвержденные продукты или из ДМ
				if((int)(AViewInfo->Node->Values[5]) ==2) ACanvas->Brush->Color = clYellow;//Продукты на утверждении
				if((int)(AViewInfo->Node->Values[5]) ==0) ACanvas->Brush->Color = clWindow;//Прочие
			   }
		 }
	  }
}
//---------------------------------------------------------------------------

void __fastcall TFrEditProduce::tlRaspDetailGetNodeImageIndex(TcxCustomTreeList *Sender,
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

