// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Init.h"
#include "main.h"

#include "BisinessMenedger.h"
#include "EditRasp.h"
#include "FindEmplUser.h"
#include "EditRaspDetail.h"
#include "EditRaspDetailComplect.h"
#include "AccountPrint.h"
#include "ListMail.h"
#include "TraceMail.h"
#include "EditComment.h"
#include "FindProduceNE.h"
#include "GetPI.h"
#include "ChancheNE.h"
#include "ManagerRaspAccess.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzDBEdit"
#pragma link "RzEdit"
#pragma link "RzPanel"
#pragma link "RzCmboBx"
#pragma link "RzRadChk"
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
#pragma link "RzSplit"
#pragma link "cxCalendar"
#pragma link "cxDBTL"
#pragma link "cxInplaceContainer"
#pragma link "cxMaskEdit"
#pragma link "cxTL"
#pragma link "cxTLData"
#pragma link "RzTabs"
#pragma link "cxImageComboBox"
#pragma link "RzChkLst"
#pragma link "RzLstBox"
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
#pragma link "RzLabel"
#pragma link "cxCheckBox"
#pragma link "dxSkinBlueprint"
#pragma link "dxSkinDevExpressDarkStyle"
#pragma link "dxSkinDevExpressStyle"
#pragma link "dxSkinHighContrast"
#pragma link "dxSkinSevenClassic"
#pragma link "dxSkinSharpPlus"
#pragma link "dxSkinTheAsphaltWorld"
#pragma link "dxSkinVS2010"
#pragma link "dxSkinWhiteprint"
#pragma link "cxCheckComboBox"
#pragma link "cxExtEditRepositoryItems"
#pragma link "cxNavigator"
#pragma link "dxSkinMetropolis"
#pragma link "dxSkinMetropolisDark"
#pragma link "dxSkinOffice2013DarkGray"
#pragma link "dxSkinOffice2013LightGray"
#pragma link "dxSkinOffice2013White"
#pragma resource "*.dfm"
TFrBisniessMenedger *FrBisniessMenedger;
char flFrBisniessMenedger;

  String Step = "";

//...........................................................................................................................
//...функция добавляет при копировании распоряжения одну и более записей в таблицу <ProduceBlockRaspLink> (связь блоков с ПИ)
void TFrBisniessMenedger::CreateLinkBlock()                                                //added by R.Perkatov (2014-03-16)
{
  //................ в зависимости от того - какая кнопка нажимается для "создать как" - выбираем разные запросы и переменные
	 int i1 = 0;
	 int i2 = 0;
  String q1 = "";

  //..... step 1: - нажата "Создать как" для распоряжения
  if (Step == "1")
	 {
	  i1 = viTmpIdnRas;
	  i2 = viTmpIdnPI;
	  q1 = "SELECT IdAdvProdClass, IdAdvPriceList, IdProduct, IdBlock, IdCostBlock, Choice "
		   "  FROM [dbo].[ProduceBlockRaspLink] "
		   " WHERE IdRasp = " + IntToStr(QListRaspIdn->Value) + String(" "
		   "   AND DateDel IS NULL");
	  }
  //..... end step 1...

  //..... step 2: - нажата "Создать как" для номенклатуры
  if (Step == "2")
	 {
	  i1 = QListRaspIdn->Value;  //берём idn родительского распоряжения, которому принадлежит ПИ
	  i2 = viTmpIdn;
	  q1 = "SELECT IdAdvProdClass, IdAdvPriceList, IdProduct, IdBlock, IdCostBlock, Choice "
		   "  FROM [dbo].[ProduceBlockRaspLink] "
		   " WHERE IdRasp = " + IntToStr(QListRaspIdn->Value) + " "
		   "   AND IdRaspDetail = " + IntToStr(QRaspDetailIdn->Value) + " "
		   "   AND DateDel IS NULL";
	  }
  //..... end step 2...

  //..... step 3: - нажата "'Создать как' из всех ПИ" для номенклатур
  if (Step == "3")
	 {
	  i1 = QListRaspIdn->Value;  //берём idn родительского распоряжения, которому принадлежит ПИ
	  i2 = viTmpIdn;
	  q1 = "SELECT IdAdvProdClass, IdAdvPriceList, IdProduct, IdBlock, IdCostBlock, Choice "
		   "  FROM [dbo].[ProduceBlockRaspLink] "
		   " WHERE IdRasp = " + IntToStr(QListRaspIdn->Value) + " "
		   "   AND IdRaspDetail = " + IntToStr(QRaspDetailIdn->Value) + " "
		   "   AND DateDel IS NULL";
	  }
  //..... end step 3...

  LnkBQuer->Active = true;
  LnkBQuer->SQL->Clear();
  LnkBQuer->SQL->Add(q1);
  LnkBQuer->Open();

  if (LnkBQuer->RecordCount != 0)
	 {
	  LnkBQuer->First();
	  String ul = "BEGIN TRY "
				  "BEGIN TRANSACTION; "

				  "DECLARE @IdRasp         AS int "
				  "    SET @IdRasp         = " + IntToStr(i1) + " "
				  "DECLARE @IdRaspDetail   AS int "
				  "    SET @IdRaspDetail   = " + IntToStr(i2) + " "
				  "DECLARE @IdAdvProdClass AS int "
				  "    SET @IdAdvProdClass = NULL "                       //пока используем NULL по настоянию Дианы от 2014-03-19
				  //"    SET @IdAdvProdClass = " + IntToStr(BlockQuerProduceIdn->Value) + " "
				  "DECLARE @IdAdvPriceList AS int "
				  "    SET @IdAdvPriceList = NULL "
				  "DECLARE @IdProduct      AS int "
				  "    SET @IdProduct      = " + IntToStr(LnkBQuerIdProduct->Value) + " "
				  "DECLARE @IdBlock        AS int "
				  "    SET @IdBlock        = " + IntToStr(LnkBQuerIdBlock->Value) + " "
				  "DECLARE @IdCostBlock    AS int "
				  "    SET @IdCostBlock    = NULL "                       //пока используем NULL по настоянию Дианы от 2014-03-19
				  //"    SET @IdCostBlock    = " + IntToStr(BlockQuerIdCost->Value) + " "
				  "DECLARE @Choice         AS bit "
				  "    SET @Choice         = 1 "
				  "DECLARE @DateIns        AS datetime "
				  "    SET @DateIns        = GETDATE() "
				  "DECLARE @IdIns          AS int "
				  "    SET @IdIns          = " + IntToStr(PermisHdr.KeyUserStartProgramm) + " "
				  "DECLARE @LinkIdBlock    AS int "
				  "    SET @LinkIdBlock    = NULL "
				  "DECLARE @LinkDateLast   AS datetime "
				  "    SET @LinkDateLast   = NULL "
				  "DECLARE @LinkIdPI       AS int "
			      "    SET @LinkIdPI       = NULL "

				  " INSERT INTO [dbo].[ProduceBlockRaspLink] "
				  " VALUES(@IdRasp, @IdRaspDetail, @IdAdvProdClass, @IdAdvPriceList, @IdProduct, @IdBlock, @IdCostBlock, @Choice, "
				  "        @DateIns, @IdIns, NULL, NULL, NULL, NULL, @LinkIdBlock, @LinkDateLast, @LinkIdPI) "

				  "COMMIT TRANSACTION; "
				  "END TRY "

				  "BEGIN CATCH "
				  "      ROLLBACK TRANSACTION; "
				  "      PRINT 'Error transaction!'; "
				  "END CATCH;";

	  LinkBCmd->CommandText = ul;
	  LinkBCmd->Execute();
	  LnkBQuer->Next();
	  } // end if (LnkBQuer->RecordCount != 0)
  LnkBQuer->Active = false;

  Step = "";
}
//...........................................................................................................................
//...   функция проставляет DateDel && IdDel при удалении распоряжения одной и более записям в таблице <ProduceBlockRaspLink>
void TFrBisniessMenedger::DeleteLinkBlock()                                                //added by R.Perkatov (2014-03-28)
{
  String un = "BEGIN TRY "
			  "      BEGIN TRANSACTION; "
			  "UPDATE [dbo].[ProduceBlockRaspLink] "
			  "   SET DateDel = GETDATE(), IdDel = " + IntToStr(PermisHdr.KeyUserStartProgramm) + " ";

  //удаляем распоряжение и проставляем всем записям в <ProduceBlockRaspLink> DateDel && IdDel
  if (Step == "1-")  {un += " WHERE IdRasp = " + IntToStr(QListRaspIdn->Value) + " ";}

  //нажата "Удалить номенклатуру" - проставляем одной записи в <ProduceBlockRaspLink> DateDel && IdDel
  if (Step == "2-")  {un += " WHERE IdRaspDetail = " + IntToStr(QRaspDetailIdn->Value) + " ";}

		un += "    COMMIT TRANSACTION; "
			  "END TRY "

			  "BEGIN CATCH "
			  "      ROLLBACK TRANSACTION; "
			  "      PRINT 'Error transaction!'; "
			  "END CATCH;";

  UnlinkBCmd->CommandText = un;
  UnlinkBCmd->Execute();

  Step = "";
}
//...........................................................................................................................

// --------------------------------------------------------------------------------------------------------------------------
__fastcall TFrBisniessMenedger::TFrBisniessMenedger(TComponent* Owner) : TForm(Owner)
{
	fIdnDetailPI = 0;
	fFlagEditInsert = 2;
	dtDateCreateMIN->Date = Now() - 1;
	dtDateCreateMAX->Date = Now();
	dtConfirmMIN->Date = Now() - 1;
	dtConfirmMAX->Date = Now() + 3650;
	// RzToolButton5->Visible= externUserExcel;

	vsSQLQw = "SELECT DISTINCT B.IdUserBM, A.FamIO "
			  "  FROM EmplUsers A, bm_Rasp B "
			  " WHERE A.DiscDate = '21000101' AND A.IDUser = B.IdUserBM "
			  " ORDER BY A.FamIO; ";
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	Qw->Open();
	cbUserBM->Clear();
	cbUserBM->Add("ВСЕ");
	while (Qw->Eof == false) {
		cbUserBM->AddObject(Qw->Fields->Fields[1]->AsString,
			(TObject*)Qw->Fields->Fields[0]->AsInteger);
		Qw->Next();
	}
	Qw->Close();

	vsSQLQw = " SELECT Idn, iText FROM spl_LbText24 WHERE iLvl=1450";
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	Qw->Open();
	cbNameStatus->Clear();
	cbNameStatus->Add("ВСЕ");
	while (Qw->Eof == false) {
		cbNameStatus->AddObject(Qw->Fields->Fields[1]->AsString,
			(TObject*)Qw->Fields->Fields[0]->AsInteger);
		Qw->Next();
	}
	Qw->Close();
	// cbNameStatus->ItemIndex=cbNameStatus->Items->IndexOf("Черновик");
	TmListRasp->Enabled = false;
	TmListRasp->Enabled = true;

	vsSQLQw =
		"SELECT auId,auFamIO " "FROM aa_Users a "
		"INNER JOIN bm_GroupManager c ON(c.idManager=a.auId) " "WHERE auDateDel is null and TypeM=0 "
		"ORDER BY auFamIO ";
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	Qw->Open();
	cbGroupManagerBoss->Clear();
	cbGroupManagerBoss->Add("ВСЕ");
	while (Qw->Eof == false) {
		cbGroupManagerBoss->AddObject(Qw->Fields->Fields[1]->AsString,
			(TObject*)Qw->Fields->Fields[0]->AsInteger);
		Qw->Next();
	}
	Qw->Close();
	vsSQLQw =
		"SELECT auId,auFamIO " "FROM aa_Users a "
		"INNER JOIN bm_GroupManager c ON(c.idManager=a.auId) " "WHERE auDateDel is null and TypeM=1 "
		"ORDER BY auFamIO ";
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	Qw->Open();
	cbGroupManager->Clear();
	cbGroupManager->Add("ВСЕ");
	while (Qw->Eof == false) {
		cbGroupManager->AddObject(Qw->Fields->Fields[1]->AsString,
			(TObject*)Qw->Fields->Fields[0]->AsInteger);
		Qw->Next();
	}
	Qw->Close();
	Qw->Close();

	try { // Восстановление параметров прошлого запуска окна
		if (SetupIni.sBisniessMenedger.Chk == (MainForm->CheckSumParam
			((char *)&SetupIni.sBisniessMenedger.Chk,
			sizeof(SetupIni.sBisniessMenedger)) - 2))
			// Проверка контрольной сумммы блока параметров
		{
			try {
				cbGroupManagerBoss->ItemIndex =
					cbGroupManagerBoss->Items->IndexOfObject
					((TObject*)SetupIni.sBisniessMenedger.cbGroupManagerBoss);
			}
			catch (...) {
			};
			try {
				cbGroupManager->ItemIndex =
					cbGroupManager->Items->IndexOfObject
					((TObject*)SetupIni.sBisniessMenedger.cbGroupManager);
			}
			catch (...) {
			};
			try {
				cbNameStatus->ItemIndex =
					cbNameStatus->Items->IndexOfObject
					((TObject*)SetupIni.sBisniessMenedger.cbNameStatus);
			}
			catch (...) {
			};
			try {
				dtDateCreateMIN->Date =
					SetupIni.sBisniessMenedger.dtDateCreateMIN;
			}
			catch (...) {
			};
			try {
				chbDateCreateMIN->Checked =
					SetupIni.sBisniessMenedger.chbDateCreateMIN;
			}
			catch (...) {
			};
			try {
				chbMySheet->Checked = SetupIni.sBisniessMenedger.chbMySheet;
			}
			catch (...) {
			};
			try {
				chbMySheetNow->Checked =
					SetupIni.sBisniessMenedger.chbMySheetNow;
			}
			catch (...) {
			};
			try {
				spPI->Percent = SetupIni.sBisniessMenedger.spPI;
			}
			catch (...) {
			};
			if (spPI->Percent < 5)
				spPI->Percent = 40; // Положение сплиттера на Подписных Индексах
		}
		else { // Все обнулить
			setmem((void*)&SetupIni.sBisniessMenedger.Chk,
				sizeof(struct sBisniessMenedger), 0);
		}
	}
	catch (...) {
	};
	// ******************************************************************************
	// Раздача правд доступа и ролей
	// ******************************************************************************
	if (MainForm->flEditClientSAP == false)
		// Права доступа/Разрешить видить все распоряжения
	{
		chbMySheet->Checked = true;
		chbMySheet->Enabled = false;
		cbNameStatus->ItemIndex = (int)cbNameStatus->Items->IndexOfObject
			((TObject*)5448350);
	}

	LoadPicList(RzCheckList1->Items);

}

// ---------------------------------------------------------------------------
void __fastcall TFrBisniessMenedger::btCloseClick(TObject *Sender) {
	Close();
}

