//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "TraceMail.h"
#include "Init.h"
#include "ControlMail.h"
#include "AccountPrint.h"
#include "main.h"
#include "FindEmplUser.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzEdit"
#pragma link "RzLabel"
#pragma link "RzLstBox"
#pragma link "RzPanel"
#pragma link "RzSplit"
#pragma link "RzTabs"
#pragma link "cxContainer"
#pragma link "cxControls"
#pragma link "cxEdit"
#pragma link "cxMemo"
#pragma link "cxTextEdit"

#pragma link "cxClasses"
#pragma link "cxCurrencyEdit"
#pragma link "cxCustomData"
#pragma link "cxData"
#pragma link "cxDataStorage"
#pragma link "cxDBData"
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
#pragma link "cxImage"
#pragma link "cxCheckBox"
#pragma link "cxCheckComboBox"
#pragma link "cxButtonEdit"
#pragma link "cxImageComboBox"
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "frxExportPDF"
#pragma link "frxPreview"
#pragma link "RzRadChk"
#pragma link "RzRadGrp"
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
#pragma link "cxNavigator"
#pragma resource "*.dfm"
TFrTraceMail *FrTraceMail;
char flFrTraceMail;
//---------------------------------------------------------------------------
__fastcall TFrTraceMail::TFrTraceMail(TComponent* Owner): TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TFrTraceMail::btCloseClick(TObject *Sender)
{
 Close();	
}
//---------------------------------------------------------------------------


void __fastcall TFrTraceMail::RzCheckList3DblClick(TObject *Sender)
{

#ifdef  TFR
#undef  TFR
#undef  FR

#endif
#define TFR TFrControlMail
#define FR  FrControlMail




  FR=new TFR(Application);
  FR->ShowModal();
  FR->WindowState=wsMinimized;
  FR->ModalResult;

  delete (FR); 
}
//---------------------------------------------------------------------------

void __fastcall TFrTraceMail::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
   if(Key == VK_ESCAPE) Close();	
}
//---------------------------------------------------------------------------

void __fastcall TFrTraceMail::DSTraceMailListDataChange(TObject *Sender, TField *Field)
{
   TmTraceMailList->Enabled=true;	
}
//---------------------------------------------------------------------------

void __fastcall TFrTraceMail::TmTraceMailListTimer(TObject *Sender)
{
	if(QTraceMailListIdIns->AsInteger==PermisHdr.KeyUserStartProgramm)RzToolButton2->Visible=true; else RzToolButton2->Visible=false;

	TmTraceMailList->Enabled=false;
	QMailList->Close();
	QMailList->Parameters->Items[0]->Value=QTraceMailListIdn->AsInteger;
	QMailList->Open();

	QRasp->Close();
	QRasp->Parameters->Items[0]->Value=QTraceMailListIdn->AsInteger;
	QRasp->Open();

	QInfoMailList->Close();
	QInfoMailList->Parameters->Items[0]->Value=QTraceMailListIdn->AsInteger;
	QInfoMailList->Open();
	reContentRTF->Text=QInfoMailList->FieldByName("MailText")->AsString;//QMailListMailText->AsString;
	/*" "+QRaspiText_1->AsString+"\n"+" 			"+ QRaspiText->AsString+"\n"+ QRaspTmpGetDate->AsString+"   	 	"+ QRaspNumbRaspName->AsString
						+"\n"+QRaspRaspNameRTF->AsString+"\n\n"+QRaspContentTargetRTF->AsString+"\n"
						+"   "+QRaspiText_2->AsString+"\n"+QRaspContentRTF->AsString+"\n\n"
						+QRaspDol->AsString+"			"+QRaspFamIO_1->AsString; */
   meNote->Text=QMailListNote->AsString;
	IdRasp=QTraceMailListIdn->AsInteger;

	if (QTraceMailListCostComitet->AsInteger==1) RzPanel7->Visible=true; else RzPanel7->Visible=false;

	


}
//---------------------------------------------------------------------------




