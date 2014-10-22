//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
#include "Init.h"

#include "Rep8_Rep_Billings.h"
//-----------------------------
#include "SaveShemaView.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzCmboBx"
#pragma link "RzEdit"
#pragma link "RzPanel"
#pragma link "RzRadChk"
#pragma link "RzSplit"
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

#pragma link "RzLabel"
#pragma link "cxEditRepositoryItems"
#pragma link "RzBtnEdt"
#pragma link "cxDBTL"
#pragma link "cxInplaceContainer"
#pragma link "cxMaskEdit"
#pragma link "cxTL"
#pragma link "cxTLData"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
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
#pragma resource "*.dfm"
TFrPrintProductCatalog *FrPrintProductCatalog;

char flFrPrintProductCatalog;
//---------------------------------------------------------------------------
__fastcall TFrPrintProductCatalog::TFrPrintProductCatalog(TComponent* Owner)
	: TForm(Owner)
{
  try{
   if(SetupIni.sRep8_Rep_Billings.Chk==(MainForm->CheckSumParam((char *)&SetupIni.sRep8_Rep_Billings.Chk,sizeof(SetupIni.sRep8_Rep_Billings ))-2))//Проверка контрольной сумммы блока параметров
	 { 	RzCheckBox2->Checked=SetupIni.sRep8_Rep_Billings.RzCheckBox2;
		RzCheckBox1->Checked=SetupIni.sRep8_Rep_Billings.RzCheckBox1;

		RzDateTimeEdit1->Date=SetupIni.sRep8_Rep_Billings.RzDateTimeEdit1;
		RzDateTimeEdit2->Date=SetupIni.sRep8_Rep_Billings.RzDateTimeEdit2;
		try{}catch(...){}


	  }
	else
	  {
	  }
	}catch(...){};
//if(MainForm->LoadListShemaView(&STblCtrl,RzComboBox3,SetupIni.sRep8_Rep_Billings.IdnViewShema,"FrRep6_ExposedPaidAccountsHalhYear")==0);// загрузить  Схему имен просмотра

//..Ограничение прав и свобод
 if(MainForm->VoidManager!=true)//Права доступа/Разрешить пользователю работать за любого менеджера"
  {RzGroupBoxMenedger1->Visible=false;
  }
  else
  {}
 if(MainForm->flAddClientToCallActions==true)
 {RzToolButton13->Visible=true;}
 else
 {RzToolButton13->Visible=false;}

//Timer1->Enabled=false; Timer1->Enabled=true;
CkeckUser();
}
//---------------------------------------------------------------------------
void __fastcall TFrPrintProductCatalog::FormClose(TObject *Sender,
      TCloseAction &Action)            
{

cxGrid1DBBandedTableView1->BeginUpdate();
cxGrid1DBBandedTableView1->ClearItems();
//ADOStoredProc1->DisableControls();
Q1->Close();

SetupIni.sRep8_Rep_Billings.RzCheckBox2=RzCheckBox2->Checked;
SetupIni.sRep8_Rep_Billings.RzCheckBox1=RzCheckBox1->Checked;
SetupIni.sRep8_Rep_Billings.RzDateTimeEdit1=RzDateTimeEdit1->Date;
SetupIni.sRep8_Rep_Billings.RzDateTimeEdit2=RzDateTimeEdit2->Date;

SetupIni.sRep8_Rep_Billings.Chk=(MainForm->CheckSumParam((char *)&SetupIni.sRep8_Rep_Billings.Chk,sizeof(SetupIni.sRep8_Rep_Billings))-2);//Проверка контрольной сумммы блока параметров

 Action = caFree;flFrRep8_Rep_Billings=WINCLS;
}
//---------------------------------------------------------------------------
void __fastcall TFrPrintProductCatalog::RzToolButton4Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
void __fastcall TFrPrintProductCatalog::RzToolButton3Click(TObject *Sender)
{
//cxDBTreeList1->FullExpand();
cxGrid1DBBandedTableView1->ViewData->Expand(true);
}
//---------------------------------------------------------------------------
void __fastcall TFrPrintProductCatalog::RzToolButton5Click(TObject *Sender)
{
//cxDBTreeList1->FullCollapse();
cxGrid1DBBandedTableView1->ViewData->Collapse(true);
}
//---------------------------------------------------------------------------
void __fastcall TFrPrintProductCatalog::RzToolButton2Click(TObject *Sender)
{
if(MainForm->UserExcel==false && MainForm->UserExcel8==false){ShowMessage("Нет прав, для выгрузки данных в Microsoft Office Excel.\n Обратитесь к вашему руководителю.");return;}

MainForm->SaveXlsFiles(cxGrid1,FrRep8_Rep_Billings->Caption,"");
}
//---------------------------------------------------------------------------
void __fastcall TFrPrintProductCatalog::RzToolButton45Click(TObject *Sender)
{
//Сохранить текущую схему
/*
try{MainForm->SaveParamTableBanded(cxGrid1DBBandedTableView1,&(STblCtrl),TbCtrlMAXSIZE);}catch(...){}
TFrSaveShemaView *   FR=new TFrSaveShemaView(this);
FR->InitFrSaveShemaView("FrRep_RosterBillings",&(STblCtrl));
if(FR->ShowModal()==mrCancel){delete FR; return;} //Нажата отмена (TModalResult)
RzComboBox3->Items->Assign(FR->RzComboBoxListShema->Items);
RzComboBox3->ItemIndex=FR->RzComboBoxListShema->ItemIndex;
delete FR;
*/
}
//---------------------------------------------------------------------------
void __fastcall TFrPrintProductCatalog::RzComboBox3Change(TObject *Sender)
{
//Пользователь возможно выбрал новую схему просмотра
int Idn;

if(RzComboBox3->Items->Count==0)return;
if(RzComboBox3->ItemIndex<0)RzComboBox3->ItemIndex=0;
Idn=(int)RzComboBox3->Items->Objects[RzComboBox3->ItemIndex];
if(Idn!=SetupIni.sRep8_Rep_Billings .IdnViewShema)
  {MainForm->LoadListShemaView(&STblCtrl,RzComboBox3,Idn,"FrRep_RosterBillings");// загрузить  Схему имен просмотра
   SetupIni.sRep8_Rep_Billings .IdnViewShema=Idn;
  }
cxGrid1->SetFocus();
}                                                                         
//---------------------------------------------------------------------------
void __fastcall TFrPrintProductCatalog::RzCheckBox1Click(TObject *Sender)
{
RzDateTimeEdit1->Enabled=RzCheckBox1->Checked;
RzDateTimeEdit2->Enabled=RzCheckBox2->Checked;
}
//---------------------------------------------------------------------------
void __fastcall TFrPrintProductCatalog::LoadPicList(TStrings *NameUser,TStrings *Status
,TStrings *Activities_KC,TStrings *ComboBox9)
{//Загрузка нового листа выбора
TStrings *S;
AnsiString Sl;
TField *F,*Fi;
TADOQuery *Qi;
Qi=Qw;

if(Status!=NULL)
 {S=Status;Qi->Close();Qi->SQL->Clear();Qi->SQL->Add(
  "select -1,' ВСЕ' union select 0,' Не распределен' union select idn,iText from spl_LbText256 where iLvl=1156 and datedel is null Order by 2 ");
 Qi->Open();Fi=Qi->Fields->Fields[0];F=Qi->Fields->Fields[1];S->Clear();
 while(Qi->Eof==false){S->AddObject(F->AsString,(TObject*)Fi->AsInteger);Qi->Next();}Qi->Close();
 }
 if(Activities_KC!=NULL)
 {S=Activities_KC;Qi->Close();Qi->SQL->Clear();Qi->SQL->Add(
  "select -1,' ВСЕ' union select Idn,iText from spl_LbText256 where iLvl=1199 and DateDel is null");
 Qi->Open();Fi=Qi->Fields->Fields[0];F=Qi->Fields->Fields[1];S->Clear();
 while(Qi->Eof==false){S->AddObject(F->AsString,(TObject*)Fi->AsInteger);Qi->Next();}Qi->Close();
 }
if(ComboBox9!=NULL)
 {S=ComboBox9;Qi->Close();Qi->SQL->Clear();Qi->SQL->Add(
  "select -1,' ВСЕ' union select 0,' Нет менеджера' union SELECT idManager,u.auFamIO FROM cch_CallManager LEFT JOIN aa_Users u on u.auId=idManager WHERE TypeM=0 ORDER BY 2 ");
 Qi->Open(); Fi=Qi->Fields->Fields[0]; F=Qi->Fields->Fields[1];S->Clear();
 while(Qi->Eof==false)
  {S->AddObject(F->AsString,(TObject*)Fi->AsInteger);
   Qi->Next();
  }Qi->Close();
 }

}
//---------------------------------------------------------------------------
void __fastcall TFrPrintProductCatalog::Timer1Timer(TObject *Sender)
{
  int i,y;
  int j,k;
 TcxGridDBBandedColumn *c;
 TcxGridBand *b;
 TLocateOptions Opts;
 Variant locvalues[1];
 UnicodeString SL,SL1,sT1,sT2;
 TDateTime T1,T2;
 Timer1->Enabled=false;

RzPanel300->Left=(RzSplitter1->Width-RzPanel300->Width)/2;
RzPanel300->Top =(RzSplitter1->Height/2)-RzPanel300->Height;
RzPanel300->Visible=true;RzPanel300->BringToFront();Repaint();
//----------------------------

cxGrid1DBBandedTableView1->BeginUpdate();
Q1->DisableControls();
Q1->Close();

cxGrid1DBBandedTableView1->ClearItems();
cxGrid1DBBandedTableView1->Bands->Clear();
cxGrid1DBBandedTableView1->Bands->Add();

i=0;
if(RzCheckBox1->Checked==true)T1=RzDateTimeEdit1->Date;else T1=Now()-365;
Q1->Parameters->Items[0]->Value=T1;
if(RzCheckBox2->Checked==true)T2=RzDateTimeEdit2->Date;else T2=Now();
Q1->Parameters->Items[1]->Value=T2+1;
y=0;if(RzCheckBox21->Checked==true)y=1;
Q1->Parameters->Items[2]->Value=y;
Q1->Parameters->Items[3]->Value=PermisHdr.KeyUserStartProgramm;


try{Q1->Open();}catch(Exception &exception)
	 {Application->ShowException(&exception);
	  RzPanel300->Visible=false;
	  Timer1->Enabled=false;
	   return;
	 }
b=cxGrid1DBBandedTableView1->Bands->Add();
b=cxGrid1DBBandedTableView1->Bands->Add();
b=cxGrid1DBBandedTableView1->Bands->Add();


cxGrid1DBBandedTableView1->Bands->Items[0]->Position->BandIndex=-1;
cxGrid1DBBandedTableView1->Bands->Items[1]->Position->ColIndex=0; 
cxGrid1DBBandedTableView1->Bands->Items[1]->Position->BandIndex=0;
cxGrid1DBBandedTableView1->Bands->Items[1]->Position->ColIndex=0;
cxGrid1DBBandedTableView1->Bands->Items[2]->Position->BandIndex=1;
cxGrid1DBBandedTableView1->Bands->Items[2]->Position->ColIndex=0;	 
for (y=0,i=0;i<Q1->FieldCount; i++)
  {
	SL1=Q1->Fields->Fields[i]->FieldName;
	//if(SL1=="ClientID")continue;
	if(SL1=="idInvoices")continue;

	c=cxGrid1DBBandedTableView1->CreateColumn();
	c->Caption=SL1;c->DataBinding->FieldName=Q1->Fields->Fields[i]->FieldName;
	c->Width=100;
	if(SL1=="П\\П" ||SL1=="Дата"||SL1=="Номер"||SL1=="ИНН" ||SL1=="КПП")
	{c->Width=70;}

	if(SL1=="Название организации" ||SL1=="Телефон"||SL1=="Адрес организации по счету"||SL1=="Контактное лицо" ||SL1=="Наименование подписного индекса")
	{c->Width=120;}
	
	if(SL1=="Кол-во" || SL1=="Кол-во подписок"){c->Summary->FooterKind=skSum;c->Summary->GroupFooterKind=skSum;c->Width=64;
		c->Summary->FooterFormat="### ### ### ##0";
		c->Summary->GroupFooterFormat="### ### ### ##0";continue;}
	if(SL1=="Сумма" ||SL1=="Сумма оплаты" ){c->Summary->FooterKind=skSum;c->Summary->GroupFooterKind=skSum;c->Width=70; c->RepositoryItem=cxEditRepository1CurrencyItem1;
		c->Summary->FooterFormat="### ### ### ##0.00";
		c->Summary->GroupFooterFormat="### ### ### ##0.00";continue;}
  }

cxGrid1DBBandedTableView1->EndUpdate();


DateTimeToString(sT1,"dd.mm.yyyy",RzDateTimeEdit1->Date);
DateTimeToString(sT2,"dd.mm.yyyy",RzDateTimeEdit2->Date);

cxGrid1DBBandedTableView1->Bands->Items[0]->HeaderAlignmentHorz=taLeftJustify;

cxGrid1DBBandedTableView1->Bands->RootItems[0]->Caption=FrRep8_Rep_Billings->Caption;
if(RzCheckBox1->Checked) cxGrid1DBBandedTableView1->Bands->RootItems[0]->Caption=cxGrid1DBBandedTableView1->Bands->RootItems[0]->Caption+" с "+sT1;
if(RzCheckBox2->Checked) cxGrid1DBBandedTableView1->Bands->RootItems[0]->Caption=cxGrid1DBBandedTableView1->Bands->RootItems[0]->Caption+" по "+sT2;

cxGrid1DBBandedTableView1->Bands->Items[1]->Caption="";
cxGrid1DBBandedTableView1->Bands->Items[1]->HeaderAlignmentHorz=taLeftJustify;

//if(RzComboBox9->ItemIndex>0) cxGrid1DBBandedTableView1->Bands->Items[1]->Caption=cxGrid1DBBandedTableView1->Bands->Items[1]->Caption+" по руководителю: "+RzComboBox9->Text.Trim();
//if(RzComboBox2->ItemIndex>0) cxGrid1DBBandedTableView1->Bands->Items[1]->Caption=cxGrid1DBBandedTableView1->Bands->Items[1]->Caption+" по менеджеру: "+RzComboBox2->Text.Trim();
//if(RzComboBox2->ItemIndex<1 && RzComboBox9->ItemIndex<1) cxGrid1DBBandedTableView1->Bands->Items[1]->Caption=cxGrid1DBBandedTableView1->Bands->Items[1]->Caption+" по сотрудникам: "+RzMenedger1->Text;
if(RzCheckBox21->Checked) cxGrid1DBBandedTableView1->Bands->Items[1]->Caption=cxGrid1DBBandedTableView1->Bands->Items[1]->Caption+" по изданиям: "+RzEdit21->Text.Trim();


for(k=0,j=cxGrid1DBBandedTableView1->ColumnCount,i=0; i<j;i++)
	{if(cxGrid1DBBandedTableView1->Columns[i]->DataBinding->FieldName=="ClientID")
		{cxGrid1DBBandedTableView1->Columns[i]->GroupIndex=-1;
		 cxGrid1DBBandedTableView1->Columns[i]->Index     =0;
		 cxGrid1DBBandedTableView1->Columns[i]->Visible   =false;
		 cxGrid1DBBandedTableView1->Columns[i]->Width     =5;
	k|=2;if(k==3)break;
		}
	if(cxGrid1DBBandedTableView1->Columns[i]->DataBinding->FieldName=="IDManager")
		{cxGrid1DBBandedTableView1->Columns[i]->GroupIndex=-1;
		 cxGrid1DBBandedTableView1->Columns[i]->Index     =2;
		 cxGrid1DBBandedTableView1->Columns[i]->Visible   =false;
		 cxGrid1DBBandedTableView1->Columns[i]->Width     =5;
	k|=2;if(k==3)break;
		}

	}
//----------------------------
 RzPanel300->Visible=false;
Q1->EnableControls();
}
//---------------------------------------------------------------------------

