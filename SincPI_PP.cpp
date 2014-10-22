//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Init.h"
#include "main.h"
#include "SincPI_PP.h"
#include "LookSheet.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
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

#pragma link "cxImageComboBox"
#pragma link "RzEdit"
#pragma link "cxButtonEdit"
#pragma link "RzSplit"
#pragma link "RzLabel"
#pragma link "RzCmboBx"
#pragma link "RzPrgres"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
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
#pragma link "dxSkinscxPCPainter"
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
#pragma link "cxDBTL"
#pragma link "cxInplaceContainer"
#pragma link "cxMaskEdit"
#pragma link "cxTL"
#pragma link "cxTLData"
#pragma link "cxTLdxBarBuiltInMenu"
#pragma link "cxCalendar"
#pragma link "cxNavigator"
#pragma link "dxSkinMetropolis"
#pragma link "dxSkinMetropolisDark"
#pragma link "dxSkinOffice2013DarkGray"
#pragma link "dxSkinOffice2013LightGray"
#pragma link "dxSkinOffice2013White"
#pragma resource "*.dfm"
TFrSincPI_PP *FrSincPI_PP;
char flFrSincPI_PP;
//---------------------------------------------------------------------------
__fastcall TFrSincPI_PP::TFrSincPI_PP(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TFrSincPI_PP::StartWorkFormTFrSincPI_PP()
{
   vsSQLQw=" SELECT Idn,iText FROM dbo.spl_LbText24 WHERE iLvl=1354 and DateDel is null" ;
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Open();RzComboBox1->Clear();
 RzComboBox1->Add("ВСЕ");
  while(Qw->Eof==false){RzComboBox1->AddObject(Qw->Fields->Fields[1]->AsString,(TObject*)Qw->Fields->Fields[0]->AsInteger);Qw->Next();}Qw->Close();
 RzComboBox1->ItemIndex=0;

RzToolButton4Click(NULL);

}
//---------------------------------------------------------------------------
void __fastcall TFrSincPI_PP::TmNE_DOTimer(TObject *Sender)
{ int i,viIdn;

if(QProduce->Active==true)
{
i=QProduceidn->AsInteger;

TmNE_DO->Enabled=false;
if(i>0)
	{ if(QNE_DO->Active==true) viIdn=QNE_DOidn->AsInteger;  else  viIdn=0;
	 QNE_DO->DisableControls();
	 QNE_DO->Close();

	 vsSQLQw= "select l.idn, l.idAdvProduceClass, l.IdAdvCond, l.IdAdvPriseList, l.idProductOffer, l.IdIns, l.DateIns, l.IdDel, l.DateDel "
				",p.NAME,p.OFFER_ID "
				"from dbo.all_AdvProduceLinkProductOffer l "
				"left join dbo.bm_ProductOffer p on p.ID=l.idProductOffer "
				"where l.idAdvProduceClass=:D0 ";

	 QNE_DO->Close();QNE_DO->SQL->Clear();QNE_DO->SQL->Add(vsSQLQw);
	 QNE_DO->Parameters->Items[0]->Value=i;
	 QNE_DO->Open();


 if(viIdn>0)
  {try{Opts.Clear();locvalues[0]=Variant(viIdn);QNE_DO->Locate("Idn",locvalues,Opts);}catch(...){};};
 QNE_DO->EnableControls();
  }

}
}
//---------------------------------------------------------------------------
void __fastcall TFrSincPI_PP::TmNE_AxaptaTimer(TObject *Sender)
{
  TmNE_Axapta->Enabled=false;
 QNE_Axapta->Close();
///                            Запрос изменила Диана 18.06.2012 для удобства анализа данных по НЕ
	vsSQLQw= " select DISTINCT "
"p.ID, p.OFFER_ID, rtrim(p.NAME) as NAME, p.PERIOD_ID, p.TARIFF_ID "
",t.ID, t.TARIFF_ID, t.NAME, t.CONTENTBLOCK_ID "
"/* --,c.ID,  */"
",c.ContentBlockId, c.Name "
" /* --, DA_ID    */ "
",(select count (idn) from dbo.all_AdvProduceLinkProductOffer l where l.datedel is null and l.idProductOffer=l.Idn)as FRasp "
"from dbo.bm_ProductOffer p /* --4 */ "
"left join dbo.bm_Tariff t on t.TARIFF_ID=p.TARIFF_ID /*--3 */ "
"left join dbo.bm_ContentBlock c on c.ContentBlockId=t.CONTENTBLOCK_ID /*--2 */ "
"order by  t.CONTENTBLOCK_ID,p.TARIFF_ID,3";

   QNE_Axapta->Close();QNE_Axapta->SQL->Clear();QNE_Axapta->SQL->Add(vsSQLQw);
   QNE_Axapta->Open();

}
//---------------------------------------------------------------------------

void __fastcall TFrSincPI_PP::edFindChange(TObject *Sender)
{
 TmProduce->Enabled=false;		TmProduce->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TFrSincPI_PP::RzToolButton5Click(TObject *Sender)
{
MainForm->SaveXlsFiles(cxGridEmplUserDol,"FrSincPI_PP","");
}
//---------------------------------------------------------------------------

void __fastcall TFrSincPI_PP::RzToolButton4Click(TObject *Sender)
{
// TmNE_DO->Enabled=false; TmNE_DO->Enabled=true;
 TmProduce->Enabled=false;TmProduce->Enabled=true;
 TmNE_Axapta->Enabled=false;  TmNE_Axapta->Enabled=true;
}
//---------------------------------------------------------------------------




void __fastcall TFrSincPI_PP::edFindAxaptaChange(TObject *Sender)
{
  TmNE_Axapta->Enabled=false;  TmNE_Axapta->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TFrSincPI_PP::cxGridDBBandedColumn6PropertiesButtonClick(
      TObject *Sender, int AButtonIndex)
{    AnsiString vsTmpItemId, vsTmpItemName; int viTmpIdn ;
	/*
	 viIdn=QNE_DOIdn->AsInteger;

		vsTmpItemId=QNE_AxaptaItemId->AsString;
		vsTmpItemName=QNE_AxaptaItemName->AsString;
		viTmpIdn=QNE_AxaptaIdn->AsInteger;
 //Проверка на пренадлежность НЕ к одному году
		vsSQLQw= " SELECT B.Idn FROM bm_RaspDetail  A "
				 "LEFT JOIN bm_RaspDetail  B ON A.PIdn=B.PIdn "
				 "INNER JOIN ax_Nomenclatura C ON C.Idn=B.IdnAxapta "
				 "WHERE A.DateDel is null and B.DateDel is null And A.fType=3 and B.fType=3 "
				 " AND A.Idn IN ("+StrID+") AND C.iYear<> (SELECT iYear FROM ax_Nomenclatura WHERE Idn=:D0  ) "; //Сравнение с null даст false. таким образом выбираем нужный нам год и/или null
		Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		Qw->Parameters->Items[0]->Value=viTmpIdn;
		Qw->Open();
		if(Qw->RecordCount>0)	{ShowMessage("Сохранение невозможно. \n Номенклатуры в одном подписном индексе должны принадлежать одному году."); return; }
 /////////////////

  //Проверка на пренадлежность всех НЕ в данном ПИ к одному продукту
		vsSQLQw= " SELECT B.Idn FROM bm_RaspDetail  A "
				 " LEFT JOIN bm_RaspDetail  B ON A.PIdn=B.PIdn "
				 " INNER JOIN ax_Nomenclatura C ON C.Idn=B.IdnAxapta "
				 " WHERE A.DateDel is null and B.DateDel is null And A.fType=3 and B.fType=3 "
				 " AND A.Idn IN ("+StrID+") AND C.IdProduct<> (SELECT IdProduct FROM ax_Nomenclatura WHERE Idn=:D0  ) "; //Сравнение с null даст false. таким образом выбираем нужный нам год и/или null
		Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		Qw->Parameters->Items[0]->Value=viTmpIdn;
		Qw->Open();
		if(Qw->RecordCount>0)	{ShowMessage("Сохранение невозможно. \n Номенклатуры в одном подписном индексе должны принадлежать одному продукту."); return; }

 /////////////


 //Проверка на пренадлежность данной НЕ Axapta к одному продукту
 if ((viTmpIdn!=40130)&&(viTmpIdn!=55200))//Проверка, что не "проживание". Проживание может быть в нескольких продуктах
  {
     

		vsSQLQw= " SELECT A.idAdvProduceClass, B.Idn FROM bm_RaspDetail  A"
				 " LEFT JOIN bm_RaspDetail  B ON A.Idn=B.PIdn"
				 " WHERE A.DateDel is null and B.DateDel is null"
				 " AND B.Idn IN ("+StrID+")  AND A.idAdvProduceClass <>(SELECT IdProduct FROM ax_Nomenclatura WHERE Idn=:D0)";
		Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		Qw->Parameters->Items[0]->Value=viTmpIdn;
		Qw->Open();
		if(Qw->RecordCount>0)	{ShowMessage("Сохранение невозможно. \n Имеется выбранная номенклатура, уже привязанная к другому продукту."); return; }
 }
 /////////////


 ///Проверка на НДС(должен быть одинаковым у выбранных НЕ и привязываемого НЕ из Axapta
 //Проверка на пренадлежность всех НЕ к лдному НДС
		vsSQLQw= " SELECT A.ProcNDS  FROM bm_RaspDetail  A"
				 " WHERE A.DateDel is null "
				 " AND A.Idn IN ("+StrID+")  AND isnull(A.ProcNDS,0) <>(SELECT isnull(NDS,0) FROM ax_Nomenclatura WHERE Idn=:D0)";
		Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		Qw->Parameters->Items[0]->Value=viTmpIdn;
		Qw->Open();
		if(Qw->RecordCount>0)	{ShowMessage("Сохранение невозможно. \n НДС должен быть одинаковым у выбранных НЕ и привязываемого НЕ из Axapta."); return; }


 ////////////////////////////////////////////////






		vsSQLQw=" DECLARE @ItemId varchar(24), @NameRaspDetail varchar(512), @Idn int; "
				" SET @ItemId=:D0; SET @NameRaspDetail=:D1; SET @Idn=:D2; "
				" UPDATE bm_RaspDetail SET NameAxapta=@NameRaspDetail, ItemIdAxapta=RTRIM(LTRIM(@ItemId)),IdnAxapta=@Idn,fState=2, DateMod=GetDate(), IdMod=:D3 "
				" WHERE Idn IN ("+StrID+")";
			   //	" WHERE Idn=:D4";
	   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	   Qw->Parameters->Items[0]->Value=vsTmpItemId;
	   Qw->Parameters->Items[1]->Value=vsTmpItemName;
	   Qw->Parameters->Items[2]->Value=viTmpIdn;
	   Qw->Parameters->Items[3]->Value=PermisHdr.KeyUserStartProgramm;
	 //  Qw->Parameters->Items[4]->Value=viIdn;
	   Qw->ExecSQL();

	   TmNE_DO->Enabled=true;
	   */
}
//---------------------------------------------------------------------------

void __fastcall TFrSincPI_PP::edYearAxaptaChange(TObject *Sender)
{
  TmNE_Axapta->Enabled=true;	
}
//---------------------------------------------------------------------------

void __fastcall TFrSincPI_PP::edNumbAxaptaChange(TObject *Sender)
{
TmNE_Axapta->Enabled=true;	
}
//---------------------------------------------------------------------------



void __fastcall TFrSincPI_PP::RzBitBtn3Click(TObject *Sender)
{
  edFindAxapta->Text=edFind->Text;
}
//---------------------------------------------------------------------------

void __fastcall TFrSincPI_PP::RzBitBtn2Click(TObject *Sender)
{
 edFindAxapta->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TFrSincPI_PP::RzBitBtn1Click(TObject *Sender)
{
  edFind->Text="" ;
}
//---------------------------------------------------------------------------


void __fastcall TFrSincPI_PP::cbId24ItemTypeChange(TObject *Sender)
{
 TmProduce->Enabled=false; TmProduce->Enabled=true;
}
//---------------------------------------------------------------------------








void __fastcall TFrSincPI_PP::Timer1Timer(TObject *Sender)
{
Timer1->Enabled=false;

RzPanel300->Visible=true;
RzPanel300->Repaint();


  /**/


 vsSQLQw ="SELECT Progress,Status FROM DBCopy.dbo.aa_DbCopy3 WHERE Idn=65; ";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Open();

 if ((Qw->Fields->Fields[0]->AsInteger!=100)||(Qw->Fields->Fields[1]->AsInteger!=100))
 {ShowMessage("Процесс уже был запущен другим пользователем. Можете повторить перенос данных через 5 минут."); RzPanel300->Visible=false; Qw->Close(); return;}

 vsSQLQw ="SELECT Progress,Status FROM aa_DbCopy3 WHERE Idn=2;";
 Qw2->Close();Qw2->SQL->Clear();Qw2->SQL->Add(vsSQLQw);
////////////////////////////////////////
 try{
	 ClockThread=new TClockThread(true);
	 *ClockThread->begtime=Time();
	 ClockThread->clockstop=0;
	 ClockThread->clc=Clock;
	 Clock->Caption="00:00:00.000";
	// RzProgressBar2->Visible=false;
	 Clock->Visible=true;
	 ClockThread->Resume();

	 }catch(...){}
FrSincPI_PP->Enabled=false;


 int  PercentProgress, Status;


  ////////////////////////////////////////
 /*vsSQLQw = "declare @IdnJobFromaa_DbCopy3 int; "
"set @IdnJobFromaa_DbCopy3=:D0; "
" UPDATE DBCopy.dbo.aa_DbCopy3 set Progress=0 where Idn=@IdnJobFromaa_DbCopy3;";
  Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
  Qw->Parameters->Items[0]->DataType=ftInteger;
  Qw->Parameters->Items[0]->Value=65; //Код JOBа
  Qw->ExecSQL();
  */
  //MainForm->TrayIcon1MouseMove(Sender,ssShift,100,100);

vsSQLQw = "declare @IdnJobFromaa_DbCopy3 int; "
"set @IdnJobFromaa_DbCopy3=:D0; "
"EXEC prDbCopy_WriteHistory @IdnJobFromaa_DbCopy3,'Принудительный старт'; "
"EXEC prDbCopy_StartJob @IdnJob=@IdnJobFromaa_DbCopy3, @ProgramName=:D1";
  QDM_JobConnect->Close();QDM_JobConnect->SQL->Clear();QDM_JobConnect->SQL->Add(vsSQLQw);
  QDM_JobConnect->Parameters->Items[0]->DataType=ftInteger;
  QDM_JobConnect->Parameters->Items[0]->Value=2; //Код JOBа
  QDM_JobConnect->Parameters->Items[1]->DataType=ftString;
  QDM_JobConnect->Parameters->Items[1]->Value=vPROGRAMNAME; //Наименование программы
  QDM_JobConnect->ExecSQL();
 ////////////////////

 RzProgressBar1->Percent=0;
  for(;;)
{ Application->ProcessMessages();
 /*Idglobal::*/Sleep(1000);
 Qw2->Close();
 Qw2->Open();
 PercentProgress=Qw2->Fields->Fields[0]->AsInteger;
 Status=Qw2->Fields->Fields[1]->AsInteger;
 RzProgressBar2->Percent=PercentProgress;
 if (PercentProgress==100&&Status==100) break;
}




 ////////////////////////////////////////
vsSQLQw = "declare @IdnJobFromaa_DbCopy3 int; "
"set @IdnJobFromaa_DbCopy3=:D0; "
"EXEC DBCopy.dbo.prDbCopy_WriteHistory @IdnJobFromaa_DbCopy3,'Принудительный старт'; "
"EXEC DBCopy.dbo.prDbCopy_StartJob @IdnJob=@IdnJobFromaa_DbCopy3, @ProgramName=:D1";
  Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
  Qw->Parameters->Items[0]->DataType=ftInteger;
  Qw->Parameters->Items[0]->Value=65; //Код JOBа
  Qw->Parameters->Items[1]->DataType=ftString;
  Qw->Parameters->Items[1]->Value=vPROGRAMNAME; //Наименование программы
  Qw->ExecSQL();
 ////////////////////


 vsSQLQw ="SELECT Progress,Status FROM DBCopy.dbo.aa_DbCopy3 WHERE Idn=65; ";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 for(;;)
{ Application->ProcessMessages();
 /*Idglobal::*/Sleep(1000);
 Qw->Close();
 Qw->Open();
 PercentProgress=Qw->Fields->Fields[0]->AsInteger;
 Status=Qw->Fields->Fields[1]->AsInteger;
 RzProgressBar1->Percent=PercentProgress;
 if (PercentProgress==100&&Status==100) break;
}
FrSincPI_PP->Enabled=true;

try{
	ClockThread->clockstop=1;
	ClockThread->Terminate();
  //	RzProgressBar2->Visible=false;
	Clock->Visible=false;
	delete ClockThread;
   }catch(...){}
 
RzPanel300->Visible=false;
ShowMessage("Импорт номенклатур из Axapta завершен.");
}
//---------------------------------------------------------------------------


void __fastcall TFrSincPI_PP::tlRaspDetailCustomDrawDataCell(TcxCustomTreeList *Sender,
          TcxCanvas *ACanvas, TcxTreeListEditCellViewInfo *AViewInfo,
          bool &ADone)
{
/*  if(QProduce->Active==false)return;
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
	  */
}
//---------------------------------------------------------------------------

void __fastcall TFrSincPI_PP::TmProduceTimer(TObject *Sender)
{AnsiString vsTmp,SL;
 int viIdnProduce;
	vsTmp="";

 TmProduce->Enabled=false;
 if(QProduce->Active==true)
	 {viIdnProduce=QProduceidn->AsInteger;}
  else  viIdnProduce=0;

 QProduce->DisableControls();
 QProduce->Close();
 QProduce->SQL->Clear();

 if(RzComboBox1->ItemIndex>0)
	{ vsTmp=" AND A.Id24TypeName="+IntToStr((int)RzComboBox1->Items->Objects[RzComboBox1->ItemIndex]);}

SL="DECLARE @MyStr varchar(256); "
" SET @MyStr=:D0; "
" if(exists(select * from tempdb..sysobjects where id = object_id('tempdb..#WsTempTreeId')))"
" TRUNCATE TABLE #WsTempTreeId;ELSE CREATE TABLE #WsTempTreeId(Idn int NULL);"
" set @MyStr='  A.Id512NameCatalog=9113095 "+vsTmp+" and (A.iType=4 or A.iType=3 or A.iType=2) and A.datedel is null AND B.iText LIKE ''%'+@MyStr+'%''';"

" insert into #WsTempTreeId(Idn)"
" exec pr_All_Get_TreeValues @NameTable='all_AdvProduceClass A LEFT JOIN spl_LbText512 B ON B.Idn=id512Name',@idn='A.idn',@idnP='A.idnP',@fwork=1,@Usl=@MyStr;"
" select DISTINCT A.idn, A.idnP,B.iText, A.iType,C.iText TypeName,A.IdIns, D.auFamIO, isnull(A.ISSN,'') ISSN, isnull(A.CodeB,'') CodeB, isnull(E.fActual,0) fActual , isnull(A.Id24TypeName,0) Id24TypeName"
" ,a.IdAdvCond ,a.IdAdvPriseList "
" ,p.Price "
" ,p.DateFrom "
" ,p.DateTo "
",(select count (idn) from dbo.all_AdvProduceLinkProductOffer l where l.datedel is null and l.IdAdvPriseList=a.IdAdvPriseList or a.idn=l.idAdvProduceClass)as FRasp "
" from all_AdvProduceClass A"
" LEFT JOIN spl_LbText512 B ON B.Idn=A.id512Name"
" LEFT JOIN spl_LbText24 C ON C.Idn=A.Id24TypeName"
" LEFT JOIN aa_Users D ON D.auId=A.IdIns"
" LEFT JOIN  vwActualProduce E ON E.Idn=A.Idn"
" LEFT JOIN dbo.all_AdvPriseListEtalon p on p.idn=a.IdAdvPriseList "
" where  A.DateDel is null and A.idn in(select idn from #WsTempTreeId) ";

 QProduce->SQL->Add(SL+"  ORDER BY A.iType, B.iText ");
 QProduce->Parameters->Items[0]->Value=edFind->Text.Trim();

 QProduce->Open();
 if(viIdnProduce>0)
 {try{Opts.Clear();locvalues[0]=Variant(viIdnProduce);QProduce->Locate("Idn",locvalues,Opts);}catch(...){};};

 QProduce->EnableControls();
}
//---------------------------------------------------------------------------

void __fastcall TFrSincPI_PP::FormClose(TObject *Sender, TCloseAction &Action)
{
 Action = caFree;flFrSincPI_PP=WINCLS;
}
//---------------------------------------------------------------------------

void __fastcall TFrSincPI_PP::tlRaspDetailcxDBTreeListColumn11PropertiesButtonClick(TObject *Sender,
          int AButtonIndex)
{

AnsiString SL;
SL="Выберите ПИ (Подписной Индекс);";

if(QProduceiType->AsInteger!=4){ShowMessage(SL);return;}

SL="Вы уверены, что хотите сопоставить Продуктовое Предложение \n\n\t"
+Trim(QNE_AxaptaNAME->AsString)+
"\n\n\t "
+QProduceiText->AsString+
"?";

if(MessageDlg(SL ,mtWarning,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrNo){return;}

vsSQLQw=
"Declare @GD datetime, @idProductOffer int, @idn int,@IdIns int; "

"SET @GD = getdate(); "

"SET @idProductOffer=	:D0 ; "
"SET @idn = 			:D1 ; "
"SET @IdIns = 			:D2 ; "


"Insert into dbo.all_AdvProduceLinkProductOffer "
"	( idAdvProduceClass	, IdAdvCond		, IdAdvPriseList	, idProductOffer	, IdIns, DateIns) "
"select  a.idn			, a.IdAdvCond	,a.IdAdvPriseList	,@idProductOffer	,@IdIns,@GD "
"from dbo.all_AdvProduceClass a "
"where a.idn=@idn ";


  Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
  Qw->Parameters->Items[0]->Value=QNE_AxaptaID->AsInteger;
  Qw->Parameters->Items[1]->Value=QProduceidn->AsInteger; //Код JOBа
  Qw->Parameters->Items[2]->Value=PermisHdr.KeyUserStartProgramm;
  Qw->ExecSQL();


 TmProduce->Enabled=false; TmProduce->Enabled=true;
//TmNE_DO->Enabled=false;TmNE_DO->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TFrSincPI_PP::DSProduceDataChange(TObject *Sender, TField *Field)

{
TmNE_DO->Enabled=false;TmNE_DO->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TFrSincPI_PP::RzToolButton1Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

void __fastcall TFrSincPI_PP::cxGridTableViewEmplUserColumn1PropertiesButtonClick(TObject *Sender,
          int AButtonIndex)
{
AnsiString SL;

SL="Вы уверены, что хотите удалить сопоставление Продуктовое Предложение и Подписного Индекса \n\n\t"
+Trim(QNE_DONAME->AsString)+
"\n\n\t "
+QProduceiText->AsString+
"?";

if(MessageDlg(SL ,mtWarning,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrNo){return;}


vsSQLQw=
"Declare @GD datetime, @idProductOffer int, @idn int,@IdIns int; "

"SET @GD = getdate(); "


"SET @idn = 			:D0 ; "
"SET @IdIns = 			:D1 ; "

" UPDATE  dbo.all_AdvProduceLinkProductOffer  SET idDel=@IdIns, datedel=@GD  WHERE idn=@idn "
;


  Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
  Qw->Parameters->Items[0]->Value=QNE_DOidn->AsInteger;
  Qw->Parameters->Items[1]->Value=PermisHdr.KeyUserStartProgramm;
  Qw->ExecSQL();

 TmProduce->Enabled=false; TmProduce->Enabled=true;
//TmNE_DO->Enabled=false;TmNE_DO->Enabled=true;

}
//---------------------------------------------------------------------------


