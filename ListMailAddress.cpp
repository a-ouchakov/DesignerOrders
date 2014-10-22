//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ListMailAddress.h"
#include "main.h"
#include "SelectDol.h"
#include "InsertMail.h"
#include "AlarmHoliday.h"
#include "Init.h"
#include "RealVirtualDol.h"
#include "FindEmplUser.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzChkLst"
#pragma link "RzCmboBx"
#pragma link "RzEdit"
#pragma link "RzLabel"
#pragma link "RzLstBox"
#pragma link "RzPanel"
#pragma link "RzSplit"
#pragma link "RzTabs"
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
#pragma link "cxCheckBox"
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
TFrListMailAddress *FrListMailAddress;
//---------------------------------------------------------------------------
__fastcall TFrListMailAddress::TFrListMailAddress(TComponent* Owner): TForm(Owner)
{
  QEmplUsers->Open();
  while(QEmplUsers->Eof==false){clEmplUsers->Items->AddObject(QEmplUsersTmpFamIO->AsString,(TObject*)QEmplUsersIDUser->AsInteger);QEmplUsers->Next();}
  QEmplUsers->Close();

  TmEmplUserDol->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TFrListMailAddress::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
   if(Key == VK_ESCAPE) Close();
}
//---------------------------------------------------------------------------
void __fastcall TFrListMailAddress::RzToolButton4Click(TObject *Sender)
{
 if(QEmplUserDol->State==dsEdit || QEmplUserDol->State==dsInsert)QEmplUserDol->Post();
///Возвращаем начальный список
QEmplUserDol->DisableControls();
	  edFindText->Text=Trim(cbGroupMail->Text);
	  QEmplUserDol->Open();
	  QEmplUserDol->First();
	  while(QEmplUserDol->Eof==false)
		 {  vsSQLQw="DECLARE @Idn int, @PermisHdr int; "
			" SET @Idn =:D0; SET @PermisHdr =:D1; "
			" IF((GetDate()-(SELECT DateIns FROM bm_ListMail WHERE Idn=@Idn ))<1)BEGIN "
			" DELETE bm_ListMail where Idn=@Idn END "
			" ELSE UPDATE bm_ListMail SET DateDel=GetDate(), IdDel= @PermisHdr WHERE Idn=@Idn ";

			Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
			Qw->Parameters->Items[0]->Value=QEmplUserDolIdn->AsInteger;
			Qw->Parameters->Items[1]->Value=PermisHdr.KeyUserStartProgramm;
			Qw->ExecSQL();
			Qw->Close();
			QEmplUserDol->Next();
		 }
 vsSQLQw=" DECLARE @IdRasp int, @fType int, @PermisHdr int, @Id256NameGroupMail int; "
		 " SET @IdRasp = :D0 ;  SET @fType=:D1; SET @PermisHdr=:D2; SET @Id256NameGroupMail=:D3  "
		 " INSERT INTO bm_ListMail (IdRasp,IDUser,IDUserP,Mail,IdnEmplDol,fTurn,fTurnSheet,fType, Note, fResault,  DateSheet, DateLastSheet, IdLastSheet,DateIns,IdIns) "
		 " SELECT @IdRasp,IDUser,IDUserP,Mail,IdnEmplDol,fTurn,fTurnSheet,fType, Note, fResault,  DateSheet, DateLastSheet, IdLastSheet, Getdate(),@PermisHdr FROM  bm_GroupMail WHERE Id256NameGroupMail=@Id256NameGroupMail AND DateDel is NULL";

 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value=IdRasp;
 Qw->Parameters->Items[1]->Value=fType;
 Qw->Parameters->Items[2]->Value=PermisHdr.KeyUserStartProgramm;
 Qw->Parameters->Items[3]->Value=4742112;//4742112='Текущий набор сотрудников'
 Qw->ExecSQL();
 Qw->Close();


 QEmplUserDol->EnableControls();

///

  
  ModalResult = mrCancel;
}
//---------------------------------------------------------------------------