void __fastcall TFrPrintProductCatalog::RzToolButton1Click(TObject *Sender)//Кнопка обновить
{
Timer1->Enabled=false;Timer1->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TFrPrintProductCatalog::cxGrid1DBBandedTableView1DblClick(
	  TObject *Sender)
{ int i,y;

i=Q1->Fields->FieldByName("idInvoices")->AsInteger;
y=Q1->Fields->FieldByName("ClientID")->AsInteger;
MainForm->OpenFrAccount(i,y);
}

//---------------------------------------------------------------------------
void __fastcall TFrPrintProductCatalog::RzToolButton6Click(TObject *Sender)
{
RzSplitter1->Percent=95;
}
//---------------------------------------------------------------------------
void __fastcall TFrPrintProductCatalog::RzToolButton11Click(TObject *Sender)
{
MainForm->mainFinStr=" and c.idn= "+IntToStr(Q2IdClient->AsInteger) ;
MainForm->N11Click(NULL);
}
//---------------------------------------------------------------------------
void __fastcall TFrPrintProductCatalog::TimerQ2Timer(TObject *Sender)
{
/*TDateTime T1,T2;
TimerQ2->Enabled=false;

RzPanel300->Left=(RzSplitter1->Width-RzPanel300->Width)/2;
RzPanel300->Top=(RzSplitter1->Height/2)-RzPanel300->Height;
RzPanel300->Visible=true;RzPanel300->BringToFront();Repaint();




if(RzCheckBox1->Checked==true)T1=RzDateTimeEdit1->Date;else T1=Now()-365;
if(RzCheckBox2->Checked==true)T2=RzDateTimeEdit2->Date+1;else T2=Now();


Q2->Close();
if(ADOStoredProc1->Active==true)
  {IdUser=ADOStoredProc1->Fields->FieldByName("id2User")->AsInteger;   //StrToInt(cxGrid1DBBandedTableView1->Controller->SelectedRows[0]->Values[0]);
   if(IdUser>0)
	{Q2->Parameters->Items[0]->Value=IdUser;
	 Q2->Parameters->Items[1]->Value=T1;
	 Q2->Parameters->Items[2]->Value=T2;
//	 if(RzCheckBox3->Checked==true){Q2->Parameters->Items[3]->Value=1;}// --Флаг - [0]все счета или [1]только оплаченные
//	  else{Q2->Parameters->Items[3]->Value=0;}

	 Q2->Open();
	}  
  }
//----------------------------
 RzPanel300->Visible=false;
*/
}
//---------------------------------------------------------------------------
void __fastcall TFrPrintProductCatalog::DS1DataChange(TObject *Sender,TField *Field)
{
if(RzSplitter1->Percent<90)
{
 TimerQ2->Enabled=false;TimerQ2->Enabled=true;
}
}
//---------------------------------------------------------------------------
void __fastcall TFrPrintProductCatalog::RzToolButton12Click(TObject *Sender)
{
MainForm->OpenFrAccount(Q2idn->AsInteger,Q2IdClient->AsInteger);
}
//---------------------------------------------------------------------------

void __fastcall TFrPrintProductCatalog::RzToolButton10Click(TObject *Sender)
{
//cxDBTreeList1->OptionsView->ColumnAutoWidth=!cxDBTreeList1->OptionsView->ColumnAutoWidth;
}
//---------------------------------------------------------------------------

void __fastcall TFrPrintProductCatalog::RzToolButton9Click(TObject *Sender)
{
//cxDBTreeList1->OptionsView->CellAutoHeight=!cxGrid1->OptionsView->CellAutoHeight;	
}
//---------------------------------------------------------------------------
void __fastcall TFrPrintProductCatalog::RzToolButton8Click(TObject *Sender)
{
if(MainForm->UserExcel==false && MainForm->UserExcelD8==false){ShowMessage("Нет прав, для выгрузки данных в Microsoft Office Excel.\n Обратитесь к вашему руководителю.");return;}
MainForm->SaveXlsFiles(cxGrid2,FrRep8_Rep_Billings->Caption,"");
}
//---------------------------------------------------------------------------
void __fastcall TFrPrintProductCatalog::RzToolButton7Click(TObject *Sender)
{
TimerQ2->Enabled=false;TimerQ2->Enabled=true;
}
//---------------------------------------------------------------------------
//Кнопка обновить
//---------------------------------------------------------------------------

void __fastcall TFrPrintProductCatalog::RzCheckBox21Click(TObject *Sender)
{
RzEdit21->Enabled=RzCheckBox21->Checked;if(RzEdit21->Text==RzCheckBox21->Caption && RzCheckBox21->Checked==true)RzEdit21->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TFrPrintProductCatalog::RzEdit21ButtonClick(TObject *Sender)
{
MainForm->N36Click(NULL);
//RzEdit21->Text=MainForm->Stroka;
}
//---------------------------------------------------------------------------

void __fastcall TFrPrintProductCatalog::RzMenedger1ButtonClick(
      TObject *Sender)
{
// Открыть форму поиска оператора
MainForm->OpenFormSelectUser();
RzMenedger1->Text=MainForm->Stroka;
}
//---------------------------------------------------------------------------
void __fastcall TFrPrintProductCatalog::RzToolButton13Click(TObject *Sender)
{
int         StrCol;
int i,u;
AnsiString SL;
if(Q1->Active==false){return;}
Q1->First();
Qw->Close();Qw->SQL->Clear();
Qw->SQL->Add("  if(exists(select * from tempdb..sysobjects where id = object_id('tempdb..##ClientsInList_User_"+IntToStr(PermisHdr.KeyUserStartProgramm)+"'))) "
	"TRUNCATE TABLE ##ClientsInList_User_"+IntToStr(PermisHdr.KeyUserStartProgramm)+";ELSE CREATE TABLE ##ClientsInList_User_"+IntToStr(PermisHdr.KeyUserStartProgramm)+" (IdnClient int NULL,IdIns int NULL,idUser int NULL); ");
Qw->ExecSQL();

Qw->Close();Qw->SQL->Clear();Qw->SQL->Add("INSERT INTO ##ClientsInList_User_"+IntToStr(PermisHdr.KeyUserStartProgramm)+" (IdnClient,IdIns,idUser ) Select :D0,:D1,:D2 ");

if(cxGrid1Level1->Active==true)
{StrID="";
cxGrid1DBBandedTableView1->Controller->SelectAllRecords();
for(i=0,StrCol=0;i<cxGrid1DBBandedTableView1->Controller->SelectedRowCount;i++)
	{StrCol=StrCol+1;
	  StrID=StrID+cxGrid1DBBandedTableView1->Controller->SelectedRecords[i]->Values[0]+",";

u=cxGrid1DBBandedTableView1->Controller->SelectedRecords[i]->Values[0];
 Qw->Parameters->Items[0]->Value=u;
 Qw->Parameters->Items[1]->Value=PermisHdr.KeyUserStartProgramm;
u=cxGrid1DBBandedTableView1->Controller->SelectedRecords[i]->Values[2];
 Qw->Parameters->Items[2]->Value=u;
 Qw->ExecSQL();
 }
}

StrID=StrID.Delete(StrID.Trim().Length(),1);
Qw->Close();

MainForm->OpenFormListCallActions();
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
void __fastcall TFrPrintProductCatalog::CkeckUser()
{
AnsiString SL,Su,SE;
if(MainForm->VoidManager!=true)Su=" where  auId ="+IntToStr(PermisHdr.KeyUserStartProgramm);
else Su="";
SL=" Declare @IdUser int; SET @IdUser=:D0; "
" delete from clt_spOtraslCheck where IdIns=@IdUser and IdL24Table=4 "
" insert into clt_spOtraslCheck  (IdIns,IdCheck,IdL24Table) select DISTINCT @IdUser , auId,4 from dbo.aa_Users "+Su;
Qw->Close();
Qw->SQL->Clear();
Qw->SQL->Add(SL);
Qw->Parameters->Items[0]->Value=PermisHdr.KeyUserStartProgramm;
Qw->ExecSQL();

}
//---------------------------------------------------------------------------


