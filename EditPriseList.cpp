//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop


#include "main.h"
#include "Init.h"
#include "EditPriseList.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzEdit"
#pragma link "RzPanel"
#pragma link "cxControls"
#pragma link "cxCustomData"
#pragma link "cxDBTL"
#pragma link "cxGraphics"
#pragma link "cxImageComboBox"
#pragma link "cxInplaceContainer"
#pragma link "cxMaskEdit"
#pragma link "cxStyles"
#pragma link "cxTL"
#pragma link "cxTLData"

#pragma link "cxCalendar"
#pragma link "RzSplit"
#pragma link "RzRadChk"
#pragma link "RzLabel"
#pragma link "RzPrgres"
#pragma link "cxClasses"
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
#pragma link "dxSkinMetropolis"
#pragma link "dxSkinMetropolisDark"
#pragma link "dxSkinOffice2013DarkGray"
#pragma link "dxSkinOffice2013LightGray"
#pragma link "dxSkinOffice2013White"
#pragma resource "*.dfm"
TFrEditPriseList *FrEditPriseList;
char flFrEditPriseList;
//---------------------------------------------------------------------------
__fastcall TFrEditPriseList::TFrEditPriseList(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrEditPriseList::btCloseClick(TObject *Sender)
{
 Close();
}
//---------------------------------------------------------------------------
void __fastcall TFrEditPriseList::RzBitBtn4Click(TObject *Sender)
{
  QProduce->Close();
  QProduce->Open();
}
//---------------------------------------------------------------------------
void __fastcall TFrEditPriseList::RzBitBtn8Click(TObject *Sender)
{
  int viTmp;
	  viTmp = 0;
  QControl->Close();
  if(RzRadioButton1->Checked) viTmp = 0;
  if(RzRadioButton2->Checked) viTmp = 1;
  QControl->Parameters->Items[0]->Value = viTmp;
  QControl->Open();
}
//---------------------------------------------------------------------------
void __fastcall TFrEditPriseList::RzBitBtn5Click(TObject *Sender)
{
  int viIdn;
	  viIdn = IntegerField1->AsInteger;
  if (!QProduce->Active)
	   QProduce->Open();

  try
	 {
	  Opts.Clear();
	  locvalues[0] = Variant(viIdn);
	  QProduce->Locate("Idn", locvalues, Opts);
	  }
	  catch(...)
	       {};
}
//---------------------------------------------------------------------------
void __fastcall TFrEditPriseList::RzToolButton1Click(TObject *Sender)
{
 tlRaspDetail->FullCollapse();
}
//---------------------------------------------------------------------------
void __fastcall TFrEditPriseList::RzToolButton2Click(TObject *Sender)
{
tlRaspDetail->FullExpand();
}
//---------------------------------------------------------------------------
void __fastcall TFrEditPriseList::RzToolButton4Click(TObject *Sender)
{
cxDBTreeList1->FullExpand();
}
//---------------------------------------------------------------------------
void __fastcall TFrEditPriseList::RzToolButton3Click(TObject *Sender)
{
 cxDBTreeList1->FullCollapse();
}
//---------------------------------------------------------------------------
void __fastcall TFrEditPriseList::RzToolButton6Click(TObject *Sender)
{
 RzPanel300->Visible=true;
 RzPanel300->Repaint();

 ////////////////////////////////////////
  try
	 {
	  ClockThread=new TClockThread(true);
	  *ClockThread->begtime=Time();
	  ClockThread->clockstop=0;
	  ClockThread->clc=Clock;
	  Clock->Caption="00:00:00.000";
	  //RzProgressBar2->Visible=false;
	  //Clock->Visible=true;
	  ClockThread->Resume();
	  }
	  catch(...)
		   {}
  FrEditPriseList->Enabled = false;

  Qw1->Close();
  Qw1->ExecSQL();
  RzBitBtn8Click(Sender);
  QProduce->Close();
  QProduce->Open();

  FrEditPriseList->Enabled=true;

  try
	 {
	  ClockThread->clockstop = 1;
	  ClockThread->Terminate();
	  //RzProgressBar2->Visible=false;
	  //Clock->Visible=false;
	  delete ClockThread;
	  }
	  catch(...)
		   {}

  RzPanel300->Visible = false;
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrEditPriseList::RzToolButton7Click(TObject *Sender)
{
/*для ведения истории запуска процедуры и проверки на повторный запуск во время её выполнения added by R.Perkatov 2014-07-18*/
  String q1 = "SELECT StartJob, StopJob, JobStatus, JobResult, RunBy "
			  "  FROM dbo.all_AdvPriseListEtalon_CheckJob "
			  " WHERE StopJob IS NULL "             //если StopJob IS NULL - предыдущий запуск процедуры завершён неудачно!!!
			  "    OR JobStatus <> 0 "              //если JobStatus <> 0  - предыдущий запуск процедуры завершён неудачно!!!
			  "    OR JobResult <> 1 ";             //если JobResult <> 1  - предыдущий запуск процедуры завершён неудачно!!!

  AuditQuer->Active = true;
  AuditQuer->SQL->Clear();
  AuditQuer->SQL->Add(q1);
  AuditQuer->Open();
  if (AuditQuer->RecordCount != 0)
	 {
	  ShowMessage("В данный момент запуск Первого Шага невозможен - процедура уже была запущена " + AuditQuerRunBy->Value +
				  " в " + AuditQuerStartJob->Value + ", пожалуйста, повторите Первый Шаг позже.");
	  AuditQuer->Active = false;
	  return;
	  }
	  else
		  {AuditQuer->Active = false;}
/*для ведения истории запуска процедуры и проверки на повторный запуск во время её выполнения added by R.Perkatov 2014-07-18*/


  RzPanel300->Visible = true;
  RzPanel300->Repaint();
  Timer1->Enabled = true;

  ////////////////////////////////////////
  try
	 {
	   ClockThread = new TClockThread(true);
	  *ClockThread->begtime   = Time();
	   ClockThread->clockstop = 0;
	   ClockThread->clc       = Clock;
	   Clock->Caption         = "00:00:00.000";
       Clock->Visible = true;
	   ClockThread->Resume();
	  }
	  catch(...)
		   {}

  FrEditPriseList->Enabled = false;
  Qw2->Close();
  Qw2->ExecSQL();
  RzBitBtn4Click(Sender);
  RzBitBtn8Click(Sender);
  FrEditPriseList->Enabled = true;

  try
	 {
	  ClockThread->clockstop = 1;
	  ClockThread->Terminate();
	  RzProgressBar2->Visible = false;
	  Clock->Visible = false;
	  delete ClockThread;
	  }
	  catch(...)
		   {}
  Timer1->Enabled = false;
  RzPanel300->Visible=false;
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrEditPriseList::RzToolButton5Click(TObject *Sender)
{
/*для ведения истории запуска процедуры и проверки на повторный запуск во время её выполнения added by R.Perkatov 2014-07-21*/
  String q1 = "SELECT StartJob, StopJob, JobStatus, JobResult, RunBy "
			  "  FROM dbo.all_AdvPriseListEtalon_CheckJob "
			  " WHERE StopJob IS NULL "             //если StopJob IS NULL - предыдущий запуск процедуры завершён неудачно!!!
			  "    OR JobStatus <> 0 "              //если JobStatus <> 0  - предыдущий запуск процедуры завершён неудачно!!!
			  "    OR JobResult <> 1 ";             //если JobResult <> 1  - предыдущий запуск процедуры завершён неудачно!!!

  AuditQuer->Active = true;
  AuditQuer->SQL->Clear();
  AuditQuer->SQL->Add(q1);
  AuditQuer->Open();
  if (AuditQuer->RecordCount != 0)
	 {
	  ShowMessage("В данный момент запуск Второго Шага невозможен - процедура уже была запущена " + AuditQuerRunBy->Value +
				  " в " + AuditQuerStartJob->Value + ", пожалуйста, повторите Второй Шаг позже.");
	  AuditQuer->Active = false;
	  return;
	  }
	  else
		  {AuditQuer->Active = false;}
/*для ведения истории запуска процедуры и проверки на повторный запуск во время её выполнения added by R.Perkatov 2014-07-21*/


  RzPanel300->Visible = true;
  RzPanel300->Repaint();
  try
	 {
	  ClockThread = new TClockThread(true);
	  *ClockThread->begtime = Time();
	  ClockThread->clockstop = 0;
	  ClockThread->clc = Clock;
	  //Clock->Caption = "00:00:00.000";
	  //Clock->Visible = true;
	  ClockThread->Resume();
	  }
	  catch(...)
		   {}
  FrEditPriseList->Enabled = false;

  Qw3->Close();
  Qw3->ExecSQL();
  RzBitBtn8Click(Sender);
  ///Отправка писем при обнаружении задвоенных продуктов
  Qw->Close();
  Qw->SQL->Clear();
  Qw->SQL->Add("SELECT IdAdvPriseList From all_AdvProduceClass WHERE DateDel is null group by IdAdvPriseList having count(IdAdvPriseList)>1");
  Qw->Open();

  if (Qw->RecordCount>0)                       //временно закомментил, пока не разберусь с профилем 2014-07-15 + разобрался: 2014-07-15
	  QFindDoubleProduce->ExecSQL();           //временно закомментил, пока не разберусь с профилем 2014-07-15 + разобрался: 2014-07-15

  FrEditPriseList->Enabled = true;

  try
	 {
	  ClockThread->clockstop = 1;
	  ClockThread->Terminate();
	  //RzProgressBar2->Visible = false;
	  //Clock->Visible = false;
	  delete ClockThread;
	  }
	  catch(...)
		   {}
  RzPanel300->Visible = false;
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrEditPriseList::FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)
{
   if(Key == VK_ESCAPE) Close();	
}
//---------------------------------------------------------------------------




void __fastcall TFrEditPriseList::cxDBTreeList1CustomDrawDataCell(TcxCustomTreeList *Sender,
		  TcxCanvas *ACanvas, TcxTreeListEditCellViewInfo *AViewInfo,
		  bool &ADone)
{
	if(QControl->Active==false)return;
else{
		if(AViewInfo->Selected==true){ACanvas->Brush->Color=clHighlight;}
	else{
				if(AViewInfo->Node->Values[21].IsNull()) ACanvas->Brush->Color = clWindow/*clYellow*//*clRed*/;//Не удален
				if(!AViewInfo->Node->Values[21].IsNull()) ACanvas->Brush->Color = clRed/*clRed*/;//Удален

		 }
	  }
}
//---------------------------------------------------------------------------

void __fastcall TFrEditPriseList::tlRaspDetailGetNodeImageIndex(TcxCustomTreeList *Sender,
          TcxTreeListNode *ANode, TcxTreeListImageIndexType AIndexType,
          Uitypes::TImageIndex &AIndex)
{
// Подставить иконку
int i=ANode->Values[tlRaspDetailiType->ItemIndex];
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

void __fastcall TFrEditPriseList::cxDBTreeList1GetNodeImageIndex(TcxCustomTreeList *Sender,
          TcxTreeListNode *ANode, TcxTreeListImageIndexType AIndexType,
          Uitypes::TImageIndex &AIndex)
{
// Подставить иконку
int i=ANode->Values[cxDBTreeListColumn21->ItemIndex];
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

void __fastcall TFrEditPriseList::tlRaspDetailCustomDrawDataCell(TcxCustomTreeList *Sender,
          TcxCanvas *ACanvas, TcxTreeListEditCellViewInfo *AViewInfo,
          bool &ADone)
{
	if(QProduce->Active==false)return;
else{
		if(AViewInfo->Selected==true){ACanvas->Brush->Color=clHighlight;}
	else{
				if(AViewInfo->Node->Values[21].IsNull()) ACanvas->Brush->Color = clWindow/*clYellow*//*clRed*/;//Не удален
				if(!AViewInfo->Node->Values[21].IsNull()) ACanvas->Brush->Color = clRed/*clRed*/;//Удален
 		 }
	  }
}
//---------------------------------------------------------------------------
void __fastcall TFrEditPriseList::Timer1Timer(TObject *Sender)
{
  RzPanel300->Repaint();
  Application->ProcessMessages();
}
//---------------------------------------------------------------------------