void __fastcall TFrListMailAddress::RzToolButton1Click(TObject *Sender)
{
int TmpIdn, TmpEmplDol;
AnsiString  TmpEmplMail;



for(int i=0;i < clEmplUsers->Items->Count;i++)
{if(clEmplUsers->ItemChecked[i]==true)
 {TmpIdn=(int)clEmplUsers->Items->Objects[i];
   IDUserP=0;
  ///Проверка был ли уже заведен данный человек
   vsSQLQw=" SELECT Idn FROM bm_ListMail WHERE  IDUser=:D0 AND DateDel is NULL AND IdRasp=:D1 AND fType=:D2" ;
   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
   Qw->Parameters->Items[0]->Value=TmpIdn;
   Qw->Parameters->Items[1]->Value=IdRasp;
   Qw->Parameters->Items[2]->Value=fType;
   Qw->Open();
   if (Qw->Fields->Fields[0]->AsInteger==0)
	  {
  ///


 ///Проверка на наличие более 1 должности
 vsSQLQw="SELECT A.IDn, A.Dol, B.FamIO  FROM EmplDol A, EmplUsers B  WHERE A.IDUser=:D0 AND  A.DiscDate='21000101' AND B.IDUser=A.IDUser ";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value=TmpIdn;
 Qw->Open();
 if (Qw->RecordCount>1)
	{
	#ifdef  TFR
	#undef  TFR
	#undef  FR
	#endif
	#define TFR TFrSelectDol
	#define FR  FrSelectDol

	FR=new TFR(Application);
	FR->lbSelectDol->Caption="У "+Qw->Fields->Fields[2]->AsString+" несколько должностей.\n Выберите необходимую для рассылки.";
	while(Qw->Eof==false){FR->cbSelectDol->AddObject(Qw->Fields->Fields[1]->AsString,(TObject*)Qw->Fields->Fields[0]->AsInteger);Qw->Next();}//Qw->Close();

	FR->ShowModal();
	FR->WindowState=wsMinimized;
	  if (FR->ModalResult==mrOk)
		{TmpEmplDol=(int)FR->cbSelectDol->Items->Objects[FR->cbSelectDol->ItemIndex];


		} else
		{ ShowMessage("Вы не выбрали должность. Подставляется случайная.");
		  Qw->First();
		  TmpEmplDol=Qw->Fields->Fields[0]->AsInteger;
		}
	 delete (FR);


	} else TmpEmplDol=Qw->Fields->Fields[0]->AsInteger;

 ///

 ///Проверка наличия mail
  vsSQLQw= "SELECT	MAX(LTRIM(RTRIM(b.Mail))) Mail, MAX(a.FamIO) FamIO  "//" SELECT	LTRIM(RTRIM(b.Mail)), a.FamIO "
   " FROM   EmplUsers a, EmplUserMail b "
   " WHERE  a.DiscDate='21000101' AND a.IDUser=:D0 "
   " AND a.IDUser=CASE WHEN b.IDUser=b.IDUserMail THEN b.IDUser ELSE b.IDUserMail END ";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value=TmpIdn;
 Qw->Open();
 TmpEmplMail=Qw->Fields->Fields[0]->AsString;
 if (TmpEmplMail=="")
	{
	#ifdef  TFR
	#undef  TFR
	#undef  FR
	#endif
	#define TFR TFrInsertMail
	#define FR  FrInsertMail

	FR=new TFR(Application);
	FR->lbInsertMail->Caption="У "+Qw->Fields->Fields[1]->AsString+" не указан Mail.\n Введите необходимый для рассылки.";

	FR->ShowModal();
	FR->WindowState=wsMinimized;
	  if (FR->ModalResult==mrOk)
		{TmpEmplMail=FR->edMail->Text;//+"@mcfr.ru";
		} else
		{ ShowMessage("Вы не выбрали Mail. Можете завести его позже.");
		  Qw->First();
		  TmpEmplMail="";
		}
	 delete (FR);
	}
	TReplaceFlags ReplaceFlags;
   //	ReplaceFlags in [rfReplaceAll..rfIgnoreCase];
   TmpEmplMail=	StringReplace(TmpEmplMail," ","",ReplaceFlags<<rfReplaceAll>>rfIgnoreCase);


 ///Проверка на отпуск
   vsSQLQw= "SELECT a.IdUser, a.FamIO, max(D.StarDate) StarDate, max(D.EndDate) EndDate "
			"  FROM EmplUsers a "
			"       LEFT JOIN AxEmplHoliday D ON A.IDUser = D.IDUser "
			" WHERE a.IDUser = :D0 "
			"   AND a.IDUser NOT IN (100281, 102443, 102451, 104865) "  //по заявке 431 от Красавина с 2014-08-06 по октябрь 2014
			" group by a.IdUser, a.FamIO";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value=TmpIdn;
 Qw->Open();
 if ((Now()>Qw->Fields->Fields[2]->AsDateTime)&&(Now()<Qw->Fields->Fields[3]->AsDateTime))
	{
	#ifdef  TFR
	#undef  TFR
	#undef  FR
	#endif
	#define TFR TFrAlarmHoliday
	#define FR  FrAlarmHoliday

	FR=new TFR(Application);
	FR->lbAlarmHoliday->Caption=Qw->Fields->Fields[1]->AsString+"  находится в отпуске по "+Qw->Fields->Fields[3]->AsDateTime.FormatString("dd.mm.yy")+" \n Удалить из списка рассылки?";
	FR->IDUserP=0;
	FR->ShowModal();
	FR->WindowState=wsMinimized;
	  if (FR->ModalResult==mrOk) break;
	  IDUserP=FR->IDUserP;
	 delete (FR);
	 }


 ///


 ///Занесение выбранного персонала в ведомость рассылки


		vsSQLQw=" DECLARE @IDUser int, @Mail nvarchar(32) , @IdnEmplDol int, @PermisHdr int, @fType int, @IdRasp int, @I int, @IDUserP int; "
				" SET @IDUser = :D0 ; SET @Mail=:D1; SET @IdnEmplDol=:D2; SET @PermisHdr=:D3; SET @fType=:D4; SET @IdRasp=:D5; SET @IDUserP=:D6 "
				" SELECT @I=Idn FROM bm_ListMail WHERE  IDUser=@IDUser AND DateDel is NULL AND IdRasp=@IdRasp AND fType=@fType"
				" IF(@I=0 OR @I is null)BEGIN "
				" INSERT INTO bm_ListMail (IdRasp,IDUser,IDUserP,Mail,IdnEmplDol,fTurn,fType,DateIns,IdIns)values(@IdRasp,@IDUser,@IDUserP,@Mail,@IdnEmplDol,1,@fType,GetDate(),@PermisHdr) END ";
		Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		Qw->Parameters->Items[0]->Value=TmpIdn;
		Qw->Parameters->Items[1]->Value=TmpEmplMail;
		Qw->Parameters->Items[2]->Value=TmpEmplDol;
		Qw->Parameters->Items[3]->Value=PermisHdr.KeyUserStartProgramm;
		Qw->Parameters->Items[4]->Value=fType;
		Qw->Parameters->Items[5]->Value=IdRasp;
		if (IDUserP==0) Qw->Parameters->Items[6]->Value=0; else Qw->Parameters->Items[6]->Value=IDUserP;
		Qw->ExecSQL();
		Qw->Close();

	 }// Проверка наличия заедения
 } //if check
} //for
TmEmplUserDol->Enabled=true;

}
//---------------------------------------------------------------------------

void __fastcall TFrListMailAddress::RzToolButton2Click(TObject *Sender)
{

 vsSQLQw="DECLARE @Idn int, @PermisHdr int; "
   " SET @Idn =:D0; SET @PermisHdr =:D1; "
   " IF((GetDate()-(SELECT DateIns FROM bm_ListMail WHERE Idn=@Idn ))<1)BEGIN "
   " DELETE bm_ListMail where Idn=@Idn END "
   " ELSE UPDATE bm_ListMail SET DateDel=GetDate(), IdDel= @PermisHdr WHERE Idn=@Idn ";

 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value=QEmplUserDolIdn->AsInteger;
 Qw->Parameters->Items[1]->Value=PermisHdr.KeyUserStartProgramm;
  Qw->ExecSQL();
 Qw->Close();
 TmEmplUserDol->Enabled=true;

}
//---------------------------------------------------------------------------