// ---------------------------------------------------------------------------
void __fastcall TFrBisniessMenedger::btInsRaspClick(TObject *Sender) {
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#undef  NN
#endif
#define TFR TFrEditRasp
#define FR  FrEditRasp
#define FL  flFrEditRasp
#define NN  N11

	viIdn = 0;
	FR = new TFR(Application);
	FR->WindowState = wsMaximized;
	FR->fFlagEditInsert = 0;
	FR->viRaspIdn = 0;
	FR->Caption = "Создание распоряжения";
	FR->ShowModal();
	FR->WindowState = wsMinimized;

	if (FR->fOkButton) {

		QListRasp->Close();
		cbUserBM->ItemIndex = -1;
		TDateTime T0, T1, T2, T3;
		chbDateCreateMIN->Checked == false;
		chbDateCreateMAX->Checked == true;
		dtDateCreateMAX->Date = Now() + 1;
		chbConfirmMIN->Checked == false;
		chbConfirmMAX->Checked == true;
		dtConfirmMAX->Date = Now() + 3650;
		edFindText->Text = "";
		cbNameStatus->ItemIndex=cbNameStatus->Items->IndexOf("Черновик");
		viIdn = FR->viRaspIdn;
		fFlagEditInsert = FR->fFlagEditInsert;
		TmListRasp->Enabled = false;
		TmListRasp->Enabled = true;
		// if(viIdn>0) {try{Opts.Clear();locvalues[0]=Variant(viIdn);QListRasp->Locate("Idn",locvalues,Opts);}catch(...){};btUpdRaspClick(Sender);};
	}
	delete(FR);
}
// ---------------------------------------------------------------------------
void __fastcall TFrBisniessMenedger::btUpdRaspClick(TObject *Sender)
{
	UpdateRasp();
}
// ---------------------------------------------------------------------------
void __fastcall TFrBisniessMenedger::UpdateRasp(int IdRaspEdit)
{
	if (QListRasp->Active == false && IdRaspEdit==0)
	{
		ShowMessage(AnsiString("Выберите редактируемую запись."));
		return;
	}

#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#undef  NN
#endif
#define TFR TFrEditRasp
#define FR  FrEditRasp
#define FL  flFrEditRasp
#define NN  N11
	TDateTime T0, T1, T2, T3, vtTmp;

	// 2013-07-02 Чернышов
	if(IdRaspEdit > 0)
		viIdn = IdRaspEdit;
	else
		viIdn = QListRaspIdn->AsInteger;

	FR = new TFR(Application);
	FR->WindowState = wsMaximized;
	///Блок заполнения данными полей формы///////
	FR->fFlagEditInsert = 1;
	FR->viRaspIdn = viIdn;
	FR->Caption = "Редактирование распоряжения";
	FR->ShowModal();
	FR->WindowState = wsMinimized;
	// QListRasp->Close();
	// QListRasp->Open();

	if (FR->fOkButton) {
		QListRasp->Close();
		cbUserBM->ItemIndex = -1;

		chbDateCreateMIN->Checked == false;
		chbDateCreateMAX->Checked == true;
		dtDateCreateMAX->Date = Now() + 1;
		chbConfirmMIN->Checked == false;
		chbConfirmMAX->Checked == true;
		dtConfirmMAX->Date = Now() + 3650;
		viIdn = FR->viRaspIdn;
	}
	TmListRasp->Enabled = false;
	TmListRasp->Enabled = true;
	delete(FR);
}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::btRespRefreshClick(TObject *Sender) {
	viIdn = QListRaspIdn->AsInteger;
	viIdnDetail = QRaspDetailIdn->AsInteger;
	fRefresh = true;
	TmListRasp->Enabled = false;
	TmListRasp->Enabled = true;
}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::TmListRaspTimer(TObject *Sender) {
	int i, y;
	AnsiString SFu;
	TDateTime T0, T1, T2, T3;

	RzPanel300->Visible = true;
	RzPanel300->Refresh();
	TmListRasp->Enabled = false;
	////////////////////////////

	////////////////////////////

	SFu = " ";
	for (i = 0; i < RzCheckList1->Items->Count; i++) {
		if (RzCheckList1->ItemChecked[i] == true) {
			y = (int)RzCheckList1->Items->Objects[i];
			SFu = SFu + IntToStr(y) + ",";
			Qw->ExecSQL();
			Qw->Close();
		}
	}
	SFu.Delete(SFu.Length(), 1);

	//////Отключаем кнопки согласования  рассылки, если нет относящихся к пользователю записей////////////////
	/* vsSQLQw=	" DECLARE @IDUser int; "
	 " SET @IDUser=:D0; "
	 " SELECT Idn FROM bm_Rasp "
	 " WHERE DateDel is null AND  ((IdIns=@IDUser) OR( ( IdIns in (SELECT idManager FROM bm_GroupManager WHERE (PidManager=@IDUser))) OR  "
	 "   (IdIns in  (SELECT idManager FROM bm_GroupManager WHERE (PidManager in (SELECT PidManager FROM bm_GroupManager WHERE idManager=@IDUser AND PidManager>0)))) OR "
	 "   (IdIns in  (SELECT PidManager FROM bm_GroupManager WHERE (PidManager in (SELECT PidManager FROM bm_GroupManager WHERE idManager=@IDUser AND PidManager>0)))))) ";

	 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	 Qw->Parameters->Items[0]->Value=PermisHdr.KeyUserStartProgramm;;
	 Qw->Open();
	 if (Qw->RecordCount==0) btSheet->Enabled=false; else btSheet->Enabled=true; */
	///////////////////////////////////////
	//////Отключаем кнопки контроля согласования  , если нет относящихся к пользователю записей////////////////
	vsSQLQw = " DECLARE @IDUser int; "
			  "     SET @IDUser=:D0; "
			  "  SELECT Idn FROM bm_Rasp "
			  "   WHERE DateDel is null AND (Idn in(SELECT IdRasp FROM bm_ListMail A2 "
		// " LEFT JOIN EmplUsers U on(U.IDUser=A2.IDUser) "
			  "    LEFT JOIN aa_Users C2 on  C2.auIdUserHD = A2.IDUser "
			  "   WHERE  A2.DateDel is null AND C2.auId = @IDUser AND (A2.fType = 0 OR A2.fType = 2)) OR (IdIns=@IDUser) "
			  "      OR ((IdIns in (SELECT idManager FROM bm_GroupManager WHERE (PidManager=@IDUser))) "
			  "      OR (IdIns in (SELECT idManager FROM bm_GroupManager "
			  "   WHERE (PidManager in (SELECT PidManager FROM bm_GroupManager WHERE idManager=@IDUser AND PidManager>0)))) "
			  "      OR (IdIns in (SELECT PidManager FROM bm_GroupManager "
			  "   WHERE (PidManager in (SELECT PidManager FROM bm_GroupManager WHERE idManager=@IDUser AND PidManager>0))))))";

	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	Qw->Parameters->Items[0]->Value = PermisHdr.KeyUserStartProgramm;

	Qw->Open();
	if (Qw->RecordCount == 0)
		btControlSheet->Enabled = false;
	else
		btControlSheet->Enabled = true;

	///////////////////////////////////////

	QListRasp->DisableControls();
	QListRasp->Close();
	vsSQLQListRasp =
		"DECLARE @DateInsMIN datetime, @DateInsMAX datetime,@DateRaspMIN datetime,@DateRaspMAX datetime, @IdUserBM int, @Id24NameStatus int, @IdManager int, @PIdManager int, @IdUser int"

		" SET @DateInsMIN=:D0;		" " SET @DateInsMAX=:D1;		"
		" SET @DateRaspMIN=:D2;	" " SET @DateRaspMAX=:D3;	"
		" SET @IdUserBM=:D4;		" " SET @Id24NameStatus=:D5;	"
		" SET @PIdManager=:D6;		" // Idn руководителя группы
		" SET @IdManager=:D7;		" // Idn члена группы
		" SET @IdUser=:D8;			"
		//" SELECT   (SELECT Count(Idn) FROM bm_AddFiles WHERE DateDel is null AND idRasp=B.Idn) fAddFiles"
		" SELECT (SELECT TOP(1) @@ROWCOUNT FROM bm_AddFiles WHERE DateDel is null AND idRasp = B.Idn) fAddFiles"  //изменено 2014-07-11 (R.Perkatov)
		" , B.Idn  				" " , B.IdUserBM				"
		" , B.Id24NameStatus		" " , B.Id256TypeRasp		"
		" , B.Id24City				" " , B.DateRasp				"
		" , B.NumbRaspName			" " , B.RaspNameRTF			"
		" , B.ContentTargetRTF		" " , B.Id24NameStatuser		"
		" , B.ContentRTF			" " , B.EmplDol				"
		" , B.IdEmplUsers			" " , B.RaspName				"
		" , B.DateIns				" " , B.IdIns				"
		" , B.DateMod				" " , B.IdMod				"
		" , B.DateDel				" " , B.IdDel				"
		" , B.VidRasp				" " , B.Comment				"
		" , A.FamIO				" " , C.auFamIO				"
		" , C2.auFamIO auFamIO_1   " " , D.iText			 	"
		" , B.DateSheet			" " , C3.auFamIO NameSheet   "
		" , B.DateConfirm          " " , C4.auFamIO NameConfirm "
		" , E.iText NameVidRasp 	" " , (SELECT TOP 1 F.DateLastSheet FROM bm_ListMail F "
		" WHERE F.DateLastSheet=(SELECT MAX(DateLastSheet)  FROM bm_ListMail WHERE DateDel is NULL AND IdRasp=B.Idn))DateLastSheet " " , (SELECT TOP 1 F2.auFamIO FROM bm_ListMail F "
		" LEFT JOIN  aa_Users F2 ON F2.auId = F.IdLastSheet " " WHERE F.DateLastSheet=(SELECT MAX(DateLastSheet)  FROM bm_ListMail WHERE DateDel is NULL AND IdRasp=B.Idn))  NameLastSheet "
		" , (SELECT TOP 1 DateSheet FROM bm_ListMail " " WHERE DateSheet=(SELECT MAX(DateSheet)  FROM bm_ListMail WHERE DateDel is NULL AND IdRasp=B.Idn))DateRassilka "
		" , A2.FamIO IdEmplUsers " " ,  (SELECT TOP 1 Note FROM bm_ListMail "
		" WHERE DateLastSheet=(SELECT MAX(DateLastSheet)  FROM bm_ListMail WHERE DateDel is NULL AND IdRasp=B.Idn))LastComment " " , B.idSeller "
		" FROM bm_Rasp B								  	" " LEFT JOIN EmplUsers A ON A.IDUser= B.IdUserBM 	"
		" LEFT JOIN EmplUsers A2 ON A2.IDUser= B.IdEmplUsers " " LEFT JOIN aa_Users  C ON C.auId = B.IdIns	  	"
		" LEFT JOIN aa_Users  C2 ON C2.auId = B.IdMod   	" " LEFT JOIN aa_Users  C3 ON C3.auId = B.IdSheet 	"
		"	LEFT JOIN aa_Users  C4 ON C4.auId = B.IdConfirm	" " LEFT JOIN spl_LbText24 D ON D.Idn = B.Id24NameStatus "
		" LEFT JOIN spl_LbText256 E ON E.Idn = B.VidRasp " " WHERE B.DateDel is null  AND B.DateIns >=@DateInsMIN AND B.DateIns<@DateInsMAX /*AND  B.DateRasp >=@DateRaspMIN AND B.DateRasp <@DateRaspMAX */"
		" AND B.Idn NOT IN (652,666) ";

	if (SFu.Length() > 1) {
		vsSQLQListRasp = vsSQLQListRasp + " and (B.idSeller in (" + SFu + "))";
	}
	if (!((cbUserBM->ItemIndex == -1) || (cbUserBM->Text == "ВСЕ"))) {
		vsSQLQListRasp = vsSQLQListRasp + " AND  B.IdUserBM=@IdUserBM";
	}
	if (Trim(edFindText->Text) != "") {
		vsSQLQListRasp = vsSQLQListRasp + " AND (B.NumbRaspName LIKE '%" +
			Trim(edFindText->Text) + "%' OR B.RaspName LIKE '%" +
			Trim(edFindText->Text) +
			"%'  OR cast(B.Idn as varchar(32)) LIKE '%" + Trim(edFindText->Text)
			+ "%')";
	}
	if (!((cbNameStatus->ItemIndex == -1) || (cbNameStatus->Text == "ВСЕ"))) {
		vsSQLQListRasp = vsSQLQListRasp +
			" AND B.Id24NameStatus =@Id24NameStatus";
	}

	if (!((cbGroupManagerBoss->ItemIndex == -1) || (cbGroupManagerBoss->Text == "ВСЕ"))) {
		vsSQLQListRasp = vsSQLQListRasp +
			" AND  B.IdIns in (SELECT idManager FROM bm_GroupManager WHERE (PidManager=@PIdManager) OR(idManager=@PIdManager)) ";
	}
	if (!((cbGroupManager->ItemIndex == -1) || (cbGroupManager->Text == "ВСЕ")))
	{
		vsSQLQListRasp = vsSQLQListRasp + " AND  B.IdIns  =@IdManager ";
	}

	if (chbMySheet->Checked == true) {
		vsSQLQListRasp = vsSQLQListRasp +
			" AND B.Idn in \
				( SELECT IdRasp FROM bm_ListMail A2 LEFT JOIN EmplUsers U on ((U.IDUser=A2.IDUser)OR (U.IDUser=A2.IDUserP)) LEFT JOIN aa_Users C2 on  ((C2.auIdUserHD=A2.IDUser) OR (C2.auIdUserHD=A2.IDUserP)) WHERE C2.auId=@IdUser  and  DateDel is null \
					UNION SELECT Idn FROM bm_Rasp WHERE IdIns = @IdUser AND DateDel IS NULL \
					UNION SELECT idRasp FROM bm_RaspAccess WHERE idUser = @IdUser AND DateDel IS NULL)";
	}
	/* else
	 {
	 if (!(MainForm->flGetPI)) {vsSQLQListRasp=vsSQLQListRasp+" AND B.VidRasp NOT IN (4742383) "; }
	 } */

	if (chbMySheetNow->Checked == true) {
		vsSQLQListRasp = vsSQLQListRasp +
			" AND B.Idn in (SELECT A3.IdRasp " " FROM bm_ListMail A3 "
			"   LEFT JOIN EmplUsers U on((U.IDUser=A3.IDUser)OR (U.IDUser=A3.IDUserP)) " "   LEFT JOIN aa_Users C2 on  (C2.auIdUserHD=A3.IDUser OR C2.auIdUserHD=A3.IDUserP) "
			"   INNER JOIN bm_Rasp B3 on B3.Idn=A3.IdRasp " " WHERE C2.auId=@IdUser  and  A3.DateDel is null and B3.DateDel is null AND B3.Id24NameStatus=5448350 "
			"  AND (SELECT MIN(fTurn) FROM bm_ListMail WHERE fTurn >0 AND (fResault=0 OR fResault is NULL) AND IdRasp =A3.IdRasp AND fType=0 AND DateDel is NULL) " "   = (SELECT MIN(A4.fTurn) FROM bm_ListMail A4 "
			"    LEFT JOIN EmplUsers U on((U.IDUser=A4.IDUser)OR (U.IDUser=A4.IDUserP))" "    LEFT JOIN aa_Users C2 on (C2.auIdUserHD=A4.IDUser OR C2.auIdUserHD=A4.IDUserP)"
			" WHERE fTurn >0 AND (fResault=0 OR fResault is NULL) AND IdRasp=A3.IdRasp AND C2.auId=@IdUser AND A4.fType=0 AND A4.DateDel is NULL))";
	}

	vsSQLQListRasp = vsSQLQListRasp + " ORDER BY B.DateIns DESC";
	QListRasp->SQL->Clear();
	QListRasp->SQL->Add(vsSQLQListRasp);

	if (chbDateCreateMIN->Checked == true)
		T0 = dtDateCreateMIN->Date;
	else
		T0 = (Now() + 1) - Now();
	QListRasp->Parameters->Items[0]->Value = T0;

	if (chbDateCreateMAX->Checked == true)
		T1 = dtDateCreateMAX->Date;
	else
		T1 = Now();
	QListRasp->Parameters->Items[1]->Value = T1 + 1;

	if (chbConfirmMIN->Checked == true)
		T2 = dtConfirmMIN->Date;
	else
		T2 = (Now() + 1) - Now();
	QListRasp->Parameters->Items[2]->Value = T2;
	if (chbConfirmMAX->Checked == true)
		T3 = dtConfirmMAX->Date;
	else
		T3 = Now();

	QListRasp->Parameters->Items[3]->Value = T3 + 1;
	if (!((cbUserBM->ItemIndex == -1) || (cbUserBM->Text == "ВСЕ"))) {
		QListRasp->Parameters->Items[4]->Value =
			(int)cbUserBM->Items->Objects[cbUserBM->ItemIndex];
	}
	else
		QListRasp->Parameters->Items[4]->Value = 0;
	if (!((cbNameStatus->ItemIndex == -1) || (cbNameStatus->Text == "ВСЕ"))) {
		QListRasp->Parameters->Items[5]->Value =
			(int)cbNameStatus->Items->Objects[cbNameStatus->ItemIndex];
	}
	else
		QListRasp->Parameters->Items[5]->Value = 0;
	if (!((cbGroupManagerBoss->ItemIndex == -1) ||
		(cbGroupManagerBoss->Text == "ВСЕ"))) {
		QListRasp->Parameters->Items[6]->Value =
			(int)cbGroupManagerBoss->Items->Objects
			[cbGroupManagerBoss->ItemIndex];
	}
	else
		QListRasp->Parameters->Items[6]->Value = 0;
	if (!((cbGroupManager->ItemIndex == -1) || (cbGroupManager->Text == "ВСЕ")))
	{
		QListRasp->Parameters->Items[7]->Value =
			(int)cbGroupManager->Items->Objects[cbGroupManager->ItemIndex];
	}
	else
		QListRasp->Parameters->Items[7]->Value = 0;
	QListRasp->Parameters->Items[8]->Value = PermisHdr.KeyUserStartProgramm;

	QListRasp->Open();

	///Отображаем количество отобранных распоряжений

	if (cbGroupManager->Text == "ВСЕ" || cbGroupManager->Text == "") {
		if (cbGroupManagerBoss->Text == "ВСЕ" || cbGroupManagerBoss->Text == "")
		{
			cxGridDBBandedTableView1->Bands->Items[0]->Caption =
				"Распоряжения.   Количество: " +
				IntToStr(QListRasp->RecordCount);
		}
		else {
			cxGridDBBandedTableView1->Bands->Items[0]->Caption =
				"Распоряжения руководителя " + cbGroupManagerBoss->Text +
				".   Количество: " + IntToStr(QListRasp->RecordCount);
		}
	}
	else {
		cxGridDBBandedTableView1->Bands->Items[0]->Caption =
			"Распоряжения менеджера " + cbGroupManager->Text +
			".   Количество: " + IntToStr(QListRasp->RecordCount);
	}

	///

	if (viIdn > 0) {
		try {
			Opts.Clear();
			locvalues[0] = Variant(viIdn);
			QListRasp->Locate("Idn", locvalues, Opts);
		}
		catch (...) {
		};
	};
	QListRasp->EnableControls();
	if (fFlagEditInsert == 0) {
		btUpdRaspClick(Sender);
		fFlagEditInsert = 2;
	}

	RzPanel300->Visible = false;
}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::cxGridDBBandedTableView1CellDblClick
	(TcxCustomGridTableView *Sender,
	TcxGridTableDataCellViewInfo *ACellViewInfo, TMouseButton AButton,
	TShiftState AShift, bool &AHandled) {
	if (fPermission) {
		btUpdRaspClick(Sender);
	}
	else {
#ifdef  TFR
#undef  TFR
#undef  FR
#endif
#define TFR TFrEditComment
#define FR  FrEditComment
		FR = new TFR(Application);
		FR->reComment->Text = QListRaspComment->AsString;
		FR->IdRasp = QListRaspIdn->AsInteger;
		FR->viIdIns = QListRaspIdIns->AsInteger;
		FR->ShowModal();

		FR->WindowState = wsMinimized;

		/* if (FR->ModalResult==mrOk) */ TmListRasp->Enabled = false;
		TmListRasp->Enabled = true;
		delete(FR);
	}

}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::btDelRaspClick(TObject *Sender)
{
	vsSQLQw = " SELECT PidManager FROM bm_GroupManager WHERE idManager=:D0 ";

	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	Qw->Parameters->Items[0]->Value = QListRaspIdIns->AsInteger;
	Qw->Open();

	if (QListRaspId24NameStatus->AsInteger == 5448352) {
		ShowMessage("Удаление утвержденного распоряжения невозможно.");
		return;
	}

	if ((QListRaspIdIns->AsInteger != PermisHdr.KeyUserStartProgramm) &&
		(Qw->Fields->Fields[0]->AsInteger != PermisHdr.KeyUserStartProgramm)) {
		ShowMessage(
			"Удаление невозможно. \n Только создавший запись или его руководитель могут ее удалить");
		return;
	}

	// Удаляем детализацию для ПИ
	if (MessageDlg("Вы уверены, что хотите удалить распоряжение?\n"
				   "Продолжение приведёт к полному удалению распоряжения из Базы Данных!!!",
		mtWarning, TMsgDlgButtons() << mbYes << mbNo, 0) == mrNo) {
		return;
	}
	vsSQLQw = " UPDATE bm_RaspDetail " " SET   DateDel=GetDate() " " ,IdDel= :D0 "
			  " WHERE idRasp=:D1; ";

	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	Qw->Parameters->Items[0]->Value = PermisHdr.KeyUserStartProgramm; ;
	Qw->Parameters->Items[1]->Value = QListRaspIdn->AsInteger;
	Qw->ExecSQL();
	// Удаляем распоряжение
	vsSQLQw = " UPDATE bm_Rasp "
			  "    SET DateDel = GetDate(), IdDel= :D0 "
			  "  WHERE Idn = :D1; ";
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	Qw->Parameters->Items[0]->Value = PermisHdr.KeyUserStartProgramm;
	Qw->Parameters->Items[1]->Value = QListRaspIdn->AsInteger;
	Qw->ExecSQL();

    Step = "1-";         //added by R.Perkatov (2014-03-28)
	DeleteLinkBlock();   //added by R.Perkatov (2014-03-28)

	QListRasp->Next();
	if (QListRasp->Eof == true) {
		QListRasp->Prior();
	}
	viIdn = QListRaspIdn->AsInteger;

	TmListRasp->Enabled = false;
	TmListRasp->Enabled = true;
	/*
	 QListRasp->Close();
	 QListRasp->Open();
	 {try{Opts.Clear();locvalues[0]=Variant(viIdn);QListRasp->Locate("Idn",locvalues,Opts);}catch(...){};};
	 */
}
// ---------------------------------------------------------------------------

