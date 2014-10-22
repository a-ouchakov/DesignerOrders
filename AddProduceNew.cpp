//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AddProduceNew.h"
#include "Init.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzPanel"
#pragma link "RzEdit"
#pragma link "RzRadChk"
#pragma resource "*.dfm"
TFrAddProduceNew *FrAddProduceNew;
//---------------------------------------------------------------------------
__fastcall TFrAddProduceNew::TFrAddProduceNew(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrAddProduceNew::btCloseClick(TObject *Sender)
{
  ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
void __fastcall TFrAddProduceNew::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
 if(Key == VK_ESCAPE) ModalResult = mrCancel;	
}
//---------------------------------------------------------------------------
void __fastcall TFrAddProduceNew::btInsRaspDetailClick(TObject *Sender)
{ AnsiString vsSQLQw;
  int viTmp ;
  if (RzRadioButton2->Checked) {viTmp=2;}else {viTmp=3;}
 if (!fEdit) //Заведение нового
	{
	if(viTmp==3)
	   {
		vsSQLQw =" SELECT A.* FROM  all_AdvProduceClass A"
				 " LEFT JOIN  spl_LbText512 B ON B.Idn=A.id512Name "
				 " WHERE A.iType=3 AND A.DateDel is null AND LTRIM(RTRIM(B.iText))='"+Trim(edT512Name->Text)+"' ";
		Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		Qw->Parameters->Refresh();
		Qw->Open();
	if(Qw->RecordCount>0){ShowMessage("Сохранение невозможно. \n Продукт с таким названием уже существует."); return;}
		}
	if(viTmp==2)
	   {
		vsSQLQw =" SELECT A.* FROM  all_AdvProduceClass A"
				 " LEFT JOIN  spl_LbText512 B ON B.Idn=A.id512Name "
				 " WHERE  A.iType=2 AND  A.idnP=:D0 AND A.DateDel is null AND LTRIM(RTRIM(B.iText))='"+Trim(edT512Name->Text)+"' ";
		Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		Qw->Parameters->Items[0]->Value=viIdnPProduce;
		Qw->Open();
	if(Qw->RecordCount>0){ShowMessage("Сохранение невозможно. \n Раздел с таким названием у данного продукта\раздела уже существует."); return;}
		}

vsSQLQw=" declare             "
		   " @Id512Name  int,"
		   " @idLevel        int,"
		   " @T512Name varchar(512),"
		   " @ISSN varchar(24),"
		   " @CodeB varchar(16),"
		   " @idnP int,"
		   " @iType int,"
		   " @IdIns int;"
		   " SET @T512Name=:D0;" //Текстовое наименование раздела
		   " SET @idnP= :D1;"
		   " SET @IdIns=:D2;"
		   " SET @iType=:D3;"
		   " SET @ISSN= :D4;"
		   " SET @CodeB= :D5;"
		   " exec prLb_GetNumField 'all_AdvProduceClass','id512Name','spl_LbText512',@T512Name output,@idLevel output,@Id512Name output"
" INSERT INTO all_AdvProduceClass"
		   "(idnP"
		   ",Id512NameCatalog"
		   ",id512Name"
		   ",ISSN"
		   ",CodeB"
		   ",iType"
		   ",DateIns"
		   ",IdIns)"
  " VALUES   (@idnP"
			",9113095"
			",@Id512Name"
			",@ISSN"
			",@CodeB"
			",@iType"
			",GetDate()"     
			",@IdIns);"
 " declare @viTmp int; SET  @viTmp=SCOPE_IDENTITY(); "
 " SELECT @viTmp" ;


   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
   Qw->Parameters->Items[0]->Value=edT512Name->Text;
   Qw->Parameters->Items[1]->Value=viIdnPProduce;
   Qw->Parameters->Items[2]->Value=PermisHdr.KeyUserStartProgramm;
 //  if (RzRadioButton2->Checked) {viTmp=2;}else {viTmp=3;}
   Qw->Parameters->Items[3]->Value=viTmp;
   Qw->Parameters->Items[4]->Value=edISSN->Text;
   Qw->Parameters->Items[5]->Value=edCodeB->Text;

   Qw->Open();
   viIdnProduce=Qw->Fields->Fields[0]->AsInteger;
	}
 if (fEdit) //Редактирование сущестыующего
	{
		if(viTmp==3)
	   {
		vsSQLQw =" SELECT A.* FROM  all_AdvProduceClass A"
				 " LEFT JOIN  spl_LbText512 B ON B.Idn=A.id512Name "
				 " WHERE A.Idn<>:D0 AND A.iType=3 AND A.DateDel is null AND LTRIM(RTRIM(B.iText))='"+Trim(edT512Name->Text)+"' ";
		Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		Qw->Parameters->Refresh();
		Qw->Parameters->Items[0]->Value=viIdnProduce;
		Qw->Open();
	if(Qw->RecordCount>0){ShowMessage("Сохранение невозможно. \n Продукт с таким названием уже существует."); return;}
		}
	if(viTmp==2)
	   {
		vsSQLQw =" SELECT A.* FROM  all_AdvProduceClass A"
				 " LEFT JOIN  spl_LbText512 B ON B.Idn=A.id512Name "
				 " WHERE  A.iType=2 AND  A.idnP=:D0 AND A.Idn<>:D1 AND A.DateDel is null AND LTRIM(RTRIM(B.iText))='"+Trim(edT512Name->Text)+"' ";
		Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		Qw->Parameters->Items[0]->Value=viIdnPProduce;
		Qw->Parameters->Items[1]->Value=viIdnProduce;		
		Qw->Open();
	if(Qw->RecordCount>0){ShowMessage("Сохранение невозможно. \n Раздел с таким названием у данного продукта\раздела уже существует."); return;}
		}

	 vsSQLQw=" declare             "
			 " @Id512Name  int,"
			 " @idLevel        int,"
			 " @T512Name varchar(512),"
			 " @ISSN varchar(24),"
			 " @CodeB varchar(16),"
			 " @idn int,"
			 " @IdMod int;"
			 " SET @T512Name=:D0;" //Текстовое наименование раздела
			 " SET @idn= :D1;"
			 " SET @IdMod= :D2;"
			 " SET @ISSN= :D3;"
			 " SET @CodeB= :D4;"
			 " exec prLb_GetNumField 'all_AdvProduceClass','id512Name','spl_LbText512',@T512Name output,@idLevel output,@Id512Name output"

	 " UPDATE all_AdvProduceClass SET id512Name=@Id512Name, ISSN=@ISSN, CodeB=@CodeB, DateMod=GetDate(), IdMod=@IdMod  WHERE Idn=@idn";
   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
   Qw->Parameters->Items[0]->Value=edT512Name->Text;
   Qw->Parameters->Items[1]->Value=viIdnProduce;
   Qw->Parameters->Items[2]->Value=PermisHdr.KeyUserStartProgramm;
   Qw->Parameters->Items[3]->Value=edISSN->Text;
   Qw->Parameters->Items[4]->Value=edCodeB->Text;   
   Qw->ExecSQL();
	}
   ModalResult = mrOk;	
}
//---------------------------------------------------------------------------
void __fastcall TFrAddProduceNew::RzRadioButton1Click(TObject *Sender)
{
if (RzRadioButton1->Checked) {RzGroupBox7->Caption="Наименование продукта";RzPanel2->Visible=true;}
}
//---------------------------------------------------------------------------
void __fastcall TFrAddProduceNew::RzRadioButton2Click(TObject *Sender)
{
if (RzRadioButton2->Checked) {RzGroupBox7->Caption="Наименование раздела";RzPanel2->Visible=false; };
}
//---------------------------------------------------------------------------