void __fastcall TFrListMailAddress::QEmplUserDolBeforePost(TDataSet *DataSet)
{ int i,j;

 if(DataSet->Modified==true)//Былали модификация данных
 {
   switch(DataSet->State)
   {case dsInsert:break;  //Режим создания новой записи

	case dsEdit:
		{  //Режим редактирования
		for(int i=0,j=10/*DataSet->FieldCount*/;i<j;i++)
		   {if((DataSet->Fields->Fields[i]->NewValue!=DataSet->Fields->Fields[i]->OldValue))//&&(DataSet->Fields->Fields[i]->FieldName!="fHoliday")) //fHoliday вычисляемое поле. При обращении к полю начинает чудить
			  { vsSQLQw=  "UPDATE bm_ListMail SET "+DataSet->Fields->Fields[i]->FieldName+"=:D0 , DateMod= getdate(),IdMod=:D1 where idn="+IntToStr(QEmplUserDolIdn->AsInteger)+";";
			   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
			   if(DataSet->Fields->Fields[i]->FieldName=="Mail") Qw->Parameters->Items[0]->Value=DataSet->Fields->Fields[i]->AsString;
			   if((DataSet->Fields->Fields[i]->FieldName=="fTurn")||(DataSet->Fields->Fields[i]->FieldName=="fType")||(DataSet->Fields->Fields[i]->FieldName=="fTurnSheet")) Qw->Parameters->Items[0]->Value=DataSet->Fields->Fields[i]->AsInteger;
			   Qw->Parameters->Items[1]->Value=PermisHdr.KeyUserStartProgramm;
			   viIdn=QEmplUserDolIdn->AsInteger;
			   Qw->ExecSQL();
			   Qw->Close();
			  }
		   } //for FieldCount
		}//case
	 } //switch
  }//DataSet->Modified==true
TmEmplUserDol->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TFrListMailAddress::cxGridTableViewEmplUserKeyDown(
      TObject *Sender, WORD &Key, TShiftState Shift)
{
  if(Key==13 )//Enter
  {
 if(QEmplUserDol->State==dsEdit || QEmplUserDol->State==dsInsert)QEmplUserDol->Post();  }
}
//---------------------------------------------------------------------------

void __fastcall TFrListMailAddress::RzToolButton3Click(TObject *Sender)
{

  if(QEmplUserDol->State==dsEdit || QEmplUserDol->State==dsInsert)QEmplUserDol->Post();
	if (IdRasp==1)
	 {  vsSQLQw= " DECLARE  @PermisHdr int;"
	  " SET @PermisHdr =:D0; "
	  " UPDATE  bm_GroupMail SET DateDel=GetDate(), IdDel= @PermisHdr WHERE Id256NameGroupMail=4742188;";

	  Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	  Qw->Parameters->Items[0]->Value=PermisHdr.KeyUserStartProgramm;
	  Qw->ExecSQL();


		  QEmplUserDol->Open();
	  QEmplUserDol->First();
		  while(QEmplUserDol->Eof==false)
	   {
		 vsSQLQw=" DECLARE @IDUser int, @Mail nvarchar(32) , @PermisHdr int,@IdnEmplDol int, @fTurn int, @fTurnSheet int, @Idn int, @idLevel int; "
		 " SET @Idn = :D0 ;  SET @PermisHdr=:D1;  "
		 " SELECT @IDUser=IDUser, @Mail=Mail, @IdnEmplDol=IdnEmplDol, @fTurn=fTurn, @fTurnSheet=fTurnSheet FROM  bm_ListMail WHERE Idn=@Idn"
		 " INSERT INTO bm_GroupMail (IDUser,Mail,Id256NameGroupMail,IdnEmplDol,fTurn,fTurnSheet,fType,DateIns,IdIns)values( @IDUser,@Mail,4742188,@IdnEmplDol,@fTurn,@fTurnSheet,3,GetDate(),@PermisHdr)  ";
		 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		 Qw->Parameters->Items[0]->Value=QEmplUserDolIdn->AsInteger;
		 Qw->Parameters->Items[1]->Value=PermisHdr.KeyUserStartProgramm;;

		 Qw->ExecSQL();
		 Qw->Close();
		 QEmplUserDol->Next();
	   }
	 }

  ModalResult=mrOk;
}
//---------------------------------------------------------------------------

void __fastcall TFrListMailAddress::TmEmplUserDolTimer(TObject *Sender)
{
  TmEmplUserDol->Enabled=false;
  QEmplUserDol->Close();
  QEmplUserDol->Parameters->Items[0]->Value=fType;
  QEmplUserDol->Parameters->Items[1]->Value=IdRasp;
  QEmplUserDol->Open();
  if(viIdn>0)
  {try{Opts.Clear();locvalues[0]=Variant(viIdn);QEmplUserDol->Locate("Idn",locvalues,Opts);}catch(...){};};
}
//---------------------------------------------------------------------------

void __fastcall TFrListMailAddress::btInsRaspDetailClick(TObject *Sender)
{
 if(Trim(edFindText->Text)!="")
	{  vsSQLQw= " DECLARE @256NameGroupMail varchar(256), @Id256NameGroupMail int, @PermisHdr int, @idLevel int;"
	  " SET @256NameGroupMail=:D0; SET @PermisHdr =:D1; "
	  "exec prLb_GetNumField 'bm_GroupMail','Id256NameGroupMail','spl_LbText256',@256NameGroupMail output,@idLevel output,@Id256NameGroupMail output "
	  " UPDATE  bm_GroupMail SET DateDel=GetDate(), IdDel= @PermisHdr WHERE Id256NameGroupMail=@Id256NameGroupMail;";

	  Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	  Qw->Parameters->Items[0]->Value=edFindText->Text;
	  Qw->Parameters->Items[1]->Value=PermisHdr.KeyUserStartProgramm;
	  Qw->ExecSQL();

	  QEmplUserDol->Open();
	  QEmplUserDol->First();
		  while(QEmplUserDol->Eof==false)
	   {
		 vsSQLQw=" DECLARE @IDUser int, @Mail nvarchar(32) , @256NameGroupMail varchar(256), @Id256NameGroupMail int, @PermisHdr int,@IdnEmplDol int, @fTurn int, @fTurnSheet int, @Idn int, @idLevel int; "
		 " SET @Idn = :D0 ;  SET @256NameGroupMail=:D1; SET @PermisHdr=:D2;  "
		 " exec prLb_GetNumField 'bm_GroupMail','Id256NameGroupMail','spl_LbText256',@256NameGroupMail output,@idLevel output,@Id256NameGroupMail output "
		 " SELECT @IDUser=IDUser, @Mail=Mail, @IdnEmplDol=IdnEmplDol, @fTurn=fTurn, @fTurnSheet=fTurnSheet FROM  bm_ListMail WHERE Idn=@Idn"
		 " INSERT INTO bm_GroupMail (IDUser,Mail,Id256NameGroupMail,IdnEmplDol,fTurn,fTurnSheet,DateIns,IdIns)values( @IDUser,@Mail,@Id256NameGroupMail,@IdnEmplDol,@fTurn,@fTurnSheet,GetDate(),@PermisHdr)  ";
		 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		 Qw->Parameters->Items[0]->Value=QEmplUserDolIdn->AsInteger;
		 Qw->Parameters->Items[1]->Value=Trim(edFindText->Text);
		 Qw->Parameters->Items[2]->Value=PermisHdr.KeyUserStartProgramm;;

		 Qw->ExecSQL();
		 Qw->Close();
		 QEmplUserDol->Next();
	   }
	}
viIdn=0;
TmEmplUserDol->Enabled=true;
}
//---------------------------------------------------------------------------


void __fastcall TFrListMailAddress::cbGroupMailDropDown(TObject *Sender)
{
   vsSQLQw= " SELECT  DISTINCT   A.Id256NameGroupMail, B.iText FROM bm_GroupMail A, spl_LbText256 B WHERE A.DateDel is NULL AND A.Id256NameGroupMail=B.Idn AND A.Id256NameGroupMail<>4742112"//4742112='Текущий набор сотрудников'
			" AND A.Id256NameGroupMail<>4742188 " //4742188=Сохранённый список ценового комитета
			" ORDER BY B.iText ; ";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Open();cbGroupMail->Clear();
  while(Qw->Eof==false){cbGroupMail->AddObject(Qw->Fields->Fields[1]->AsString,(TObject*)Qw->Fields->Fields[0]->AsInteger);Qw->Next();}Qw->Close();

}
//---------------------------------------------------------------------------

void __fastcall TFrListMailAddress::cbGroupMailChange(TObject *Sender)
{ QEmplUserDol->DisableControls();
	  edFindText->Text=Trim(cbGroupMail->Text);
	  QEmplUserDol->Open();
	  QEmplUserDol->First();
	  while(QEmplUserDol->Eof==false)
		 {  vsSQLQw="DECLARE @Idn int, @PermisHdr int; "
			" SET @Idn =:D0; SET @PermisHdr =:D1; "
			" IF((GetDate()-(SELECT DateIns FROM bm_ListMail WHERE Idn=@Idn ))<1)BEGIN "
			" DELETE bm_ListMail where Idn=@Idn END "
			" ELSE UPDATE bm_ListMail SET DateDel=GetDate(), IdDel= @PermisHdr WHERE Idn=@Idn ";

			Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
			Qw->Parameters->Items[0]->Value=QEmplUserDolIdn->AsInteger;
			Qw->Parameters->Items[1]->Value=PermisHdr.KeyUserStartProgramm;
			Qw->ExecSQL();
			Qw->Close();
			QEmplUserDol->Next();
		 }
 vsSQLQw=" DECLARE @IdRasp int, @fType int, @PermisHdr int, @Id256NameGroupMail int; "
		 " SET @IdRasp = :D0 ;  SET @fType=:D1; SET @PermisHdr=:D2; SET @Id256NameGroupMail=:D3  "
		 " INSERT INTO bm_ListMail (IdRasp,IDUser,Mail,IdnEmplDol,fTurn,fType,DateIns,IdIns) "
		 " SELECT @IdRasp,IDUser,Mail,IdnEmplDol,fTurn,@fType,Getdate(),@PermisHdr FROM  bm_GroupMail WHERE Id256NameGroupMail=@Id256NameGroupMail AND DateDel is NULL";

 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value=IdRasp;
 Qw->Parameters->Items[1]->Value=fType;
 Qw->Parameters->Items[2]->Value=PermisHdr.KeyUserStartProgramm;
 Qw->Parameters->Items[3]->Value=(int)cbGroupMail->Items->Objects[cbGroupMail->ItemIndex];
 Qw->ExecSQL();
 Qw->Close();


 QEmplUserDol->EnableControls();
 viIdn=0;
 //TmEmplUserDol->Enabled=true;
  QEmplUserDol->Close();
  QEmplUserDol->Parameters->Items[0]->Value=fType;
  QEmplUserDol->Parameters->Items[1]->Value=IdRasp;
  QEmplUserDol->Open();
  //

 QEmplUserDol->First();

 while(QEmplUserDol->Eof==false)
	 {if ((Now()>QEmplUserDolStarDate->AsDateTime)&&(Now()<QEmplUserDolEndDate->AsDateTime))
		{
		#ifdef  TFR
		#undef  TFR
		#undef  FR
		#endif
		#define TFR TFrAlarmHoliday
		#define FR  FrAlarmHoliday

		FR=new TFR(Application);
		FR->lbAlarmHoliday->Caption=QEmplUserDolFamIO->AsString+"  находится в отпуске по "+QEmplUserDolEndDate->AsDateTime.FormatString("dd.mm.yy")+" \n Удалить из списка рассылки?";
		FR->IDUserP=0;
		FR->ShowModal();
		FR->WindowState=wsMinimized;
		if (FR->ModalResult==mrOk)
		   {vsSQLQw="DECLARE @Idn int; "
			" SET @Idn =:D0;  "
			" DELETE bm_ListMail where Idn=@Idn  ";

			Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
			Qw->Parameters->Items[0]->Value=QEmplUserDolIdn->AsInteger;
			Qw->ExecSQL();
			Qw->Close();
		   }
		  IDUserP=FR->IDUserP;
		  if (IDUserP>0) 
			 {vsSQLQw="UPDATE  bm_ListMail "
			" SET IDUserP=:D0  "
			" WHERE Idn=:D1  ";
			Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
			Qw->Parameters->Items[0]->Value=IDUserP;
			Qw->Parameters->Items[1]->Value=QEmplUserDolIdn->AsInteger;
			Qw->ExecSQL();
			Qw->Close();
			 }
		delete (FR);
		}

		
 ///Отбираем уволеных
 vsSQLQw="SELECT case  when a.Faml+' '+a.Imja+' '+a.Otch='  ' then a.FamIO "
		 "	   else a.Faml+' '+a.Imja+' '+a.Otch end TmpFamIO      "
		 " FROM EmplUsers a "
		 " WHERE  A.DiscDate<>'21000101' AND a.IDUser=:D0 " ;
			Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
			Qw->Parameters->Items[0]->Value=QEmplUserDolIdUser->AsInteger;
			Qw->Open();
		 if (Qw->RecordCount>0)
		 {if(MessageDlg(Qw->Fields->Fields[0]->AsString+ " числится уволенным с данной должности\n Удалить из списка?" ,mtWarning,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
			{vsSQLQw="DECLARE @Idn int; "
			" SET @Idn =:D0;  "
			" DELETE bm_ListMail where Idn=@Idn  ";
			Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
			Qw->Parameters->Items[0]->Value=QEmplUserDolIdn->AsInteger;
			Qw->ExecSQL();
			Qw->Close();
			}
		 }

 ///


		QEmplUserDol->Next();

	 }
 TmEmplUserDol->Enabled=true;
 edFindText->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TFrListMailAddress::btGroupMailClearClick(TObject *Sender)
{
   cbGroupMail->ItemIndex=-1;
   QEmplUserDol->DisableControls();

	  QEmplUserDol->Open();
	  QEmplUserDol->First();
	  while(QEmplUserDol->Eof==false)
		 {  vsSQLQw="DECLARE @Idn int, @PermisHdr int; "
			" SET @Idn =:D0; SET @PermisHdr =:D1; "
			" IF((GetDate()-(SELECT DateIns FROM bm_ListMail WHERE Idn=@Idn ))<1)BEGIN "
			" DELETE bm_ListMail where Idn=@Idn END "
			" ELSE UPDATE bm_ListMail SET DateDel=GetDate(), IdDel= @PermisHdr WHERE Idn=@Idn ";

			Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
			Qw->Parameters->Items[0]->Value=QEmplUserDolIdn->AsInteger;
			Qw->Parameters->Items[1]->Value=PermisHdr.KeyUserStartProgramm;
			Qw->ExecSQL();
			Qw->Close();
			QEmplUserDol->Next();
		 }
   QEmplUserDol->EnableControls();
   viIdn=0;
   TmEmplUserDol->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TFrListMailAddress::btGroupMailDelClick(TObject *Sender)
{ if (Trim(cbGroupMail->Text)!="")
	 {if(MessageDlg("Вы уверены, что хотите удалить группу"+cbGroupMail->Text+"?\nПродолжение приведёт к полному удалению группы "+cbGroupMail->Text+" и связанных с нею данных из Базы Данных!!!" ,mtWarning,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrNo){return;}
	  vsSQLQw=" DECLARE @Id256NameGroupMail int, @PermisHdr int; "
	  " SET @Id256NameGroupMail=:D0; SET @PermisHdr =:D1; "
	  " UPDATE  bm_GroupMail SET DateDel=GetDate(), IdDel= @PermisHdr WHERE Id256NameGroupMail=@Id256NameGroupMail;" ;

	  Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	  Qw->Parameters->Items[0]->Value=(int)cbGroupMail->Items->Objects[cbGroupMail->ItemIndex];
	  Qw->Parameters->Items[1]->Value=PermisHdr.KeyUserStartProgramm;
	  Qw->ExecSQL();
	  cbGroupMail->ItemIndex=-1;
	 }

}
//---------------------------------------------------------------------------

void __fastcall TFrListMailAddress::QEmplUserDolFHolidayGetText(TField *Sender,
	  AnsiString &Text, bool DisplayText)
{
		// if ((Now()>QEmplUserDolStarDate->AsDateTime)&&(Now()>QEmplUserDolEndDate->AsDateTime)) Text=1; else Text=0;

}
//---------------------------------------------------------------------------

void __fastcall TFrListMailAddress::QEmplUserDolCalcFields(TDataSet *DataSet)
{
  if ((Now()>QEmplUserDolStarDate->AsDateTime)&&(Now()<QEmplUserDolEndDate->AsDateTime)) QEmplUserDolfHoliday->AsInteger=1; else QEmplUserDolfHoliday->AsInteger=0;
}
//---------------------------------------------------------------------------------------------------------------------------

void __fastcall TFrListMailAddress::TmEmplUsersTimer(TObject *Sender)
{
  TmEmplUsers->Enabled = false;

/*  vsSQLQw = " SELECT	 a.IDUser "
			" ,case  when a.Faml+' '+a.Imja+' '+a.Otch='  ' then a.FamIO+'('+b.Mail+')' "
			" else a.Faml+' '+a.Imja+' '+a.Otch +' ('+b.Mail+')'end TmpFamIO "


			" FROM EmplUsers a, (select IDUser, IDUserMail, max(Mail) Mail  from EmplUserMail group by IDUser,idusermail) b  "
			" WHERE  A.DiscDate='21000101' "
			" AND a.FamIO LIKE '%"+Trim(edFindName->Text)+"%'"
			" and a.IDUser=case when b.IDUser=b.IDUserMail THEN b.IDUser "
			" else b.IDUserMail end "
			" ORDER BY TmpFamIO  ";


   //--- Query old
   SELECT	 a.IDUser
		,case  when a.Faml+' '+a.Imja+' '+a.Otch='  ' then a.FamIO+'('+b.Mail+')'
			   else a.Faml+' '+a.Imja+' '+a.Otch +' ('+b.Mail+')'end TmpFamIO
   FROM EmplUsers a, (select IDUser, IDUserMail, max(Mail) Mail  from EmplUserMail group by IDUser,idusermail) b
   WHERE  A.DiscDate='21000101'
     and a.IDUser=case when b.IDUser=b.IDUserMail THEN b.IDUser
                       else b.IDUserMail end
ORDER BY TmpFamIO

   //---
   */


  vsSQLQw = //"SELECT ISNULL (MIN(a.IDUser), MAX(a.IDUser)) AS IDUser, "
			"SELECT ISNULL (MIN(a.IDUser), MAX(a.IDUser)) AS IDUser, MAX(a.IDUser), "
			"       CASE WHEN a.Faml + ' ' + a.Imja + ' ' + a.Otch = '  ' THEN a.FamIO + '(' + b.Mail + ')' "
			"            ELSE a.Faml + ' ' + a.Imja + ' ' + a.Otch + ' (' + b.Mail + ')' END TmpFamIO "
			"  FROM EmplUsers AS a, (select IDUser, IDUserMail, max(Mail) Mail  from EmplUserMail group by IDUser,idusermail) b "
			" WHERE a.DiscDate = '21000101' AND a.FamIO LIKE '%" + Trim(edFindName->Text) + "%' "
			"   AND a.IDUser = CASE WHEN b.IDUser = b.IDUserMail THEN b.IDUser "
			"                       ELSE b.IDUserMail END "
			" GROUP BY a.Faml, a.Imja, a.Otch, a.FamIO, b.Mail "
			" ORDER BY TmpFamIO ";

  QEmplUsers->Close();
  QEmplUsers->SQL->Clear();
  QEmplUsers->SQL->Add(vsSQLQw);
  clEmplUsers->Clear();
  QEmplUsers->Open();
  while(!QEmplUsers->Eof)
	   {
		clEmplUsers->Items->AddObject(QEmplUsersTmpFamIO->AsString,(TObject*)QEmplUsersIDUser->AsInteger);
		QEmplUsers->Next();
		}
  QEmplUsers->Close();
}
//---------------------------------------------------------------------------

void __fastcall TFrListMailAddress::edFindNameChange(TObject *Sender)
{
 TmEmplUsers->Enabled=true;	        
}
//---------------------------------------------------------------------------



void __fastcall TFrListMailAddress::cxGridTableViewEmplUserEditKeyDown(
      TcxCustomGridTableView *Sender, TcxCustomGridTableItem *AItem,
      TcxCustomEdit *AEdit, WORD &Key, TShiftState Shift)
{
   if(Key==13 )//Enter
   {if(QEmplUserDol->State==dsEdit || QEmplUserDol->State==dsInsert)QEmplUserDol->Post();  }
}
//---------------------------------------------------------------------------

void __fastcall TFrListMailAddress::cxGridTableViewEmplUserfTypePropertiesChange(
      TObject *Sender)
{
  if(QEmplUserDol->State==dsEdit || QEmplUserDol->State==dsInsert)QEmplUserDol->Post(); 
}
//---------------------------------------------------------------------------
void __fastcall TFrListMailAddress::FormActivate(TObject *Sender)
{
int TmpIdn, TmpEmplDol;
AnsiString  TmpEmplMail;

///Заводим Питерскую везде перво	 принудительно   modified by R.Perkatov 2014-06-30
  //Теперь добавляем Сидлецкую Анастасию             modified by R.Perkatov 2014-06-30
  if (fType==0)
   {
   vsSQLQw=" SELECT Idn FROM bm_Rasp WHERE   Idn=:D0 AND (VidRasp=4742151 OR VidRasp=4742153)" ;
   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
   Qw->Parameters->Items[0]->Value=IdRasp;
   Qw->Open();
   if (Qw->RecordCount>0)
	  {
	   vsSQLQw=" SELECT Idn FROM bm_ListMail WHERE  IDUser=:D0 AND DateDel is NULL AND IdRasp=:D1 AND fType=:D2" ;
	   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	   Qw->Parameters->Items[0]->Value=155;
	   Qw->Parameters->Items[1]->Value=IdRasp;
	   Qw->Parameters->Items[2]->Value=fType;
	   Qw->Open();

	   if (Qw->RecordCount==0)
		  {
			vsSQLQw=" DECLARE @IDUser int, @Mail nvarchar(32) , @IdnEmplDol int, @PermisHdr int, @fType int, @IdRasp int, @I int, @IDUserP int; "
					" SET @IDUser = :D0 ; SET @Mail=:D1; SET @IdnEmplDol=:D2; SET @PermisHdr=:D3; SET @fType=:D4; SET @IdRasp=:D5; SET @IDUserP=:D6 "
					" SELECT @I=Idn FROM bm_ListMail WHERE  IDUser=@IDUser AND DateDel is NULL AND IdRasp=@IdRasp AND fType=@fType"
					" IF(@I=0 OR @I is null)BEGIN "
					" INSERT INTO bm_ListMail (IdRasp, IDUser, IDUserP, Mail, IdnEmplDol, fTurn, fType, DateIns, IdIns)"
					"                  values(@IdRasp,@IDUser,@IDUserP,@Mail,@IdnEmplDol,1,@fType,GetDate(),@PermisHdr) END ";
			Qw->Close();
			Qw->SQL->Clear();
			Qw->SQL->Add(vsSQLQw);
			Qw->Parameters->Items[0]->Value = 102426;                  //155;                      modified by R.Perkatov 2014-06-30
			Qw->Parameters->Items[1]->Value = "aSidletskaya@mcfr.ru";  //"oPiterskaya@mcfr.ru";    modified by R.Perkatov 2014-06-30
			Qw->Parameters->Items[2]->Value = 60104;                   //60101;                    modified by R.Perkatov 2014-06-30
			Qw->Parameters->Items[3]->Value = PermisHdr.KeyUserStartProgramm;
			Qw->Parameters->Items[4]->Value = fType;
			Qw->Parameters->Items[5]->Value = IdRasp;
			Qw->Parameters->Items[6]->Value = 0;
			Qw->ExecSQL();
			Qw->Close();
		  }
	   }
	}
/////

	   if ((fType==1)||(fType==3)||(fType==4)) { cxGridTableViewEmplUserfType->Visible=false; cxGridTableViewEmplUserfTurn->Visible=false; }
	  else { cxGridTableViewEmplUserfType->Visible=true; cxGridTableViewEmplUserfTurn->Visible=true; };
	//Заполняем группу текущим набором для возможности отката

		  vsSQLQw= " DECLARE @256NameGroupMail varchar(256), @Id256NameGroupMail int, @PermisHdr int, @idLevel int;"
		  " SET @256NameGroupMail=:D0; SET @PermisHdr =:D1; "
		  "exec prLb_GetNumField 'bm_GroupMail','Id256NameGroupMail','spl_LbText256',@256NameGroupMail output,@idLevel output,@Id256NameGroupMail output "
		  " UPDATE  bm_GroupMail SET DateDel=GetDate(), IdDel= @PermisHdr WHERE Id256NameGroupMail=@Id256NameGroupMail;";

		  Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		  Qw->Parameters->Items[0]->Value="Текущий набор сотрудников";//edFindText->Text;
		  Qw->Parameters->Items[1]->Value=PermisHdr.KeyUserStartProgramm;
		  Qw->ExecSQL();

	  QEmplUserDol->Close();
	  QEmplUserDol->Parameters->Items[0]->Value=fType;
	  QEmplUserDol->Parameters->Items[1]->Value=IdRasp;
	  QEmplUserDol->Open();
	  if(viIdn>0)
	  {try{Opts.Clear();locvalues[0]=Variant(viIdn);QEmplUserDol->Locate("Idn",locvalues,Opts);}catch(...){};};
		  QEmplUserDol->First();
			  while(QEmplUserDol->Eof==false)
		   {
			 vsSQLQw=" DECLARE @IDUser int,@IDUserP int, @Mail nvarchar(32) , @256NameGroupMail varchar(256), @Id256NameGroupMail int, @PermisHdr int,@IdnEmplDol int, @fTurn int, @fTurnSheet int, @Idn int, @idLevel int, @fType int,@Note   varchar(500), @fResault	int, @DateSheet	smalldatetime, @DateLastSheet datetime, @IdLastSheet int  ; "
			 " SET @Idn = :D0 ;  SET @256NameGroupMail=:D1; SET @PermisHdr=:D2;  "
			 " exec prLb_GetNumField 'bm_GroupMail','Id256NameGroupMail','spl_LbText256',@256NameGroupMail output,@idLevel output,@Id256NameGroupMail output "
			 " SELECT @IDUser=IDUser,@IDUserP=IDUserP, @Mail=Mail, @IdnEmplDol=IdnEmplDol, @fTurn=fTurn,@fTurnSheet=fTurnSheet, @fType=fType, @Note=Note, @fResault=fResault, @DateSheet=DateSheet, @DateLastSheet=DateLastSheet, @IdLastSheet=IdLastSheet FROM  bm_ListMail WHERE Idn=@Idn"
			 " INSERT INTO bm_GroupMail (IDUser,IDUserP,Mail,Id256NameGroupMail,IdnEmplDol,fTurn,fTurnSheet,fType,Note, fResault,  DateSheet, DateLastSheet, IdLastSheet,DateIns,IdIns)values( @IDUser,@IDUserP,@Mail,@Id256NameGroupMail,@IdnEmplDol,@fTurn,@fTurnSheet,@fType,@Note, @fResault,  @DateSheet, @DateLastSheet, @IdLastSheet,GetDate(),@PermisHdr)  ";
			 Qw->Close();
			 Qw->SQL->Clear();
			 Qw->SQL->Add(vsSQLQw);
			 Qw->Parameters->Items[0]->Value=QEmplUserDolIdn->AsInteger;
			 Qw->Parameters->Items[1]->Value="Текущий набор сотрудников";
			 Qw->Parameters->Items[2]->Value=PermisHdr.KeyUserStartProgramm;;

			 Qw->ExecSQL();
			 Qw->Close();
			 QEmplUserDol->Next();
		   }
}
//---------------------------------------------------------------------------
void __fastcall TFrListMailAddress::RzBitBtn1Click(TObject *Sender)
{
	  while(QEmplUserDol->Eof==false)
		 {  vsSQLQw="DECLARE @Idn int, @PermisHdr int; "
			" SET @Idn =:D0; SET @PermisHdr =:D1; "
			" IF((GetDate()-(SELECT DateIns FROM bm_ListMail WHERE Idn=@Idn ))<1)BEGIN "
			" DELETE bm_ListMail where Idn=@Idn END "
			" ELSE UPDATE bm_ListMail SET DateDel=GetDate(), IdDel= @PermisHdr WHERE Idn=@Idn ";

			Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
			Qw->Parameters->Items[0]->Value=QEmplUserDolIdn->AsInteger;
			Qw->Parameters->Items[1]->Value=PermisHdr.KeyUserStartProgramm;
			Qw->ExecSQL();
			Qw->Close();
			QEmplUserDol->Next();
		 }
		 TmEmplUserDol->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TFrListMailAddress::RzToolButton5Click(TObject *Sender)
{
 #ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#undef  NN
#endif
#define TFR TFrRealVirtualDol
#define FR  FrRealVirtualDol
if (clEmplUsers->SelectedItem()=="")
{ShowMessage("Необходимо выбрать сотрудника"); return;}
  FR=new TFR(Application);
  FR->fFlagEditInsert=false; //INS

  FR->lbFIO->Caption=clEmplUsers->SelectedItem();
  FR->QEmplUserDol->Close();
  FR->QEmplUserDol->Parameters->Items[0]->Value=(int)clEmplUsers->Items->Objects[clEmplUsers->IndexOf(clEmplUsers->SelectedItem())];
  FR->QEmplUserDol->Open();
  FR->ShowModal();
  FR->WindowState=wsMinimized;
	  if (FR->ModalResult == mrOk)
		{ if(Trim(FR->edVirtualDol->Text)=="")
			 {vsSQLQw=" DECLARE @IdEmplDol int,  @PermisHdr int; "
				 " SET @IdEmplDol = :D0 ;  SET @PermisHdr=:D1;"
				 " UPDATE  bm_RealVirtualDol SET DateDel=GetDate(),IdDel=@PermisHdr "
				 " WHERE IdEmplDol=@IdEmplDol";
				 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
				 Qw->Parameters->Items[0]->Value=FR->QEmplUserDolIDn->AsInteger;
				 Qw->Parameters->Items[1]->Value=PermisHdr.KeyUserStartProgramm;
				 Qw->ExecSQL();
				 Qw->Close();

			 }
		  else
			 {if(FR->fFlagEditInsert)
				{ vsSQLQw=" DECLARE @IdEmplDol int, @iText varchar(256), @PermisHdr int; "
				 " SET @IdEmplDol = :D0 ;  SET @iText=:D1; SET @PermisHdr=:D2;"
				 " UPDATE  bm_RealVirtualDol SET Dol=@iText,DateMod=GetDate(),IdMod=@PermisHdr "
				 " WHERE IdEmplDol=@IdEmplDol";
				 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
				 Qw->Parameters->Items[0]->Value=FR->QEmplUserDolIDn->AsInteger;
				 Qw->Parameters->Items[1]->Value=Trim(FR->edVirtualDol->Text);
				 Qw->Parameters->Items[2]->Value=PermisHdr.KeyUserStartProgramm;
				 Qw->ExecSQL();
				 Qw->Close();
				}
			  else
				{vsSQLQw=" DECLARE @IdEmplDol int, @iText varchar(256), @PermisHdr int; "
				 " SET @IdEmplDol = :D0 ;  SET @iText=:D1; SET @PermisHdr=:D2;   "
				 " INSERT INTO bm_RealVirtualDol (IdEmplDol,Dol,DateIns,IdIns) "
				 " VALUES (@IdEmplDol, @iText, GetDate(), @PermisHdr) ";
				 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
				 Qw->Parameters->Items[0]->Value=FR->QEmplUserDolIDn->AsInteger;
				 Qw->Parameters->Items[1]->Value=Trim(FR->edVirtualDol->Text);
				 Qw->Parameters->Items[2]->Value=PermisHdr.KeyUserStartProgramm;
				 Qw->ExecSQL();
				 Qw->Close();
				}
			  }
		}
  delete (FR);
 TmEmplUserDol->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TFrListMailAddress::RzToolButton6Click(TObject *Sender)
{
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#undef  NN
#endif
#define TFR TFrEmplUser
#define FR  FrEmplUser


  FR=new TFR(Application);

  FR->ShowModal();
  FR->WindowState=wsMinimized;
 if (FR->fOkButton)  
	{
	  IDUserP=FR->QEmplUserIDUser->AsInteger;
	}
  delete (FR);
 ModalResult = mrCancel;

		vsSQLQw=" DECLARE  @IDUserP int, @TmpLocate int, @PermisHdr int;"
				" SET @IDUserP=:D0; SET @TmpLocate=:D1; SET @PermisHdr=:D2; "
				" UPDATE  bm_ListMail SET IDUserP=@IDUserP, DateMod=GetDate(), IdMod=@PermisHdr WHERE Idn=@TmpLocate;" ;
		Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		Qw->Parameters->Items[0]->Value= IDUserP;
		Qw->Parameters->Items[1]->Value= QEmplUserDolIdn->AsInteger;
		Qw->Parameters->Items[2]->Value=PermisHdr.KeyUserStartProgramm;
        Qw->ExecSQL();

 TmEmplUserDol->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TFrListMailAddress::RzToolButton7Click(TObject *Sender)
{
 RzBitBtn1Click(Sender);
  vsSQLQw=" DECLARE @IdRasp int, @fType int, @PermisHdr int, @Id256NameGroupMail int; "
		 " SET @IdRasp = :D0 ;  SET @fType=:D1; SET @PermisHdr=:D2; SET @Id256NameGroupMail=:D3  "
		 " INSERT INTO bm_ListMail (IdRasp,IDUser,IDUserP,Mail,IdnEmplDol,fTurn,fTurnSheet,fType, Note, fResault,  DateSheet, DateLastSheet, IdLastSheet,DateIns,IdIns) "
		 " SELECT @IdRasp,IDUser,IDUserP,Mail,IdnEmplDol,fTurn,fTurnSheet,fType, Note, fResault,  DateSheet, DateLastSheet, IdLastSheet, Getdate(),@PermisHdr FROM  bm_GroupMail WHERE Id256NameGroupMail=@Id256NameGroupMail AND DateDel is NULL";

 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value=IdRasp;
 Qw->Parameters->Items[1]->Value=fType;
 Qw->Parameters->Items[2]->Value=PermisHdr.KeyUserStartProgramm;
 Qw->Parameters->Items[3]->Value=4742188;//4742188='Ценовой комитет'
 Qw->ExecSQL();
 Qw->Close();
  TmEmplUserDol->Enabled=true;
}
//---------------------------------------------------------------------------