// --------------------------------------------------------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::btDelRaspDetailClick(TObject *Sender)
{
  if ((QRaspDetailIdIns->AsInteger != PermisHdr.KeyUserStartProgramm) && !MainForm->flEditAllRasp && !fPermission ) // 2013-06-27 Чернышов
	 {
	  ShowMessage("Удаление невозможно. \n Только создавший запись может ее удалять");
	  return;
	  }

  if (MessageDlg("Вы уверены, что хотите удалить запись и все связанные с ней данные?\n"
				 "Продолжение приведёт к полному удалению записи и связанных с нею данных из Базы Данных!!!",
				 mtWarning, TMsgDlgButtons() << mbYes << mbNo, 0) == mrNo)
	 {return;}

  if (QRaspDetailfType->AsInteger == 1)
	 {
	  vsSQLQw = " SELECT Idn FROM bm_RaspDetail " " WHERE PIdn=:D0 and fType=2 and DateDel is null; ";
	  Qw->Close();
	  Qw->SQL->Clear();
	  Qw->SQL->Add(vsSQLQw);
	  Qw->Parameters->Items[0]->Value = QRaspDetailIdn->AsInteger;
	  Qw->Open();
	  if (Qw->RecordCount > 0)
		 {
		  ShowMessage("Перед удалением комплекта необходимо удалить все подписные индексы,\n входящие в него.");
		  return;
		  }
	  vsSQLQw = " DECLARE @Idn int; SET @Idn=:D0 "
				"  UPDATE bm_RaspDetail "
				"     SET DateDel = GetDate(), IdDel = :D1 "
				"   WHERE Idn = @Idn AND fType = 1 AND DateDel is null; ";
	  }

  if (QRaspDetailfType->AsInteger == 2)
	 {
	  if (QRaspDetailPIdn->AsInteger > 0)
		 {
		  vsSQLQw = " DECLARE @Idn int; SET @Idn = :D0 "
					"  UPDATE bm_RaspDetail "
					"     SET PIdn = NULL, DateMod = GetDate(), IdMod = :D1 "
					"	WHERE Idn= @Idn AND fType = 2;";
		  }
	  else
		 {
		  vsSQLQw = " DECLARE @Idn int; SET @Idn = :D0 "
					"  UPDATE bm_RaspDetail "
					"     SET DateDel = GetDate(), IdDel = :D1 "
					"   WHERE (Idn = @Idn AND isnull(fType,2)=2) "
					"      OR (PIdn=@Idn AND fType=3) "
					"     AND DateDel is null; ";
		  }
	  }
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	Qw->Parameters->Items[0]->Value = QRaspDetailIdn->AsInteger;
	Qw->Parameters->Items[1]->Value = PermisHdr.KeyUserStartProgramm;
	Qw->ExecSQL();

	Step = "2-";         //added by R.Perkatov (2014-03-28)
	DeleteLinkBlock();   //added by R.Perkatov (2014-03-28)

	QRaspDetail->Next();
	if (QRaspDetail->Eof == true) {
		QRaspDetail->Prior();
	}
	viIdnDetail = QRaspDetailIdn->AsInteger;

	QRaspDetail->Close();
	QRaspDetail->Open(); {
		try {
			Opts.Clear();
			locvalues[0] = Variant(viIdnDetail);
			QRaspDetail->Locate("Idn", locvalues, Opts);
		}
		catch (...) {
		};
	};
}
// --------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBisniessMenedger::btInsRaspDetailIndexClick(TObject *Sender)
{
	if ((QListRasp->Active == false) || (QListRasp->Eof == true)) {
		ShowMessage("Выберите распоряжение.");
		return;
	}
	if ((QListRaspIdIns->AsInteger != PermisHdr.KeyUserStartProgramm) &&
		 !MainForm->flEditAllRasp &&
		 !fPermission ) // 2013-06-27 Чернышов
	{
		ShowMessage(
			"Cоздание ПИ невозможно. \n Только создавший распоряжение может его создавать");
		return;
	}

	// vsSQLQw=" SELECT TOP 1 Idn FROM  bm_RaspDetail WHERE idRasp=:D0 and IdIns=:D1 and LTRIM(RTRIM(NameRaspDetail))='Новый подписной индекс' and DateDel is null";
	vsSQLQw =
		"DECLARE @IdRasp int, @IdIns int, @i Int,@viNumbNE int, @vifAdv int,@vifAdvMIN int, @viYear int, @VOrder int;" " SET @IdRasp=:D0;"
		" SET @IdIns=:D1; " " SET @i=0;		  "
		" SELECT @i= Idn FROM  bm_RaspDetail" " WHERE idRasp=@IdRasp and IdIns=@IdIns and LTRIM(RTRIM(NameRaspDetail))='Новый подписной индекс' and DateDel is null"
		" SELECT @VOrder=MAX(VOrder) FROM bm_RaspDetail WHERE idRasp=@idRasp AND DateDel is null;" " SET @VOrder=isnull(@VOrder,0)+1;"
		" if ((@i=0) or (@i is null))" " begin"
		" 				  SELECT TOP 1	  " " 				  @viNumbNE=NumbNE"
		" 				 , @vifAdv=fAdv	  " " 				 , @vifAdvMIN=fAdvMIN	  "
		" 				 , @viYear=[Year] " " 		  FROM bm_RaspDetail WHERE idRasp=@idRasp AND fType=2 AND DateDel is null ORDER BY DateIns DESC;"
		" if((@viYear=0) or (@viYear is null)) SET @viYear=Year(GetDate());" " 		  INSERT INTO bm_RaspDetail"
		" 				  ( PIdn" " 				 ,idRasp"
		" 				 , NumbNE" " 				 , NameRaspDetail"
		"				 , idAdvProduceClass " "				 , AlterName "
		" 				 , fAdv" " 				 , fAdvMIN"
		" 				 , fType" " 				 , ProcNDS"
		" 				 , [Year]" " 				 , DateIns"
		" 				 , IdIns  " " 				 , VOrder )"
		" 		  VALUES  (NULL" " 				 , @idRasp"
		" 				 , @viNumbNE" " 				 , 'Новый подписной индекс'"
		"				 , 21168  " // Нет продукта
		" 				 , 'Новый подписной индекс'" " 				 , @vifAdv"
		" 				 , @vifAdvMIN" " 				 , 2"
		" 				 , 10" " 				 , @viYear"
		" 				 , GetDate()" " 				 , @IdIns "
		" 				 , @VOrder);" " 		  SET  @i=SCOPE_IDENTITY();"
		" end" "   SELECT @i ;";
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	Qw->Parameters->Items[0]->Value = FrBisniessMenedger->QListRaspIdn->AsInteger;
	Qw->Parameters->Items[1]->Value = PermisHdr.KeyUserStartProgramm;
	Qw->Open();
	viIdnDetail = Qw->Fields->Fields[0]->AsInteger;
	Qw->Close();
	fFlagEditInsert = 0;
	QRaspDetail->Close();
	QRaspDetail->Open();
	try {
		Opts.Clear();
		locvalues[0] = Variant(viIdnDetail);
		QRaspDetail->Locate("Idn", locvalues, Opts);
	}
	catch (...) {
	};
	btUpdRaspDetailClick(Sender);
	/* if(Qw->RecordCount==0)
	 {  vsSQLQw= " DECLARE @idRasp int"
	 " SET @idRasp=:D0"
	 " SELECT TOP 1 "
	 " NumbNE"
	 ", fAdv"
	 ", Year"

	 " FROM bm_RaspDetail WHERE idRasp=@idRasp AND fType=2 AND DateDel is null ORDER BY DateIns DESC;";
	 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	 Qw->Parameters->Items[0]->Value=QListRaspIdn->AsInteger;
	 Qw->Open();

	 int   viNumbNE, vifAdv, viYear;

	 viNumbNE=Qw->Fields->Fields[0]->AsInteger;
	 vifAdv=Qw->Fields->Fields[1]->AsInteger;
	 viYear=Qw->Fields->Fields[2]->AsInteger;
	 if (viYear==0)  viYear=StrToInt(Now().FormatString("yyyy"));











	 vsSQLQw=  " DECLARE @idRasp int,  @IdInsMod int, @viNumbNE int, @vifAdv int, @viYear int  "
	 " SET @idRasp=:D0"
	 " SET @IdInsMod=:D1"
	 " SET @viNumbNE=:D2"
	 " SET @vifAdv=:D3"
	 " SET @viYear=:D4"



	 " INSERT INTO bm_RaspDetail"
	 " ( PIdn"
	 ",idRasp"
	 ", NumbNE"
	 ", NameRaspDetail"
	 ", fAdv"
	 ", fType"
	 ", ProcNDS"
	 ", Year"
	 ", DateIns"
	 ", IdIns )"
	 " VALUES  (NULL"
	 ", @idRasp"
	 ", @viNumbNE"
	 ", 'Новый подписной индекс'"
	 ", @vifAdv"
	 ", 2"
	 ", 0"
	 ", @vifAdv"
	 ", GetDate()"
	 ", @IdInsMod);"
	 " declare @viTmp int; SET  @viTmp=SCOPE_IDENTITY(); "
	 " SELECT @viTmp";
	 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	 Qw->Parameters->Items[0]->Value=QListRaspIdn->AsInteger;
	 Qw->Parameters->Items[1]->Value=PermisHdr.KeyUserStartProgramm;
	 Qw->Parameters->Items[2]->Value=viNumbNE;
	 Qw->Parameters->Items[3]->Value=vifAdv;
	 Qw->Parameters->Items[4]->Value=viYear;
	 Qw->Open();
	 fFlagEditInsert=0;
	 viIdnDetail=Qw->Fields->Fields[0]->AsInteger;
	 QRaspDetail->Close();
	 QRaspDetail->Open();
	 //TmRaspDetail->Enabled=true;
	 }
	 try{Opts.Clear();locvalues[0]=Variant(Qw->Fields->Fields[0]->AsInteger);QRaspDetail->Locate("Idn",locvalues,Opts);}catch(...){};
	 btUpdRaspDetailClick(Sender); */

	/*
	 #ifdef  TFR
	 #undef  TFR
	 #undef  FR
	 #endif
	 #define TFR TFrEditRaspDetail
	 #define FR  FrEditRaspDetail

	 fFlagEditInsert=0;
	 viIdnDetail=0;
	 FR=new TFR(Application);
	 FR->Caption="Создание нового подписного индекса";
	 FR->meComplect->Text="Новый подписной индекс";
	 FR->ShowModal();
	 FR->WindowState=wsMinimized;
	 if (FR->fOkButton) TmRaspDetail->Enabled=true;
	 delete (FR);
	 fFlagEditInsert=2;
	 */
}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::btUpdRaspDetailClick(TObject *Sender)
{
  if ((QListRasp->Active == false) || (QListRasp->Eof == true))
	 {
	  ShowMessage("Выберите распоряжение.");
	  return;
	  }

  viIdnDetailPI = 0;
  viIdnDetail = 0;
  if ((QRaspDetailPIdn->AsInteger > 0) && (fIdnDetailPI == 0))
	 {
	  fIdnDetailPI = 1;
	  viIdnDetailPI = QRaspDetailIdn->AsInteger;
	  try
		 {
		  Opts.Clear();
		  locvalues[0] = Variant(QRaspDetailPIdn->AsInteger);
		  QRaspDetail->Locate("Idn", locvalues, Opts);
		  }
		  catch (...)
				{};
	  }
	  else
		  fIdnDetailPI = 0;

  if (QRaspDetailfType->AsInteger == 2) // Подписной индекс
	 {
	  #ifdef  TFR
	  #undef  TFR
	  #undef  FR
	  #endif
	  #define TFR TFrEditRaspDetail
	  #define FR  FrEditRaspDetail
	  FR = new TFR(Application);
	  FR->viVidRasp = QListRaspVidRasp->AsInteger;
	  switch (QListRaspidSeller->AsInteger)
			 {
			  case 36:  FR->viSrc = 1000; // ЗАО
						break;
			  case 37:  FR->viSrc = 3000; // НОУ
						break;
			  default:  FR->viSrc = 0;    // ничего не выбрано
			  }

	  if (fFlagEditInsert == 0)
		  FR->Caption = "Создание нового подписного индекса";
	  else
		  {
		   FR->Caption = btUpdRaspDetail->Caption;
		   fFlagEditInsert = 1;
		   }

	  FR->fFlagEditInsert  = fFlagEditInsert;
	  FR->viIdnDetail      = QRaspDetailIdn->AsInteger;
	  FR->viRaspIdn        = QListRaspIdn->AsInteger;
	  FR->viId24NameStatus = QListRaspId24NameStatus->AsInteger;
	  FR->IdInsUser        = QListRaspIdIns->AsInteger;
	  FR->fPermission      = fPermission;// 2013-06-27 Чернышов

	  if (QListRaspVidRasp->AsInteger == 4742383) // Если распоряжение типа о Внесении изменений в ПИ
		 {
		  FR->btGetChangePI->Visible = true;
		  FR->btGetChangeNE->Visible = true;
		  vsSQLQw = "SELECT IdGetPI FROM bm_RaspDetail WHERE Idn = " + IntToStr(QRaspDetailIdn->AsInteger);
		  Qw->Close();
		  Qw->SQL->Clear();
		  Qw->SQL->Add(vsSQLQw);
		  Qw->Open();
		  FR->viIdGetPI = Qw->Fields->Fields[0]->AsInteger;

		  vsSQLQw =
				" SELECT ' Изменяем подписной индекс: '+A.NameRaspDetail+'\n Распоряжение: '+B.NumbRaspName " "	+' от ', B.DateRasp  "
				"	FROM bm_RaspDetail A " "	LEFT JOIN bm_Rasp B ON A.IdRasp=B.Idn "
				"	WHERE A.Idn=" + IntToStr(FR->viIdGetPI);
		  Qw->Close();
		  Qw->SQL->Clear();
		  Qw->SQL->Add(vsSQLQw);
		  Qw->Open();
		  AnsiString TmpDate;
		  TmpDate = Qw->Fields->Fields[1]->AsDateTime.FormatString("dd.mm.yyyy");
		  if (TmpDate == "30.12.1899")
			  TmpDate = "";
		  FR->meComplect->Caption = Qw->Fields->Fields[0]->AsString + TmpDate;
		  }
		else
			{
			 FR->btGetChangePI->Visible = false;
			 FR->btGetChangeNE->Visible = false;
			 vsSQLQw = "UPDATE bm_RaspDetail SET IdGetPI = null "
					   " WHERE Idn = " + IntToStr(QRaspDetailIdn->AsInteger);
			 Qw->Close();
			 Qw->SQL->Clear();
			 Qw->SQL->Add(vsSQLQw);
			 Qw->ExecSQL();
			 }

	  FR->ShowModal();
	  FR->WindowState = wsMinimized;
		// if (FR->ModalResult==mrOk){
	  viIdnDetail = QRaspDetailIdn->AsInteger;
	  TmRaspDetail->Enabled = true;
		// }
	  delete(FR);
	  }
  fFlagEditInsert = 1;

  if (QRaspDetailfType->AsInteger == 1)  // Комплект
	 {
	  #ifdef  TFR
	  #undef  TFR
	  #undef  FR
	  #endif
	  #define TFR TFrEditRaspDetailComplect
	  #define FR  FrEditRaspDetailComplect

	  FR = new TFR(Application);
	  FR->fFlagEditInsert = 1;
	  FR->viIdnDetail = QRaspDetailIdn->AsInteger;
	  FR->viRaspIdn = QListRaspIdn->AsInteger;
	  FR->Caption = btUpdRaspDetail->Caption;
	  FR->viIdnDetailPI = viIdnDetailPI;
	  FR->Qw->Close();
	  FR->Qw->SQL->Clear();
	  FR->vsSQLQw = "INSERT INTO " + FR->TempTableName + "( Idn, NameRaspDetail, fType, fInsDouble ) "
					"SELECT Idn, NameRaspDetail, fType, 0 from bm_RaspDetail "
					" WHERE fType = 2 AND PIdn = " + QRaspDetailIdn->AsInteger + " and DateDel is null;";
	  FR->Qw->SQL->Add(FR->vsSQLQw);
	  FR->Qw->ExecSQL();
	  FR->meNameComplect->Text = QRaspDetailNameRaspDetail->AsString;
	  FR->TmIndex->Enabled = true;
	  FR->fPermission = fPermission;// 2013-06-27 Чернышов

	  FR->ShowModal();
	  FR->WindowState = wsMinimized;
	  viIdnDetail = FR->viIdnDetail;
	  /* if (FR->ModalResult==mrOk) */ TmRaspDetail->Enabled = true;
	  delete(FR);
	  }

  fFlagEditInsert = 2; // 0
}
// ---------------------------------------------------------------------------
void __fastcall TFrBisniessMenedger::btInsRaspDetailComplectClick(TObject *Sender)
{
  if ((QListRasp->Active == false) || (QListRasp->Eof == true))
	 {
	  ShowMessage("Выберите распоряжение.");
	  return;
	  }
  if ((QListRaspIdIns->AsInteger != PermisHdr.KeyUserStartProgramm) &&
		 !MainForm->flEditAllRasp &&
		 !fPermission ) // 2013-06-27 Чернышов
	 {
	  ShowMessage("Cоздание невозможно. \n Только создавший запись может его создавать");
	  return;
	  }

#ifdef  TFR
#undef  TFR
#undef  FR
#endif
#define TFR TFrEditRaspDetailComplect
#define FR  FrEditRaspDetailComplect

	FR = new TFR(Application);
	FR->fFlagEditInsert = 0;
	FR->viIdnDetail = 0;
	FR->viRaspIdn = QListRaspIdn->AsInteger;
	FR->Caption = "Создание нового комплекта";
	FR->fPermission = fPermission;// 2013-06-27 Чернышов

	FR->QTmpTable->ExecSQL();
	FR->ShowModal();
	FR->WindowState = wsMinimized;
	viIdnDetail = FR->viIdnDetail;
	if (FR->ModalResult == mrOk)
		TmRaspDetail->Enabled = true;
	delete(FR);
}
// --------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBisniessMenedger::DSListRaspDataChange(TObject *Sender, TField *Field)
{
  if (QListRaspId24NameStatus->AsInteger == 5448350 &&
	 (QListRaspIdIns->AsInteger == PermisHdr.KeyUserStartProgramm || MainForm->flNewAccountNoStop == true) )
	 {
	  RzToolButton12->Enabled = true;
	  }
	else
		{RzToolButton12->Enabled = false;}

	TmRaspDetail->Enabled = false;
	TmRaspDetail->Enabled = true;
	/*
	 //////Отключаем кнопки согласования  рассылки, если нет относящихся к пользователю записей////////////////
	 vsSQLQw=	" DECLARE @IDUser int, @Idn int; "
	 " SET @IDUser=:D0; "
	 " SET @Idn=:D1; "
	 " SELECT Idn, Id24NameStatus FROM bm_Rasp "
	 " WHERE DateDel is null AND Idn=@Idn AND  ((IdIns=@IDUser) OR( ( IdIns in (SELECT idManager FROM bm_GroupManager WHERE (PidManager=@IDUser))) OR  "
	 "   (IdIns in  (SELECT idManager FROM bm_GroupManager WHERE (PidManager in (SELECT PidManager FROM bm_GroupManager WHERE idManager=@IDUser AND PidManager>0)))) OR "
	 "   (IdIns in  (SELECT PidManager FROM bm_GroupManager WHERE (PidManager in (SELECT PidManager FROM bm_GroupManager WHERE idManager=@IDUser AND PidManager>0)))))) ";

	 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	 Qw->Parameters->Items[0]->Value=PermisHdr.KeyUserStartProgramm;
	 Qw->Parameters->Items[1]->Value=QListRaspIdn->AsInteger;
	 Qw->Open();
	 // Проверяем есть ли утвердившие в данном распоряжении
	 vsSQLQw=	"  SELECT Idn FROM bm_ListMail "
	 "  WHERE  DateDel is null "
	 " AND IdRasp=:D0 "
	 " AND (fType=0 OR fType=2) "
	 " AND isnull(fResault,0)>0  ";
	 Qw2->Close();Qw2->SQL->Clear();Qw2->SQL->Add(vsSQLQw);
	 Qw2->Parameters->Items[0]->Value=QListRaspIdn->AsInteger;
	 Qw2->Open();


	 if ((!MainForm->flEditAllRasp)&&(Qw2->RecordCount>0)&&((Qw->RecordCount==0)||(Qw->Fields->Fields[1]->AsInteger!=5448351))) ----не Черновик
	 { btSheet->Enabled=false;
	 RzToolButton6->Enabled=false;
	 btUpdRasp->Enabled=false;
	 btDelRasp->Enabled=false;
	 btInsRaspDetailComplect->Enabled=false;
	 btInsRaspDetailIndex->Enabled=false;
	 btUpdRaspDetail->Enabled=false;
	 btCopyRaspDetail->Enabled=false;
	 btCopyRaspDetailAll->Enabled=false;
	 btDelRaspDetail->Enabled=false;
	 fPermission=false;
	 }
	 else
	 {btSheet->Enabled=true;
	 RzToolButton6->Enabled=true;
	 btUpdRasp->Enabled=true;
	 btDelRasp->Enabled=true;
	 btInsRaspDetailComplect->Enabled=true;
	 btInsRaspDetailIndex->Enabled=true;
	 btUpdRaspDetail->Enabled=true;
	 btCopyRaspDetail->Enabled=true;
	 btCopyRaspDetailAll->Enabled=true;
	 btDelRaspDetail->Enabled=true;
	 fPermission=true;
	 }
	 //Создавший может редактировать список рассылки.
	 if(PermisHdr.KeyUserStartProgramm==QListRaspIdIns->AsInteger) btSheet->Enabled=true;


	 // Обработка Вида распоряжения. Переделается под БД по мере накопления информации по видам.
	 //if (QListRaspVidRasp->AsInteger==4742155)//рекламная акция
	 if (QListRaspVidRasp->AsInteger==4742383) btInsRaspDetailComplect->Enabled=false; //Для распоряжения о внеснеии изменений
	 //	viTmpIdnTm=QListRaspIdn->AsInteger;
	 //TmSplitter->Enabled=true;

	 if(spPI->Percent==100){return;}

	 if (!((QListRaspVidRasp->AsInteger==4742151)||(QListRaspVidRasp->AsInteger==4742153)||(QListRaspVidRasp->AsInteger==4742383) ))
	 {fspPI=true;
	 spPI->Percent=99;
	 }
	 else
	 {spPI->Percent=vispPI;
	 fspPI=false;
	 }


	 ///
	 /////////////////////////////////////////////////////////////////////////
	 if (!fRefresh) { viIdnDetail=0;fRefresh=false;}
	 TmRaspDetail->Enabled=true;
	 TmRaspDetailEXEL->Enabled=true;
	 */
}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::TmRaspDetailTimer(TObject *Sender)
{
  TmRaspDetail->Enabled = false;

	//////Отключаем кнопки согласования  рассылки, если нет относящихся к пользователю записей////////////////
	vsSQLQw =
		" DECLARE @IDUser int, @Idn int; " " SET @IDUser=:D0; "
		" SET @Idn=:D1; "
		" SELECT Idn, Id24NameStatus FROM bm_Rasp "
		" WHERE DateDel is null "
		"		AND Idn=@Idn "
		"		AND  ( IdIns=@IDUser "
		"			OR @IDUser in (SELECT idUser FROM bm_RaspAccess WHERE idRasp = @idn and DateDel is null))";
// 2013-06-26 Чернышов - доступ из табл. bm_RaspAccess
/*		"			OR( ( IdIns in (SELECT idManager FROM bm_GroupManager WHERE PidManager=@IDUser)) OR  "
		"   (IdIns in  (SELECT idManager FROM bm_GroupManager WHERE (PidManager in (SELECT PidManager FROM bm_GroupManager WHERE idManager=@IDUser AND PidManager>0)))) OR "
		"   (IdIns in  (SELECT PidManager FROM bm_GroupManager WHERE (PidManager in (SELECT PidManager FROM bm_GroupManager WHERE idManager=@IDUser AND PidManager>0)))))) ";*/

	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	Qw->Parameters->Items[0]->Value = PermisHdr.KeyUserStartProgramm;
	Qw->Parameters->Items[1]->Value = QListRaspIdn->AsInteger;
	Qw->Open();
	// Проверяем есть ли утвердившие в данном распоряжении
	vsSQLQw =
		"  SELECT Idn FROM bm_ListMail " "  WHERE  DateDel is null "
		" AND IdRasp=:D0 " " AND (fType=0 OR fType=2) "
		" AND isnull(fResault,0)>0  ";
	Qw2->Close();
	Qw2->SQL->Clear();
	Qw2->SQL->Add(vsSQLQw);
	Qw2->Parameters->Items[0]->Value = QListRaspIdn->AsInteger;
	Qw2->Open();

	if (( !MainForm->flEditAllRasp) &&
		//( Qw2->RecordCount > 0) &&
		((Qw->RecordCount == 0) || (Qw->Fields->Fields[1]->AsInteger != 5448351)))
	{

		btSheet->Enabled = false;
		RzToolButton6->Enabled = false;
		btUpdRasp->Enabled = false;
		btDelRasp->Enabled = false;
		btInsRaspDetailComplect->Enabled = false;
		btInsRaspDetailIndex->Enabled = false;
		btUpdRaspDetail->Enabled = false;
		btCopyRaspDetail->Enabled = false;
		btCopyRaspDetailAll->Enabled = false;
		btDelRaspDetail->Enabled = false;
		fPermission = false;
		RzToolButton11->Enabled = false;
		/*if(Qw2->RecordCount > 0)
		{
			btSheet->Enabled = false;
			RzToolButton6->Enabled = false;
			btUpdRasp->Enabled = false;
			btDelRasp->Enabled = false;
			btUpdRaspDetail->Enabled = false;
		}
		else
		{
			btSheet->Enabled = true;
			RzToolButton6->Enabled = true;
			btUpdRasp->Enabled = true;
			btDelRasp->Enabled = true;
			btUpdRaspDetail->Enabled = true;
		}*/
	}
	else {
		btSheet->Enabled = true;
		RzToolButton6->Enabled = true;
		btUpdRasp->Enabled = true;
		btDelRasp->Enabled = true;
		btInsRaspDetailComplect->Enabled = true;
		btInsRaspDetailIndex->Enabled = true;
		btUpdRaspDetail->Enabled = true;
		btCopyRaspDetail->Enabled = true;
		btCopyRaspDetailAll->Enabled = true;
		btDelRaspDetail->Enabled = true;
		fPermission = true;
		RzToolButton11->Enabled = false;
	}

// 2013-06-26 Чернышов - дозволить редактирование доступа
	if(PermisHdr.KeyUserStartProgramm == QListRaspIdIns->AsInteger ||
	   MainForm->flEditAllRasp)
		rztbAccess->Enabled = true;
	else
		rztbAccess->Enabled = false;

	// Создавший может редактировать список рассылки.
	if (PermisHdr.KeyUserStartProgramm == QListRaspIdIns->AsInteger)
		btSheet->Enabled = true;

	// Обработка Вида распоряжения. Переделается под БД по мере накопления информации по видам.
	// if (QListRaspVidRasp->AsInteger==4742155)//рекламная акция
	if (QListRaspVidRasp->AsInteger == 4742383)
		// Для распоряжения о внеснеии изменений
	{
		btInsRaspDetailComplect->Enabled = false;
		btCopyRaspDetail->Enabled = false;
		btCopyRaspDetailAll->Enabled = false;
		RzToolButton11->Enabled = true;
	}
	// viTmpIdnTm=QListRaspIdn->AsInteger;
	// TmSplitter->Enabled=true;

	if (spPI->Percent == 100) {
		return;
	}
	// Скрываем номенклатуры для всех типов распоряжений, кроме распоряжений о ценах, продукт и цена(на данный момент такой тип отключен) и распоряжений о внесений изменений в ПИ
	if (!((QListRaspVidRasp->AsInteger == 4742151) ||
		(QListRaspVidRasp->AsInteger == 4742153) ||
		(QListRaspVidRasp->AsInteger == 4742383))) {
		fspPI = true;
		spPI->Percent = 99;
	}
	else {
		spPI->Percent = vispPI;
		fspPI = false;
	}

	///
	/////////////////////////////////////////////////////////////////////////
	// Вызывает зацикливание процедуры обновления данных! вы из таймера вызываете таймер!!!-Было перенесено из DSListRaspDataChange с этим участком кода
	/*
	 if (!fRefresh) { viIdnDetail=0;fRefresh=false;}
	 TmRaspDetail->Enabled=true;
	 TmRaspDetailEXEL->Enabled=true;

	 */

	////////////////////////////

	QRaspDetail->DisableControls();
	QRaspDetail->Close();
	QRaspDetail->Parameters->Items[0]->Value = QListRaspIdn->AsInteger;
	QRaspDetail->Open();

	if (viIdnDetail > 0) {
		try {
			Opts.Clear();
			locvalues[0] = Variant(viIdnDetail);
			QRaspDetail->Locate("Idn", locvalues, Opts);
		}
		catch (...) {
		};
	};
	QRaspDetail->EnableControls();
}
// ---------------------------------------------------------------------------
void __fastcall TFrBisniessMenedger::FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)
{
	if (Key == VK_ESCAPE)
		Close();
	if (Key == 13)
		btRespRefreshClick(Sender);
}
// ---------------------------------------------------------------------------
void __fastcall TFrBisniessMenedger::tlRaspDetailDblClick(TObject *Sender)
{
  if (fPermission)
	 {
	  if (btUpdRaspDetail->Enabled)
		  btUpdRaspDetailClick(Sender);
	 }
}
// ---------------------------------------------------------------------------
void __fastcall TFrBisniessMenedger::RzToolButton5Click(TObject *Sender)
{
  MainForm->SaveXlsFiles_cxDBTreeList(tlRaspDetail);
}
// ---------------------------------------------------------------------------

// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::btPrintRaspClick(TObject *Sender) {
	///////////////////////////////////////////////////////////////////////////////

#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL

#endif
#define TFR TFrAccountPrint
#define FR  FrAccountPrint
#define FL  flFrAccountPrint
	int viIdn;
	if (QListRasp->RecordCount == 0) {
		ShowMessage("Выберите распоряжение.");
		return;
	}
	else
		viIdn = QListRaspIdn->AsInteger; // Передаем Idn записи для печати

	{
		switch (FL) {
		case WINCLS:
			FR = new TFR(Application);
			FL = WINWRK;
			FR->Caption = "Печать распоряжения";
			FR->OpenFormAccountPrint(10, viIdn, 1);
			FR->Show();
			break;
		case WINWRK:
			if (FR->WindowState == wsMinimized) {
				FR->WindowState = wsNormal;
			}
			FR->Caption = "Печать распоряжения";
			FR->OpenFormAccountPrint(10, viIdn, 1);
			FR->Show();
			break;
		}
	}

}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::FormClose(TObject *Sender,
	TCloseAction &Action) {
	Action = caFree;
	flFrBisniessMenedger = WINCLS;
}
// --------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBisniessMenedger::btCopyRaspClick(TObject *Sender)
{
  if ((QListRasp->Active == false) || (QListRasp->Eof == true))
	 {
	  ShowMessage("Выберите распоряжение.");
	  return;
	  }

  vsSQLQw = " SELECT Idn FROM bm_Rasp WHERE VidRasp = 4742383 AND Idn = :D0";
  Qw->Close();
  Qw->SQL->Clear();
  Qw->SQL->Add(vsSQLQw);
  Qw->Parameters->Items[0]->Value = QListRaspIdn->AsInteger;
  Qw->Open();

  if (Qw->RecordCount > 0)
	 {
	  ShowMessage("Данный тип распоряжения нельзя 'Создать как'.");
	  return;
	  }

  ///  Если распоряжение до 17.07.2012, то не позволять его 'Создать как'
  vsSQLQw = "SELECT Idn FROM bm_Rasp WHERE Idn = :D0 AND DateIns <'2012-07-17 01:00:00' AND VidRasp IN (4742151,4742153,4742383)";
  Qw->Close();
  Qw->SQL->Clear();
  Qw->SQL->Add(vsSQLQw);
  Qw->Parameters->Items[0]->Value = QListRaspIdn->AsInteger;
  Qw->Open();
  if (Qw->RecordCount > 0)
	 {
	  ShowMessage("Данное распоряжение нельзя 'Создать как', так как он создан до 17.07.2012.\n"
				  "В случае вопросов обращаться к Скопинцевой Д.А. т.2888 ");
	  return;
	  }
	///

  vsSQLQw =
		" declare @viTmp int, @idIns int;"
		" set @idIns = :D0;"
		" INSERT INTO bm_Rasp(  "
		"   IdUserBM"
		" , Id24NameStatus"
		" , Id256TypeRasp"
		" , Id24City"
		" , DateRasp"
		" , NumbRaspName"
		" , RaspNameRTF"
		" , ContentTargetRTF"
		" , Id24NameStatuser"
		" , ContentRTF"
		" , EmplDol"
		" , IdEmplUsers"
		" , RaspName"
		" , DateIns"
		" , IdIns"
		" , PathAddFiles"
		" , VidRasp"
		" , idSeller) "
		" SELECT TOP 1  IdUserBM, 5448351" // Id24NameStatus Черновик
		" , Id256TypeRasp, Id24City, DateRasp"
		" , LEFT('Копия_'+NumbRaspName,24), RaspNameRTF"
		" , ContentTargetRTF, Id24NameStatuser, ContentRTF, EmplDol"
		" , IdEmplUsers, RaspName, GetDate(), @idIns, PathAddFiles"
		" , VidRasp, idSeller "
		" FROM bm_Rasp"
		" WHERE Idn=:D1;"
		" SET  @viTmp=SCOPE_IDENTITY(); "
		" exec pr_SetAccessToRasp @viTmp, @idIns " // добавить доступ к распоряжению
		" SELECT @viTmp";
  Qw->Close();
  Qw->SQL->Clear();
  Qw->SQL->Add(vsSQLQw);
  Qw->Parameters->Items[0]->Value = PermisHdr.KeyUserStartProgramm;
  Qw->Parameters->Items[1]->Value = QListRaspIdn->AsInteger;
  Qw->Open();

  viTmpIdnRas = Qw->Fields->Fields[0]->AsInteger;
  if (viTmpIdnRas > 0)
	 {
	  vsSQLQw = "SELECT Idn FROM bm_RaspDetail WHERE idRasp = :D0 AND DateDel IS NULL AND fType = 1";
	  // Отбираем комплекты для распоряжений
	  Qw->Close();
	  Qw->SQL->Clear();
	  Qw->SQL->Add(vsSQLQw);
	  Qw->Parameters->Items[0]->Value = QListRaspIdn->AsInteger;
	  Qw->Open();
	  while (!Qw->Eof) // копируем комплекты
			{
			 vsSQLQw = "INSERT INTO bm_RaspDetail(  " "  PIdn	                "
					   ", idRasp   	 		" ", Id24TypeProduceIndex "
					   ", idAdvProduceClass  	" ", NameRaspDetail     	"
					   ", NumbNE             	" ", Year               	"
					   ", CostWithNDS        	" ", CostWithoutNDS     	"
					   ", CostNDS            	" ", ProcNDS           	"
					   ", Discount      	    " ", ProcDiscount     	"
					   ", fAdv              	" ", fAdvMIN              "
					   ", fType				" ", DateMod      		"
					   ", DateIns      		" ", IdIns                "
					   ", CostMINWithNDS       " ", CostMINWithoutNDS    "
					   ", Id32NameUnit			" ", Id32NameItemType		"
					   ", ItemId				" ", vOrder               "
					   ", fNoNDS                " ", CompositionOfPI  )            "

					   " SELECT TOP 1  		" "  PIdn	                "
					   ", :D0		   	 		" ", Id24TypeProduceIndex "
					   ", idAdvProduceClass  	" ", '_Копия.'+NameRaspDetail     	"
					   ", NumbNE             	" ", Year               	"
					   ", CostWithNDS        	" ", CostWithoutNDS     	"
					   ", CostNDS            	" ", ProcNDS           	"
					   ", Discount      	    " ", ProcDiscount     	"
					   ", fAdv              	" ", fAdvMIN              "
					   ", fType				" ", DateMod      		"
					   ", GetDate()      		" ", :D1	                "
					   ", CostMINWithNDS       " ", CostMINWithoutNDS    "
					   ", Id32NameUnit			" ", Id32NameItemType		"
					   ", ItemId				" ", vOrder               "
					   ", fNoNDS               " ", CompositionOfPI		"
					   " FROM bm_RaspDetail " " WHERE Idn=:D2;"
					   " declare @viTmp int; SET  @viTmp=SCOPE_IDENTITY(); "
					   " SELECT @viTmp";
			 Qw2->Close();
			 Qw2->SQL->Clear();
			 Qw2->SQL->Add(vsSQLQw);
			 Qw2->Parameters->Items[0]->Value = viTmpIdnRas;
			 Qw2->Parameters->Items[1]->Value = PermisHdr.KeyUserStartProgramm;
			 Qw2->Parameters->Items[2]->Value = Qw->Fields->Fields[0]->AsInteger;
			 Qw2->Open();
			 viTmpIdnComplect = Qw2->Fields->Fields[0]->AsInteger;
			 vsSQLQw = "SELECT Idn FROM bm_RaspDetail WHERE PIdn = :D0 AND DateDel IS NULL AND fType = 2 ";
			 // Отбираем ПИ из комплектов
			 Qw2->Close();
			 Qw2->SQL->Clear();
			 Qw2->SQL->Add(vsSQLQw);
			 // int i= Qw->Fields->Fields[0]->AsInteger;
			 Qw2->Parameters->Items[0]->Value = Qw->Fields->Fields[0]->AsInteger;
			 Qw2->Open();
			 while (!Qw2->Eof) // Копируем ПИ
				   {
					vsSQLQw =
					"INSERT INTO bm_RaspDetail(  " "  PIdn	                "
					", idRasp   	 		" ", Id24TypeProduceIndex "
					", idAdvProduceClass  	" ", NameRaspDetail     	"
					", NumbNE             	" ", Year               	"
					", CostWithNDS        	" ", CostWithoutNDS     	"
					", CostNDS            	" ", ProcNDS           	"
					", Discount      	    " ", ProcDiscount     	"
					", fAdv              	" ", fAdvMIN              "
					", fType				" ", DateMod      		"
					", DateIns      		" ", IdIns                "
					", CostMINWithNDS       " ", CostMINWithoutNDS    "
					", idAdvTNClass	        " ", CostBaseWithNDS      "
					", CostBudjetWithNDS    " ", DateJobMIN           "
					", DateJobMAX	        " ", KanalSale	        "
					", Id32NameUnit			" ", Id32NameItemType		"
					", ItemId				" ", MergedCount	   		"
					", vOrder               " ", fNoNDS               "
					", AlterName            " ", NoteName )           "
					" SELECT TOP 1  		" "  :D0	                "
					", :D1		   	 		" ", Id24TypeProduceIndex "
					", idAdvProduceClass  	" ", '_Копия.'+NameRaspDetail     	"
					", NumbNE             	" ", Year               	"
					", CostWithNDS        	" ", CostWithoutNDS     	"
					", CostNDS            	" ", ProcNDS           	"
					", Discount      	    " ", ProcDiscount     	"
					", fAdv              	" ", fAdvMIN              "
					", fType				" ", DateMod      		"
					", GetDate()      		" ", :D2	                "
					", CostMINWithNDS       " ", CostMINWithoutNDS    "
					", idAdvTNClass	        " ", CostBaseWithNDS      "
					", CostBudjetWithNDS    " ", DateJobMIN           "
					", DateJobMAX	        " ", KanalSale	        "
					", Id32NameUnit			" ", Id32NameItemType		"
					", ItemId				" ", MergedCount	   		"
					", vOrder               " ", fNoNDS               "
					", '_Копия.'+AlterName            " ", NoteName             "
					" FROM bm_RaspDetail" " WHERE Idn=:D3;"
					" declare @viTmp int; SET  @viTmp=SCOPE_IDENTITY(); " " SELECT @viTmp";

					Qw3->Close();
					Qw3->SQL->Clear();
					Qw3->SQL->Add(vsSQLQw);
					Qw3->Parameters->Items[0]->Value = viTmpIdnComplect;
					Qw3->Parameters->Items[1]->Value = viTmpIdnRas;
					Qw3->Parameters->Items[2]->Value = PermisHdr.KeyUserStartProgramm;
					Qw3->Parameters->Items[3]->Value = Qw2->Fields->Fields[0]->AsInteger;
					Qw3->Open();
					// Заводим НЕ
					viTmpIdnPI = Qw3->Fields->Fields[0]->AsInteger;
					vsSQLQw = "INSERT INTO bm_RaspDetail(  " "  PIdn	                "
							  ", idRasp   	 		" ", Id24TypeProduceIndex "
							  ", idAdvProduceClass  	" ", NameRaspDetail     	"
							  ", NumbNE             	" ", Year               	"
							  ", CostWithNDS        	" ", CostWithoutNDS     	"
							  ", CostNDS            	" ", ProcNDS           	"
							  ", Discount      	    " ", ProcDiscount     	"
							  ", fAdv              	" ", fAdvMIN              "
							  ", fType				" ", DateMod      		"
							  ", DateIns      		" ", IdIns                "
							  ", CostMINWithNDS       " ", CostMINWithoutNDS    "
							  ", Id32NameUnit			" ", Id32NameItemType		"
							  ", ItemId				" ", IdnAxapta 			"
							  ", NameAxapta 			" ", ItemIdAxapta 		"
							  ", fNoNDS  	            " ", MergedCount	   )	"

							  " SELECT 		  		" "  :D0	                "
							  ", :D1		   	 		" ", Id24TypeProduceIndex "
							  ", idAdvProduceClass  	" ", NameRaspDetail     	"
							  ", NumbNE             	" ", Year               	"
							  ", CostWithNDS        	" ", CostWithoutNDS     	"
							  ", CostNDS            	" ", ProcNDS           	"
							  ", Discount      	    " ", ProcDiscount     	"
							  ", fAdv              	" ", fAdvMIN              "
							  ", fType				" ", DateMod      		"
							  ", GetDate()      		" ", :D2	                "
							  ", CostMINWithNDS       " ", CostMINWithoutNDS    "
							  ", Id32NameUnit			" ", Id32NameItemType		"
							  ", ItemId				" ", IdnAxapta 			"
							  ", NameAxapta 			" ", ItemIdAxapta 		"
							  ", fNoNDS               " ", MergedCount	   		"
					          " FROM bm_RaspDetail" " WHERE PIdn=:D3 AND DateDel is null";
					Qw3->Close();
					Qw3->SQL->Clear();
					Qw3->SQL->Add(vsSQLQw);
					Qw3->Parameters->Items[0]->Value = viTmpIdnPI;
					Qw3->Parameters->Items[1]->Value = viTmpIdnRas;
					Qw3->Parameters->Items[2]->Value = PermisHdr.KeyUserStartProgramm;
					Qw3->Parameters->Items[3]->Value = Qw2->Fields->Fields[0]->AsInteger;
					Qw3->ExecSQL();

					Qw2->Next();
					}    //end while (!Qw2->Eof) // Копируем ПИ
			 Qw->Next();
			 };  //end while (!Qw->Eof) // копируем комплекты

		vsSQLQw = "SELECT Idn FROM bm_RaspDetail "
				  " WHERE idRasp =:D0 AND PIdn IS NULL AND DateDel IS NULL AND fType = 2 ";
		// Отбираем ПИ вне комплектов
		Qw2->Close();
		Qw2->SQL->Clear();
		Qw2->SQL->Add(vsSQLQw);
		Qw2->Parameters->Items[0]->Value = QListRaspIdn->AsInteger;
		Qw2->Open();
		while (!Qw2->Eof) // копируем ПИ
			  {
			   vsSQLQw =
				"INSERT INTO bm_RaspDetail(  " "  PIdn	                "
				", idRasp   	 		" ", Id24TypeProduceIndex "
				", idAdvProduceClass  	" ", NameRaspDetail     	"
				", NumbNE             	" ", Year               	"
				", CostWithNDS        	" ", CostWithoutNDS     	"
				", CostNDS            	" ", ProcNDS           	"
				", Discount      	    " ", ProcDiscount     	"
				", fAdv              	" ", fAdvMIN              "
				", fType				" ", DateMod      		"
				", DateIns      		" ", IdIns                "
				", CostMINWithNDS       " ", CostMINWithoutNDS    "
				", idAdvTNClass	        " ", CostBaseWithNDS      "
				", CostBudjetWithNDS    " ", DateJobMIN           "
				", DateJobMAX	        " ", KanalSale 	        "
				", Id32NameUnit			" ", Id32NameItemType		"
				", ItemId				" ", vOrder               "
				", fNoNDS               " ", AlterName            "
				", NoteName )           " " SELECT TOP 1  		"
				"  PIdn	            	" ", :D0		   	 		"
				", Id24TypeProduceIndex " ", idAdvProduceClass  	"
				", '_Копия.'+NameRaspDetail     	" ", NumbNE             	"
				", Year               	" ", CostWithNDS        	"
				", CostWithoutNDS     	" ", CostNDS            	"
				", ProcNDS           	" ", Discount      	    "
				", ProcDiscount     	" ", fAdv              	"
				", fAdvMIN              " ", fType				"
				", DateMod      		" ", GetDate()      		"
				", :D1	                " ", CostMINWithNDS       "
				", CostMINWithoutNDS    " ", idAdvTNClass	        "
				", CostBaseWithNDS      " ", CostBudjetWithNDS    "
				", DateJobMIN           " ", DateJobMAX	        "
				", KanalSale	        " ", Id32NameUnit			"
				", Id32NameItemType		" ", ItemId				"
				", vOrder               " ", fNoNDS               "
				", '_Копия.'+AlterName            " ", NoteName             "
				" FROM bm_RaspDetail" " WHERE Idn=:D2;"
				" declare @viTmp int; SET  @viTmp=SCOPE_IDENTITY(); " " SELECT @viTmp";
			Qw3->Close();
			Qw3->SQL->Clear();
			Qw3->SQL->Add(vsSQLQw);
			Qw3->Parameters->Items[0]->Value = viTmpIdnRas;
			Qw3->Parameters->Items[1]->Value = PermisHdr.KeyUserStartProgramm;
			Qw3->Parameters->Items[2]->Value =
				Qw2->Fields->Fields[0]->AsInteger;
			Qw3->Open();
			viTmpIdnPI = Qw3->Fields->Fields[0]->AsInteger;
			vsSQLQw =
				"INSERT INTO bm_RaspDetail(  " "  PIdn	                "
				", idRasp   	 		" ", Id24TypeProduceIndex "
				", idAdvProduceClass  	" ", NameRaspDetail     	"
				", NumbNE             	" ", Year               	"
				", CostWithNDS        	" ", CostWithoutNDS     	"
				", CostNDS            	" ", ProcNDS           	"
				", Discount      	    " ", ProcDiscount     	"
				", fAdv              	" ", fAdvMIN              "
				", fType				" ", DateMod      		"
				", DateIns      		" ", IdIns                "
				", CostMINWithNDS       " ", CostMINWithoutNDS    "
				", Id32NameUnit			" ", Id32NameItemType		"
				", ItemId				" ", IdnAxapta 			"
				", NameAxapta 			" ", ItemIdAxapta 		"
				", fNoNDS  	            " ", MergedCount	   )	"
				" SELECT 		  		" "  :D0	                "
				", :D1		   	 		" ", Id24TypeProduceIndex "
				", idAdvProduceClass  	" ", NameRaspDetail     	"
				", NumbNE             	" ", Year               	"
				", CostWithNDS        	" ", CostWithoutNDS     	"
				", CostNDS            	" ", ProcNDS           	"
				", Discount      	    " ", ProcDiscount     	"
				", fAdv              	" ", fAdvMIN              "
				", fType				" ", DateMod      		"
				", GetDate()      		" ", :D2	                "
				", CostMINWithNDS       " ", CostMINWithoutNDS    "
				", Id32NameUnit			" ", Id32NameItemType		"
				", ItemId				" ", IdnAxapta 			"
				", NameAxapta 			" ", ItemIdAxapta 		"
				", fNoNDS              	" ", MergedCount	   		"
				" FROM bm_RaspDetail" " WHERE PIdn=:D3 AND DateDel is null";
			Qw3->Close();
			Qw3->SQL->Clear();
			Qw3->SQL->Add(vsSQLQw);
			Qw3->Parameters->Items[0]->Value = viTmpIdnPI;
			Qw3->Parameters->Items[1]->Value = viTmpIdnRas;
			Qw3->Parameters->Items[2]->Value = PermisHdr.KeyUserStartProgramm;
			Qw3->Parameters->Items[3]->Value = Qw2->Fields->Fields[0]->AsInteger;
			Qw3->ExecSQL();

			Step = "1";         //added by R.Perkatov (2014-03-28)
			CreateLinkBlock();  //added by R.Perkatov (2014-03-16)

			Qw2->Next();
		}
		// Копирование списков утверждающих и рассылки
		vsSQLQw =
			" DECLARE @IdRaspNew int, @IdIns int, @IdRasp int " " SET  @IdRaspNew=:D0;    "
			" SET  @IdIns=:D1;	     " " SET  @IdRasp=:D2;	     "
			" INSERT INTO bm_ListMail 		 " " ( IdRasp                "
			" , IDUser                " " , Mail                  "
			" , IdnEmplDol            " " , fTurn                 "
			" , fTurnSheet            " " , fType                 "
			" , Note                  " " , fResault              "
			" , MailText              " " , MailPathAddFiles      "
			" , DateIns               " " , IdIns )               "
			" SELECT                        " "   @IdRaspNew            "
			" , IDUser                " " , Mail                  "
			" , IdnEmplDol            " " , fTurn                 "
			" , fTurnSheet            " " , fType                 "
			" , ''	                 " " , 0		             "
			" , ''                    " " , MailPathAddFiles      "
			" , GetDate()             " " , @IdIns                "
			" FROM bm_ListMail " " WHERE IdRasp=@IdRasp AND DateDel is NULL;";
		Qw->Close();
		Qw->SQL->Clear();
		Qw->SQL->Add(vsSQLQw);
		Qw->Parameters->Items[0]->Value = viTmpIdnRas;
		Qw->Parameters->Items[1]->Value = PermisHdr.KeyUserStartProgramm;
		Qw->Parameters->Items[2]->Value = QListRaspIdn->AsInteger;
		Qw->ExecSQL();
		///
	};  //end if (viTmpIdnRas > 0)

	Qw->Close();
	Qw2->Close();
	Qw3->Close();
	// Копирование Комментариев

	vsSQLQw =
		" SELECT TOP 1 Idn FROM bm_Comments WHERE idRasp=:D0 AND DateDel IS NULL;";
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	Qw->Parameters->Items[0]->Value = QListRaspIdn->AsInteger;
	Qw->Open();
	viTmpOldIdnComments = Qw->Fields->Fields[0]->AsInteger;
	vsSQLQw =
		"INSERT INTO bm_Comments(  " "   idRasp" " , TypeCost"
		" , Id256NameDiscount" " , Id256NameAction" " , Id256CostDiscount"
		" , DateRealization" " , PrognozEffects" " , GrantingConditions"
		" , DateIns" " , IdIns)" " SELECT   " "  :D0" " , TypeCost"
		" , Id256NameDiscount" " , Id256NameAction" " , Id256CostDiscount"
		" , DateRealization" " , PrognozEffects" " , GrantingConditions"
		" , GetDate()" " , :D1" " FROM bm_Comments"
		" WHERE Idn=:D2 AND DateDel IS NULL;" " declare @viTmp int; SET  @viTmp=SCOPE_IDENTITY(); "
		" SELECT @viTmp";
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	Qw->Parameters->Items[0]->Value = viTmpIdnRas;
	Qw->Parameters->Items[1]->Value = PermisHdr.KeyUserStartProgramm;
	Qw->Parameters->Items[2]->Value = viTmpOldIdnComments;
	Qw->Open();
	viTmpNewIdnComments = Qw->Fields->Fields[0]->AsInteger;

	vsSQLQw =
		" SELECT IdCheckLists FROM bm_CommentsCheckLists WHERE IdComments=:D0 AND DateDel IS NULL;";
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	Qw->Parameters->Items[0]->Value = viTmpOldIdnComments;
	Qw->Open();

	while (Qw->Eof == false) {
		viTmpOldIdnCheckLists = Qw->Fields->Fields[0]->AsInteger;
		vsSQLQw =
			"INSERT INTO bm_CheckLists(  " "   id256TextActionPurpose"
			" , id256TextGroupClients" " , id256TextAdvancementChannel"
			" , TypeFiеld" " , DateIns" " , IdIns)" " SELECT   "
			"   id256TextActionPurpose" " , id256TextGroupClients"
			" , id256TextAdvancementChannel" " , TypeFiеld" " , GetDate()"
			" , :D0" " FROM bm_CheckLists" " WHERE Idn=:D1 AND DateDel IS NULL;"
			" declare @viTmp int; SET  @viTmp=SCOPE_IDENTITY(); " " SELECT @viTmp";
		Qw2->Close();
		Qw2->SQL->Clear();
		Qw2->SQL->Add(vsSQLQw);
		Qw2->Parameters->Items[0]->Value = PermisHdr.KeyUserStartProgramm;
		Qw2->Parameters->Items[1]->Value = viTmpOldIdnCheckLists;
		Qw2->Open();

		viTmpNewIdnCheckLists = Qw2->Fields->Fields[0]->AsInteger;

		vsSQLQw =
			"INSERT INTO bm_CommentsCheckLists(  " "   IdComments"
			" , IdCheckLists" " , DateIns" " , IdIns)" " VALUES(   " "   :D0"
			" , :D1" " , GetDate()" " , :D2)";
		Qw2->Close();
		Qw2->SQL->Clear();
		Qw2->SQL->Add(vsSQLQw);
		Qw2->Parameters->Items[0]->Value = viTmpNewIdnComments;
		Qw2->Parameters->Items[1]->Value = viTmpNewIdnCheckLists;
		Qw2->Parameters->Items[2]->Value = PermisHdr.KeyUserStartProgramm;
		Qw2->ExecSQL();

		Qw->Next();
	}

	///
	Qw->Close();
	Qw2->Close();

	viIdn = viTmpIdnRas;

	chbMySheet->Checked = false;
	chbMySheetNow->Checked = false;
	cbUserBM->ItemIndex = cbUserBM->Items->IndexOf("ВСЕ");
	cbNameStatus->ItemIndex = cbNameStatus->Items->IndexOf("ВСЕ");
	cbGroupManagerBoss->ItemIndex = cbGroupManagerBoss->Items->IndexOf("ВСЕ");
	cbGroupManager->ItemIndex = cbGroupManager->Items->IndexOf("ВСЕ");
	edFindText->Text = "";

	TmListRasp->Enabled = false;
	TmListRasp->Enabled = true;
	// 2013-07-02 Чернышов
	edFindText->Text = "";
	cbNameStatus->ItemIndex=cbNameStatus->Items->IndexOf("Черновик");
	UpdateRasp(viIdn);
}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::btCopyRaspDetailClick(TObject *Sender)
{
  int TmpMAXVOrder;
  if ((QListRasp->Active == false) || (QListRasp->Eof == true))
	 {
	  ShowMessage("Выберите распоряжение.");
	  return;
	  }

	if ((QListRaspIdIns->AsInteger != PermisHdr.KeyUserStartProgramm) &&
		 !MainForm->flEditAllRasp &&
		 !fPermission ) // 2013-06-27 Чернышов
	{
		ShowMessage("Cоздание ПИ невозможно. \n Только создавший распоряжение может его создавать");
		return;
	}

	if ((QRaspDetail->Active == false) || (QRaspDetail->Eof == true) ||
		(QRaspDetailfType->AsInteger != 2)) {
		ShowMessage("Выберите ПИ.");
		return;
	}

  Step = "2";

	///Находим MAX VOrder в распoряжении
	vsSQLQw = "SELECT MAX(isnull(VOrder,0)) "
			  "  FROM bm_RaspDetail "
			  " WHERE fType in (1,2) AND DateDel is null AND IdRasp = " +IntToStr(QListRaspIdn->AsInteger);
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	Qw->Open();
	TmpMAXVOrder = Qw->Fields->Fields[0]->AsInteger;

	///

	vsSQLQw =
		"INSERT INTO bm_RaspDetail(  " "  PIdn	                "
		", idRasp   	 		" ", Id24TypeProduceIndex "
		", idAdvProduceClass  	" ", NameRaspDetail     	"
		", NumbNE             	" ", Year               	"
		", CostWithNDS        	" ", CostWithoutNDS     	"
		", CostNDS            	" ", ProcNDS           	"
		", Discount      	    " ", ProcDiscount     	"
		", fAdv              	" ", fAdvMIN              "
		", fType				" ", DateMod      		"
		", DateIns      		" ", IdIns                "
		", CostMINWithNDS       " ", CostMINWithoutNDS	"
		", idAdvTNClass         " ", CostBaseWithNDS      "
		", CostBudjetWithNDS    " ", DateJobMIN           "
		", DateJobMAX	        " ", KanalSale	        "
		", Id32NameUnit			" ", Id32NameItemType		"
		", ItemId				" ", fNoNDS               "
		", MergedCount	   		" ", VOrder	    		"
		", AlterName            " ", NoteName             "
		",CompositionOfPI )     " " SELECT TOP 1  		"
		"  PIdn	                " ", idRasp   	 		"
		", Id24TypeProduceIndex " ", idAdvProduceClass  	"
		", '_Копия.'+NameRaspDetail     	" ", NumbNE             	"
		", Year               	" ", CostWithNDS        	"
		", CostWithoutNDS     	" ", CostNDS            	"
		", ProcNDS           	" ", Discount      	    "
		", ProcDiscount     	" ", fAdv              	"
		", fAdvMIN              " ", fType				"
		", DateMod      		" ", GetDate()      		"
		", :D0	                " ", CostMINWithNDS       "
		", CostMINWithoutNDS    " ", idAdvTNClass         "
		", CostBaseWithNDS      " ", CostBudjetWithNDS    "
		", DateJobMIN           " ", DateJobMAX	        "
		", KanalSale 	        " ", Id32NameUnit			"
		", Id32NameItemType		" ", ItemId				"
		", fNoNDS               " ", MergedCount	   		"
		", :D1		    		" ", '_Копия.'+AlterName            "
		", NoteName             " ", CompositionOfPI " " FROM bm_RaspDetail"
		" WHERE Idn=:D2;" " declare @viTmp int; SET  @viTmp=SCOPE_IDENTITY(); "
		" SELECT @viTmp";
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	Qw->Parameters->Items[0]->Value = PermisHdr.KeyUserStartProgramm;
	Qw->Parameters->Items[1]->Value = TmpMAXVOrder + 1;
	Qw->Parameters->Items[2]->Value = QRaspDetailIdn->AsInteger;
	Qw->Open();

	viTmpIdn = Qw->Fields->Fields[0]->AsInteger;
	vsSQLQw =
		"INSERT INTO bm_RaspDetail(  	" "  PIdn	                "
		", idRasp   	 		" ", Id24TypeProduceIndex "
		", idAdvProduceClass  	" ", NameRaspDetail     	"
		", NumbNE             	" ", Year               	"
		", CostWithNDS        	" ", CostWithoutNDS     	"
		", CostNDS            	" ", ProcNDS           	"
		", Discount      	    " ", ProcDiscount     	"
		", fType				" ", fAdv              	"
		", fAdvMIN              " ", DateMod      		"
		", DateIns      		" ", IdIns                "
		", CostMINWithNDS       " ", CostMINWithoutNDS    "
		", Id32NameUnit			" ", Id32NameItemType		"
		", ItemId				" ", IdnAxapta 			"
		", NameAxapta 			" ", ItemIdAxapta 		"
		", fNoNDS  	            " ", MergedCount	    	"
		",CompositionOfPI )     " " SELECT 		  		"
		"  :D0	                " ", idRasp  	 			"
		", Id24TypeProduceIndex " ", idAdvProduceClass  	"
		", NameRaspDetail     	" ", NumbNE             	"
		", Year               	" ", CostWithNDS        	"
		", CostWithoutNDS     	" ", CostNDS            	"
		", ProcNDS           	" ", Discount      	    "
		", ProcDiscount     	" ", fType				"
		", fAdv              	" ", fAdvMIN              "
		", DateMod      		" ", GetDate()      		"
		", :D1                  " ", CostMINWithNDS       "
		", CostMINWithoutNDS    " ", Id32NameUnit			"
		", Id32NameItemType		" ", ItemId				"
		", IdnAxapta 			" ", NameAxapta 			"
		", ItemIdAxapta 		" ", fNoNDS               "
		", MergedCount	   		" ", CompositionOfPI      "
		" FROM bm_RaspDetail" " WHERE PIdn=:D2 AND DateDel is null;";

	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	Qw->Parameters->Items[0]->Value = viTmpIdn;
	Qw->Parameters->Items[1]->Value = PermisHdr.KeyUserStartProgramm;
	Qw->Parameters->Items[2]->Value = QRaspDetailIdn->AsInteger;
	Qw->ExecSQL();

	CreateLinkBlock();

	if (viTmpIdn > 0) {
		TmRaspDetailTimer(Sender);
		try {
			Opts.Clear();
			locvalues[0] = Variant(viTmpIdn);
			QRaspDetail->Locate("Idn", locvalues, Opts);
		}
		catch (...) {
		};
		btUpdRaspDetailClick(Sender);
	};
}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::RzToolButton3Click(TObject *Sender) {
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL

#endif
#define TFR TFrAccountPrint
#define FR  FrAccountPrint
#define FL  flFrAccountPrint
	if (QListRasp->RecordCount == 0) {
		ShowMessage("Выберите распоряжение.");
		return;
	}
	else
		viIdn = QListRaspIdn->AsInteger; // Передаем Idn записи для печати

	{
		switch (FL) {
		case WINCLS:
			FR = new TFR(Application);
			FL = WINWRK;
			FR->Caption = "Печать распоряжения";
			FR->OpenFormAccountPrint(11, viIdn, 1);
			FR->Show();
			break;
		case WINWRK:
			if (FR->WindowState == wsMinimized) {
				FR->WindowState = wsNormal;
			}
			FR->Caption = "Печать распоряжения";
			FR->OpenFormAccountPrint(11, viIdn, 1);
			FR->Show();
			break;
		}
	}

}
// ---------------------------------------------------------------------------

// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::RzToolButton2Click(TObject *Sender) {
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL

#endif
#define TFR TFrAccountPrint
#define FR  FrAccountPrint
#define FL  flFrAccountPrint
	// int viIdn ;
	if (QListRasp->RecordCount == 0) {
		ShowMessage("Выберите распоряжение.");
		return;
	}
	else
		viIdn = QListRaspIdn->AsInteger; // Передаем Idn записи для печати

	{
		switch (FL) {
		case WINCLS:
			FR = new TFR(Application);
			FL = WINWRK;
			FR->Caption = "Печать детализации";
			FR->OpenFormAccountPrint(101, viIdn, 1);
			FR->Show();
			break;
		case WINWRK:
			if (FR->WindowState == wsMinimized) {
				FR->WindowState = wsNormal;
			}
			FR->Caption = "Печать детализации";
			FR->OpenFormAccountPrint(101, viIdn, 1);
			FR->Show();
			break;
		}
	}

}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::cbGroupManagerBossChange(TObject *Sender) {
	vsSQLQw =
		"SELECT auId,auFamIO " "FROM aa_Users a "
		"INNER JOIN bm_GroupManager c ON(c.idManager=a.auId) " "WHERE   auDateDel is null and TypeM=1 ";
	if (!((cbGroupManagerBoss->ItemIndex == -1) ||
		(cbGroupManagerBoss->Text == "ВСЕ")))
		vsSQLQw = vsSQLQw + " and c.PidManager=:D0 ";
	vsSQLQw = vsSQLQw + "ORDER BY auFamIO ";
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	if (!((cbGroupManagerBoss->ItemIndex == -1) ||
		(cbGroupManagerBoss->Text == "ВСЕ"))) {
		Qw->Parameters->Items[0]->Value =
			(int)cbGroupManagerBoss->Items->Objects
			[cbGroupManagerBoss->ItemIndex];
	};
	Qw->Open();
	cbGroupManager->Clear();
	cbGroupManager->Add("ВСЕ");
	while (Qw->Eof == false) {
		cbGroupManager->AddObject(Qw->Fields->Fields[1]->AsString,
			(TObject*)Qw->Fields->Fields[0]->AsInteger);
		Qw->Next();
	}
	Qw->Close();
	Qw->Close();
}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::bt(TObject *Sender) {
	/* #ifdef  TFR
	 #undef  TFR
	 #undef  FR
	 #undef  FL
	 #endif
	 #define TFR TFrTraceMail
	 #define FR  FrTraceMail
	 #define FL  flFrTraceMail

	 if(QListRasp->RecordCount==0) {ShowMessage("Выберите распоряжение."); return;}
	 else  viIdn = QListRaspIdn->AsInteger;
	 switch(FL)
	 {case WINCLS:   FR=new TFR(Application);FL=WINWRK;
	 FR->viRaspIdn=viIdn;
	 FR->WindowState=wsNormal;FR->Show();break;
	 case WINWRK:   if(FR->WindowState==wsMinimized){FR->WindowState=wsMaximized;}
	 FR->viRaspIdn=viIdn;
	 FR->Show();break;
	 } */

#ifdef  TFR
#undef  TFR
#undef  FR
#endif
#define TFR TFrTraceMail
#define FR  FrTraceMail

	if (QListRasp->RecordCount == 0) {
		ShowMessage("Контроль рассылок");
		return;
	}
	else
		viIdn = QListRaspIdn->AsInteger;
	FR = new TFR(Application);
	FR->viRaspIdn = viIdn;
	FR->ShowModal();
	FR->WindowState = wsMinimized;
	delete(FR);

	QListRasp->Close();
	QListRasp->Open();
}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::RzToolButton6Click(TObject *Sender) {
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL

#endif
#define TFR TFrAccountPrint
#define FR  FrAccountPrint
#define FL  flFrAccountPrint
	int viIdn;
	if (QListRasp->RecordCount == 0) {
		ShowMessage("Выберите распоряжение.");
		return;
	}
	else
		viIdn = QListRaspIdn->AsInteger; // Передаем Idn записи для печати
	{
		switch (FL) {
		case WINCLS:
			FR = new TFR(Application);
			FL = WINWRK;
			FR->Caption = "Печать согласования";
			FR->OpenFormAccountPrint(41, viIdn, 1);
			FR->Show();
			break;
		case WINWRK:
			if (FR->WindowState == wsMinimized) {
				FR->WindowState = wsNormal;
			}
			FR->Caption = "Лист согласования";
			FR->OpenFormAccountPrint(41, viIdn, 1);
			FR->Show();
			break;
		}
	}

}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::btSheetClick(TObject *Sender) {
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#endif
#define TFR TFrListMail
#define FR  FrListMail
#define FL  flFrListMail
	viIdn = QListRaspIdn->AsInteger;
	switch (FL) {
	case WINCLS:
		FR = new TFR(Application);
		FL = WINWRK;
		FR->IdRasp = QListRaspIdn->AsInteger;
		FR->WindowState = wsNormal;
		FR->pcSoglasovanieRassilka->ActivePage = FR->tsSoglasovanie;
		FR->Show();
		break;
	case WINWRK:
		FR->IdRasp = QListRaspIdn->AsInteger;
		if (FR->WindowState == wsMinimized) {
			FR->WindowState = wsMaximized;
		}
		FR->pcSoglasovanieRassilka->ActivePage = FR->tsSoglasovanie;
		FR->Show();
		break;
	}
}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::FormActivate(TObject *Sender) {
	fRefresh = false;
	// fPermission=true;
	if (QListRasp->Active)
		viIdn = QListRaspIdn->AsInteger;
	TmListRasp->Enabled = false;
	TmListRasp->Enabled = true;

  if (MainForm->flRaspExcel == true)
     {RzToolButton13->Enabled = true;}
}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::RzToolButton4Click(TObject *Sender) {
	viIdnDetail = QRaspDetailIdn->AsInteger;
	TmRaspDetail->Enabled = true;
}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::FormCloseQuery(TObject *Sender,
	bool &CanClose) {
	if (cbGroupManagerBoss->ItemIndex != -1) {
		try {
			SetupIni.sBisniessMenedger.cbGroupManagerBoss =
				((int)cbGroupManagerBoss->Items->Objects
				[cbGroupManagerBoss->ItemIndex]);
		}
		catch (...) {
		};
	} // Текущая позиция cbGroupManagerBoss
	if (cbGroupManager->ItemIndex != -1) {
		try {
			SetupIni.sBisniessMenedger.cbGroupManager =
				((int)cbGroupManager->Items->Objects
				[cbGroupManager->ItemIndex]);
		}
		catch (...) {
		};
	} // Текущая позиция cbGroupManagerBoss
	if (cbNameStatus->ItemIndex != -1) {
		try {
			SetupIni.sBisniessMenedger.cbNameStatus =
				((int)cbNameStatus->Items->Objects[cbNameStatus->ItemIndex]);
		}
		catch (...) {
		};
	} // Текущая позиция cbGroupManagerBoss
	try {
		SetupIni.sBisniessMenedger.dtDateCreateMIN = dtDateCreateMIN->Date;
	}
	catch (...) {
	}; // Date созжания распоряжения начальная для фильтра поиска
	try {
		SetupIni.sBisniessMenedger.chbDateCreateMIN = chbDateCreateMIN->Checked;
	}
	catch (...) {
	}; // Проверка флажка на проверку по dtDateCreateMIN
	try {
		SetupIni.sBisniessMenedger.chbMySheet = chbMySheet->Checked;
	}
	catch (...) {
	}; // Проверка флажка на выбор "Только своё"
	try {
		SetupIni.sBisniessMenedger.chbMySheetNow = chbMySheetNow->Checked;
	}
	catch (...) {
	}; // Проверка флажка на выбор "Текущие"
	try {
		SetupIni.sBisniessMenedger.spPI = vispPI;
	}
	catch (...) {
	}; // Положение сплиттера на Подписных Индексах
	SetupIni.sBisniessMenedger.Chk =
		(MainForm->CheckSumParam((char *)&SetupIni.sBisniessMenedger.Chk,
		sizeof(SetupIni.sBisniessMenedger)) - 2); //

}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::btRefrshRaspDetailEXELClick
	(TObject *Sender) {
	QRaspDetailEXEL->Close();
	QRaspDetailEXEL->Parameters->Items[0]->Value = QListRaspIdn->AsInteger;
	QRaspDetailEXEL->Open();
}
// --------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBisniessMenedger::RzToolButton10Click(TObject *Sender)
{
  MainForm->SaveXlsFiles(cxRaspDetail, "FrBisniessMenedger", "");
}
// --------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBisniessMenedger::IntegerField17GetText(TField *Sender, UnicodeString &Text, bool DisplayText)
{
  if (IntegerField17->AsString == "")
	 {Text = "Не задан";}
  else
	 {
	  switch (IntegerField17->AsInteger)
			 {
			  case  0: Text = "годовой";
					   break;
			  case  1: Text = "1п\г";
					   break;
			  case  2: Text = "2п\г";
					   break;
			  case  3: Text = "1 квартал";
					   break;
			  case  4: Text = "2 квартал";
					   break;
			  case  5: Text = "3 квартал";
					   break;
			  case  6: Text = "4 квартал";
					   break;
			  case  7: Text = "месячный";
					   break;
			  //all from 8 to 22 added by R.Perkatov 2014-05-13
			  case  8: Text = "полуторагодовой";
					   break;
			  case  9: Text = "трёхдневный";
					   break;
			  case 10: Text = "четырёхмесячный";
					   break;
			  case 11: Text = "трёхгодовой";
					   break;
			  case 12: Text = "60 дней";
					   break;
			  case 13: Text = "90 дней";
					   break;
			  case 14: Text = "150 дней";
					   break;
			  case 15: Text = "180 дней";
					   break;
			  case 16: Text = "210 дней";
					   break;
			  case 17: Text = "240 дней";
					   break;
			  case 18: Text = "270 дней";
					   break;
			  case 19: Text = "300 дней";
					   break;
			  case 20: Text = "330 дней";
					   break;
			  case 21: Text = "пятилетний";
					   break;
			  case 22: Text = "пятидневный";
					   break;
			  case 23: Text = "510 дней";
					   break;
			 }
	  } //end else
}
// --------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBisniessMenedger::TmRaspDetailEXELTimer(TObject *Sender)
{
  TmRaspDetailEXEL->Enabled = false;
  QRaspDetail->DisableControls();
  // Скопинцева Диана, Сорокин Денис 28.06.2012 13:24 Закомментировано в связи с торможением.
  // btRefrshRaspDetailEXELClick(Sender);
  QRaspDetail->EnableControls();
}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::pcRaspDetailPageChange(TObject *Sender) {
	TmRaspDetailEXEL->Enabled = true;
}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::spPICanResize(TObject *Sender,
	int &NewWidth, int &NewHeight, bool &Resize) {
//	int i;
//	i = 1;
	if (!fspPI)
		vispPI = spPI->Percent;
}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::cxGridDBBandedTableView1CustomDrawCell
	(TcxCustomGridTableView *Sender, TcxCanvas *ACanvas,
	TcxGridTableDataCellViewInfo *AViewInfo, bool &ADone) { /*
	 TColor Col;
	 int viCol;
	 if(QListRasp->Active==false)return;
	 else{
	 if(AViewInfo->Selected==true){ACanvas->Brush->Color=clHighlight;}
	 else{
	/*	if(AViewInfo->GridRecord->Values[11].IsNull()==true)return;

	 AnsiString	 iiii=AViewInfo->GridRecord->Values[11];

	 if ((AViewInfo->GridRecord->Values[11])=="На утверждениии") viCol= 65408;

	 //	viCol= QListRaspId24NameStatus->AsInteger;
	 Col=(TColor)viCol;
	 //	Col=(TColor)(int)AViewInfo->GridRecord->Values[19];

	 //	if(Col==16777215){return;}
	 ACanvas->Brush->Color=Col;
	 //	viCol= 16579836;

	 }
	 if( QListRaspiText->AsString=="На утверждении") ACanvas->Brush->Color== 65408;
	 if( QListRaspiText->AsString=="Черновик") ACanvas->Brush->Color== 16579836;
	 if( QListRaspiText->AsString=="Утверждено") ACanvas->Brush->Color== 3201521;
	 if( QListRaspiText->AsString=="Отклоненные") ACanvas->Brush->Color== 1121783;
	 //	ACanvas->Brush->Color=viCol;
	 } */
	if (QListRasp->Active == false)
		return;
	else {
		if (AViewInfo->Selected == true) {
			ACanvas->Brush->Color = clHighlight;
		}
		else {
			if (!MainForm->flEditClass) {
				if ((int)(AViewInfo->GridRecord->Values[19]) == 5448413);
				// Отказ)
				ACanvas->Brush->Color = clRed;
				if ((int)(AViewInfo->GridRecord->Values[19]) == 5448351)
					// черновик
						ACanvas->Brush->Color = clWhite;
				if ((int)(AViewInfo->GridRecord->Values[19]) == 5448350)
					// На утверждении
						ACanvas->Brush->Color = clLime;
				if ((int)(AViewInfo->GridRecord->Values[19]) == 5448352)
					// Утверждено
						ACanvas->Brush->Color = clYellow;
				if ((int)(AViewInfo->GridRecord->Values[19]) == 5448428)
					// Ценовой комитет
						ACanvas->Brush->Color = clBlue;
				if ((int)(AViewInfo->GridRecord->Values[19]) == 5448432)
					// Шаблоны
						ACanvas->Brush->Color = clTeal;
			}
		}
	}
	// cxGrid2->Canvas->FillRect(Rect);
	// cxGrid2->DefaultDrawColumnCell(Rect, DataCol, Column, State);

}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::RzToolButton7Click(TObject *Sender) {
	vsSQLQw =
		" SELECT AddFile, NameFile FROM bm_AddFiles WHERE DateDel is null AND idRasp=:D0";
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	Qw->Parameters->Items[0]->Value = QListRaspIdn->AsInteger;
	Qw->Open();
	while (Qw->Eof == false) {
		((TBlobField*)(Qw->Fields->Fields[0]))->SaveToFile
			(AnsiString(MainForm->DirFileSetup) + "\\" + vFILEPATHTEMP + "\\" +
			"Код " + IntToStr(QListRaspIdn->AsInteger) + "_" +
			Qw->Fields->Fields[1]->AsString);
		Qw->Next();
	}
	Qw->Close();
	ShellExecute(0, NULL, "c:\\Work_DB\\DesignerOrders\\EXEC\\TEMP", "",
		"c:\\Work_DB\\DesignerOrders\\EXEC\\TEMP", SW_SHOWDEFAULT);
}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::btOldtUpdRaspDetailClick(TObject *Sender) {

#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#endif
#define TFR TFrChancheNE
#define FR  FrChancheNE

	FR = new TFR(Application);
	FR->ShowModal();
	FR->WindowState = wsMinimized;
	if (FR->ModalResult == mrOk) {
		RzPanel300->Visible = true;
		RzPanel300->Refresh();
		QMassChanche->Close();
		QMassChanche->Parameters->Items[0]->Value =
			FR->QNE_AxaptaIdn->AsInteger;
		QMassChanche->Parameters->Items[1]->Value =
			FR->IntegerField1->AsInteger;
		QMassChanche->Parameters->Items[2]->Value =
			PermisHdr.KeyUserStartProgramm;
		QMassChanche->Parameters->Items[3]->Value = QListRaspIdn->AsInteger;
		QMassChanche->ExecSQL();

	}
	delete(FR);
	TmRaspDetail->Enabled = true;
	RzPanel300->Visible = false;

}

