//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AddProduce.h"
#include "Init.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
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
#pragma link "RzEdit"
#pragma link "RzCmboBx"
#pragma link "RzSplit"
#pragma link "RzLabel"
#pragma resource "*.dfm"
TFrAddProduce *FrAddProduce;
//---------------------------------------------------------------------------
__fastcall TFrAddProduce::TFrAddProduce(TComponent* Owner)
	: TForm(Owner)
{
 QProduce->Close();
 QProduce->SQL->Clear();
  AnsiString vsTmp="";

 QProduce->SQL->Add("DECLARE @MyStr varchar(256); "
 " if(exists(select * from tempdb..sysobjects where id = object_id('tempdb..#WsTempTreeId')))"
" TRUNCATE TABLE #WsTempTreeId;ELSE CREATE TABLE #WsTempTreeId(Idn int NULL);"
" set @MyStr='A.Id512NameCatalog=9113095  and A.iType=1 and A.datedel is null';"

" insert into #WsTempTreeId(Idn)"
//" exec pr_All_Get_TreeValues @NameTable='dbo.all_AdvProduceClass',@idn='idn',@idnP='idnP',@fwork=1,@Usl=@MyStr;"
" exec pr_All_Get_TreeValues @NameTable='all_AdvProduceClass A LEFT JOIN spl_LbText512 B ON B.Idn=id512Name',@idn='A.idn',@idnP='A.idnP',@fwork=1,@Usl=@MyStr;"
" select DISTINCT A.idn, A.idnP,B.iText, A.iType,C.iText"
" from all_AdvProduceClass A"
" LEFT JOIN spl_LbText512 B ON B.Idn=A.id512Name"
" LEFT JOIN spl_LbText24 C ON C.Idn=A.Id24TypeName"
" where A.iType<2 and A.idn in(select idn from #WsTempTreeId)");

 QProduce->SQL->Add("  ORDER BY   A.iType, B.iText");
 QProduce->Open();
 cbRazdel->Clear();
 while(QProduce->Eof==false){cbRazdel->AddObject(QProduce->Fields->Fields[2]->AsString,(TObject*)QProduce->Fields->Fields[0]->AsInteger);QProduce->Next();}
 QProduce->Close();
}
//---------------------------------------------------------------------------
void __fastcall TFrAddProduce::btInsRaspDetailClick(TObject *Sender)
{  vsSQLQw=" declare             "
		   " @Id512Name  int,"
		   " @idLevel        int,"
		   " @T512Name varchar(512),"
		   " @idnP int,"
		   " @Id24TypeName int,"
		   " @CodeB varchar(16),"
		   " @IdIns int"
		   " SET @T512Name=:D0;" //Текстовое наименование раздела
		   " SET @idnP=:D1;"
		   " SET @Id24TypeName=:D2;"
		   " SET @CodeB=:D3;"
		   " SET @IdIns=:D4;"
		   " exec prLb_GetNumField 'all_AdvProduceClass','id512Name','spl_LbText512',@T512Name output,@idLevel output,@Id512Name output"
" INSERT INTO all_AdvProduceClass"
		   "(idnP"
		   ",Id512NameCatalog"
		   ",id512Name"
		   ",Id24TypeName"
		   ",CodeB"
		   ",iType"
		   ",DateIns"
		   ",IdIns)"
  " VALUES   (@idnP"
			",9113095"
			",@Id512Name"
			",@Id24TypeName"
			",@CodeB"
			",3"
			",GetDate()"     
			",@IdIns);"
 " declare @viTmp int; SET  @viTmp=SCOPE_IDENTITY(); "
 " SELECT @viTmp" ;


   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
   Qw->Parameters->Items[0]->Value=edT512Name->Text;
   if ((cbRazdel->ItemIndex!=-1)) Qw->Parameters->Items[1]->Value=(int)cbRazdel->Items->Objects[cbRazdel->ItemIndex];
	  else Qw->Parameters->Items[1]->Value.Clear();
   if ((cbTypeName->ItemIndex==-1)) {Qw->Parameters->Items[2]->Value=0;}
   else {Qw->Parameters->Items[2]->Value=(int)cbTypeName->Items->Objects[cbTypeName->ItemIndex]; }
   Qw->Parameters->Items[3]->Value=edCodeB->Text;
   Qw->Parameters->Items[4]->Value=PermisHdr.KeyUserStartProgramm;

   Qw->Open();
   viIdnProduce=Qw->Fields->Fields[0]->AsInteger;;
   ModalResult = mrOk;
}
//---------------------------------------------------------------------------
void __fastcall TFrAddProduce::btCloseClick(TObject *Sender)
{
   ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
void __fastcall TFrAddProduce::FormActivate(TObject *Sender)
{
  vsSQLQw=" SELECT Idn,iText FROM dbo.spl_LbText24 WHERE iLvl=1354 and DateDel is null" ;
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Open();cbTypeName->Clear();
  while(Qw->Eof==false){cbTypeName->AddObject(Qw->Fields->Fields[1]->AsString,(TObject*)Qw->Fields->Fields[0]->AsInteger);Qw->Next();}Qw->Close();
}
//---------------------------------------------------------------------------
void __fastcall TFrAddProduce::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
 if(Key == VK_ESCAPE) ModalResult = mrCancel;
}
//---------------------------------------------------------------------------


