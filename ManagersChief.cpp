//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ManagersChief.h"
//---------------------------------------------------------------------------
#include "main.h"
#include "Init.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzChkLst"
#pragma link "RzLabel"
#pragma link "RzLstBox"
#pragma link "RzPanel"
#pragma link "RzSplit"
#pragma link "RzButton"
#pragma link "RzRadChk"
#pragma link "RzTabs"
#pragma link "cxCheckBox"
#pragma link "cxControls"
#pragma link "cxCustomData"
#pragma link "cxDBTL"
#pragma link "cxGraphics"
#pragma link "cxInplaceContainer"
#pragma link "cxMaskEdit"
#pragma link "cxStyles"
#pragma link "cxTL"
#pragma link "cxTLData"
#pragma link "RzEdit"
#pragma resource "*.dfm"
TFrManagersChief *FrManagersChief;
char flFrManagersChief;
//---------------------------------------------------------------------------
__fastcall TFrManagersChief::TFrManagersChief(TComponent* Owner)
	: TForm(Owner)
{
 LoadPicList(RzCheckList3->Items,RzCheckList1->Items);
}
//---------------------------------------------------------------------------
void __fastcall TFrManagersChief::FormClose(TObject *Sender,
      TCloseAction &Action)
{
 Action = caFree;flFrManagersChief=WINCLS;
}
//---------------------------------------------------------------------------
void __fastcall TFrManagersChief::LoadPicList(TStrings *NameUser,TStrings *NameUser2)
{//Загрузка нового листа выбора
TStrings *S;
TField *F,*Fi;
TADOQuery *Qi;
Qi=Qw;
if(NameUser!=NULL)
 {S=NameUser;Qi->Close();Qi->SQL->Clear();Qi->SQL->Add(               // LastDateMov>'20050202' and
  "SELECT auId,auFamIO "
  "FROM aa_Users a "
  "INNER JOIN bm_GroupManager c ON(c.idManager=a.auId) "
  "WHERE auDateDel is null and TypeM=0 "
  "ORDER BY auFamIO ");
 Qi->Open();Fi=Qi->Fields->Fields[0];F=Qi->Fields->Fields[1];S->Clear();
  while(Qi->Eof==false){S->AddObject(F->AsString,(TObject*)Fi->AsInteger);Qi->Next();}
 // RzLabel22->Caption="Всего доступно сотрудников : "+IntToStr(Qi->RecordCount);
  Qi->Close();
 }
 if(NameUser2!=NULL)
 {S=NameUser2;Qi->Close();Qi->SQL->Clear();Qi->SQL->Add(               // LastDateMov>'20050202' and
  " SELECT auId, "
  " case when a.auNamUser='Новый' then a.auLogUser "
	 "when a.auFamUser+' '+a.auNamUser+' '+a.auOtcUser='  ' then a.auFamIO "
	 "else a.auFamUser+' '+a.auNamUser+' '+a.auOtcUser+' ('+isnull(a.auLogUser,' ')+')' end auFamIO "
  " FROM aa_Users a "
  " WHERE a.auDateDel is null "
  " AND a.auFamIO LIKE '%"+Trim(edFindName->Text)+"%'"
" and a.auId not in(select idManager from bm_GroupManager where TypeM<>0) "
" and a.auLogUser not like '%mShcheglova%' "//and a.auLogUser not like '%dskopintseva%' "
" ORDER BY a.auFamUser ");
 Qi->Open();Fi=Qi->Fields->Fields[0];F=Qi->Fields->Fields[1];S->Clear();
  while(Qi->Eof==false){S->AddObject(F->AsString,(TObject*)Fi->AsInteger);Qi->Next();}
 // RzLabel3->Caption="Всего доступно сотрудников в ЗАО \"МЦФЭР\": "+IntToStr(Qi->RecordCount);
  Qi->Close();
 }

 }
 //---------------------------------------------------------------------------