// ---------------------------------------------------------------------------
// ---------------------------------------------------------------------------
// _______________ ДИАНА _______________
void __fastcall TFrBisniessMenedger::LoadPicList(TStrings *Seller)
{ // Загрузка нового листа выбора
	AnsiString Sl;
	TStrings *S;
	TTreeNodes *Sn;
	TField *F, *Fi, *Ft;
	TADOQuery *Qi;
	int i;

	Qi = Qw;

	if (Seller != NULL) {
		S = Seller;
		Qi->Close();
		Qi->SQL->Clear();
		Qi->SQL->Add
			(" select Idn,ShortName from dbo.clt_Seller where [default]=1 ");
		Qi->Open();
		Fi = Qi->Fields->Fields[0];
		F = Qi->Fields->Fields[1];
		S->Clear();
		i = Qi->RecordCount;
		i = i / 2;
		if (i > 9) {
			i = 9;
		}
		while (Qi->Eof == false) {
			S->AddObject(F->AsString, (TObject*)Fi->AsInteger);
			Qi->Next();
		}
		Qi->Close();
		RzCheckList1->Columns = i + 1;

	}
}
// ---------------------------------------------------------------------------
// _______________ ДИАНА _______________

void __fastcall TFrBisniessMenedger::tlRaspDetailCustomDrawDataCell
	(TcxCustomTreeList *Sender, TcxCanvas *ACanvas,
	TcxTreeListEditCellViewInfo *AViewInfo, bool &ADone) {
	if (QRaspDetail->Active == false)
		return;
	else {
		if (AViewInfo->Selected == true) {
			ACanvas->Brush->Color = clHighlight;
		}
		else {
			if (!MainForm->flEditClass) {
				if ((int)(AViewInfo->Node->Values[28]) == 1)
					ACanvas->Brush->Color = (TColor)6049258;
				// Не сходятся суммы из за отключенного расчета НДС)

			}
		}
	}
}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::QListRaspDateRaspGetText(TField *Sender,
	UnicodeString &Text, bool DisplayText) {
	TDateTime vtTmp = TDateTime(1900, 01, 01);
	if (QListRaspDateRasp->Value == vtTmp) {
		Text = "";
	}
	else
		Text = QListRaspDateRasp->Value;
	// AnsiString vsTmp = Text;
	// if(TDateTime(Text)==vtTmp)
	// {DisplayText=false;}
	// else DisplayText=true;
}
// --------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBisniessMenedger::QRaspDetailfAdvGetText(TField *Sender, UnicodeString &Text, bool DisplayText)
{
  if (QRaspDetailfAdv->AsString == "")
	 {Text = "Не задан";}
  else
	 {
	  switch (QRaspDetailfAdv->AsInteger)
			 {
			  case  0: Text = "годовой";
					   break;
			  case  1: Text = "1п\г";
					   break;
			  case  2: Text = "2п\г";
					   break;
			  case  3: Text = "1 квартал";
					   break;
			  case  4: Text = "2 квартал";
					   break;
			  case  5: Text = "3 квартал";
					   break;
			  case  6: Text = "4 квартал";
					   break;
			  case  7: Text = "раз в год";
					   break;
			  //all from 8 to 22 added by R.Perkatov 2014-05-13
			  case  8: Text = "полуторагодовой";
					   break;
			  case  9: Text = "трёхдневный";
					   break;
			  case 10: Text = "четырёхмесячный";
					   break;
			  case 11: Text = "трёхгодовой";
					   break;
			  case 12: Text = "60 дней";
					   break;
			  case 13: Text = "90 дней";
					   break;
			  case 14: Text = "150 дней";
					   break;
			  case 15: Text = "180 дней";
					   break;
			  case 16: Text = "210 дней";
					   break;
			  case 17: Text = "240 дней";
					   break;
			  case 18: Text = "270 дней";
					   break;
			  case 19: Text = "300 дней";
					   break;
			  case 20: Text = "330 дней";
					   break;
			  case 21: Text = "пятилетний";
					   break;
			  case 22: Text = "пятидневный";
					   break;
			  case 23: Text = "510 дней";
					   break;
			  }
	  }
}
// --------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBisniessMenedger::tlRaspDetailGetNodeImageIndex
	(TcxCustomTreeList *Sender, TcxTreeListNode *ANode,
	TcxTreeListImageIndexType AIndexType, Uitypes::TImageIndex &AIndex) {
	// Подставить иконку
	int i = ANode->Values[tlRaspDetailfType->ItemIndex]; {
		switch (i) {
		case 1:
			if (ANode->Expanded == true)
				AIndex = 1;
			else
				AIndex = 1;
			break;

		case 2:
			if (ANode->Expanded == true)
				AIndex = 2;
			else
				AIndex = 2;

			break;
		case 3:
			if (ANode->Expanded == true)
				AIndex = 3;
			else
				AIndex = 3;
			break;

		case 4:
			if (ANode->Expanded == true)
				AIndex = 4;
			else
				AIndex = 4;
			break;
		}
	}
}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::btUpClick(TObject *Sender) {
	int TmpSourseOrder, TmpTargetOrder, TmpIdnOrder;
	TmpSourseOrder = QRaspDetailVOrder->AsInteger;
	viIdnDetail = QRaspDetailIdn->AsInteger;
	vsSQLQw =
		" DECLARE @IdRasp int, @VOrder int, @PIdn int ; " " SET @IdRasp=:D0; "
		" SET @VOrder=:D1; " " SET @PIdn=:D2; "
		" SELECT TOP 1 Idn, VOrder FROM bm_RaspDetail WHERE  DateDel is null AND fType in (1,2) AND IdRasp=@IdRasp AND isnull(PIdn,0)=isnull(@PIdn,0) AND VOrder= " " (SELECT MAX(VOrder) FROM  bm_RaspDetail WHERE fType in (1,2) AND DateDel is null AND IdRasp=@IdRasp AND VOrder< @VOrder AND isnull(PIdn,0)=isnull(@PIdn,0) )";
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	Qw->Parameters->Items[0]->Value = QRaspDetailidRasp->AsInteger;
	Qw->Parameters->Items[1]->Value = TmpSourseOrder;
	Qw->Parameters->Items[2]->Value = QRaspDetailPIdn->AsInteger;
	Qw->Open();
	TmpIdnOrder = Qw->Fields->Fields[0]->AsInteger;
	TmpTargetOrder = Qw->Fields->Fields[1]->AsInteger;

	vsSQLQw = " UPDATE bm_RaspDetail SET VOrder=:D0 WHERE Idn=:D1";
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	Qw->Parameters->Items[0]->Value = TmpTargetOrder;
	Qw->Parameters->Items[1]->Value = viIdnDetail;
	Qw->ExecSQL();
	vsSQLQw = " UPDATE bm_RaspDetail SET VOrder=:D0 WHERE Idn=:D1";
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	Qw->Parameters->Items[0]->Value = TmpSourseOrder;
	Qw->Parameters->Items[1]->Value = TmpIdnOrder;
	Qw->ExecSQL();

	TmRaspDetail->Enabled = true;

}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::btDownClick(TObject *Sender) {
	int TmpSourseOrder, TmpTargetOrder, TmpIdnOrder;
	TmpSourseOrder = QRaspDetailVOrder->AsInteger;
	viIdnDetail = QRaspDetailIdn->AsInteger;
	vsSQLQw =
		" DECLARE @IdRasp int, @VOrder int, @PIdn int ; " " SET @IdRasp=:D0; "
		" SET @VOrder=:D1; " " SET @PIdn=:D2; "
		" SELECT TOP 1 Idn, VOrder FROM bm_RaspDetail WHERE  DateDel is null AND fType in (1,2) AND IdRasp=@IdRasp AND isnull(PIdn,0)=isnull(@PIdn,0) AND VOrder= " " (SELECT MIN(VOrder) FROM  bm_RaspDetail WHERE fType in (1,2) AND DateDel is null AND IdRasp=@IdRasp AND VOrder> @VOrder AND isnull(PIdn,0)=isnull(@PIdn,0) )";
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	Qw->Parameters->Items[0]->Value = QRaspDetailidRasp->AsInteger;
	Qw->Parameters->Items[1]->Value = TmpSourseOrder;
	Qw->Parameters->Items[2]->Value = QRaspDetailPIdn->AsInteger;
	Qw->Open();
	TmpIdnOrder = Qw->Fields->Fields[0]->AsInteger;
	TmpTargetOrder = Qw->Fields->Fields[1]->AsInteger;

	vsSQLQw = " UPDATE bm_RaspDetail SET VOrder=:D0 WHERE Idn=:D1";
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	Qw->Parameters->Items[0]->Value = TmpTargetOrder;
	Qw->Parameters->Items[1]->Value = viIdnDetail;
	Qw->ExecSQL();
	vsSQLQw = " UPDATE bm_RaspDetail SET VOrder=:D0 WHERE Idn=:D1";
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	Qw->Parameters->Items[0]->Value = TmpSourseOrder;
	Qw->Parameters->Items[1]->Value = TmpIdnOrder;
	Qw->ExecSQL();

	TmRaspDetail->Enabled = true;
}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::DSRaspDetailDataChange(TObject *Sender,
	TField *Field)