void __fastcall TFrTraceMail::DSMailListDataChange(TObject *Sender,
      TField *Field)
{
TmMailList->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TFrTraceMail::btYesClick(TObject *Sender)
{
  int viTmpLocate, viTmpfTurn, viTmpMINfTurn,viTmpMINfTurnLast, vifResault_1, vifResault_2;
  struct rMail rMail;
  AnsiString vsQRaspRaspNameRTF;
//  TStringList *LS = new TStringList();

  viTmpLocate = QMailListIdn->AsInteger;
  viTmpfTurn  = QMailListfTurn->AsInteger;
 ////Проверяем дошла ли до нас очередь утверждения///
 vsSQLQw=" SELECT MIN(fTurn) FROM bm_ListMail"
			" WHERE  DateDel is null"
			" AND IdRasp=:D0"
			" AND (fType=0 OR fType=2)"
			" AND fTurn>0"
			" AND (fResault=0 OR fResault is NULL )";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value= QTraceMailListIdn->AsInteger;
 Qw->Open();
 viTmpMINfTurn=Qw->Fields->Fields[0]->AsInteger;
 if((viTmpMINfTurn<viTmpfTurn)&&(viTmpMINfTurn>0))
   {ShowMessage("Вы можете Утвердить или Отказать только после имеющих меньшее значение порядка прохождения."); return; }



 /////////////////////////////////////////////////////
	///Выставляем распоряжению состояние-В рассылке-  (если было в ценовом комитете)

		vsSQLQw=" UPDATE bm_Rasp  SET "
				" Id24NameStatus=5448350"//В рассылке
				" ,DateConfirm= GetDate() "
				" ,IdConfirm=:D0  "
				" ,CostComitet=1  "
				" WHERE Idn=:D1 and Id24NameStatus=5448428; ";
		Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
        Qw->Parameters->Items[0]->Value= PermisHdr.KeyUserStartProgramm;
		Qw->Parameters->Items[1]->Value= IdRasp;
		Qw->ExecSQL();

 vsSQLQw= " DECLARE @auIdUserHD int, @auId int,@Note varchar(500), @fResault int, @IdRasp int; "
					" SET  @auId=:D0; SET  @Note=:D1; SET  @fResault=:D2; SET @IdRasp=:D3; "
					" SELECT @auIdUserHD=auIdUserHD FROM aa_Users WHERE auId=@auId "
					" UPDATE bm_ListMail  SET "
					"  Note=@Note"
					" ,fResault =@fResault"
					" ,DateLastSheet=GetDate()"
					" ,IdLastSheet=@auId"
					" WHERE (IdRasp=@IdRasp AND (IDUser=@auIdUserHD OR IDUserP=@auIdUserHD) "
					" AND  DateDel is NULL AND (fType=0 OR fType=2) AND ( isnull(fResault,0)=0 OR fResault=3)) OR Idn=:D4;";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value= PermisHdr.KeyUserStartProgramm;
 Qw->Parameters->Items[1]->Value= meNote->Text;
 if (viTmpfTurn==0) Qw->Parameters->Items[2]->Value.Clear();else Qw->Parameters->Items[2]->Value=1;
 Qw->Parameters->Items[3]->Value= QTraceMailListIdn->AsInteger;
  Qw->Parameters->Items[4]->Value= viTmpLocate;
 Qw->ExecSQL();

	QMailList->Close();
	QMailList->Parameters->Items[0]->Value=QTraceMailListIdn->AsInteger;
	QMailList->Open();
 TmMailList->Enabled=true;
  try{Opts.Clear(); Opts<<loPartialKey  ; QMailList->Locate("Idn",viTmpLocate,Opts);}catch(...){};


///// рассылаем распоряжение лицам с минимальным порядком очереди fTyrn, если мы последние в своем уровне очереди
  vsSQLQw=  " SELECT MIN(fTurn) FROM bm_ListMail "
			" WHERE  DateDel is null "
			" AND IdRasp=:D0 "
			" AND (fType=0 OR fType=2) "
			" AND fTurn>0 "
			" AND (fResault=0 OR fResault is NULL ) ";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value= QTraceMailListIdn->AsInteger;
 Qw->Open();
 viTmpMINfTurnLast=Qw->Fields->Fields[0]->AsInteger;
 
  if(viTmpMINfTurnLast>viTmpMINfTurn)
	{  	vsSQLQw = "declare @IdnJobFromaa_DbCopy3 int;  "
"set @IdnJobFromaa_DbCopy3=:D0; "
"EXEC DBCopy.dbo.prDbCopy_WriteHistory @IdnJobFromaa_DbCopy3,'Принудительный старт'; "
"EXEC DBCopy.dbo.prDbCopy_StartJob @IdnJob=@IdnJobFromaa_DbCopy3, @ProgramName=:D1";
//"update DBCopy.dbo.aa_DbCopy3 set [status]=-1 where Idn=@IdnJobFromaa_DbCopy3; "
//"exec DBCopy.dbo.prDbCopy__Main;";
  Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
  Qw->Parameters->Items[0]->DataType=ftInteger;
  Qw->Parameters->Items[0]->Value=62; //Код JOBа
  Qw->Parameters->Items[1]->DataType=ftString;
  Qw->Parameters->Items[1]->Value=vPROGRAMNAME; //Наименование программы
  Qw->ExecSQL();
 // try {Qw->ExecSQL();} catch(...){}
 /* try {Qw->ExecSQL();} catch(Exception &exception) {
	Application->ShowException(&exception);
	return;}//catch(...){}    */
//  Qw->ExecSQL();
  }

  viRaspIdn = QTraceMailListIdn->AsInteger;
}
//-------------------------- Утвердить за всех (только для Елены Виноградовой) ----------------------------------------------
//по заявке 9687 (создать для меня права "согласовать за всех" кроме Плоского В.)              added by R.Perkatov 2014-07-18
void __fastcall TFrTraceMail::btYesAllClick(TObject *Sender)
{
  int viTmpLocate = QMailListIdn->AsInteger;

  //--- added by R.Perkatov 2014-07-30 уточнение:                  только для распоряжений, созданных в "Согласовании скидок"
  //--- step 1:                                  сначала проверяем: создано ли распоряжение в программе "Согласование скидок"
  String k1 = "SELECT COUNT(TypeCreation) AS rc "
			  "  FROM dbo.bm_RaspDiscountLink "
			  " WHERE RaspIdn = " + IntToStr(QTraceMailListIdn->AsInteger) + " "
			  "   AND TypeCreation = 1";
  ChDsQuer->Active = true;
  ChDsQuer->SQL->Clear();
  ChDsQuer->SQL->Add(k1);
  ChDsQuer->Open();

  if (ChDsQuerrc->Value == 0)
	 {
	  ChDsQuer->Active = false;
	  ShowMessage("Кнопка ''Утвердить за всех'' работает только для распоряжений созданных в ''Согласовании скидок''.");
	  return;
	  }
  ChDsQuer->Active = false;

  String k2 = "SELECT Id24NameStatus "
			  "  FROM bm_Rasp "
			  " WHERE Idn = " + IntToStr(QTraceMailListIdn->AsInteger) + " ";
  SttsQuer->Active = true;
  SttsQuer->SQL->Clear();
  SttsQuer->SQL->Add(k2);
  SttsQuer->Open();

  if (SttsQuerId24NameStatus->AsInteger == 5448352)
	 {
	  SttsQuer->Active = false;
	  ShowMessage("Распоряжение " + IntToStr(QTraceMailListIdn->AsInteger) + " уже 'Утверждено'.");
	  return;
	  }
  SttsQuer->Active = false;

  //--- step 2:                                                 согласуем за всех, кроме Плоскова, от лица Елены Виноградовой
  String qu = "DECLARE @IdRasp AS int "
			  "    SET @IdRasp = " + IntToStr(QTraceMailListIdn->AsInteger) + " "
			  "DECLARE @Note AS nvarchar(500) "
			  "    SET @Note = 'Утверждено за всех Еленой Виноградовой (" + Now().FormatString("dd.mm.yyyy hh:mm:ss") + ")' "
			  " UPDATE bm_ListMail "
			  "    SET Note = @Note, fResault = 1, DateLastSheet = GETDATE(), IdLastSheet = 1744 "  //1744 - Виноградова Е.В.
			  "  WHERE (IdRasp = @IdRasp) "
			  "    AND (DateDel IS NULL) "
			  "    AND (fType = 0 OR fType = 2) "
			  "    AND (ISNULL(fResault, 0) = 0 OR fResault = 3) "
			  "    AND (IDUser <> 104521)";                                           //утверждаем за всех, кроме Плоскова!!!

	  Vinogradova->CommandText = qu;
	  Vinogradova->Execute();

  //--- step 3:      утверждено ли распоряжение Плосковым В.Б.???, если он утвердил - ставим статус распоряжению "Утверждено"
  String ap = "SELECT IdRasp FROM bm_ListMail "
			  " WHERE IdRasp = " + IntToStr(QTraceMailListIdn->AsInteger) + " "
			  "   AND (DateDel IS NULL) "
			  "   AND (fType = 0 OR fType = 2) "
			  "   AND ISNULL(fResault, 0) = 0";
  ApprQuer->Active = true;
  ApprQuer->SQL->Clear();
  ApprQuer->SQL->Add(ap);
  ApprQuer->Open();

  if (ApprQuer->RecordCount == 0)                  //если Плосков В.Б. утвердил распоряжение - выставляем статус "Утверждено"
	 {
	  String a = "BEGIN TRY "
				 "      BEGIN TRANSACTION; "

				 "DECLARE @IdConfirm AS int "
				 "    SET @IdConfirm = 1744 "
				 " UPDATE bm_Rasp SET Id24NameStatus = 5448352, DateConfirm = GETDATE(), IdConfirm = @IdConfirm "
				 "  WHERE Idn = " + IntToStr(QTraceMailListIdn->AsInteger) + " "
				 /*для версий SQL Server 2000/2005 использовать только такую конструкцию*/
				 " UPDATE bm_RaspDetail SET DateJobMIN = DATEADD(dd, 0, DATEDIFF(dd, 0, GETDATE())), "
				 "		                    DateJobMAX = DATEADD(dd, 10, DATEDIFF(dd, 0, GETDATE())) "
				 /* CAST(GETDATE() AS DATE) использовать только для версии SQL Server 2008 и выше
				 " UPDATE bm_RaspDetail SET DateJobMIN = CAST(GETDATE() AS DATE), "
				 "                          DateJobMAX = DATEADD(DAY, 10, CAST(GETDATE() AS DATE)) "*/
				 "  WHERE (idRasp = " + IntToStr(QTraceMailListIdn->AsInteger) + ") "
				 "    AND (fType = 2) "
				 "    AND (DateDel IS NULL) "

				 "      COMMIT TRANSACTION; "
				 "END TRY "

				 "BEGIN CATCH "
				 "      ROLLBACK TRANSACTION; "
				 "      PRINT 'Error transaction!'; "
				 "END CATCH;";

	  ApprComm->CommandText = a;
	  ApprComm->Execute();

  //--- step 4:   внесём запись в log_PersonalDiscount, чтобы Job мог обработать новые ПИ и НЕ после утверждения распоряжения
	  String ct = "BEGIN TRY "
				  "      BEGIN TRANSACTION; "

				  "DECLARE @ID   AS UNIQUEIDENTIFIER "
				  "    SET @ID   = NEWID() "
				  "DECLARE @Rasp AS int "
				  "    SET @Rasp = " + IntToStr(QTraceMailListIdn->AsInteger) + " "
				  " INSERT INTO dbo.log_PersonalDiscount(idn, StartLog, IdRasp, RunBy) "
				  "                               VALUES(@ID, GETDATE(), @Rasp, SUSER_SNAME()) "

				  "      COMMIT TRANSACTION; "
				  "END TRY "

				  "BEGIN CATCH "
				  "           ROLLBACK TRANSACTION; "
				  "           PRINT 'Error transaction!'; "
				  "END CATCH;";

	  PriceComm->CommandText = ct;
	  PriceComm->Execute();

	  ShowMessage("Распоряжение " + IntToStr(QTraceMailListIdn->AsInteger) + " утверждено.");

	  }
  ApprQuer->Active = false;


  QMailList->Close();
  QMailList->Parameters->Items[0]->Value = QTraceMailListIdn->AsInteger;
  QMailList->Open();

  try
	 {
	  Opts.Clear();
	  Opts<<loPartialKey;
	  QMailList->Locate("Idn", viTmpLocate, Opts);
	  }
	  catch(...)
		   {};
  //--- added by R.Perkatov 2014-07-30 уточнение:                  только для распоряжений, созданных в "Согласовании скидок"
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrTraceMail::TmMailListTimer(TObject *Sender)
{ int   viTmpfTurn, viTmpMINfTurn,viTmpMAXfTurn;
TmMailList->Enabled=false;
/*
if (((QMailListIDUserP->AsInteger==PermisHdr.KeyUserStartProgramm)||(QMailListauId->AsInteger==PermisHdr.KeyUserStartProgramm))&& (QMailListfType->AsInteger==0))  {btYes->Enabled=true;btYes->ImageIndex=65;btYes->Caption="Утвердить";btNo->Enabled=true;}
if (((QMailListIDUserP->AsInteger!=PermisHdr.KeyUserStartProgramm)&&(QMailListauId->AsInteger!=PermisHdr.KeyUserStartProgramm))&& (QMailListfType->AsInteger==0))  {btYes->Enabled=false;btYes->ImageIndex=65;btYes->Caption="Утвердить";btNo->Enabled=false;}
if (((QMailListIDUserP->AsInteger==PermisHdr.KeyUserStartProgramm)||(QMailListauId->AsInteger==PermisHdr.KeyUserStartProgramm))&& (QMailListfType->AsInteger==2)) {btYes->Enabled=true;btYes->ImageIndex=65;btYes->Caption="Утвердить"; btNo->Enabled=false;}
if (((QMailListIDUserP->AsInteger!=PermisHdr.KeyUserStartProgramm)&&(QMailListauId->AsInteger!=PermisHdr.KeyUserStartProgramm))&& (QMailListfType->AsInteger==2)) {btYes->Enabled=false;btYes->ImageIndex=65;btYes->Caption="Утвердить"; btNo->Enabled=false;}
 */
if ((QMailListIDUserP->AsInteger==PermisHdr.KeyUserStartProgramm)||(QMailListauId->AsInteger==PermisHdr.KeyUserStartProgramm))
   {btYes->Enabled=true;btYes->ImageIndex=65;btYes->Caption="Утвердить";btNo->Enabled=true;}
if ((QMailListIDUserP->AsInteger!=PermisHdr.KeyUserStartProgramm)&&(QMailListauId->AsInteger!=PermisHdr.KeyUserStartProgramm))
   {btYes->Enabled=false;btYes->ImageIndex=65;btYes->Caption="Утвердить";btNo->Enabled=false;}

//if ((QMailListauId->AsInteger==PermisHdr.KeyUserStartProgramm)&& (QMailListfType->AsInteger==2)) {btYes->Enabled=true;btYes->ImageIndex=56;btYes->Caption="Примечание"; btNo->Enabled=false;}
//if ((QMailListauId->AsInteger!=PermisHdr.KeyUserStartProgramm)&& (QMailListfType->AsInteger==2)) {btYes->Enabled=false;btYes->ImageIndex=56;btYes->Caption="Примечание"; btNo->Enabled=false;}
//if (QMailListfResault->AsInteger>0) {btYes->Enabled=false; btNo->Enabled=false;}


 viTmpfTurn=QMailListfTurn->AsInteger;
 //flAllResault -Разрешить пользователю Утверждать за других
 if (MainForm->flAllResault)
	{btYes->Enabled=true;btYes->ImageIndex=65;btYes->Caption="Утвердить";btNo->Enabled=true;}
 ///
 //Уже утвердил
 if ((QMailListfResault->AsInteger==1)||QMailListfResault->AsInteger==2)
	{
	 btYes->Enabled    = false;
	 btNo->Enabled     = false;
	 }
 ///
 ////Проверяем дошла ли до нас очередь утверждени///
 vsSQLQw=" SELECT MIN(fTurn) FROM bm_ListMail"
			" WHERE  DateDel is null"
			" AND IdRasp=:D0"
			" AND (fType=0 OR fType=2)"
			" AND fTurn>0"
			" AND (fResault=0 OR fResault is NULL OR  fResault=3)";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value= QTraceMailListIdn->AsInteger;
 Qw->Open();
 viTmpMINfTurn=Qw->Fields->Fields[0]->AsInteger;
 if((viTmpMINfTurn<viTmpfTurn)&&(viTmpMINfTurn>0)) {btYes->Enabled=false; btNo->Enabled=false;}
 btCostComitet->Enabled=btYes->Enabled;
 //Проверяем, входит ли утверждающий в ценовой комитет.Если Да, до даем возможность отослать на арссмотрение в ценовой комитет.
  vsSQLQw=" SELECT * from bm_ListMail A "
" LEFT JOIN aa_Users C25 on  C25.auId=:D0 "
" LEFT JOIN EmplUsers U5 on U5.IDUser=C25.auIdUserHD "
" WHERE  A.IdRasp=:D1 and A.DateDel is null and A.ftype=3 and (A.IDUser=U5.IDUser OR A.IDUserP=U5.IDUser) ";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value= PermisHdr.KeyUserStartProgramm;
 Qw->Parameters->Items[1]->Value= QTraceMailListIdn->AsInteger;
 Qw->Open();
 if((Qw->RecordCount<1)&&(!MainForm->flAllResault)) btCostComitet->Enabled=false;

// if (QMailListfType->AsInteger==2) {btNo->Enabled=false; }

meNote->Text=QMailListNote->AsString;
}
//---------------------------------------------------------------------------

void __fastcall TFrTraceMail::btNoClick(TObject *Sender)
{ int viTmpLocate, viTmpfTurn, viTmpMINfTurn, viTmpLocateRasp;
 viTmpLocate=QMailListIdn->AsInteger;
 viTmpfTurn=QMailListfTurn->AsInteger;
 viTmpLocateRasp= QTraceMailListIdn->AsInteger;
 struct rMail rMailAdmin;
 
 ////Проверяем дошла ли до нас очередь утверждения///
 vsSQLQw=" SELECT MIN(fTurn) FROM bm_ListMail"
			" WHERE  DateDel is null"
			" AND IdRasp=:D0"
			" AND fType=0"
			" AND fTurn>0"
			" AND (fResault=0 OR fResault is NULL )";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value= viTmpLocateRasp;
 Qw->Open();
 viTmpMINfTurn=Qw->Fields->Fields[0]->AsInteger;
 if((viTmpMINfTurn<viTmpfTurn)&&(viTmpMINfTurn>0))
   {ShowMessage("Вы можете Утвердить или Отказать только после имеющих меньшее значение порядка прохождения."); return; }
 if(Trim(meNote->Text)=="")
   {ShowMessage("Вы можете Отказать только оставив Примечание."); return; }
 /////////////////////////////////////////////////////
 /*vsSQLQw="UPDATE bm_ListMail  SET "
				"  Note=:D0"
				" ,fResault =2"
				" ,DateLastSheet=GetDate()"
				" ,IdLastSheet=:D1"
				" WHERE Idn=:D2 ; ";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value= meNote->Text;
 Qw->Parameters->Items[1]->Value= PermisHdr.KeyUserStartProgramm;
 Qw->Parameters->Items[2]->Value= viTmpLocate;
 Qw->ExecSQL(); */
  vsSQLQw= " DECLARE @auIdUserHD int, @auId int,@Note varchar(500), @fResault int, @IdRasp int; "
					" SET  @auId=:D0; SET  @Note=:D1;  SET @IdRasp=:D2; "
					" SELECT @auIdUserHD=auIdUserHD FROM aa_Users WHERE auId=@auId "
					" UPDATE bm_ListMail  SET "
					"  Note=@Note"
					" ,fResault =2"
					" ,DateLastSheet=GetDate()"
					" ,IdLastSheet=@auId"
					" WHERE (IdRasp=@IdRasp AND (IDUser=@auIdUserHD OR IDUserP=@auIdUserHD) "
					" AND  DateDel is NULL AND (fType=0 OR fType=2) AND (isnull(fResault,0)=0 OR fResault=3)) OR Idn=:D3;";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value= PermisHdr.KeyUserStartProgramm;
 Qw->Parameters->Items[1]->Value= meNote->Text;
 Qw->Parameters->Items[2]->Value= viTmpLocateRasp;
 Qw->Parameters->Items[3]->Value= viTmpLocate;
 Qw->ExecSQL();

		 vsSQLQw="UPDATE  bm_Rasp SET Id24NameStatus=5448413 WHERE Idn=:D0" ;//Отклоненные
		 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		 Qw->Parameters->Items[0]->Value=viTmpLocateRasp;
		 Qw->ExecSQL();
					  //
	QMailList->Close();
	QMailList->Parameters->Items[0]->Value=QTraceMailListIdn->AsInteger;
	QMailList->Open();
 TmMailList->Enabled=true;





	 rMailAdmin= MainForm->CreateMail(viTmpLocateRasp,1);
	  vsSQLQw="SELECT auMailUser, auFamIO FROM dbo.aa_Users WHERE auId=:D0" ;
		 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		 Qw->Parameters->Items[0]->Value=QTraceMailListIdIns->AsInteger;
		 Qw->Open();
	 rMailAdmin.Subject="Проект распоряжения (Код:"+IntToStr(viTmpLocateRasp)+") отклонен";
	 rMailAdmin.ResiveMailAddress=Qw->Fields->Fields[0]->AsString;
	 rMailAdmin.ResiveName=Qw->Fields->Fields[1]->AsString;
	 rMailAdmin.SenderName="Рассылка МЦФЭР. Отказ по проекта распоряжения (Код:"+IntToStr(viTmpLocateRasp)+")";
		 vsSQLQw="SELECT auMailUser, auFamIO FROM dbo.aa_Users WHERE auId=:D0" ;
		 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		 Qw->Parameters->Items[0]->Value=PermisHdr.KeyUserStartProgramm;
		 Qw->Open();
	 AnsiString S= "Проект распоряжения  Код:"+IntToStr(viTmpLocateRasp)+" отклонен "+Qw->Fields->Fields[1]->AsString+" "+Now().DateTimeString()+"\n Примечание: "+meNote->Text;
	 TStringList   *LS = new TStringList();
	 LS->Add(S);
	 rMailAdmin.Body=LS;
	 //rMailAdmin.Body->Add(S);
	 MainForm->SendEmail(&rMailAdmin);


 ShowMessage("Информация об отказе отослана.");

  try{Opts.Clear(); Opts<<loPartialKey  ; QMailList->Locate("Idn",viTmpLocate,Opts);}catch(...){};
}
//---------------------------------------------------------------------------

void __fastcall TFrTraceMail::FormActivate(TObject *Sender)
{
  AnsiString NewFileName;

 vsBaseSQL= " DECLARE @IDUser int;"
			" SET @IDUser=:D0;"
			" SELECT A.Idn, A.RaspName, A.IdIns, A.DateIns, U5.FamIO, isnull(CostComitet,0) CostComitet"
			" , isnull((SELECT MAX(isnull(fNoNDS,0)) FROM bm_RaspDetail WHERE IdRasp=A.Idn AND DateDel is null),0) fNoNDS "
			" FROM bm_Rasp  A"
			"  LEFT JOIN aa_Users C25 on  C25.auId=A.IdIns"
			"  LEFT JOIN EmplUsers U5 on(U5.IDUser=C25.auIdUserHD)"
			"  WHERE A.DateDel is null"
			"   AND (A.Idn in(SELECT IdRasp FROM bm_ListMail A2"
			"   LEFT JOIN EmplUsers U on(U.IDUser=A2.IDUser)"
			"   LEFT JOIN aa_Users C2 on  ((C2.auIdUserHD=A2.IDUser)OR(C2.auIdUserHD=A2.IDUserP ))"
			"   WHERE  A2.DateDel is null AND C2.auId=@IDUser) OR (A.IdIns=@IDUser)"
			"    OR ( ( A.IdIns in (SELECT idManager FROM bm_GroupManager WHERE (PidManager=@IDUser))) OR"
			"    (A.IdIns in  (SELECT idManager FROM bm_GroupManager WHERE (PidManager in (SELECT PidManager FROM bm_GroupManager WHERE idManager=@IDUser AND PidManager>0)))) OR"
			"    (A.IdIns in  (SELECT PidManager FROM bm_GroupManager WHERE (PidManager in (SELECT PidManager FROM bm_GroupManager WHERE idManager=@IDUser AND PidManager>0))))"
			"  ) )";
 rbSheet->Checked=true;
 vsAddSQL=" AND (Id24NameStatus=5448350 OR Id24NameStatus=5448428 ) " ;
 vsSQLQw=vsBaseSQL+vsAddSQL;
 QTraceMailList->Close();
 QTraceMailList->SQL->Clear();
 QTraceMailList->SQL->Add(vsSQLQw);
 QTraceMailList->Parameters->Items[0]->Value=PermisHdr.KeyUserStartProgramm;
 QTraceMailList->Open();
 try{Opts.Clear(); Opts<<loPartialKey  ; QTraceMailList->Locate("Idn",viRaspIdn,Opts);}catch(...){};

  	//////Cоздание PDF файла
  QRasp->Close();
  QRasp->Parameters->Items[0]->Value=IdRasp;
  QRasp->Open();

  QRaspDetailAlter->Close();
  QRaspDetailAlter->Parameters->Items[0]->Value=IdRasp;
  QRaspDetailAlter->Open();


  QEmplUserDol->Close();
  QEmplUserDol->Parameters->Items[0]->Value=IdRasp;
  QEmplUserDol->Open();

  QEmplUserDolRass->Close();
  QEmplUserDolRass->Parameters->Items[0]->Value=IdRasp;
  QEmplUserDolRass->Open();
/*  frxRaspAlter->ShowReport(true);

  fReport=frxRaspAlter;
  fReport->ShowReport(false);
  frxPDFExport1->OpenAfterExport=false;
  frxPDFExport1->ShowDialog=false;
  NewFileName = "c:\\Work_DB\\DesignerOrders\\EXEC\\TEMP\\";  //ExtractFilePath(Application->ExeName) ;
  frxPDFExport1->DefaultPath=NewFileName;//+".pdf";
  frxPDFExport1->FileName="Проект_распоряжения.pdf";
  ////     */
  if (MainForm->flEditUpp)
	  RzPanel3->Visible = true;
  else
	  RzPanel3->Visible = false;

  //--- 1744 Виноградова Елена, 2235 R.Perkatov (added by R.Perkatov 2014-07-18)
  //if (PermisHdr.KeyUserStartProgramm == 1744 || PermisHdr.KeyUserStartProgramm == 2235)
  if (MainForm->flAllApprove)
	 {
	  btYesAll->Visible  = true;
	  btYesAll->Enabled  = true;
	  RzSpacer2->Visible = true;
	  }
	  else
		  {
		   btYesAll->Enabled  = false;
		   btYesAll->Visible  = false;
		   RzSpacer2->Visible = false;
		   }
}
//---------------------------------------------------------------------------

void __fastcall TFrTraceMail::RzToolButton3Click(TObject *Sender)
{ 
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL

#endif
#define TFR TFrAccountPrint
#define FR  FrAccountPrint
#define FL  flFrAccountPrint
 int viIdn ;
 viIdn = QTraceMailListIdn->AsInteger;//Передаем Idn записи для печати

   {
	switch(FL)
	{
	case WINCLS:   FR=new TFR(Application);FL=WINWRK;FR->Caption="Печать распоряжения";
				 FR->OpenFormAccountPrint(11,viIdn,1);
				 FR->Show();break;
	case WINWRK:   if(FR->WindowState==wsMinimized){FR->WindowState=wsNormal;}
				 FR->Caption="Печать распоряжения";FR->OpenFormAccountPrint(11,viIdn,1);
				 FR->Show();break;
  }
 }

/*
#ifdef  TFR
#undef  TFR
#undef  FR
#endif
#define TFR TFrAccountPrint
#define FR  FrAccountPrint
 int viIdn ;
 viIdn = QTraceMailListIdn->AsInteger;//Передаем Idn записи для печати

  FR=new TFR(Application);
  FR->Caption="Печать распоряжения";
  FR->OpenFormAccountPrint(11,viIdn,1);
   FR->ShowModal();
   FR->WindowState=wsMinimized;
  delete (FR);    */
}
//---------------------------------------------------------------------------

void __fastcall TFrTraceMail::QMailListCalcFields(TDataSet *DataSet)
{
 if (Trim(QMailListNote->AsString)=="") QMailListfNote->AsInteger=0; else QMailListfNote->AsInteger=1;
}
//---------------------------------------------------------------------------

void __fastcall TFrTraceMail::frxRaspAlterGetValue(const UnicodeString VarName,
      Variant &Value)
{
 if(VarName=="sYear")
{ AnsiString vsTmpDay, vsTmpMouth, vsTmpYear;
   vsTmpYear=Now().FormatString("yyyy");
  // vsTmpYear=QRaspDateRasp->AsDateTime.FormatString("yyyy");

 Value=vsTmpYear;
 }
  if(VarName=="iCountRec")
{     
 Value=QEmplUserDolRass->RecordCount;
 }
if(VarName=="SumPr")
{ AnsiString vsTmpDay, vsTmpMouth, vsTmpYear;

   vsTmpYear=QRaspDateRasp->AsDateTime.FormatString("yyyy");
   if(vsTmpYear=="1900") Value= "__________ года";
   else
	  {
		vsTmpDay=QRaspDateRasp->AsDateTime.FormatString("d");
		vsTmpMouth=QRaspDateRasp->AsDateTime.FormatString("m");

	   switch (StrToInt(vsTmpMouth))
		{
		case 1: vsTmpMouth = "января";break;
		case 2: vsTmpMouth = "февраля";break;
		case 3: vsTmpMouth = "марта";break;
		case 4: vsTmpMouth = "апреля";break;
		case 5: vsTmpMouth = "мая";break;
		case 6: vsTmpMouth = "июня";break;
		case 7: vsTmpMouth = "июля";break;
		case 8: vsTmpMouth = "августа";break;
		case 9: vsTmpMouth = "сентября";break;
		case 10: vsTmpMouth = "октября";break;
		case 11: vsTmpMouth = "ноября";break;
		case 12: vsTmpMouth = "декабря";break;
		}

	   Value=vsTmpDay+" "+vsTmpMouth+" "+vsTmpYear+" года";
	  }
 }
   if(VarName=="TextAdv")
  {    switch (QRaspDetailfAdv->AsInteger)
   {
case 0:
		Value="годовой";
		break;
	  case 1:
		Value="1п\г";
		break;
	  case 2:
		Value="2п\г";
		break;
	  case 3:
		Value="1 квартал";
		break;
	  case 4:
		Value="2 квартал";
		break;
	  case 5:
		Value="3 квартал";
		break;
	  case 6:
		Value="4 квартал";
		break;
	  case 7:
		Value="раз в год";
		break;
   }

  }
  if(VarName=="DateRasp")
	{ AnsiString vsTmpDay, vsTmpMouth, vsTmpYear;

	  vsTmpYear=QRaspDateRasp->AsDateTime.FormatString("yyyy");
	  if(vsTmpYear=="1900") Value= "__________ г.";
	  else  Value=QRaspDateRasp->AsDateTime.FormatString("dd.mm.yyyyг.");
	 }
  if(VarName=="NumbRasp")
	{
	 if(Trim(QRaspNumbRaspName->AsString)=="") Value= "__________ ";
	  else  Value=QRaspNumbRaspName->AsString;
	}		
}
//---------------------------------------------------------------------------


void __fastcall TFrTraceMail::RzToolButton1Click(TObject *Sender)
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
	{ //Получаем код пользователя из aaUsers
	 vsSQLQw="SELECT TOP 1 auId FROM aa_Users WHERE auIdUserHD=:D0";
	 Qw->Close();
	 Qw->SQL->Clear();
	 Qw->SQL->Add(vsSQLQw);
	 Qw->Parameters->Items[0]->Value = FR->QEmplUserIDUser->AsInteger;
	 Qw->Open();

	 QTraceMailList->Close();
	 QTraceMailList->Parameters->Items[0]->Value = Qw->Fields->Fields[0]->AsInteger;
	 QTraceMailList->Open();
	 }
	
  delete (FR);
}
//---------------------------------------------------------------------------



void __fastcall TFrTraceMail::rbSheetClick(TObject *Sender)
{
   if (rbSheet->Checked) { vsAddSQL=" AND (Id24NameStatus=5448350 OR Id24NameStatus=5448428 ) "; }
   if (rbOtkl->Checked) { vsAddSQL=" AND Id24NameStatus=5448413  " ;}
   if (rbUtv->Checked) { vsAddSQL=" AND Id24NameStatus=5448352  "; }
 vsSQLQw=vsBaseSQL+vsAddSQL;
 QTraceMailList->Close();
 QTraceMailList->SQL->Clear();
 QTraceMailList->SQL->Add(vsSQLQw);
 QTraceMailList->Parameters->Items[0]->Value=PermisHdr.KeyUserStartProgramm;
 QTraceMailList->Open();
}
//---------------------------------------------------------------------------

void __fastcall TFrTraceMail::btCostComitetClick(TObject *Sender)
{  struct rMail rMail;   AnsiString vsSQLQw;
int viTmpLocate, viTmpfTurn, viTmpMINfTurn, viTmpLocateRasp;
 viTmpLocate=QMailListIdn->AsInteger;
///Отправка в ценовой комитет
	///Выставляем распоряжению состояние-На утверждении в ценовом комитете-
		vsSQLQw=" UPDATE bm_Rasp  SET "
				" Id24NameStatus=5448428"//Ценовой комитет
				" ,DateConfirm= GetDate() "
				" ,IdConfirm=:D0  "
				" WHERE Idn=:D1 ; ";
		Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
        Qw->Parameters->Items[0]->Value= PermisHdr.KeyUserStartProgramm;
		Qw->Parameters->Items[1]->Value= IdRasp;
		Qw->ExecSQL();

		  vsSQLQw= " DECLARE @auIdUserHD int, @auId int,@Note varchar(500), @fResault int, @IdRasp int; "
					" SET  @auId=:D0; SET  @Note=:D1;  SET @IdRasp=:D2; "
					" SELECT @auIdUserHD=auIdUserHD FROM aa_Users WHERE auId=@auId "
					" UPDATE bm_ListMail  SET "
					"  Note=@Note"
					" ,fResault =3"
					" ,DateLastSheet=GetDate()"
					" ,IdLastSheet=@auId"
					" WHERE (IdRasp=@IdRasp AND (IDUser=@auIdUserHD OR IDUserP=@auIdUserHD) "
					" AND  DateDel is NULL AND (fType=0 OR fType=2) AND isnull(fResault,0)=0) OR Idn=:D3;";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value= PermisHdr.KeyUserStartProgramm;
 Qw->Parameters->Items[1]->Value= meNote->Text;
 Qw->Parameters->Items[2]->Value= IdRasp;
 Qw->Parameters->Items[3]->Value= viTmpLocate;
 Qw->ExecSQL();


		int TmpIdRasp=IdRasp;
   rMail=MainForm->CreateMail(IdRasp,2);
  IdRasp=TmpIdRasp;
 vsSQLQw=" select RaspName from dbo.bm_Rasp where Idn=:D0";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);

 Qw->Parameters->Items[0]->Value= IdRasp;
 Qw->Open();
		  TReplaceFlags ReplaceFlags;
		  AnsiString vsQRaspRaspNameRTF;
			vsQRaspRaspNameRTF= Qw->Fields->Fields[0]->AsString;
			vsQRaspRaspNameRTF=StringReplace(vsQRaspRaspNameRTF,"\n","",ReplaceFlags<<rfReplaceAll>>rfIgnoreCase);
			vsQRaspRaspNameRTF=StringReplace(vsQRaspRaspNameRTF,"\r"," ",ReplaceFlags<<rfReplaceAll>>rfIgnoreCase);
			vsQRaspRaspNameRTF=StringReplace(vsQRaspRaspNameRTF,"\t"," ",ReplaceFlags<<rfReplaceAll>>rfIgnoreCase);
   rMail.Subject="\" Рассылка  в ценовой комитет распоряжения. Код: "+IntToStr(IdRasp)+vsQRaspRaspNameRTF+" \"";
 Qw->Close();
  /////Рассылка  писем адресатам
 QCostComitet->Close();
 QCostComitet->Parameters->Items[0]->Value= IdRasp;
 QCostComitet->Open();

	QCostComitet->First();
	//int iii=QCostComitet->RecordCount;
	  while(QCostComitet->Eof==false)
		 {if (Trim(QCostComitetMail->AsString)!="")
			{
			  rMail.ResiveName=QCostComitetFamIO->AsString;
			  rMail.ResiveMailAddress=QCostComitetMail->AsString;
			  MainForm->SendEmail(&rMail);
			}
			 QCostComitet->Next();      
		 }

///	
}
//---------------------------------------------------------------------------