void __fastcall TFrManagersChief::RzCheckBox1Click(TObject *Sender)
{int i,y;
for(i=0;i < RzCheckList1->Items->Count;i++)
{RzCheckList1->ItemChecked[i]=RzCheckBox1->Checked;
 }
}
//---------------------------------------------------------------------------
void __fastcall TFrManagersChief::RzCheckBox2Click(TObject *Sender)
{
int i,y;
for(i=0;i < RzCheckList2->Items->Count;i++)
{RzCheckList2->ItemChecked[i]=RzCheckBox2->Checked;
 }
}
//---------------------------------------------------------------------------
void __fastcall TFrManagersChief::RzToolButton5Click(TObject *Sender)
{
int i,y;
 AnsiString SL;

SL="DECLARE @idn int, @I int , @PidManager int; "
   "SET @idn = :D0 ; "
   "select @I=idn from bm_GroupManager where idManager=@idn and TypeM=0 "

   "if(@I=0 OR @I is null)begin "
   "INSERT INTO bm_GroupManager (idManager,TypeM,PidManager)values(@idn,0,0) end ";

 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(SL);

for(i=0;i < RzCheckList1->Items->Count;i++)
{if(RzCheckList1->ItemChecked[i]==true)
 {y=(int)RzCheckList1->Items->Objects[i];
 Qw->Parameters->Items[0]->Value=y;
 Qw->ExecSQL();
 Qw->Close();
 }
}
 LoadPicList(RzCheckList3->Items,NULL);
}
//---------------------------------------------------------------------------
void __fastcall TFrManagersChief::RzToolButton6Click(TObject *Sender)
{
 int i,y;
 AnsiString SL;

  if(RzCheckList3->ItemIndex>-1)
 {i=(int)RzCheckList3->Items->Objects[RzCheckList3->ItemIndex];

SL=" DECLARE @idn int,@I int; "
   " SET @idn =:D0 ; "
   " SELECT @I=COUNT(idn) FROM bm_GroupManager where PidManager=@idn; "
   " IF(@I=0 OR @I is null)Begin "
   " Delete bm_GroupManager where idManager=@idn END ; ";

 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(SL);


 Qw->Parameters->Items[0]->Value=i;
 Qw->ExecSQL();
 Qw->Close();
 }
 LoadPicList(RzCheckList3->Items,NULL);
}
//---------------------------------------------------------------------------
void __fastcall TFrManagersChief::RzToolButton1Click(TObject *Sender)
{
int i,y,h;
 AnsiString SL;
 if(RzCheckList3->ItemIndex>-1)
 {h=(int)RzCheckList3->Items->Objects[RzCheckList3->ItemIndex];

SL="DECLARE @idn int, @I int , @PidManager int; "
   "SET @idn = :D0 ; SET @PidManager=:D1; "
   "select @I=idn from bm_GroupManager where idManager=@idn and TypeM=1 "

   "if(@I=0 OR @I is null)begin "
   "INSERT INTO bm_GroupManager (idManager,TypeM,PidManager)values(@idn,1,@PidManager) end ";

 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(SL);

for(i=0;i < RzCheckList1->Items->Count;i++)
{if(RzCheckList1->ItemChecked[i]==true)
 {y=(int)RzCheckList1->Items->Objects[i];
  Qw->Parameters->Items[0]->Value=y;
  Qw->Parameters->Items[1]->Value=h;
  Qw->ExecSQL();
  Qw->Close();
 }
 }
}
RzCheckList3Click(NULL);
}
//---------------------------------------------------------------------------


void __fastcall TFrManagersChief::RzCheckList3Click(TObject *Sender)
{
int i,y,h;
TStrings *S;
TField *F,*Fi;


 if(RzCheckList3->ItemIndex>-1)
 {h=(int)RzCheckList3->Items->Objects[RzCheckList3->ItemIndex];

  Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(
  "SELECT auId,auFamIO "
  "FROM aa_Users a "
  "INNER JOIN bm_GroupManager c ON(c.idManager=a.auId) "
  "WHERE auDateDel is null and PidManager=:D0 "
  "ORDER BY auFamIO ");
  Qw->Parameters->Items[0]->Value=h;
  Qw->Open();
  Fi=Qw->Fields->Fields[0];
  F=Qw->Fields->Fields[1];
  RzCheckList2->Items->Clear();
  while(Qw->Eof==false)
  {RzCheckList2->Items->AddObject(F->AsString,(TObject*)Fi->AsInteger);
   Qw->Next();}
  Qw->Close();
 }
 LoadPicList(NULL,RzCheckList1->Items);
}
//---------------------------------------------------------------------------