{
	if (fPermission) {
		/* if(QRaspDetailfType->AsInteger==0){
		 fFlagEditInsertType=0;
		 btInsRaspDetail->Enabled=true;
		 btInsRaspDetail->ImageIndex=1;
		 btInsRaspDetail->Caption="Новые комплект/подписной индекс";
		 btUpdRaspDetail->Enabled=false;
		 btUpdRaspDetail->Caption="";
		 } */
		if (QRaspDetailfType->AsInteger == 1) {
			/* fFlagEditInsertType=1;
			 btInsRaspDetail->ImageIndex=2;
			 btInsRaspDetail->Enabled=true;
			 btInsRaspDetail->Caption="Новый подписной индекс"; */
			btDelRaspDetail->Enabled = true;
			btUpdRaspDetail->Enabled = true;
			btUpdRaspDetail->Caption = "Редактировать комплект";
			btDelRaspDetail->Enabled = true;
			btUp->Enabled = true;
			btDown->Enabled = true;
		}

		if (QRaspDetailfType->AsInteger == 2) {
			/* fFlagEditInsertType=2;
			 btInsRaspDetail->ImageIndex=3;
			 btInsRaspDetail->Enabled=true;
			 btInsRaspDetail->Caption="Новая номенклатурная еденица"; */
			btDelRaspDetail->Enabled = true;
			btUpdRaspDetail->Enabled = true;
			btUpdRaspDetail->Caption = "Редактировать подписной индекс";
			btDelRaspDetail->Enabled = true;
			btUp->Enabled = true;
			btDown->Enabled = true;
		}

		if (QRaspDetailfType->AsInteger == 3) {
			/* fFlagEditInsertType=3;
			 btInsRaspDetail->ImageIndex=0;
			 btInsRaspDetail->Enabled=false;
			 btInsRaspDetail->Caption=""; */
			btDelRaspDetail->Enabled = false;
			btUpdRaspDetail->Enabled = false;
			btUpdRaspDetail->Caption = "";
			btDelRaspDetail->Enabled = false;
			btUp->Enabled = false;
			btDown->Enabled = false;
		}
		if ((QRaspDetailfType->AsInteger == 2) &&
			(QRaspDetailPIdn->AsInteger != 0)) {
			/* fFlagEditInsertType=2;
			 btInsRaspDetail->ImageIndex=3;
			 btInsRaspDetail->Enabled=true;
			 btInsRaspDetail->Caption="Новая номенклатурная еденица"; */
			btDelRaspDetail->Enabled = true;
			btUpdRaspDetail->Enabled = true;
			btDelRaspDetail->Caption = "Исключить из комплекта";
			btUpdRaspDetail->Caption = "Редактировать подписной индекс";
		}
		else
			btDelRaspDetail->Caption = "Удалить номенклатуру";
	}
}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::TmSplitterTimer(TObject *Sender) {
	/* TmSplitter->Enabled=false;

	 if (!((QListRaspVidRasp->AsInteger==4742151)||(QListRaspVidRasp->AsInteger==4742153)||(QListRaspVidRasp->AsInteger==4742383) ))
	 {fspPI=true;
	 spPI->Percent=99;
	 }
	 else
	 {  Sleep(300);
	 if (viTmpIdnTm!=QListRaspIdn->AsInteger)  {fspPI=true;  spPI->Percent=99;}
	 else
	 {
	 spPI->Percent=vispPI;
	 fspPI=false;
	 }
	 } */
}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::spPIChange(TObject *Sender) {
//	int i;
//	i = 1;
	if (!fspPI)
		vispPI = spPI->Percent;
}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::edAddProduceClick(TObject *Sender) {
#ifdef  TFR
#undef  TFR
#undef  FR
#endif
#define TFR TFrFindProduceNE
#define FR  FrFindProduceNE

	FR = new TFR(Application);
	FR->ShowModal();
	if (FR->fOkButton) {
		//
	}
	delete(FR);
}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::btCopyRaspDetailAllClick(TObject *Sender)
{
  int viIdGetPIForCopy, viIdGetRaspForCopy;

  #ifdef  TFR
  #undef  TFR
  #undef  FR

  #endif
  #define TFR TFrGetPI
  #define FR  FrGetPI

  viIdGetPIForCopy = 0;
  FR = new TFR(Application);

  FR->vIdRasp = QRaspDetailIdn->AsInteger;
  FR->lbHintAlert->Visible = true;
  FR->ShowModal();
  FR->WindowState = wsMinimized;
  if (FR->ModalResult == mrOk)
	 {
	  viIdGetPIForCopy = FR->QGetPIIdGetPI->AsInteger;

	  if ((QListRasp->Active == false) || (QListRasp->Eof == true))
		 {
		  ShowMessage("Выберите распоряжение.");
		  return;
		  }
	  viIdGetRaspForCopy = QListRaspIdn->AsInteger;
	  if ((QListRaspIdIns->AsInteger != PermisHdr.KeyUserStartProgramm) &&
			 !MainForm->flEditAllRasp &&
			 !fPermission ) // 2013-06-27 Чернышов
		 {
		  ShowMessage("Cоздание ПИ невозможно. \n Только создавший распоряжение может его создавать");
		  return;
		  }

      Step = "3";
		// if ((QRaspDetail->Active==false)||(QRaspDetail->Eof==true)||(QRaspDetailfType->AsInteger!=2)) {ShowMessage("Выберите ПИ."); return;}
	  vsSQLQw =
			" DECLARE @IdRasp int; SET @IdRasp=:D0; " "INSERT INTO bm_RaspDetail(  "
			"  PIdn	                " ", idRasp   	 		"
			", Id24TypeProduceIndex " ", idAdvProduceClass  	"
			", NameRaspDetail     	" ", NumbNE             	"
			", Year               	" ", CostWithNDS        	"
			", CostWithoutNDS     	" ", CostNDS            	"
			", ProcNDS           	" ", Discount      	    "
			", ProcDiscount     	" ", fAdv              	"
			", fAdvMIN              " ", fType				"
			", DateMod      		" ", DateIns      		"
			", IdIns                " ", CostMINWithNDS       "
			", CostMINWithoutNDS	" ", idAdvTNClass         "
			", CostBaseWithNDS      " ", CostBudjetWithNDS    "
			", DateJobMIN           " ", DateJobMAX	        "
			", KanalSale	        " ", Id32NameUnit			"
			", Id32NameItemType		" ", ItemId				"
			", fNoNDS               " ", MergedCount	   		"
			", VOrder	    		" ", AlterName            "
			", NoteName             " ",CompositionOfPI )     "
			" SELECT TOP 1  		" "  PIdn	                "
			", @IdRasp	   	 		" ", Id24TypeProduceIndex "
			", idAdvProduceClass  	" ", '_Копия.'+NameRaspDetail     	"
			", NumbNE             	" ", Year               	"
			", CostWithNDS        	" ", CostWithoutNDS     	"
			", CostNDS            	" ", ProcNDS           	"
			", Discount      	    " ", ProcDiscount     	"
			", fAdv              	" ", fAdvMIN              "
			", fType				" ", NULL      		"
			", GetDate()      		" ", :D1	                "
			", CostMINWithNDS       " ", CostMINWithoutNDS    "
			", idAdvTNClass         " ", CostBaseWithNDS      "
			", CostBudjetWithNDS    " ", DateJobMIN           "
			", DateJobMAX	        " ", KanalSale 	        "
			", Id32NameUnit			" ", Id32NameItemType		"
			", ItemId				" ", fNoNDS               "
			", MergedCount	   		" ", (SELECT  MAX(isnull(VOrder,0)+1) FROM bm_RaspDetail WHERE DateDel is null and IdRasp=@IdRasp) "
			", AlterName            " ", NoteName             "
			",CompositionOfPI       " " FROM bm_RaspDetail" " WHERE Idn=:D2;"
			" declare @viTmp int; SET  @viTmp=SCOPE_IDENTITY(); " " SELECT @viTmp";
		Qw->Close();
		Qw->SQL->Clear();
		Qw->SQL->Add(vsSQLQw);
		Qw->Parameters->Items[0]->Value = viIdGetRaspForCopy;
		Qw->Parameters->Items[1]->Value = PermisHdr.KeyUserStartProgramm;
		Qw->Parameters->Items[2]->Value = viIdGetPIForCopy;
		Qw->Open();
		viTmpIdn = Qw->Fields->Fields[0]->AsInteger;
		vsSQLQw =
			" DECLARE @IdRasp int; SET @IdRasp=:D0; " "INSERT INTO bm_RaspDetail(  	"
			"  PIdn	                " ", idRasp   	 		"
			", Id24TypeProduceIndex " ", idAdvProduceClass  	"
			", NameRaspDetail     	" ", NumbNE             	"
			", Year               	" ", CostWithNDS        	"
			", CostWithoutNDS     	" ", CostNDS            	"
			", ProcNDS           	" ", Discount      	    "
			", ProcDiscount     	" ", fType				"
			", fAdv              	" ", fAdvMIN              "
			", DateMod      		" ", DateIns      		"
			", IdIns                " ", CostMINWithNDS       "
			", CostMINWithoutNDS    " ", Id32NameUnit			"
			", Id32NameItemType		" ", ItemId				"
			", IdnAxapta 			" ", NameAxapta 			"
			", ItemIdAxapta 		" ", fNoNDS  	            "
			", MergedCount	     	" ", CompositionOfPI )     "
			" SELECT 		  		" "  :D1	                "
			", @IdRasp 	 			" ", Id24TypeProduceIndex "
			", idAdvProduceClass  	" ", NameRaspDetail     	"
			", NumbNE             	" ", Year               	"
			", CostWithNDS        	" ", CostWithoutNDS     	"
			", CostNDS            	" ", ProcNDS           	"
			", Discount      	    " ", ProcDiscount     	"
			", fType				" ", fAdv              	"
			", fAdvMIN              " ", NULL      			"
			", GetDate()      		" ", :D2                  "
			", CostMINWithNDS       " ", CostMINWithoutNDS    "
			", Id32NameUnit			" ", Id32NameItemType		"
			", ItemId				" ", IdnAxapta 			"
			", NameAxapta 			" ", ItemIdAxapta 		"
			", fNoNDS               " ", MergedCount	   		"
			",CompositionOfPI      " " FROM bm_RaspDetail"
			" WHERE PIdn=:D3 AND DateDel is null;";

		Qw->Close();
		Qw->SQL->Clear();
		Qw->SQL->Add(vsSQLQw);
		Qw->Parameters->Items[0]->Value = viIdGetRaspForCopy;
		Qw->Parameters->Items[1]->Value = viTmpIdn;
		Qw->Parameters->Items[2]->Value = PermisHdr.KeyUserStartProgramm;
		Qw->Parameters->Items[3]->Value = viIdGetPIForCopy;
		Qw->ExecSQL();

		CreateLinkBlock();

		delete(FR);

		if (viTmpIdn > 0) {
			TmRaspDetailTimer(Sender);
			try {
				Opts.Clear();
				locvalues[0] = Variant(viTmpIdn);
				QRaspDetail->Locate("Idn", locvalues, Opts);
			}
			catch (...) {
			};
			btUpdRaspDetailClick(Sender);
		};

	}

}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::RzToolButton8Click(TObject *Sender) {
	tlRaspDetail->FullCollapse();
}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::RzToolButton9Click(TObject *Sender) {
	tlRaspDetail->FullExpand();
}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::FormCreate(TObject *Sender) {
	// ShowMessage(AnsiString("  Внимание!!! \n Теперь при заведении подписного индекса необходимо разбивать его наименование на две части.\n На название (Обычно совпадает с наименованием продукта+год+период) \n и на примечание (Например : (скидка 10%)"));
}
// ---------------------------------------------------------------------------