void __fastcall TFrTraceMail::cxGridDBBandedTableView1CustomDrawCell(
      TcxCustomGridTableView *Sender, TcxCanvas *ACanvas,
      TcxGridTableDataCellViewInfo *AViewInfo, bool &ADone)
{
 if(QTraceMailList->Active==false)return;
else{
    	if(AViewInfo->Selected==true){ACanvas->Brush->Color=clHighlight;}
	else{  /* if(!MainForm->flEditClass)*/
			   {
				if((int)(AViewInfo->GridRecord->Values[4])==1);//)
				ACanvas->Brush->Color = (TColor)6049258;
				if((int)(AViewInfo->GridRecord->Values[4])==0)//
				ACanvas->Brush->Color = clWhite;

               }
		 }
 }
}
//---------------------------------------------------------------------------

void __fastcall TFrTraceMail::RzToolButton2Click(TObject *Sender)
{  int  viTmpLocateRasp;
 if(MessageDlg("Вы уверены, что хотите отклонить выбранное распоряжение?" ,mtWarning,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrNo){return;}
		 viTmpLocateRasp= QTraceMailListIdn->AsInteger;
		 vsSQLQw="UPDATE  bm_Rasp SET Id24NameStatus=5448413 WHERE Idn=:D0" ;//Отклоненные
		 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		 Qw->Parameters->Items[0]->Value=viTmpLocateRasp;
		 Qw->ExecSQL();
		 QTraceMailList->Close();
		 QTraceMailList->Open();
}
//---------------------------------------------------------------------------