void __fastcall TFrManagersChief::RzToolButton2Click(TObject *Sender)
{
int i,y;
 AnsiString SL;

SL="DECLARE @idn int; "
   "SET @idn =:D0 ; "
   "Delete bm_GroupManager where idManager=@idn  ;";

 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(SL);

for(i=0;i < RzCheckList2->Items->Count;i++)
{if(RzCheckList2->ItemChecked[i]==true)
 {y=(int)RzCheckList2->Items->Objects[i];
 Qw->Parameters->Items[0]->Value=y;
 Qw->ExecSQL();                                                      
 Qw->Close();
 }
}
RzCheckList3Click(NULL);
}
//---------------------------------------------------------------------------
void __fastcall TFrManagersChief::ItemChangeUser()
{
int i,y,h;
TStrings *S;
//TField *F,*Fi;
if(Qm1->Active!=true)
{return;}
h=Qm1idManager->AsInteger;

  Qu->Close();Qu->SQL->Clear();Qu->SQL->Add("select idn,vName from dbo.frs_User where Datedel is null and idUSER="+IntToStr(h));
  Qu->Open();
 // Fi=Qu->Fields->Fields[0];
//  F=Qu->Fields->Fields[1];
  Qu->Close();

}
//---------------------------------------------------------------------------
void __fastcall TFrManagersChief::ItemChangeFrS()
{   int i,y,h;
	TStrings *S;
	TLocateOptions Opts;
	Variant locvalues[1];
//	TField *F,*Fi;

if(Qm1->Active==true)i=Qm1idn->AsInteger;else i=-1;
Qm1->Close();
Qm1->Open();
if(i!=-1){try{Opts.Clear();locvalues[0]=Variant(i);Qm1->Locate("idn",locvalues,Opts);}catch(...){};}

  QFrs->Close();QFrs->Open();
//  Fi=QFrs->Fields->Fields[0];
//  F=QFrs->Fields->Fields[2];
  QFrs->Close();

}
//---------------------------------------------------------------------------
void __fastcall TFrManagersChief::RzToolButton3Click(TObject *Sender)
{	int h,y,i;//,m;
	AnsiString SL;
 if(MessageDlg("Вы уверенны, что хотите перенести выделенные логины в \n\t"+Qm1auFamIO->AsString+"?",mtInformation,TMsgDlgButtons()<<mbYes<<mbNo,0)!=mrYes) {return;}
// m=Qm1idManager->AsInteger;
SL="DECLARE @idn int, @I int , @idManager int, @IdUs int; "
   "SET @idn = :D0 ; SET @idManager=:D1; SET @IdUs=:D2; "

   "select @I=idn from dbo.frs_User where IdFrs=@idn "

   "if(@I=0 OR @I is null)begin "
   "INSERT INTO dbo.frs_User (IdUser, IdFrs, type, vName, idIns, DateIns) "
   " select @idManager,id,type,display_name,@IdUs,getdate() from [10.0.85.10].IPCM51.dbo.objects where id=@idn "
   "end ";

 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(SL);


ItemChangeFrS();	
}
//---------------------------------------------------------------------------
void __fastcall TFrManagersChief::RzToolButton4Click(TObject *Sender)
{ 	int h,y,i;//,m;
	AnsiString SL;
 if(MessageDlg("Вы уверенны, что хотите Удалить логины у \n\t"+Qm1auFamIO->AsString+"?",mtInformation,TMsgDlgButtons()<<mbYes<<mbNo,0)!=mrYes) {return;}
// m=Qm1idManager->AsInteger;
SL="DECLARE @idn int, @I int , @idManager int, @IdUs int; "
   "SET @idn = :D0 ; SET @idManager=:D1; SET @IdUs=:D2; "
   " UPDATE dbo.frs_User SET IdDel=@IdUs, DateDel=getdate() where idn = @idn "
;

 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(SL);

ItemChangeFrS();
}
//---------------------------------------------------------------------------

void __fastcall TFrManagersChief::RzPageControl1Change(TObject *Sender)
{
ItemChangeFrS();	
}
//---------------------------------------------------------------------------

void __fastcall TFrManagersChief::DataSource1DataChange(TObject *Sender,
      TField *Field)
{
ItemChangeUser();
}
//---------------------------------------------------------------------------

void __fastcall TFrManagersChief::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
   if(Key == VK_ESCAPE) Close();	
}
//---------------------------------------------------------------------------

void __fastcall TFrManagersChief::edFindNameChange(TObject *Sender)
{
 LoadPicList(NULL,RzCheckList1->Items);	
}
//---------------------------------------------------------------------------

void __fastcall TFrManagersChief::btCloseClick(TObject *Sender)
{
 Close();	
}
//---------------------------------------------------------------------------