void __fastcall TFrBisniessMenedger::RzToolButton12Click(TObject *Sender) {
	AnsiString vsSQLINS_EditRasp, vsSQLQw;
	int viTmpResult;
	viTmpResult = QListRaspIdn->AsInteger;
	if (MessageDlg
		("Вы уверены, что хотите перевести распоряжение в статус \"Черновик\"?\n"
		 "Код распоряжения " + IntToStr(viTmpResult) + ".", mtWarning,
		TMsgDlgButtons() << mbYes << mbNo, 0) == mrNo) {
		return;
	}

	if (MessageDlg
		("После того как вы его переведете в состояние \"Черновик\", его нужно будет еще раз отправить на утверждение.\n"
		"Код распоряжения " + IntToStr(viTmpResult) + ".", mtWarning,
		TMsgDlgButtons() << mbYes << mbNo, 0) == mrNo) {
		return;
	}

	vsSQLINS_EditRasp =
		" declare @viTmp int;" " SET @viTmp = :D0;" " UPDATE bm_Rasp "
		" SET Id24NameStatus=:D1 " ",DateMod=GetDate()" ",IdMod=:D2 "

		" WHERE Idn=@viTmp ;" " SELECT @viTmp";

	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLINS_EditRasp);

	Qw->Parameters->Items[0]->Value = viTmpResult;
	Qw->Parameters->Items[1]->Value = 5448351; // Черновик
	Qw->Parameters->Items[2]->Value = PermisHdr.KeyUserStartProgramm;
	// ID пользователя

	Qw->Open();

	btRespRefreshClick(NULL);
}
//-------------------------- Экспорт распоряжений в MS Office Excel ---------------------------------------------------------
void __fastcall TFrBisniessMenedger::RzToolButton13Click(TObject *Sender)
{
  if (QListRasp->RecordCount == 0)
	 {
	  ShowMessage("Нет данных для экспорта.");
	  return;
	  }

  MainForm->SaveXlsFiles(cxGrid2, "FrBisniessMenedger", "Экспорт распоряжений");
}
// --------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBisniessMenedger::rztbAccessClick(TObject *Sender)
{
  TFRManagerRaspAccess *FRManagerRaspAccess = new TFRManagerRaspAccess(this);
  if(FRManagerRaspAccess)
  {
	FRManagerRaspAccess->idRasp = QListRaspIdn->AsInteger;
	FRManagerRaspAccess->ShowModal();
	delete FRManagerRaspAccess;
	FRManagerRaspAccess = NULL;
  }
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrBisniessMenedger::SearchCodeBEdKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)
{
  if (Key == VK_RETURN)
	 {
	  if (SearchCodeBEd->Text.Length() == 0)
		 {return;}
	  if (SearchCodeBEd->Text.Length() != 0)
		 {
//          "##BVZ_"+
		  String bc = "SELECT DISTINCT A.idRasp "
						"FROM all_AdvProduceClassEtalon AS C "
						"LEFT JOIN bm_RaspDetail AS A on A.idn = c.IdnDO_PI "
					   "WHERE codeb = '" + SearchCodeBEd->Text + "'";
		  CodeBQuer->Active = true;
		  CodeBQuer->SQL->Clear();
		  CodeBQuer->SQL->Add(bc);
		  CodeBQuer->Open();
		  if (CodeBQuer->RecordCount == 0)
			 {
			  ShowMessage("Сожалеем, такого кода продукта - '" + SearchCodeBEd->Text + "' не найдено!");
			  CodeBQuer->Active = false;
			  return;
			  }
		  if (CodeBQuer->RecordCount == 1)
			 {
              //gbcbProduce->Caption = IntToStr(CodeBQuer->RecordCount);
			  edFindText->Text = IntToStr(CodeBQueridRasp->Value);
			  }
		  if (CodeBQuer->RecordCount > 1)
			 {/*gbcbProduce->Caption = IntToStr(CodeBQuer->RecordCount);*/}
		  CodeBQuer->Active = false;
		  }
	  }
}
//---------------------------------------------------------------------------------------------------------------------------
