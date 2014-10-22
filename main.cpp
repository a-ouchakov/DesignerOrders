// ---------------------------------------------------------------------------
#define NO_WIN32_LEAN_AND_MEAN
#include <objidl.h>
// #include <shlobj.h>
#include <vcl.h>
//#pragma hdrstop

#include "main.h"
#include "Init.h"
#include <IdAttachmentFile.hpp>
#include <Dateutils.hpp>

// -----------------------------
#include "AboutBox.h"
#include "UIndivUsers.h"
#include "LoadProgram.h"
#include "AccountPrint.h"
#include "ManagersChief.h"
#include "ProtOn.h"
#include "BisinessMenedger.h"
#include "ListMail.h"
#include "TraceMail.h"
#include "EditLibs.h"
#include "ListMailAddress.h"
#include "EditProduce.h"
#include "BlockProduce.h"
#include "Category.h"                                                         //                   Справочник "Категория/Вид"
#include "EditPriseList.h"
#include "AuditPriseList.h"
#include "ControlEditProduce.h"
#include "SincNE.h"
#include "NESincProduce.h"
#include "HintJOB.h"
#include "ListTarif.h"
#include "SincPI_PP.h"
#include "PrintProductCatalog.h"
#include "BugHistory.h"
#include "IniFiles.hpp"                                //для работы с INI-файлом

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzCommon"
#pragma link "RzShellDialogs"
#pragma link "RzStatus"
#pragma link "RzBHints"
#pragma link "RzLaunch"
#pragma link "RzBHints"
#pragma link "RzPanel"
#pragma link "RzButton"
#pragma link "cxTL"
#pragma link "RzEdit"
#pragma link "cxContainer"
#pragma link "cxControls"
#pragma link "cxEdit"
#pragma link "cxMemo"
#pragma link "cxRichEdit"
#pragma link "cxTextEdit"
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "frxExportPDF"
#pragma link "frxPreview"
#pragma link "cxCustomData"
#pragma link "cxGraphics"
#pragma link "RzTray"
#pragma link "Cxgridexportlink"
#pragma resource "*.dfm"
TMainForm *MainForm;

  AnsiString Path = ExtractFilePath(ParamStr(0));
    TIniFile *Ini = new TIniFile(Path + "Designer.ini");    //файл настроек

// struct PermisHdr PermisHdr ={&Permis[0],&NameProgram[0],&ExecDate[],&NamedMutex[],0,0,0};
// ---------------------------------------------------------------------------
// ---------------------------------------------------------------------------
// ##############################################################################
// #####Распределение прав в меню программы #####################################
// ##############################################################################
struct Permis Permis[] = {
	// 0,  5 ,"Помощь"       							   ,true, true, true ,true ,
	// 0,  8 ,"Помощь/О программе"       					 ,true, true, true ,true ,
	// 0,  13,"Помощь/Помощь"       						 ,true, true, true ,true ,
	// 0,2013,"Помощь/Помощь-разрешение редактирования"	 ,false,false,false,false,
	0, 14, "Настройки/Допуск к программе", false, false, false, false,
	0, 15, "Настройки/Загрузка новой версии", false, false, false, false,
	0, 6,  "Список менеджеров по руководителям", false, false, false, false,
	0, 32, "Помощь/Протокол подключений к программе", false, false, false, false,
	0, 26, "Настройки/Список видов распоряжений", false, false, false, false,
	0, 27, "Настройки/Список ценового комитета", false, false, false, false,
	0, 28, "Настройки/Приведение соответствия Номенклатурных Единиц к Axapta", false,	false, false, false,
	0, 125,"Настройки/Ведение продуктового каталога",	false, false, false, false,
	0, 29, "Настройки/Дедубликация связей НЕ из Axapta и Продуктового каталога", false,false, false, false,
	0, 30, "Настройки/Контроль экспорта прейскуранта",false, false, false, false,
	0, 31, "Настройки/Контроль экспорта продуктового каталога", false, false,	false, false,
    0, 33, "Настройки/Аудит контроля экспорта прейскуранта", false, false,	false, false,
	0, 50, "Настройки/Справочник блоков продуктов", false, false,	false, false,
	0, 53, "Настройки/Справочник Категории и Виды", false, false,	false, false,
	0, 55, "Настройки/Запросить скидку", false, false,	false, false,
	/* 0,1006,"Настройки/Разрешение исползования FRONTRANGE"                 ,false,false,false ,false ,
	 0,1007,"Настройки/Разрешение исползования VENTAFAX"                   ,false,false,false ,false ,
	 */
	0, 1002, "Права доступа/Разрешить пользователю выгружать данные в  Microsoft Office Excel",	false, false, false, false,
	0, 1003, "Права доступа/Разрешить пользователю изменять не Черновики", false, false, false, false,
	0, 1004, "Права доступа/Разрешить пользователю Утверждать за других", false, false, false, false,
	0, 1030, "Права доступа/Разрешить пользователю Утвердить за всех в контроле рассылок", false, false, false, false,
	0, 1005, "Права доступа/Разрешить рассылку ведомости", false, false, false, false,
	0, 1008, "Права доступа/Разрешить пользователю создавать (удалять) классификаторы комментариев", false, false, false, false,
	0, 1009, "Права доступа/Разрешить видеть все распоряжения", false, false, false, false,
	0, 1010, "Права доступа/Контроль рассылок за других", false, false, false, false,
	0, 1011, "Права доступа/Возможность не пересчитывать цены ПИ с НДС", false, false, false, false,
	0, 1012, "Права доступа/Разрешить пользователю создавать/редактировать шаблоны распоряжений", false, false, false, false,
	0, 1013, "Права доступа/Разрешить пользователю изменять текст уже рассылаемого письма", false, false, false, false,
	0, 1014, "Права доступа/Убрать цветовую заливку строк", false, false, false, false,
	0, 1015, "Права доступа/Разрешить пользователю полное редактирование продуктов", false, false, false, false,
	0, 1016, "Права доступа/Позволять обновлять данные по номенклатурным единицам из Axapta ", false, false, false, false,
	0, 1017, "Права доступа/Разрешить редактирование типа подписного индекса в продуктовом каталоге(Вид продукта) ", false, false, false, false,
	0, 1018, "Права доступа/Разрешить создавать распоряжения 'О внесении изменений в ПИ'", false, false, false, false,
	0, 1019, "Права доступа/Разрешить распоряжение находящиеся в статусе \"На утверждение\", перевести в статус \"Черновик\" ", false, false, false, false,
	/* 0,1010,"Права доступа/Разрешить пользователю работать с платежами из УПП"                     ,false,false,false,false,
	 0,1011,"Права доступа/Разрешить пользователю редактировать результаты звонка"                 ,false,false,false,false,
	 0,1012,"Права доступа/Разрешить пользователю редактировать данные"                            ,true, true, true ,true ,
	 0,1013,"Права доступа/Разрешить пользователю создавать новые организации"                     ,false,false,false,false,
	 0,1014,"Права доступа/Разрешить пользователю измениять классификатор"                     	  ,false,false,false,false,
	 0,1015,"Права доступа/Сотрудник Адресной подписки"					                     	,false,false,false,false,
	 0,1016,"Права доступа/Сотрудник Контакт - Центра "					                     	 ,false,false,false,false,
	 0,1017,"Права доступа/Разрешить менять КОД КЛИЕНТА "					                     	,false,false,false,false,
	 0,1018,"Права доступа/Разрешить создовать независимые счета " 		                     	 ,false,false,false,false,
	 0,1019,"Права доступа/Разрешить создовать счета без учета продукта "                       	  ,false,false,false,false,
	 0,1020,"Права доступа/Разрешить редактирвоать чужие данные "                             	    ,false,false,false,false,
	 0,1021,"Права доступа/Разрешить разблокировать реквезиты"                             	       ,false,false,false,false,
	 0,1022,"Права доступа/Разрешить сливать (удолять) организации"                      	         ,false,false,false,false,
	 */
	 0, 1025, "Права доступа/Разрешить экспорт распоряжений в MS Office Excel", false, false, false, false,
	 /*
	 0,111,"Платежи из УПП/1. Импорт платежей из УПП"                     						  ,false,false,false,false,
	 0,211,"Платежи из УПП/2. Разнести платежи по счетам"                     					  ,false,false,false,false,
	 */

	 0, 0, "", false, false, false, false // Всегда последнее
	};

char NamedMutex[] = vFILENAME "_mutex";
char ExecFileName[] = __FILE__ "\0";
char ExecDate[] = __DATE__ " " __TIME__ "\0";
char NameProgram[] = vPROGRAMNAME;

struct PermisHdr PermisHdr = {
	&Permis[0], &NameProgram[0], ExecDate, ExecFileName, 0, 0, 0
};

bool vMin;
bool vAuto;
bool vSheet;
bool vDemo;
bool vUtverjdenie;

AnsiString vsUtverjdenie; // параметр на утверждение типа U+Код расопряжения.
HANDLE Mutex;

// ##############################################################################
// ##############################################################################
// ##############################################################################
// ##############################################################################
extern void __fastcall SetPermis(struct PermisHdr *PH, TADOQuery *Qi);
extern int __fastcall SrchNames(TStringList *Si, AnsiString *SL);
// Подключение к базе данных
extern int __fastcall LoadNewConnectionString(TADOConnection *C,
	AnsiString *Base, AnsiString *Serv, AnsiString *Log, AnsiString *Pass,
	struct PermisHdr *PH); // Подключение к базе данных

struct SetupIni SetupIni;

__fastcall TMainForm::TMainForm(TComponent* Owner) : TForm(Owner) {
	struct Permis *P;
	AnsiString SL;
	int i;

	char *D = __DATE__;
	char *T = __TIME__;
	AnsiString dt = AnsiString(D).SubString(1,3);
	if(dt == "Jan") dt = "01";
	if(dt == "Feb") dt = "02";
	if(dt == "Mar") dt = "03";
	if(dt == "Apr") dt = "04";
	if(dt == "May") dt = "05";
	if(dt == "Jun") dt = "06";
	if(dt == "Jul") dt = "07";
	if(dt == "Aug") dt = "08";
	if(dt == "Sep") dt = "09";
	if(dt == "Oct") dt = "10";
	if(dt == "Nov") dt = "11";
	if(dt == "Dec") dt = "12";
	dt = AnsiString(D).SubString(5,2)+"."+dt+"."+AnsiString(D).SubString(8,4);
	while(dt.Pos(" ")>0) dt = dt.SubString(1,dt.Pos(" ")-1)+"0"+dt.SubString(dt.Pos(" ")+1,dt.Length()-dt.Pos(" "));
	dt = dt+" "+AnsiString(T).SubString(1,5);

	Caption = String(vPROGRAMNAME)+" ("+dt+")";
	LoadSaveFile_INI(0); // Загрузить (сохранить) FILENAMEDSC
	try { // Восстановление параметров прошлого запуска окна
		if (SetupIni.sMain.Chk == (MainForm->CheckSumParam
			((char *)&SetupIni.sMain.Chk, sizeof(SetupIni.sMain)) - 2))
			// Проверка контрольной сумммы блока параметров
		{ // try{MainForm->SetParamTableBanded(cxGridDBBandedTableView5,&SetupIni.sMain.vTbl0[0],8);}catch(...){};
			try {
				RzStatusPane6->Caption =
					AnsiString(SetupIni.sMain.RzStatusPane6);
			}
			catch (...) {
			};
			// Tupp=SetupIni.sMain.TdUpp;
		}
		else { // Все обнулить
			setmem((void*)&SetupIni.sMain.Chk, sizeof(struct sMain), 0);

		}
	}
	catch (...) {
	};

	IDUser = -1; // При открытии окна показать пользователя если не -1
	flReBoot = false;
	// Флаг принудительной перезагрузки(обнаружена новая версия)

	if (CallCenterConnect->Connected == true)
		CallCenterConnect->Connected = false;
	SL = AnsiString(DirFileSetup);
	if ((flReBoot = TestAutoInstall(SL)) == true)
		return; // АвтоИнсталяция программы

	// SL=CONST_FILE_NAME+GetCurrentDir()+"\\"FILENAMEDSC".udl";
	// SL=ExtractFileDir(Application->ExeName)+"\\"vFILENAME".udl";TestUDLAutoInstall(SL,CallCenterConnect);//Проверка наличия UDL и копирование или генерация
	// SL=GetCurrentDir()+"\\"vFILENAME".udl";TestUDLAutoInstall(SL,CallCenterConnect);//Проверка наличия UDL и копирование или генерация
	SL = AnsiString(DirFileSetup) + "\\" vFILENAME ".udl";
	TestUDLAutoInstall(SL, CallCenterConnect);
	// Проверка наличия UDL и копирование или генерация
	CallCenterConnect->ConnectionString = CONST_FILE_NAME + SL;
	LoadNewConnectionString(CallCenterConnect, NULL, NULL, NULL, NULL,
		&PermisHdr); // Подключение к базе данных
	ConnectBaseData(); // Подключение к базе данных
	if (CallCenterConnect->Connected != true)
		return;
	if (CallCenterConnect->Connected == true) // Загрузка не прекращена
	{
		SetPermis(&PermisHdr, Q1);
	}
	if (CallCenterConnect->Connected == true) // Загрузка не прекращена
	{
		if ((flReBoot = TestLoadNewVers(Q1, PermisHdr.KeyConnect)) == true ||
			CallCenterConnect->Connected != true) {
			flReBoot = true;
			return;
		} // Флаг принудительной перезагрузки(обнаружена новая версия)
	} // Проверка на загрузку новой версии

	ClearWorkDir(AnsiString(DirFileSetup) + vFILEPATHTEMP);
	// Очистить папку    TEMP
	// ........Установка прав и полномочий........................................

	for (P = &Permis[0]; P->NamePerm[0] != 0 && P->Code != 0; P++) {
		SetEnableMenu(MainMenu1->Items, P->Code, P); // Расcтановка прав доступа
	}
	// ........Установка прав, не связанных с меню..................................
	for (int i = 0; Permis[i].Code > 0; i++) {
		if (Permis[i].Code == 1001) {
			DataReadOnly = !Permis[i].VisiblePerm;
		} // Данные/Разрешение редактирования
		if (Permis[i].Code == 1002) {
			UserExcel = Permis[i].VisiblePerm;
		} // Права доступа/Разрешить пользователю выгружать данные в  Microsoft Office Excel
		if (Permis[i].Code == 1003) {
			flEditAllRasp = Permis[i].VisiblePerm;
		} // Права доступа/Разрешить пользователю изменять не Черновики
		if (Permis[i].Code == 1004) {
			flAllResault = Permis[i].VisiblePerm;
		} // Права доступа/Разрешить пользователю Утверждать за других

		//added by r.Perkatov 2014-07-23
		if (Permis[i].Code == 1030) {
			flAllApprove = Permis[i].VisiblePerm;
		} // Права доступа/Разрешить пользователю Утвердить за всех в контроле рассылок

		//added by r.Perkatov 2014-07-23
		if (Permis[i].Code == 1005) {
			flSheet = Permis[i].VisiblePerm;
		} // Права доступа/Права доступа/Разрешить рассылку ведомости
		if (Permis[i].Code == 1006) {
			flFRONTRANGE = Permis[i].VisiblePerm;
		} // "Настройки/Разрешение исползования FRONTRANGE"
		if (Permis[i].Code == 1007) {
			flVENTAFAX = Permis[i].VisiblePerm;
		} // "Настройки/Разрешение исползования VENTAFAX"
		if (Permis[i].Code == 1008) {
			flCommentsCheckLists = Permis[i].VisiblePerm;
		} // Права доступа/Разрешить пользователю создавать (удалять) классификаторы комментариев
		if (Permis[i].Code == 1009) {
			flEditClientSAP = Permis[i].VisiblePerm;
		} // Права доступа/Разрешить пользователю изменять реквизиты клиентов САП
		if (Permis[i].Code == 1010) {
			flEditUpp = Permis[i].VisiblePerm;
		} // Права доступа/Контроль рассылок за других
		if (Permis[i].Code == 1011) {
			flEditCallResult = Permis[i].VisiblePerm;
		} // Права доступа///не пересчитывать цены ПИ с НДС.
		if (Permis[i].Code == 1012) {
			flEditDM = Permis[i].VisiblePerm;
		} // Права доступа/Разрешить пользователю создавать/редактировать  шаблоны распоряжений
		if (Permis[i].Code == 1013) {
			flInsertClient = Permis[i].VisiblePerm;
		} // Права доступа/Разрешить пользователю изменять текст уже рассылаемого письма

		if (Permis[i].Code == 1014) {
			flEditClass = Permis[i].VisiblePerm;
		} // Права доступа/Разрешить пользователю измениять классификатор
		if (Permis[i].Code == 1015) {
			flUserSAP = Permis[i].VisiblePerm;
		} // Права доступа/Сотрудник Адресной подписки
		if (Permis[i].Code == 1016) {
			flUserKC = Permis[i].VisiblePerm;
		} // Права доступа/Сотрудник Контакт - Центра
		if (Permis[i].Code == 1017) {
			flEditUFL = Permis[i].VisiblePerm;
		} // Разрешить менять КОД КЛИЕНТА
		if (Permis[i].Code == 1018) {
			flGetPI = Permis[i].VisiblePerm;
		} // Разрешить создавать распоряжения о внесении изменений в ПИ.
		if (Permis[i].Code == 1019) {
			flNewAccountNoStop = Permis[i].VisiblePerm;
		} // Разрешить создовать счета без учета продукта
		if (Permis[i].Code == 1020) {
			flEditAll = Permis[i].VisiblePerm;
		} // Разрешить создовать счета без учета продукта
		if (Permis[i].Code == 1021) {
			flRequisiteDateDel = Permis[i].VisiblePerm;
		} // Разрешить разблокировать реквизиты
		if (Permis[i].Code == 1022) {
			flBlokClientDelete = Permis[i].VisiblePerm;
		} // Разрешить сливать (удалять) организации
		if (Permis[i].Code == 1025) {
			flRaspExcel = Permis[i].VisiblePerm;
		}//разрешить экспорт распоряжений в MS Office Excel (added by R.Perkatov 2014-01-15)

	}

	// ..............................................................................
	// .............. И н и ц и а л и з а ц и я  ................................
	flInitMail = false; // Флаг инициализации почтового клиента

	// .............. Убрать пустые пункты меню ................................
	flDelLine = false; // Флаг удаления повторяющейся линии подчеркивания
	DelFreeMenu(MainMenu1->Items); // Удаление пустых меню
	// .............. Запуск Автообслуживания баз данных. ...........................
	// ..............................................................................
	// if(vMin==true)WindowState=wsMinimized;        //Если true то в командной строке есть параметер [/m] что указывает на запуск по автозагрузке
	// if(vAuto==true){TmAutoService->Enabled=true;Application->Title ="";Caption="";}//Если true то в командной строке есть параметер [/a] что указывает на запуск по автообслуживанию
	// else{TestStartAutoServiceTimer();} //Запуск Автообслуживания баз данных.}

	// ........Список разрешений полей в зависимости от  типа заявки.........

	// ........Код текущего пользователя и ФИО по Таблице EmplUsers ..........
	// Qw->Close(); Qw->SQL->Clear();
	// Qw->SQL->Add("SELECT auIdUserHD,auFamIO,auLogUser FROM aa_Users WHERE auId="+IntToStr(PermisHdr.KeyUserStartProgramm));
	// Qw->Open();
	// idnUser=Qw->Fields->Fields[0]->AsInteger; //Код текущего пользователя  по Таблице EmplUsers .........
	// PermisHdr.NameUserStartProgramm=Qw->Fields->Fields[1]->AsString;      // ФИО по Таблице EmplUsers .........
	// log =Qw->Fields->Fields[2]->AsString;
	// Qw->Close();

	AnsiString buf2 = AnsiString(DirFileSetup);
	AnsiString buf = buf2 + "\\" vFILENAME ".EXE";
	CreateShortcut(NULL, buf.c_str(), buf2.c_str(), NULL, NULL, SW_SHOWNORMAL, buf.c_str(), 0);
//	char buf[1024];
//	char buf2[1024];
//	Ansistrings::StrLCopy(buf, AnsiString(DirFileSetup).c_str(), sizeof(buf) - 16);
//	Ansistrings::StrLCopy(buf2, buf, sizeof(buf2) - 16);
//	System::Ansistrings::StrCat(buf, "\\" vFILENAME ".EXE");
//	CreateShortcut(NULL, buf, buf2, NULL, NULL, SW_SHOWNORMAL, buf, 0);
	// создать ярлык на рабочем столе
	// LoadNodes(); //Загрузеа меню из SQL запроса
	SL = CallCenterConnect->ConnectionString;
	i = SL.Pos("Data Source=");
	if (i != -1) {
		SL = SL.Delete(1, i + 11);
		i = SL.Pos(";");
		if (i != -1) {
			SL = SL.Delete(i, SL.Length() - i + 1);
		}
	}
	else {
		SL = "";
	}

	RzStatusPane1->Caption = "Пользователь: " +
		AnsiString(PermisHdr.NameUserStartProgramm);
	RzStatusPane2->Caption =
		"Логин: " + AnsiString(PermisHdr.LoginUserStartProgramm);
	// +";Почта:"+AnsiString(PermisHdr.MailUserStartProgramm);
	RzStatusPane3->Caption = "Подключение: сервер " + SL + "; база данных " +
		CallCenterConnect->DefaultDatabase + ";";
	/* if(flEditClientSAP==true){RzStatusPane5->Visible=true;RzStatusPane5->Caption="Вы можете изменять клиентов САП";}
	 else */ RzStatusPane5->Visible = false;
	/* if(flEditUpp==true){RzStatusPane6->Visible=true;if(RzStatusPane6->Caption.Length()<1)RzStatusPane6->Caption="Вы можете импортировать платежи из УПП";}
	 else */ RzStatusPane6->Visible = false;
	// ...................................................................................
	FlQ1HTimer = 0;
	TimerQ1H->Enabled = true;
	TmStartWork->Enabled = true; // Открыть страницу по умолчанию
	MainForm->CallActIdGrid2 = 0;
	flInUpp = 0;
	flOtkaz = false;
}

// ---------------------------------------------------------------------------
// ##############################################################################
// ################## Установка TRUE / FALSE для пунктов меню в   ###############
// ################## зависимости от прав пользователей. Свойство ###############
// ################## tag каждого пункта меню должно равнятся     ###############
// ################## Permis.Code                                 ###############
// ##############################################################################
bool __fastcall TMainForm::SetEnableMenu(TMenuItem* It, int Num,
	struct Permis *P) // Растановка прав доступа
{
	int i, j;
	bool ft;
	// return(true);
	if (It->Tag == Num) {
		if (P->EnablePerm == true)
			It->Enabled = true;
		if (P->VisiblePerm == true)
			It->Visible = true;
		It->Enabled = P->EnablePerm;
		It->Visible = P->VisiblePerm;
		return (true);
	}
	for (ft = false, i = 0, j = It->Count; i < j; i++) {
		ft = SetEnableMenu(It->Items[i], Num, P);
	}
	return (ft);
}
// ---------------------------------------------------------------------------

// ---------------------------------------------------------------------------
bool __fastcall TMainForm::DelFreeMenu(TMenuItem* It) // Удаление пустых меню
{
	int i, j;
	bool ft;

	if (It->Caption.Pos("___") != 0 && It->Count == 0) {
		if (flDelLine == true)
			It->Visible = false;
		// Флаг удаления повторяющейся линии подчеркивания
		flDelLine = true;
		return (true);
	}
	flDelLine = false;
	if (It->OnClick != NULL && It->Visible == true && It->Count == 0) {
		return (false);
	}
	for (ft = true, i = 0, j = It->Count; i < j; i++) {
		if (DelFreeMenu(It->Items[i]) == false) {
			ft = false;
		}
	}
	if (ft == true)
		It->Visible = false;
	return (ft);
}

// ---------------------------------------------------------------------------
int __fastcall TMainForm::SrchNames(TStringList *Si, AnsiString *SL)
	// Подключение к базе данных
{
	int i, j;
	for (i = 0, j = Si->Count; i < j; i++) {
		if (Si->Strings[i].Pos("=") > 1) {
			if (Si->Names[i] == *SL) {
				return (Si->IndexOfName(Si->Names[i]));
			}
		}
	}
	return (-1);
}

// ---------------------------------------------------------------------------
// ---------------------------------------------------------------------------
// ############### Подключение к базе данных ################ //
// ---------------------------------------------------------------------------
int __fastcall TMainForm::ConnectBaseData() // Подключение к базе данных
{
	if (CallCenterConnect->Connected == false) {
		try {
			CallCenterConnect->Connected = true;
		}
		catch (...) {
			ShowMessage("Ошибка подключения к базе данных.");
			return (-1);
		}
	}
	return (0);
}

// ############### Подключение к базе данных ################ //
// ---------------------------------------------------------------------------
// ---------------------------------------------------------------------------
// ---------------------------------------------------------------------------
void __fastcall TMainForm::N2Click(TObject *Sender) {
	Close();
}

// ---------------------------------------------------------------------------
///##############################################################################
// **************************************************************************************
// ************  Загрузить (сохтанить) setup.ini  ******************************
// **************************************************************************************
int __fastcall TMainForm::LoadSaveFile_INI(int RW)
	// Загрузить (сохтанить) FILENAMEDSC
{
	struct SetupIni TmpSetupIni;
	unsigned int TmpSum;
	int i;
	int j, k, l, Siz;
	unsigned char *P;
	AnsiString Buf;
	if (RW == 0) {
		SetupIni.SetDefault = true;
		i = -1;
		Buf = AnsiString(GetCurrentDir());
		if (Buf.c_str()[0] == '\\' && Buf.c_str()[1] == '\\')
    {
			try {
				Buf = "C:\\Work_Db\\";
				CreateDir(AnsiString(Buf));
				Buf += "\\" vFILENAME;
				CreateDir(AnsiString(Buf));
			}
			catch (...) {
			}
		}
    DirFileSetup = Buf;
		Buf += AnsiString("\\" vFILENAME ".DSC");
//		System::Ansistrings::StrCat(Buf, "\\" vFILENAME ".DSC");
		if ((i = FileOpen(Buf, 0x0)) != -1) {
			Siz = FileRead(i, &TmpSetupIni, sizeof(TmpSetupIni));
			FileClose(i);
			for (P = (char*)&TmpSetupIni.ChSum, i = 0, j = 0x20; i < Siz;
			i++, j += 0x41) {
				while (j > 0x00FF) {
					j -= 0x0100;
					j++;
				};
				*(P + i) ^= (unsigned char)j;
				j += (unsigned int)*(P + i);
			}
			j = TmpSetupIni.ChSum;
			TmpSetupIni.ChSum = 0; // Контрольная сумма
			for (TmpSum = 0x55AA, i = 0, P = (char*)&TmpSetupIni.ChSum;
			i < Siz; i++) {
				TmpSum += (unsigned int)*(P + (unsigned int)i);
			}
			if (TmpSum == (unsigned int)j) {
				setmem((void*)&SetupIni, sizeof(struct SetupIni), 0);
				memmove((void*) &SetupIni, (const void*) &TmpSetupIni, Siz);
				i = 0;
				SetupIni.SetDefault = false;
				if (SetupIni.TimeStart < Now()) {
					SetupIni.TimeStart = Now();
				};
			}
			else {
				SetupIni.TimeStart = Now();
				SetupIni.SetDefault = true;
				i = -1;
				ShowMessage(
					"Сменилась версия программы.\nЕсть вероятность изменения ширины колонок в таблицах\nи их очередность.");
			}
		}
	}
	else {

		Buf = DirFileSetup + AnsiString("\\" vFILENAME ".DSC");
//		System::Ansistrings::StrCat(Buf, "\\" vFILENAME ".DSC");
		if (!FileExists(Buf)) {
			i = FileCreate(AnsiString(Buf));
		}
		else {
			i = FileOpen(AnsiString(Buf), 0x01);
		}
		if (i != -1) {
			SetupIni.SetDefault = false;
			for (TmpSum = 0x55AA, j = 0, P = (char*)&SetupIni.ChSum;
			(unsigned int)j < sizeof(SetupIni); j++) {
				TmpSum += (unsigned int)*(P + (unsigned int)j);
			}
			SetupIni.ChSum = TmpSum;
			for (P = (char*)&SetupIni.ChSum, k = 0, j = 0x20;
			(unsigned int)k < sizeof(SetupIni); k++, j += 0x41) {
				l = (unsigned int) * (P + (unsigned int)k);
				while (j > 0x00FF) {
					j -= 0x100;
					j++;
				};
				*(P + k) ^= (unsigned char)j;
				j += l;
			}
			FileWrite(i, &SetupIni, sizeof(SetupIni));
			FileClose(i);
		}
	}
	return (i);
}

// ---------------------------------------------------------------------------
void __fastcall TMainForm::FormActivate(TObject *Sender) {
	// Флаг принудительной перезагрузки(обнаружена новая версия)
	if (flReBoot == true || CallCenterConnect->Connected != true)
		Close();
	else
		N12Click(Sender);
} // Загрузка прекращена

// ---------------------------------------------------------------------------
void __fastcall TMainForm::FormClose(TObject *Sender, TCloseAction &Action) {
	int i, j;
	if (CallCenterConnect->Connected == true) {
		try {
			if (Q1->Active == true)
				Q1->Close();
			Q1->SQL->Clear();
			Q1->SQL->Add("EXEC prUserExit :D0;");
			Q1->Parameters->Items[0]->Value = PermisHdr.KeyConnect;
			Q1->ExecSQL();
		}
		catch (...) {
		}
		try {
			for (j = CallCenterConnect->DataSetCount, i = 0; i < j; i++) {
				CallCenterConnect->DataSets[i]->Close();
			}
			CallCenterConnect->Close();
		}
		catch (...) {
		}
	}

	try {
		Ansistrings::StrLCopy(SetupIni.sMain.RzStatusPane6,
			AnsiString(RzStatusPane6->Caption.Trim()).c_str(),
			sizeof(SetupIni.sMain.RzStatusPane6)) - 2;
	}
	catch (...) {
	};
	LoadSaveFile_INI(1); // Загрузить (сохранить) FILENAMEDSC
	// Action=caNone;
	// RzTrayIcon1->MinimizeApp();//Application->Minimize();
	Action = caFree;
}

// ---------------------------------------------------------------------------
void __fastcall TMainForm::FormDestroy(TObject *Sender) {
	TCloseAction Action;
	if (CallCenterConnect->Connected == true)
		FormClose(Sender, Action);
}
// ---------------------------------------------------------------------------

// ---------------------------------------------------------------------------
// ---------------------------------------------------------------------------
// *****************************************************************************
// *****************  Процедура чистки папки при загрузке программы ************
// *****************************************************************************
void __fastcall TMainForm::ClearWorkDir(AnsiString WrkPath) {
	TSearchRec sr;
	int Atr;
	Atr = Sysutils::faAnyFile;
	if (DirectoryExists(WrkPath) == false)
		CreateDir(WrkPath);
	if (FindFirst(WrkPath + "\\*.*", Atr, sr) == 0) {
		do {
			if ((sr.Attr&faDirectory) == 0)
				DeleteFile(WrkPath + "\\" + sr.Name);
		}
		while (FindNext(sr) == 0);
		FindClose(sr);
	}
}

// #############################################################################
// ####################  Процедура Только цифры в тексте          ##############
// #############################################################################
int __fastcall TMainForm::TestNumMap(AnsiString *Sl) // Проверка номера
{
	int i;
	char *pc;
	for (pc = Sl->c_str(), i = 0; i < 24 && *(pc + i) != 0; i++) {
		if (*(pc + i) < '0' || *(pc + i) > '9') {
			*Sl = Sl->Delete(i + 1, 1);
			i = -1;
			pc = Sl->c_str();
		}
	}
	if ((i = Sl->Length()) < 2)
	{ /* ShowMessage("Недопустимый номер карты."); */
		return (1);
	}
	// if(Sl->LowerCase()!=Sl->UpperCase()){ShowMessage("В номере карты буквы недопустимы");return(2);}
	// if(i>16)*Sl=Sl->SetLength(16);
	return (0);
}

// ##############################################################################################
// ####################  Процедура Только цифры и запятая с заменой точки в тексте ##############
// ##############################################################################################
int __fastcall TMainForm::TestFloatNum(char *P) // Проверка номера
{
	int i;
	char *pc;
	if (*P == 0) {
		*P = '0';
		*(P + 1) = 0;
		return (0);
	}
	for (pc = P, i = 0; i < 24 && *(pc + i) != 0; i++) {
		if (*(pc + i) == '.') {
			*(pc + i) = ',';
			continue;
		}
		if (*(pc + i) < '0' || *(pc + i) > '9') {
			Ansistrings::StrCopy(pc + i, pc + i + 1);
			i = -1;
		}
	}
	return (0);
}
// ##############################################################################
// ########### Получить полный список карточек ##################################
// ##############################################################################

void __fastcall TMainForm::GetlistMap(TStrings* SW)
	// Получить полный список карточек
{
}

// ##############################################################################################
// ####################  Процедура Только цифры и точки в тексте ##############
// ##############################################################################################
int __fastcall TMainForm::TestDateNum(char *P) // Только цифры и точки в тексте
{
	int i;
	char *pc;
	if (*P == 0) {
		*P = '0';
		*(P + 1) = 0;
		return (0);
	}
	for (pc = P, i = 0; i < 24 && *(pc + i) != 0; i++) {
		if (*(pc + i) == '.') {
			continue;
		}
		if (*(pc + i) < '0' || *(pc + i) > '9') {
			Ansistrings::StrCopy(pc + i, pc + i + 1);
			i = -1;
		}
	}
	return (0);
}

// #############################################################################
// ####################  процедура формирования имен ###########################
// #############################################################################
int __fastcall TMainForm::SetNameF(AnsiString *Sl)
	// Привести имя к нормальному виду
{
#define  MaxLngName 31
	int i, j;
	char *pc;
	AnsiString sq;
	*Sl = Sl->Trim();
	if (Sl->Length() < 1)
		return (1);
	if (Sl->Length() > MaxLngName)
		* Sl = Sl->SetLength(MaxLngName);
	*Sl = Sl->LowerCase();
	sq = Sl->SubString(1, 1);
	Sl->Delete(1, 1);
	sq = sq.UpperCase();
	*Sl = sq + *Sl;
	return (0);
}

// #############################################################################
// ####################  Сохранить в формате XLS                  ##############
// #############################################################################
int __fastcall TMainForm::SaveXlsFiles(TcxGrid *dx, AnsiString FormName, AnsiString Parameter) // Сохранить в формате XLS
{
	AnsiString SL, Sp1, Sp2;
	int RetCode, i;
	RetCode = 1;

Sp1=FormName;
Sp2=Parameter;
ExportExcelLog(Sp1, Sp2);

try{
SL=AnsiString(SetupIni.PathXLS);
if(SL.Length()>0)SaveDialogXLS->InitialDir=SL;
if(SaveDialogXLS->Execute()==true)
  {Ansistrings::StrLCopy(SetupIni.PathXLS,(const char *)(SaveDialogXLS->InitialDir.c_str()),sizeof(SetupIni.PathXLS)-2);
   try{
   i=SaveDialogXLS->FilterIndex;
   switch(i)
	{
	 case 1:ExportGridToXLSX(SaveDialogXLS->FileName, (TcxGrid*)dx, true, true, true, AnsiString("xlsx"));
			break;
	 case 2:ExportGridToExcel(SaveDialogXLS->FileName, (TcxGrid*)dx);
			break;
	 case 3:ExportGridToHTML(SaveDialogXLS->FileName, (TcxGrid*)dx);
			break;
	 case 4:ExportGridToText(SaveDialogXLS->FileName, (TcxGrid*)dx, False, True, '~');
			break;
	 case 5:ExportGridToXML (SaveDialogXLS->FileName, (TcxGrid*)dx);
	        break;
	 //case 6:SaveCSVFiles((TcxGrid*)dx,Sp1, Sp2);break;
	}
	}catch(...){}
   RetCode=0;
  }
  }catch(...){}
//  delete SaveDialogXLS;
return(RetCode);
/*


	int RetCode, i;
	RetCode = 1;
	// ####################  Сохранить в формате XLS  ##############
	// return(RetCode); //############  Сохранить в формате XLS  ##############
	// ####################  Сохранить в формате XLS  ##############

	// TSaveDialog *SaveDialogXLS= new TSaveDialog(this);

	try {
		SL = AnsiString(SetupIni.PathXLS);
		if (SL.Length() > 0)
			SaveDialogXLS->InitialDir = SL;
		if (SaveDialogXLS->Execute() == true) {
			SL = SaveDialogXLS->FileName;
			// ExportGrid4ToExcel(SL,dx,true,true,true,AnsiString("xls"));
			i = SL.LastDelimiter(":\\");
			if (i > 0) {
				SL.Delete(i, SL.Length() - i + 1);
				StrLCopy(SetupIni.PathXLS, SL.c_str(),
					sizeof(SetupIni.PathXLS) - 2);
				SetupIni.PathXLS[sizeof(SetupIni.PathXLS) - 1] = 0;
			}
			RetCode = 0;
		}
		Sp1 = FormName;
		Sp2 = Parameter;
		ExportExcelLog(Sp1, Sp2);
	}
	catch (...) {
	}
	return (RetCode);
	*/
}
// ##############################################################################################
// ############            Запуск отдельного потока (Время на панели ОЖИДАНИЯ        ############
// ##############################################################################################

__fastcall TClockThread::TClockThread(bool CreateSuspended)
	: TThread(CreateSuspended) {
	CreateSuspended = true;
	begtime = new TDateTime;
	lasttime = new TDateTime;
}

// ---------------------------------------------------------------------------
void __fastcall TClockThread::Execute() {
	UnicodeString s1;
	// *begtime=Time();

	do {
		*lasttime = Time();
		DateTimeToString(s1, "hh:nn:ss.zzz", *lasttime - *begtime);
		((TLabel*)clc)->Caption = s1;
		((TLabel*)clc)->Repaint();
		// ((TLabel*)clc)->Refresh();

		Sleep((unsigned)90);
	}
	while (clockstop == 0);
	Terminate();
}

// -----------------------------------------------------------------------------

// #############################################################################
// ####################  Сохранить в формате XLS для cxDBTreeList  #############
// #############################################################################
int __fastcall TMainForm::SaveXlsFiles_cxDBTreeList
	(TcxDBTreeList *cxDBTreeList1) // Сохранить в формате XLS  для cxDBTreeList
{
	UnicodeString SL;
	int RetCode, i;
	RetCode = 1;

	try {
		DateTimeToString(SL, "yyyymmddhhnnsszzz", Now());
		SL = AnsiString(DirFileSetup) + vFILEPATHTEMP + "\\" + SL + ".xls";
		// ExportGrid4ToExcel(SL,dx,true,true,true,AnsiString("xls"));
		// cxExportTL4ToExcel(SL, (Cxtl::TcxCustomTreeListControl*) cxDBTreeList1,true,true,false,"xls");

		RzLauncher1->ShowMode = smHide;
		RzLauncher1->WaitType = wtFullStop;
		RzLauncher1->WaitUntilFinished = false;
		RzLauncher1->StartDir = AnsiString(DirFileSetup) + vFILEPATHTEMP;
		RzLauncher1->FileName = AnsiString(SL);
		RzLauncher1->Parameters = AnsiString(" ");
		// RzLauncher1->Action=Open;
		RzLauncher1->Execute();
	}
	catch (...) {
		RetCode = -1;
	}
	if (RetCode == -1) {
		try {
			SL = AnsiString(SetupIni.PathXLS);
			if (SL.Length() > 0)
				SaveDialogXLS->InitialDir = SL;
			if (SaveDialogXLS->Execute() == true) {
				// cxExportTL4ToExcel(SaveDialogXLS->FileName, (Cxtl::TcxCustomTreeListControl*) cxDBTreeList1,true,true,false,"xls");
				SL = SaveDialogXLS->FileName;
				i = SL.LastDelimiter(":\\");
				if (i > 0) {
					SL.Delete(i, SL.Length() - i + 1);
					Ansistrings::StrLCopy(SetupIni.PathXLS, AnsiString(SL).c_str(),
						sizeof(SetupIni.PathXLS) - 2);
					SetupIni.PathXLS[sizeof(SetupIni.PathXLS) - 1] = 0;
				}

				RetCode = 0;
			}
		}
		catch (...) {
		}
	}
	// delete SaveDialogXLS;
	return (RetCode);
}

// ---------------------------------------------------------------------------
// ############################################################################
// ############################################################################
// #####  Запуск отображения HELP                                  ############
// ##### Параметры: -1 из HTML HELP иначе ID из таблицы aa_Help    ############
// ############################################################################

void __fastcall TMainForm::StartHelp(int Idn) // Запуск отображения HELP
{
	AnsiString SL;
	if (Idn == -1) { // Запуск помощи из HTML файла (старый)
		// RzLauncher1->ShowMode= smHide;
		RzLauncher1->StartDir = AnsiString(DirFileSetup) + "\\Help";
		RzLauncher1->FileName = AnsiString("index.htm");
		// AnsiString(ExecFileName);
		RzLauncher1->Parameters = AnsiString(" ");
		RzLauncher1->Execute();
	}
	else { // Запуск HELP из  табл aa_Help
		Qw->Close();
		Qw->SQL->Clear();
		Qw->SQL->Add
			("DECLARE @Src int,@Ii int;" "SET @Src=:D0;"
			"if(exists(select * from tempdb..sysobjects where id = object_id('tempdb..#WSel67545Tmp0List')))" "TRUNCATE TABLE #WSel67545Tmp0List;ELSE CREATE TABLE #WSel67545Tmp0List(Idn int NULL);"
			"if(exists(select * from tempdb..sysobjects where id = object_id('tempdb..#WSel67545TmplList')))" "TRUNCATE TABLE #WSel67545TmplList;ELSE CREATE TABLE #WSel67545TmplList(Idn int NULL);"
			"if(exists(select * from tempdb..sysobjects where id = object_id('tempdb..#WSel67545MovSilt')))" "TRUNCATE TABLE #WSel67545MovSilt;ELSE CREATE TABLE #WSel67545MovSilt(Idn int NULL);"
			"INSERT INTO #WSel67545MovSilt(Idn) VALUES(@Src);INSERT INTO #WSel67545Tmp0List(Idn)VALUES(@Src);" "SET @Ii=10;"
			"WHILE(@Ii>0 AND @Ii IS NOT null)" "BEGIN "
			"INSERT INTO #WSel67545TmplList(Idn)" "SELECT DISTINCT Idn FROM aa_Help WHERE PIdn in (SELECT Idn FROM #WSel67545Tmp0List)"
			"INSERT INTO #WSel67545MovSilt(Idn)SELECT DISTINCT Idn FROM #WSel67545TmplList;" "TRUNCATE TABLE #WSel67545Tmp0List;"
			"INSERT INTO #WSel67545Tmp0List(Idn)SELECT DISTINCT Idn FROM #WSel67545TmplList;" "SET @Ii=0;SELECT @Ii=COUNT(*)FROM #WSel67545Tmp0List;"
			"TRUNCATE TABLE #WSel67545TmplList;" "END "
			"SELECT Idn,Item FROM aa_Help WHERE Idn in (SELECT IDn FROM #WSel67545MovSilt)AND LEN(TypeExt)>1 AND ImageField IS NOT NULL;");
		Qw->Parameters->Items[0]->Value = Idn; // Id из табл aa_Help
		Qw->Open();
		switch (Qw->RecordCount) {
		case 0: // Нет HELP для данного ID
			Idn = 0;
			break;
		case 1: // HELP есть и он единственный
			Idn = Qw->Fields->Fields[0]->AsInteger;
			break;
		default: // HELP есть и много (два и более). Предложить доп.меню выбора
			Idn = 0;
			break;
		}
		Qw->Close();
		if (Idn != 0) { // Запуск HELPa
			Qw->Close();
			Qw->SQL->Clear();
			Qw->SQL->Text =
				"SELECT FileNameLoad,TypeExt,ImageField FROM aa_Help WHERE Idn=:D0;";
			try {
				Qw->Parameters->Items[0]->Value = Idn;
				Qw->Open();

				SL = Qw->Fields->Fields[0]->AsString + '.' +
					Qw->Fields->Fields[1]->AsString;
				SL = AnsiString(DirFileSetup) + vFILEPATHTEMP + "\\" + SL;
				// ExportGrid4ToExcel(SL,dx,true,true,true,AnsiString("xls"));
				((TBlobField*)(Qw->Fields->Fields[2]))->SaveToFile(SL);
				Qw->Close();
				RzLauncher1->ShowMode = smHide;
				RzLauncher1->WaitType = wtFullStop;
				RzLauncher1->WaitUntilFinished = false;
				RzLauncher1->StartDir = AnsiString(DirFileSetup) +
					vFILEPATHTEMP;
				RzLauncher1->FileName = AnsiString(SL);
				RzLauncher1->Parameters = AnsiString(" ");
				RzLauncher1->Execute();
			}
			catch (...) {
			};
		}
	}
}

// ------------------------------------------------------------------------------
// ##############################################################################
// ####### Преобразование строки в деньги без учета сепаратора ##################
// ##############################################################################
Currency __fastcall TMainForm::StringToCurrencyMy(char *P)
	// Преобразование строки в деньги без учета сепаратора
{
	bool fl;
	int i, z;
	char *pc;
	Currency Cc, Cd;

	Cc = 0;
	Cd = 0;
	if (*P == 0) {
		return (Cc);
	}
	for (pc = P, i = 0; i < 24 && *(pc + i) != 0; i++) {
		if (*(pc + i) == ',')
			break;
		Cc *= 10;
		Cc += (Currency)*(pc + i) - '0';
	}

	for (Cd = 0, z = 1; i < 24 && *(pc + i) != 0; i++) {
		if (*(pc + i) == ',')
			continue;
		Cd *= 10;
		Cd += (Currency)*(pc + i) - '0';
		z *= 10;
	}
	return (Cc += Cd / z);
}

// ##############################################################################
// ############ Отобразить фотографию  JPG ######################################
// ##############################################################################
void __fastcall TMainForm::SetImageJpg(TADOQuery *QrFt, int FT_TYPE,
	TBlobField *QrFtFTFOTOCL, TImage *Image3, int TypeFill)
	// Отобразить фотографию  JPG
{
	int i;
	try {
		if (QrFt->Active == true && QrFt->Eof == false &&
			QrFtFTFOTOCL->IsNull == false) {
			i = 0;
			try {
				i = FT_TYPE;
			}
			catch (...) {
			};
			if (i == 1) // Формат JPG
			{
				TMemoryStream * pms = new TMemoryStream();
				// Указатель на временную память
				TJPEGImage *Jpg = new TJPEGImage();
				try {
					QrFtFTFOTOCL->SaveToStream(pms);
					pms->Position = 0;
					Jpg->LoadFromStream(pms);
					Image3->Picture->Assign(Jpg);
				}
				catch (...) {
				};
				delete Jpg;
				delete pms;
			}
			else // Стандарт BMP
			{
				try {
					Image3->Picture->Assign(QrFtFTFOTOCL);
				}
				catch (...) {
					iTypeFill(Image3, TypeFill);
				}
			}
		}
		else {
			iTypeFill(Image3, TypeFill);
		} // Нет фотографии
		Image3->Tag = 1;
	}
	catch (...) {
	};
};

void __fastcall TMainForm::iTypeFill(TImage *ImDST, int TypeFill)
	// Заполнить при отсутсевии изображения
{ // TRect R;
	switch (TypeFill) {
	default:
		// R=ImDST->Canvas->ClipRect;
		if (ImDST->Picture->Graphic != NULL) { // Убрать фотографию
			ImDST->Picture->Bitmap->Dormant(); // Free up GDI resources
			ImDST->Picture->Bitmap->FreeImage(); // Free up Memory.
		}
		ImDST->Canvas->Brush->Color = clBtnFace;
		ImDST->Canvas->FillRect(ImDST->Canvas->ClipRect);
		break;
	case 1:
		ImDST->Picture->Assign(MainForm->ImageNnFoto->Picture);
		break;
	}
}

// AnsiString  __fastcall TMainForm::GetDoc()// Обновить таблицу
// {
// OpenDialogDoc->Execute();
// return(OpenDialogDoc->FileName);
// }
// ---------------------------------------------------------------------------
// ---------------------------------------------------------------------------
// ############################################################################
// ############################################################################
// ######## Сохранить  Схему имен просмотра               ######################
// ############################################################################
// ############################################################################
int __fastcall TMainForm::SaveShemaView(struct SaveTblControl *SaTbl,
	AnsiString ShName, int KeyForm) // Сохранить  Схему имен просмотра
{
	// Сохранить  Схему имен просмотра
	int i;
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add
		("DECLARE @Nm nvarchar(512),@IdnZ int,@Siz int,@ViewUserIns int,@ViewKeyForm int;"
		"SET @IdnZ=0;SET @Nm=:D0;SET @Siz=:D1;SET @ViewUserIns=:D2;SET @ViewKeyForm=:D3;" "SELECT @IdnZ=Idn FROM spl_LbViewTable WHERE ViewName=@Nm AND ViewKeyForm=@ViewKeyForm;"
		"IF(@IdnZ=0 OR @IdnZ is null)" "BEGIN "
		"INSERT INTO spl_LbViewTable(ViewName,ViewKeyForm,ViewDateIns,ViewUserIns)" "VALUES(@Nm,@ViewKeyForm,getdate(),@ViewUserIns);"
		"SELECT @IdnZ=Idn FROM spl_LbViewTable WHERE ViewName=@Nm AND ViewKeyForm=@ViewKeyForm AND ViewUserIns=@ViewUserIns;" "END "
		"UPDATE spl_LbViewTable SET ViewData =:D4,ViewDateUpd=getdate(),ViewUserUpd=@ViewUserIns,ViewSize=@Siz WHERE Idn=@IdnZ;" "SELECT @IdnZ;"
		);

	Qw->Parameters->Items[0]->Value = ShName.Trim(); // Имя схемы
	Qw->Parameters->Items[1]->Value = sizeof(struct SaveTblControl); // размер
	Qw->Parameters->Items[2]->Value = PermisHdr.KeyUserStartProgramm;
	// ID пользователя
	Qw->Parameters->Items[3]->Value = KeyForm; // Код текущей формы
	TMemoryStream *pMS = new TMemoryStream;
	try {
		// try{MainForm->SaveParamTableBanded(cxView1,&SetupIni.sSpList.STblCtrl.TbCtrl[0],64);}catch(...){}
		pMS->Write((void*)SaTbl, sizeof(struct SaveTblControl));
		pMS->Position = 0;
		(Qw->Parameters->Items[4])->LoadFromStream(pMS, ftBlob);
	}
	catch (...) {
	}
	delete pMS;
	try {
		Qw->Open();
		i = Qw->Fields->Fields[0]->AsInteger;
		Qw->Close();
	}
	catch (...) {
		i = -1;
	}
	return (i);
}

// ---------------------------------------------------------------------------
// ############################################################################
// ######## загрузить  Схему имен просмотра               ######################
// ############################################################################
int __fastcall TMainForm::LoadListShemaView(struct SaveTblControl *SaTbl,
	TRzComboBox *rzCB, int Idn, AnsiString ViewNameForm)
	// загрузить  Схему имен просмотра
{
	int iIndex, i;
	if (rzCB != NULL) {
		Qw->Close();
		Qw->SQL->Clear();
		Qw->SQL->Add
			("SELECT Idn,ViewName FROM spl_LbViewTable "
			"WHERE ViewNameForm=:D0 AND ViewDateDel is null ORDER BY ViewDateUpd DESC;");
		Qw->Parameters->Items[0]->Value = ViewNameForm; // Код текущей формы
		Qw->Open();
		rzCB->Items->Clear();
		while (Qw->Eof == false) {
			rzCB->Items->AddObject(Qw->Fields->Fields[1]->AsString,
				(TObject*)(Qw->Fields->Fields[0]->AsInteger));
			Qw->Next();
		}
		i = rzCB->Items->IndexOfObject((TObject*)Idn);
		rzCB->ItemIndex = i;
		Qw->Close();
	}

	if (rzCB->Items->Count > 0 && Idn != 0 && SaTbl != NULL) {
		iIndex = rzCB->Items->IndexOfObject((TObject*)Idn);
		if (iIndex != -1)
			rzCB->ItemIndex = iIndex;
		if (rzCB->ItemIndex < 0)
			rzCB->ItemIndex = 0;

		// SetupIni.sSpList.IdView=(int)RzComboBox1->Items->Objects[RzComboBox1->ItemIndex];// ((TObject*) SetupIni.sSpList.IdView);  //Код формы просмотра
		Qw->Close();
		Qw->SQL->Clear();
		Qw->SQL->Add("SELECT ViewData FROM spl_LbViewTable WHERE Idn=" +
			IntToStr(Idn));
		Qw->Open(); // (TBlobField*)Qw->Fields->Fields[0]
		TMemoryStream *pMS = new TMemoryStream;
		try {
			((TBlobField*)Qw->Fields->Fields[0])->SaveToStream(pMS);
			Qw->Close();
			pMS->Position = 0;
			pMS->Read((void*)SaTbl, sizeof(struct SaveTblControl));
		}
		catch (...) {
		};
		delete pMS;

	}
	else
		return (-1);
	return (0);
}

// ############################################################################
// ############################################################################
// ######## Процедуры сохранения данных BeforePost       ######################
// ############################################################################
// ############################################################################
// ######### Сохранение данных в главной таблице ###################
void __fastcall TMainForm::BeforePostGeneral_Data(TDataSet *DataSet,
	AnsiString TablGeneral, int index, int Idn)
	// Сохранение данных в главной таблице
{
	int i;
	TMemoryStream* pms;

	Qw->SQL->Clear();
	Qw->SQL->Add("UPDATE " + TablGeneral + " SET " +
		DataSet->Fields->Fields[index]->FieldName + "=:D0 WHERE Idn=:D1;");
	Qw->Parameters->Items[1]->Value = Idn; //

	switch (DataSet->Fields->Fields[index]->DataType) {
	case ftBlob:
		ftMemo : ftGraphic : pms = new TMemoryStream();
		((TBlobField*)DataSet->Fields->Fields[index])->SaveToStream(pms);
		pms->Position = 0;
		Qw->Parameters->Items[0]->DataType = ftBlob;
		Qw->Parameters->Items[0]->LoadFromStream(pms, ftBlob); //
		delete pms;
		break;
	case ftCurrency:
	case ftFloat:
	case ftBCD:
		Qw->Parameters->Items[0]->DataType = ftCurrency;
		Qw->Parameters->Items[0]->Value =
			DataSet->Fields->Fields[index]->AsCurrency; //
		break;
	case ftDateTime:
		Qw->Parameters->Items[0]->DataType = ftDate;
		Qw->Parameters->Items[0]->Value =
			DataSet->Fields->Fields[index]->AsVariant; //
		break;
	case ftInteger:
		Qw->Parameters->Items[0]->DataType = ftInteger;
		Qw->Parameters->Items[0]->Value =
			DataSet->Fields->Fields[index]->AsInteger; //
		break;

	case ftUnknown:
		i = 0;
		goto LL0001;
	case ftString:
		i = 1;
		goto LL0001; // Qw->Parameters->Items[0]->DataType=ftInteger;
	case ftSmallint:
		i = 2;
		goto LL0001;
		//
	case ftWord:
		i = 4;
		goto LL0001;
	case ftBoolean:
		i = 5;
		goto LL0001;
		//
		// case  ftCurrency:  	i=7; goto LL0001;
		// case  ftBCD:  		i=8; goto LL0001;
	case ftDate:
		i = 9;
		goto LL0001;
	case ftTime:
		i = 10;
		goto LL0001;
		// case  ftDateTime:  	i=11;goto LL0001;
	case ftBytes:
		i = 12;
		goto LL0001;
	case ftVarBytes:
		i = 13;
		goto LL0001;
	case ftAutoInc:
		i = 14;
		goto LL0001;
		// case  ftBlob:  		i=15;goto LL0001;
		// case  ftMemo:  		i=16;goto LL0001;
		// case  ftGraphic:  	i=17;goto LL0001;
	case ftFmtMemo:
		i = 18;
		goto LL0001;
	case ftParadoxOle:
		i = 19;
		goto LL0001;
	case ftDBaseOle:
		i = 20;
		goto LL0001;
	case ftTypedBinary:
		i = 21;
		goto LL0001;
	case ftCursor:
		i = 22;
		goto LL0001;
	case ftFixedChar:
		i = 23;
		goto LL0001;
	case ftWideString:
		i = 24;
		goto LL0001;
	case ftLargeint:
		i = 25;
		goto LL0001;
	case ftADT:
		i = 26;
		goto LL0001;
	case ftArray:
		i = 27;
		goto LL0001;
	case ftReference:
		i = 28;
		goto LL0001;
	case ftDataSet:
		i = 29;
		goto LL0001;
	case ftOraBlob:
		i = 30;
		goto LL0001;
	case ftOraClob:
		i = 31;
		goto LL0001;
	case ftVariant:
		i = 32;
		goto LL0001;
	case ftInterface:
		i = 33;
		goto LL0001;
	case ftIDispatch:
		i = 34;
		goto LL0001;
	case ftGuid:
		i = 35;
		goto LL0001;
	case ftTimeStamp:
		i = 36;
		goto LL0001;
	case ftFMTBcd:
		i = 37;
		goto LL0001;
	case ftFixedWideChar:
		i = 38;
		goto LL0001;
	case ftWideMemo:
		i = 39;
		goto LL0001;
	case ftOraTimeStamp:
		i = 40;
		goto LL0001;
	case ftOraInterval:
		i = 41;
		goto LL0001;
	default:
		LL0001 : Qw->Parameters->Items[0]->DataType = ftWideString;
		Qw->Parameters->Items[0]->Value =
			DataSet->Fields->Fields[index]->AsString.Trim(); //
		break;
	}
	index = i;
	Qw->ExecSQL();
	Qw->Close();
}

// ############ Сохранение данных в библиотеках ###############################
void __fastcall TMainForm::BeforePostLib_Data(TDataSet *DataSet,
	AnsiString TablGeneral, AnsiString NameLib, int index, int Idn)
	////Сохранение данных в библиотеках
{
	AnsiString SV;
	SV = "DECLARE @iT nvarchar(1024),@TiL varchar(64),@iI int,@iL int;"
		"SET @iT=:D0;EXEC prLb_TextTrim @iT output;" "EXEC prLb_GetNumField " +
		TablGeneral + "," + DataSet->Fields->Fields[index]->FieldName + ",'" +
		NameLib + "',@iT,@iL OUTPUT,@iI OUTPUT," + IntToStr(Idn);
	Qw->SQL->Clear();
	Qw->SQL->Add(SV);
	Qw->Parameters->Items[0]->DataType = ftString;
	Qw->Parameters->Items[0]->Value =
		(DataSet->Fields->Fields[index]->AsVariant);
	Qw->ExecSQL();
}

// ############################################################################
// ############################################################################
// ######## Проверка контрольной суммы блока параметров ######################
// ############################################################################
// ############################################################################
int __fastcall TMainForm::CheckSumParam(char *P, int Siz) {
	int j, s;
	P += 4;
	for (s = Siz, j = Siz - 4; j > 0; j--, P++) {
		s += *P;
	}
	return (s);
}

// ------------------------------------------------------------------------------------------------
// ---------------------------------------------------------------------------
// ############################################################################
// ############################################################################
// ######## Сохранение параметров cxGrid  Для бандов     ######################
// ############################################################################
// ############################################################################
void __fastcall TMainForm::SetParamTableBanded(TcxGridDBBandedTableView *g,
	struct SaveTblControl *pV, int MaxSizes) // Установить параметрв таблицы
{
	int i, j, k, z, v, Siz;
	struct TblControl *p;
	bool Fl;
	char buf[32];

	g->BeginUpdate();
	for (i = 0, j = g->ColumnCount; i < j; i++) {
		Siz = g->Columns[i]->DataBinding->FieldName.Length();
		for (p = &(pV->TbCtrl[0]), v = 0;
		p->FieldName[0] != 0 && v < TbCtrlMAXSIZE - 1; v++, p++) {
			if (p->SizName != Siz)
				continue; // Даже Размер имен не совпадает
			if (Ansistrings::StrComp(AnsiString(g->Columns[i]->DataBinding->FieldName).c_str
				(), p->FieldName) == 0) { // Найдено поле

				g->Columns[i]->Position->BandIndex = p->ColOrdB;
				// Индех банда которому принадлежит колонка
				g->Columns[i]->Position->Band->Width = p->ColSizB;
				// Размер банда хозяина колонки
				if (p->ColSizM < 2)
					p->ColSizM = 5;
				g->Columns[i]->Width = p->ColSizM;
				if (p->ColVisM != false) {
					p->ColVisM = true;
				}
				g->Columns[i]->Visible = p->ColVisM;
				g->Columns[i]->Options->CellMerging = p->CellMerging;
				// Признак объединения одинаковых значений в столбхах
				g->Columns[i]->GroupIndex = p->ColGroup;
				g->Columns[i]->Index = p->ColOrdM;
				g->Columns[i]->Options->Filtering = p->FilterOn; // Для фильтра
				break;
			}
		}
	}
	// Восстановить флаги
	for (i = 1, j = g->Bands->Count; i < j;
	i++) // Просмотретъ список колонок в банде и спрятать банды у которых нет ни одной колонки
	{
		for (k = 0, Fl = false, z = g->Bands->Items[i]->ColumnCount; k < z; k++)
		{
			if (g->Bands->Items[i]->Columns[k]->Visible == true) {
				Fl = true;
				break;
			}
		}
		g->Bands->Items[i]->Visible = Fl;
	}
	g->OptionsView->CellAutoHeight = pV->CellAutoHeight;
	g->OptionsView->ColumnAutoWidth = pV->ColumnAutoWidth;
	pV->SetColumnParamDefolt = false;
	// Установка значений по умолчания(Запрещено сохранение до первого восстановления)
	g->EndUpdate();
}

// ---------------------------------------------------------------------------
void __fastcall TMainForm::SaveParamTableBanded(TcxGridDBBandedTableView *g,
	struct SaveTblControl *pV, int MaxSizes) // Сохранить параметры таблицы
{

	int i, j, v, k;
	struct TblControl *p, *pk;
	char buf[32]; // Временный буфер для хранения имен полей
	// Сохранить флаги
	if (pV->SetColumnParamDefolt == true)
		return; // Установка значений по умолчания(Запрещено сохранение до первого восстановления)
	pV->CellAutoHeight = g->OptionsView->CellAutoHeight;
	pV->ColumnAutoWidth = g->OptionsView->ColumnAutoWidth;

	for (p = &(pV->TbCtrl[0]), j = TbCtrlMAXSIZE, i = 0; i < j; i++, p++)
		p->ColVisM = false; // Если колонки нет то она невидима по умолчанию
	for (p = &(pV->TbCtrl[0]), j = g->ColumnCount, i = 0;
	i < TbCtrlMAXSIZE && i < j; i++) {
		Ansistrings::StrLCopy(buf, AnsiString(g->Columns[i]->DataBinding->FieldName).c_str(),
			sizeof(buf) - 2); // Наименование поля
		for (p = &(pV->TbCtrl[0]), v = TbCtrlMAXSIZE - 1; v > 0; v--, p++) {
			if (p->FieldName[0] == 0) {
				Ansistrings::StrLCopy(p->FieldName, buf, sizeof(p->FieldName) - 2);
				p->SizName = Ansistrings::StrLen(buf); // Наименование поля
				for (k = v - 1, pk = p + 1; k > 0; k--, pk++) {
					pk->TimeSet = 0;
					pk->SizName = 0;
					pk->FieldName[0] = 0;
					pk->ColVisM = false;
				} // Пронулить до конца
				break;
			}
			if (Ansistrings::StrComp(buf, p->FieldName) == 0)
				break;
		}
		if (v <= 0)
			continue;
		p->TimeSet = Now().FileDate();
		// Дата и время заполнения в файловом формате
		p->ColSizM = g->Columns[i]->Width;
		p->ColOrdM = i;
		p->ColVisM = g->Columns[i]->Visible;
		p->ColOrdB = g->Columns[i]->Position->BandIndex;
		// Индех банда которому принадлежит колонка
		p->ColSizB = g->Columns[i]->Position->Band->Width;
		// Размер банда хозяина колонки
		p->ColGroup = g->Columns[i]->GroupIndex; // Индекс группировки
		p->CellMerging = g->Columns[i]->Options->CellMerging;
		// Признак объединения одинаковых значений в столбхах
		p->FilterOn = g->Columns[i]->Options->Filtering; // Для фильтра

		if (p->ColSizM < 5) {
			p->ColSizM = 5;
			p->ColVisM = false;
		}
	}

	/*
	 int i,j,v;
	 struct TblControl *p;
	 char buf[32];
	 //Сохранить флаги
	 pV->CellAutoHeight=g->OptionsView->CellAutoHeight;
	 pV->ColumnAutoWidth=g->OptionsView->ColumnAutoWidth;

	 for(j=g->ColumnCount,i=0;i<TbCtrlMAXSIZE && i<j;i++)
	 {StrLCopy(buf,g->Columns[i]->DataBinding->FieldName.c_str(),sizeof(buf)-2); //Наименование поля
	 for(p=&(pV->TbCtrl[0]),v=TbCtrlMAXSIZE-1;v>0;v--,p++)
	 {if(p->FieldName[0]==0){StrLCopy(p->FieldName,buf,sizeof(p->FieldName)-2);break;} //Наименование поля
	 if(StrComp(buf,p->FieldName)==0)break;
	 }
	 if(v<=0)continue;

	 //v=g->Columns[i]->Position->ColIndex;
	 p->ColSizM=g->Columns[i]->Width;
	 p->ColOrdM=g->Columns[i]->Position->ColIndex;//Tag;
	 p->ColVisM=g->Columns[i]->Visible;
	 if(p->ColSizM<5){p->ColSizM=5;p->ColVisM=false;}
	 }
	 for(p=&(pV->TbCtrl[0]),i=0,j=g->Bands->RootItemCount;i<j&&i<TbCtrlMAXSIZE;i++,p++)
	 {p->ColSizB=g->Bands->RootItems[i]->Width;}
	 */

}

// ############################################################################
// ############################################################################
// ######## Сохранение параметров cxGrid  без бандов     ######################
// ############################################################################
// ############################################################################
// ---------------------------------------------------------------------------
void __fastcall TMainForm::SetParamTableView(TcxGridDBTableView *g,
	struct SaveTblControl *pV, int MaxSizes) // Установить параметрв таблицы
{
	int i, j, k, z, v, w;
	struct TblControl *p;
	char buf[32];

	g->BeginUpdate();
	for (p = &(pV->TbCtrl[0]), j = g->ColumnCount, w = 0, v = 0;
	p->FieldName[0] != 0 && v < TbCtrlMAXSIZE - 1 && w < j; v++, p++) {
		for (i = 0; i < j; i++) {
			if (Ansistrings::StrComp(AnsiString(g->Columns[i]->DataBinding->FieldName).c_str
				(), p->FieldName) == 0) { // Найдено поле
				w++;
				if (p->ColSizM < 2)
					p->ColSizM = 4;
				g->Columns[i]->Width = p->ColSizM;
				if (p->ColVisM != false) {
					p->ColVisM = true;
				}
				g->Columns[i]->Visible = p->ColVisM;
				g->Columns[i]->Options->CellMerging = p->CellMerging;
				// Признак объединения одинаковых значений в столбхах
				g->Columns[i]->Options->Filtering = p->FilterOn; // Для фильтра
				g->Columns[i]->GroupIndex = p->ColGroup;
				g->Columns[i]->Index = p->ColOrdM;
				break;
			}
		}
	}
	// Восстановить флаги
	g->OptionsView->CellAutoHeight = pV->CellAutoHeight;
	g->OptionsView->ColumnAutoWidth = pV->ColumnAutoWidth;
	pV->SetColumnParamDefolt = false;
	// Установка значений по умолчания(Запрещено сохранение до первого восстановления)
	g->EndUpdate();
}

// ---------------------------------------------------------------------------
void __fastcall TMainForm::SaveParamTableView(TcxGridDBTableView *g,
	struct SaveTblControl *pV, int MaxSizes) // Сохранить параметры таблицы
{
	int i, j, v;
	struct TblControl *p;
	char buf[32]; // Временный буфер для хранения имен полей
	// Сохранить флаги
	if (pV->SetColumnParamDefolt == true)
		return; // Установка значений по умолчания(Запрещено сохранение до первого восстановления)
	pV->CellAutoHeight = g->OptionsView->CellAutoHeight;
	pV->ColumnAutoWidth = g->OptionsView->ColumnAutoWidth;
	for (p = &(pV->TbCtrl[0]), j = TbCtrlMAXSIZE, i = 0; i < j; i++, p++)
		p->ColVisM = false; // Если колонки нет то она невидима по умолчанию
	for (p = &(pV->TbCtrl[0]), j = g->ColumnCount, i = 0;
	i < TbCtrlMAXSIZE && i < j; i++) {
		Ansistrings::StrLCopy(buf, AnsiString(g->Columns[i]->DataBinding->FieldName).c_str(),
			sizeof(buf) - 2); // Наименование поля
		for (p = &(pV->TbCtrl[0]), v = TbCtrlMAXSIZE - 1; v > 0; v--, p++) {
			if (p->FieldName[0] == 0) {
				Ansistrings::StrLCopy(p->FieldName, buf, sizeof(p->FieldName) - 2);
				p->SizName = Ansistrings::StrLen(buf);
				break;
			} // Наименование поля
			if (Ansistrings::StrComp(buf, p->FieldName) == 0)
				break;
		}
		if (v <= 0)
			continue;
		p->TimeSet = Now().FileDate();
		// Дата и время заполнения в файловом формате

		p->ColSizM = g->Columns[i]->Width;
		p->ColOrdM = i; // g->Columns[i]->Tag;
		p->ColVisM = g->Columns[i]->Visible;
		p->ColGroup = g->Columns[i]->GroupIndex; // Индекс группировки
		p->CellMerging = g->Columns[i]->Options->CellMerging;
		// Признак объединения одинаковых значений в столбхах
		p->FilterOn = g->Columns[i]->Options->Filtering; // Для фильтра
		if (p->ColSizM < 5) {
			p->ColSizM = 5;
			p->ColVisM = false;
		}
	}
}

// ---------------------------------------------------------------------------
void __fastcall TMainForm::SetParamCxTree(TcxDBTreeList *g,
	struct SaveTblControl *pV, int MaxSizes) // Установить параметрв таблицы
{
	int i, j, k, z;
	struct TblControl *p;

	for (j = g->ColumnCount, k = 0; k < j; k++) {
		g->Columns[k]->Tag = k + 1;
		g->Columns[k]->Position->ColIndex = k;
	} // g->Columns[k]->Position->ColIndex+1;
	for (j = g->ColumnCount, p = &(pV->TbCtrl[0]), i = 0;
	i < TbCtrlMAXSIZE && i < j; i++, p++) {
		g->Columns[i]->Position->ColIndex = p->ColOrdM;
	}

	for (p = &(pV->TbCtrl[0]), j = g->ColumnCount, i = 0;
	i < TbCtrlMAXSIZE && i < j; i++, p++) {
		if (p->ColSizM < 2)
			p->ColSizM = 4;
		g->Columns[i]->Width = p->ColSizM;
		if (p->ColVisM != false) {
			p->ColVisM = true;
		}
		g->Columns[i]->Visible = p->ColVisM;
	}
	// Восстановить флаги
	g->OptionsView->CellAutoHeight = pV->CellAutoHeight;
	g->OptionsView->ColumnAutoWidth = pV->ColumnAutoWidth;
}

// ---------------------------------------------------------------------------
void __fastcall TMainForm::SaveParamCxTree(TcxDBTreeList *g,
	struct SaveTblControl *pV, int MaxSizes) // Сохранить параметры таблицы
{
	int i, j, r;
	struct TblControl *p;
	// Сохранить флаги
	pV->CellAutoHeight = g->OptionsView->CellAutoHeight;
	pV->ColumnAutoWidth = g->OptionsView->ColumnAutoWidth;
	for (p = &(pV->TbCtrl[0]), j = g->ColumnCount, i = 0;
	i < TbCtrlMAXSIZE && i < j; i++, p++) {
		p->ColSizM = g->Columns[i]->Width;
		p->ColOrdM = g->Columns[i]->VisibleIndex;
		// Position->ColIndex;  //Position->ColIndex
		p->ColVisM = g->Columns[i]->Visible;
		if (p->ColSizM < 5) {
			p->ColSizM = 5;
			p->ColVisM = false;
		}
	}
}
// ------------------------------------------------------------------------------
/*
 //##############################################################################
 //#####                                    #####################################
 //##############################################################################
 struct Lex01
 {//Структура лексем для построения SQL запроса по переменным полям
 AnsiString ColumnName;    //РусскоеНаименование для колонки
 AnsiString KeyFieldName;  //Имя поля - исползуется как ключ для поиска в cxGrid2DBTableView2
 AnsiString SQLFieldName;  //Имя поля - непосредственно учавсвующее в запросе
 AnsiString SQLDesc;       //Дескриптор таблицы- непосредственно учавсвующее в запросе
 AnsiString SQLParentDesc; //Промежуточный дескриптор таблицы- непосредственно учавсвующее в запросе но возможно не используемый
 AnsiString RepositoryItem;//Наименование ТИПА РЕДАКТИРОВАНИЯ в репозитории cxEditRepository1
 AnsiString SQLTabJoin;    //Лексема JOIN  таблицы- непосредственно учавсвующее в запросе
 bool YesVisible;                // Да поле видимо
 bool YesJoin;                   // Лексема JOIN уже используется
 bool YesFiltr;                  // Для фильтра
 bool YesEdit;                   // Имя колонки->Опции->Едит Разрешение редактирования
 int  ColorCol;                  // Цвет колонок
 };
 //##############################################################################
 //#####                                    #####################################
 //##############################################################################



 struct TblControl{        //Структура управления cxGreed
 char FieldName[32]; //Наименование поля
 Word SizName;       //Размер имени
 int  Color;         //Цвет колонки
 int  TimeSet;       //Дата и время заполнения в файловом формате
 int  ColOrdM;       //Порядок следования колонок в таблице начальной загрузке
 int  ColOrdB;       //Порядок следования бандов в таблице начальной загрузке
 int  ColSizM;       //Размер каждой колонки по начальной загрузке
 int  ColSizB;       //Размер каждой бандов по начальной загрузке
 int  ColGroup;      //Индекс группировки
 bool ColVisM;       //Признак видимости колонки по начальной загрузке
 bool CellMerging;   //Признак объединения одинаковых значений в столбхах
 bool FilterOn;      //Включение фильтра
 };
 */

void __fastcall TMainForm::FirstLoadsTabs(struct Lex01 *Lex,
	struct SaveTblControl *pV) // Установить значения по загрузке
{
	struct Lex01 *pLex;
	int i, j;
	struct TblControl *p;
	pV->SetColumnParamDefolt = true;
	// Установка значений по умолчания(Запрещено сохранение до первого восстановления)
	for (pLex = Lex; pLex->KeyFieldName.Length() > 0; pLex++) {
		if (pLex->ColumnName.Length() > 0)
			pLex->YesVisible = false;
	} // По умолчанию все не видимо
	for (pLex = Lex; pLex->KeyFieldName.Length() > 0; pLex++) {
		if (pLex->ColumnName.Length() == 0)
			continue; // РусскоеНаименование для колонки
		for (p = &(pV->TbCtrl[0]), j = TbCtrlMAXSIZE - 1;
		p->FieldName[0] != 0 && j >= 0; j--, p++) {
			if (Ansistrings::StrComp(pLex->KeyFieldName.c_str(), p->FieldName) == 0)
			{ // Найдено поле
				pLex->YesVisible = p->ColVisM; // Да поле видимо
				if (pLex->YesVisible == false)
					pLex->YesFiltr = false; // Для невидимого поля фильтра нет
				else {
					pLex->YesFiltr = p->FilterOn;
				} // Для видимиго поля разрешить фильтр
				break;
			}
		}
	}
}

// ---------------------------------------------------------------------------
// ############################################################################
// ############################################################################
// ##### Чтение списка параметров настроек в azLib                 ############
// ##### Входные параметры:                                        ############
// #####   Idn -  ID в таблице azLib                               ############
// ##### Выходные параметры:                                       ############
// #####   SSL - StringList параметров                             ############
// #####   RetCode - дополнительный параметер типа INT             ############
// ############################################################################
void __fastcall TMainForm::ReadParamFromAzLib(int Idn, TStringList *SSL,
	int *RetCode) // Чтение списка параметров настроек в azLib
{
	SSL->Clear();
	TMemoryStream *pms = new TMemoryStream();
	try {
		Qw->Close();
		Qw->SQL->Clear();
		Qw->SQL->Add("SELECT TOP 1 azCode,azImage FROM azLib WHERE azId=:D0;");
		Qw->Parameters->Items[0]->Value = Idn;
		Qw->Open();
		*RetCode = Qw->Fields->Fields[0]->AsInteger;
		((TBlobField*)Qw->Fields->Fields[1])->SaveToStream(pms);
		pms->Position = 0;
		if (pms->Size > 3)
			SSL->LoadFromStream(pms);
		Qw->Close();
	}
	__finally {
		delete pms;
	}
}

// ---------------------------------------------------------------------------
// ############################################################################
// ############################################################################
// ##### Запись списка параметров настроек в azLib                   ###########
// ##### Входные параметры:                                          ###########
// #####   Idn -  ID в таблице azLib                                 ###########
// #####   PIdn -  ID Родительской строки в azLib.Допускается NULL    ##########
// #####   sName - Наименование строки в azLib.Допускается  NULL     ###########
// #####   SSL - StringList параметров                               ###########
// ###################################################################¹#########
void __fastcall TMainForm::WriteParamFromAzLib(int Idn, int PIdn,
	AnsiString sName, TStringList *SSL)
	// Запись списка параметров настроек в azLib
{
	int i, j, k;
	Adodb::TParameters *Tw;
	TMemoryStream *pms;
	AnsiString SL, SP;
	if (sName == NULL)
		SP = "Atention! AutoInsert parameters.";
	else
		SP = sName;
	if (PIdn == NULL)
		PIdn = -1;
	pms = new TMemoryStream();
	try {
		SSL->SaveToStream(pms);
		pms->Position = 0;
		Qw->Close();
		Qw->SQL->Clear();
		SL = "DECLARE @Idn int;SET @Idn=:D0;"
			"IF NOT EXISTS (SELECT  azId FROM azLib WHERE azId=@Idn)" "BEGIN "
			"SET IDENTITY_INSERT azLib ON " "INSERT INTO azLib(azId,azPid,azName,azCode,azType,azImage)VALUES(@Idn,:D1,:D2,0,1,null)"
			"SET IDENTITY_INSERT azLib OFF " "END ";
		if (pms->Size > 3) {
			SL += " UPDATE azLib SET azImage=:D3 WHERE azId=@Idn;";
		}
		else
			SL += " UPDATE azLib SET azImage=null WHERE azId=@Idn; ";
		Qw->SQL->Add(SL);
		Tw = Qw->Parameters;
		Tw->Items[0]->Value = Idn;
		Tw->Items[1]->Value = PIdn;
		Tw->Items[2]->Value = SP;
		if (pms->Size > 3) {
			Tw->Items[3]->LoadFromStream(pms, ftBlob);
			pms->Position = 0;
		}
		Qw->ExecSQL();
		Qw->Close();
	}
	__finally {
		delete pms;
	}
}

// ---------------------------------------------------------------------------
// ############################################################################
// ############################################################################
// ##### Чтение списка параметров настроек в azLib                   ###########
// ##### Входные параметры:                                          ###########
// #####   Idn -  ID в таблице azLib                                 ###########
// #####   PIdn -  ID Родительской строки в azLib.Допускается NULL    ##########
// #####   sName - Наименование строки в azLib.Допускается  NULL     ###########
// #####   SSL - StringList параметров                               ###########
// ###################################################################¹#########
int __fastcall TMainForm::ReadParamFromTStringList(AnsiString *SVal,
	AnsiString sName, AnsiString Def, TStringList *SSL)
	// Чтение списка параметров настроек в azLib
{
	int err;
	int i;
	err = 0;
	*SVal = SSL->Values[sName];
	if (*SVal == "") {
		if ((i = SSL->IndexOfName(sName)) != -1) {
			SSL->Delete(i);
		}
		SSL->Add(sName + "=" + Def);
		*SVal = Def;
		err = 1;
	}
	return (err);
}

// ---------------------------------------------------------------------------
// ###############################################################################
// ###############################################################################
// ############## Зафиксировать сообщение об ошибке в таблице atErrorMessage ####
// ###############################################################################
void __fastcall TMainForm::SetErrorMessage(AnsiString SL)
	// Зафиксировать сообщение об ошибке в таблице atErrorMessage
{
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add
		("DECLARE @Us int,@Ap int,@APP varchar(512);" "SET @APP=:D0;"
		"SELECT TOP 1 @Us=auId FROM aa_Users WHERE SUSER_SNAME()=auLogUser;" "SET @Ap=null;"
		"SELECT TOP 1 @Ap=azId FROM aa_Lib WHERE azName=@APP and azPId=1;" "IF(@Ap IS NULL)"
		"BEGIN " "INSERT INTO aa_Lib(azPId,azName)VALUES(1,@APP);"
		"SELECT TOP 1 @Ap=azId FROM aa_Lib WHERE azName=@APP and azPId=1;" "END "
		"INSERT INTO aa_ErrorMessage(IdUser,IdProg,iMessage)VALUES(@Us,@Ap,:D1);");
	Qw->Parameters->Items[0]->Value = AnsiString(NameProgram);
	// sLoadFromStream(pms,ftBlob);
	Qw->Parameters->Items[1]->Value = SL;
	Qw->ExecSQL();
	Qw->Close();
}
// ---------------------------------------------------------------------------
// ---------------------------------------------------------------------------
// ---------------------------------------------------------------------------

// ------------------------------------------------------------------------------
// ##############################################################################################
// ####################            создать ярлык на рабочем столе              ############
// ##############################################################################################
// Создание  ярлыка
// Входные параметры:
// pwzShortCutFileName - путь и имя  ярлыка , например, "C:\\Блокнот.lnk"
// Если не указан путь(NULL),  ярлык  будет создан на рабочем столе
// Прим.: Windows сама НЕ добавляет к имени расширение .lnk
// pszPathAndFileName  - путь и имя программы/файла, например, "C:\\Windows\\NotePad.Exe"
// или "C:\\Мои документы\\Файл.doc"
// pszWorkingDirectory -  рабочий  каталог, например, "C:\\Windows"
// pszArguments        - аргументы командной строки, например, "C:\\Doc\\Text.Txt"
// wHotKey             - горячая клавиша, например,
// для Ctrl+Alt+A     HOTKEY(HOTKEYF_ALT|HOTKEYF_CONTROL,'A')
// iCmdShow            - начальный вид, например, SW_SHOWNORMAL.
// Полный список - см. параметр nCmdShow функции ShowWindow
// pszIconFileName     - путь и имя файла, содержащего иконку, например, "C:\\Windows\\NotePad.Exe"
// int iIconIndex      - индекс иконки в файле, нумеруется с 0
// Возвращаемое значение:
// успешность создания  ярлыка  ( true -  ярлык  создан; false - ошибка )
// ---------------------------------------------------------------------
#define HOTKEY(modifier,key) ((((modifier)&0xff)<<8)|((key)&0xff))

// ---------------------------------------------------------------------
bool __fastcall TMainForm::CreateShortcut(LPCTSTR pwzShortCutFileName,
	LPCTSTR pszPathAndFileName, LPCTSTR pszWorkingDirectory,
	LPCTSTR pszArguments, WORD wHotKey, int iCmdShow, LPCTSTR pszIconFileName,
	int iIconIndex) // создать ярлык на рабочем столе
{
	IShellLink * pSL; /* будущий ярлык */
	IPersistFile * pPF; /* файл, в котором параметры ярлыка будут храниться */
	HRESULT hRes;
	wchar_t buf[MAX_PATH];
	char path[MAX_PATH];
	AnsiString SL;
	// Создание экземпляра компонента "Ярлык"
	hRes = CoCreateInstance(CLSID_ShellLink, 0, CLSCTX_INPROC_SERVER,
		IID_IShellLink, (LPVOID*)&pSL);
	if (SUCCEEDED(hRes)) {
		hRes = pSL->SetPath(pszPathAndFileName);
		if (SUCCEEDED(hRes)) {
			hRes = pSL->SetArguments(pszArguments);
			if (SUCCEEDED(hRes)) {
				hRes = pSL->SetWorkingDirectory(pszWorkingDirectory);
				if (SUCCEEDED(hRes)) {
					hRes = pSL->SetIconLocation(pszIconFileName, iIconIndex);
					if (SUCCEEDED(hRes)) {
						hRes = pSL->SetHotkey(wHotKey);
						if (SUCCEEDED(hRes)) {
							hRes = pSL->SetShowCmd(iCmdShow);
							if (SUCCEEDED(hRes)) {
								// Получение компонента хранилища параметров
								hRes = pSL->QueryInterface(IID_IPersistFile,
									(LPVOID*)&pPF);
								if (SUCCEEDED(hRes)) {
									// Сохранение созданного ярлыка
									if (pwzShortCutFileName == NULL) {
										LPITEMIDLIST items;
										if (SUCCEEDED
										(SHGetSpecialFolderLocation(Handle,
										CSIDL_DESKTOP, &items)))
										try {
										SHGetPathFromIDList(items, path);
										(AnsiString(path) +
										"\\Офис МЦФЭР\\" vPROGRAMNAME ".lnk")
										.WideChar(buf, sizeof(buf));
										}
										catch (...) {
										};
									}
									else {
										AnsiString(pwzShortCutFileName).WideChar
										(buf, sizeof(buf));
									}
									hRes = pPF->Save(buf, TRUE);
									pPF->Release();
								}
							}
						}
					}
				}
			}
		}
		pSL->Release();
	}
	return SUCCEEDED(hRes);
}

// ##############################################################################
void __fastcall TMainForm::ObrBefoOpenForm(int Tag)
	// Обработчик перед открытием любого окна
{
}
// ------------------------------------------------------------------------------
// ##############################################################################
// ######                       ПУНКТЫ МЕНЮ                                   ###
// ##############################################################################

void __fastcall TMainForm::N8Click(TObject *Sender) { // О программе
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#undef  NN
#endif
#define TFR TFrAboutBox
#define FR  FrAboutBox
#define FL  flAboutBox
#define NN  N8
	if (NN->Enabled != true)
		return;
	switch (FL) {
	case WINCLS:
		FR = new TFR(Application);
		FL = WINWRK;
		FR->Caption = NN->Caption;
		FR->Show();
		break;
	case WINWRK:
		if (FR->WindowState == wsMinimized) {
			FR->WindowState = wsMaximized;
		}
		FR->Show();
		break;
	}
}

void __fastcall TMainForm::Open() {
}

// ##################################################################################################
// ####################  Процедура Только цифры и "--" в тексте для импорта тел номеров из HTML #####
// ##################################################################################################
int __fastcall TMainForm::TestNumImpHTML(char *P) // Проверка номера
{
	int i, k;
	char *pc;
	if (*P == 0) {
		*P = ' ';
		*(P + 1) = 0;
		return (0);
	}
	for (pc = P, i = 0; i < 24 && *(pc + i) != 0; i++) {
		if (*(pc + i) == '-') {
			continue;
		}
		if (*(pc + i) < '0' || *(pc + i) > '9') {
			k = Ansistrings::StrLen(pc) - 1;
			Ansistrings::StrCopy(pc + i, pc + i + 1);
			i = -1;
			*(pc + k) = 0;
		}
	}
	*(pc + 16) = 0;
	return (0);
}

// ---------------------------------------------------------------------------
bool __fastcall TMainForm::GetValString(char **pBgn, char *pVal, int siz)
	// Выборка значения из текстовой строки
{
	char *pKey, *pKey2;
	unsigned k;
	*pVal = 0;
	pKey = strstr(*pBgn, ">");
	if (pKey == 0)
		return (false);
	pKey++;
	pKey2 = strstr(pKey, "<");
	if (pKey2 == 0)
		return (false);
	k = (unsigned)(pKey2 - pKey);
	if (k > (unsigned)siz) {
		k = (unsigned)siz - 1;
	}
	Ansistrings::StrLCopy(pVal, pKey, k);
	*pBgn = pKey2;
	return (true);
}

// ---------------------------------------------------------------------------
bool __fastcall TMainForm::GetDateFromVal(char *pVal, TDateTime *Dt, int fl)
	// Выборка значения из текстовой строки
{
	int i, k, S;
	unsigned short year, month, day;
	unsigned short hour, min, sec, msec;
	char *P, buf[255];

	year = 0;
	month = 0;
	day = 0;
	hour = 0;
	min = 0;
	sec = 0;
	msec = 0;
	i = 0;
	P = pVal;
	if (fl == 0)
		S = 0;
	else
		S = 4;
	while (S < 7) {
		if (*P == '/' || *P == '.' || *P == ':' || *P == 0) {
			S++;
			buf[i] = 0;
			i = 0;
			k = StrToIntDef(AnsiString(buf), 0);
			if (S == 1)
				day = k;
			if (S == 2)
				month = k;
			if (S == 3) {
				year = k;
				if (year <= 99)
					year += 2000;
			}
			if (S == 4) {
				hour = k;
			}
			if (S == 5) {
				min = k;
			}
			if (S == 6) {
				sec = k;
			}
			if (S == 7) {
				hour = k;
			}
			if (*P == 0) {
				*Dt = 0;
				try {
					if (year > 0)
						* Dt = TDateTime(year, month, day);
					*Dt += TDateTime(hour, min, sec, msec);
				}
				catch (...) {
					*Dt = 0;
				};
				return (true);
			}
			P++;
		}
		else {
			if (*P == ' ') {
				if (S == 2) {
					k = StrToIntDef(AnsiString(buf), 0);
					year = k;
					if (year <= 99)
						year += 2000;
					i = 0;
					P++;
					S++;
					i = 0;
				}
				else
					P++;
			}
			else {
				buf[i] = *P;
				i++;
				buf[i] = 0;
				P++;
			}
		}
	}
	return (false);
}

// ---------------------------------------------------------------------------
void __fastcall TMainForm::HTML1Click(TObject *Sender)
{ // Загрузка в Базу из HTML Изд.Макс.
	/*
	 #ifdef  TFR
	 #undef  TFR
	 #undef  FR
	 #undef  FL
	 #undef  NN
	 #endif
	 #define TFR TFrLoadDates_IM
	 #define FR  FrLoadDates_IM
	 #define FL  flFrLoadDates_IM
	 #define NN  N25
	 if(NN->Enabled!=true)return;
	 switch(FL)
	 {case WINCLS:   FR=new TFR(Application);FL=WINWRK;FR->Caption=NN->Caption;
	 FR->Show();break;
	 case WINWRK:   if(FR->WindowState==wsMinimized){FR->WindowState=wsMaximized;}
	 FR->Show();break;
	 }
	 */
}
// ---------------------------------------------------------------------------

// ---------------------------------------------------------------------------
int __fastcall TMainForm::CreateClient(AnsiString Clients, int *IdLoader)
{ // создание Клиентов.[-1] ошибка
	int i;
	try {
		Qw->Close();
		Qw->SQL->Clear();
		Qw->SQL->Add
			("DECLARE @idClients int,@IdLoader int;SET @IdLoader=:D0;"
			"exec bcCreateClient :D1,@IdLoader output,@idClients output;");
		Qw->Parameters->Items[0]->Value = *IdLoader;
		Qw->Parameters->Items[1]->Value = Clients;
		Qw->Open();
		*IdLoader = Qw->Fields->Fields[0]->AsInteger;
		i = Qw->Fields->Fields[1]->AsInteger;
		Qw->Close();
	}
	catch (...) {
		i = -1;
	}
	return (i);
}

// ---------------------------------------------------------------------------
void __fastcall TMainForm::CreateOtrosli(int idClients, AnsiString Otrosli,
	AnsiString NumOtrsl) { // создание Отрасли
	int i;
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add
		("DECLARE @Otrosli nvarchar(128),@NumOtrsl nchar(18),@idClients int;"
		"SET @Otrosli=:D0;" "SET @NumOtrsl=:D1;" "SET @idClients=:D2;"
		"exec bcCreateOtrosli @idClients,@Otrosli,@NumOtrsl;");
	Qw->Parameters->Items[0]->Value = Otrosli;
	Qw->Parameters->Items[1]->Value = NumOtrsl;
	Qw->Parameters->Items[2]->Value = idClients;
	Qw->ExecSQL();
	Qw->Close();
}
// ---------------------------------------------------------------------------
// #############################################################################
// #############################################################################
// ### Процедуа заполнения шаблона(RTF-файл.Подмена ключей значениями        ###
// ### Скопинцев.Начало                                                      ###
// #############################################################################

struct KeyToData {
	char *Key;
	int NumObr;
};

struct KeyToData KeyToData[] = {
	"[clt_Seller.PhysicalAddress]", 1, "[all_Invoices.IdNum256]", 2,
	"[all_Invoices.DateExtract]", 3, "[clt_Requisite.NameFull]", 4,
	"[clt_Seller.ShortName]", 5, "[clt_Seller.Address]", 6,
	"[clt_Seller.PostAddress]", 7, "[clt_Seller.Inn]", 8, "[clt_Seller.Kpp]", 9,
	"[clt_Seller.RS]", 10, "[clt_Seller.BANK]", 11, "[clt_Seller.BIK]", 12,
	"[clt_Seller.KS]", 13, "[clt_Seller.OKPO]", 14, "[clt_Seller.Sender]", 15,
	"[clt_Seller.LongName]", 16, "[clt_Seller.TELEPHONE.fax]", 17,
	"[clt_Seller.Mail]", 18, "[clt_Seller.InPerson]", 19, "[clt_Requisite.INN]",
	20, "[clt_Requisite.KPP]", 21, "[clt_Requisite.RS]", 22,
	"[clt_Requisite.Id256Bank]", 23, "[clt_Requisite.BIK]", 24,
	"[clt_Requisite.KS]", 25, "[clt_Requisite.OGRN]", 26,
	"[all_Invoices.Summa]", 27, "[all_Invoices.SummaSt]", 28, // 29-  резерв
		"[all_Invoices.SummaNDS]", 30, "[all_Invoices.SummaNDSSt]", 31,
	// 32-  резерв
		"[clt_Requisite.InPerson]", 40, "[clt_Requisite.PhysicalAddress]", 41,
	"[clt_Requisite.Address]", 42, "[clt_Requisite.PostAddress]", 43,
	"[all_Invoices.StrInvoices]", 44, "[clt_Requisite.Acting]", 45,
	"[all_Invoices.NDS]", 46, "[clt_Seller.SenderDol]", 47,
	"[clt_Requisite.UFK]", 48, "[clt_Requisite.telephonel]", 49,
	"[all_Invoices.Ins]", 50, "[all_Invoices.DateExtract_10]", 51,
	"[clt_Seller.Telephone]", 52, "[EmplUsers.PhoneLotus]", 53,

	"", -1
};

// ------------------------------------------------------------------------------

AnsiString __fastcall TMainForm::ReplaseKeyToDate(int Idn_all_InvoicesContract,
	AnsiString AKeyName) {
	struct KeyToData *pKey;
	char Buf[256];
	Ansistrings::StrLCopy(Buf, AKeyName.c_str(), 256);
	for (pKey = &KeyToData[0]; pKey->Key[0] != 0; pKey++) {
		if (Ansistrings::StrComp(pKey->Key, Buf) == 0) {
			return (KeyToText(Idn_all_InvoicesContract, pKey));
		}
	}
	return ("________________________");
}

// ------------------------------------------------------------------------------
AnsiString __fastcall TMainForm::KeyToText(int Idn_all_InvoicesContract,
	struct KeyToData *pKey) // Найти текст соответствующий ключ
{
	AnsiString Ret, SL;
	Currency Cr;
	int i;
	// if("[clt_Seller.PhysicalAddress]"==key){Ret="Смените версию программы";}
	Qw->Close();
	Qw->SQL->Clear();
	switch (pKey->NumObr) {
	default:
		Ret = "Смените версию программы";
		break;
	case 1: // "[clt_Seller.PhysicalAddress]",1,
		Qw->SQL->Add
			("SELECT PhysicalAddress	FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices) " "LEFT JOIN clt_Seller   C ON(C.idn=B.SellerID)"
			"WHERE  A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;
	case 2: // "[all_Invoices.IdNum256]",2,
		Qw->SQL->Add
			(" SELECT C.iText	FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "LEFT JOIN spl_LbText256 C ON(C.Idn=B.IdNum256)"
			"WHERE  A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 3: // "[all_Invoices.DateExtract]",3,
		Qw->SQL->Add
			("SELECT convert(varchar(16),B.[DateExtract],104)	FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "WHERE  A.Idn=" +
			IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 4: // "[clt_Requisite.NameFull",4,
		Qw->SQL->Add
			(" SELECT NameFull FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "LEFT JOIN clt_Requisite C ON(C.idn=B.IdRequsite)"
			"WHERE  A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 5: // [clt_Seller.ShortName]
		Qw->SQL->Add
			("SELECT ShortName	FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices) " "LEFT JOIN clt_Seller   C ON(C.idn=B.SellerID)"
			"WHERE  A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 6: // [clt_Seller.Address]
		Qw->SQL->Add
			("SELECT Address	FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices) " "LEFT JOIN clt_Seller   C ON(C.idn=B.SellerID)"
			"WHERE  A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 7: // [clt_Seller.PostAddress]
		Qw->SQL->Add
			("SELECT PostAddress	FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices) " "LEFT JOIN clt_Seller   C ON(C.idn=B.SellerID)"
			"WHERE  A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 8: // [clt_Seller.Inn]
		Qw->SQL->Add
			("SELECT Inn	FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices) " "LEFT JOIN clt_Seller   C ON(C.idn=B.SellerID)"
			"WHERE  A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 9: // [clt_Seller.Kpp]
		Qw->SQL->Add
			("SELECT Kpp	FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices) " "LEFT JOIN clt_Seller   C ON(C.idn=B.SellerID)"
			"WHERE  A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 10: // [clt_Seller.RS]
		Qw->SQL->Add
			("SELECT RS	FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "LEFT JOIN clt_Seller   C ON(C.idn=B.SellerID)"
			"WHERE  A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 11: // [clt_Seller.BANK]
		Qw->SQL->Add
			("SELECT BANK	FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "LEFT JOIN clt_Seller   C ON(C.idn=B.SellerID)"
			"WHERE  A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 12: // [clt_Seller.BIK]
		Qw->SQL->Add
			("SELECT BIK	FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "LEFT JOIN clt_Seller   C ON(C.idn=B.SellerID)"
			"WHERE  A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 13: // [clt_Seller.KS]
		Qw->SQL->Add
			("SELECT KS FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "LEFT JOIN clt_Seller   C ON(C.idn=B.SellerID)"
			"WHERE  A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 14: // [clt_Seller.OKPO]
		Qw->SQL->Add
			("SELECT OKPO FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "LEFT JOIN clt_Seller   C ON(C.idn=B.SellerID)"
			"WHERE  A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 15: // [clt_Seller.Sender]
		Qw->SQL->Add
			("SELECT Sender FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "LEFT JOIN clt_Seller   C ON(C.idn=B.SellerID)"
			"WHERE  A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 16: // [clt_Seller.LongName]
		Qw->SQL->Add
			("SELECT LongName FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "LEFT JOIN clt_Seller   C ON(C.idn=B.SellerID)"
			"WHERE  A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 17: // [clt_Seller.TELEPHONE.fax]
		Qw->SQL->Add
			("SELECT IsNull('Тел:'+TELEPHONE+' ','')+IsNull('Факс:'+fax,'') FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "LEFT JOIN clt_Seller   C ON(C.idn=B.SellerID)"
			"WHERE  A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 18: // [clt_Seller.Mail]
		Qw->SQL->Add
			("SELECT Mail FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "LEFT JOIN clt_Seller   C ON(C.idn=B.SellerID)"
			"WHERE  A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 19: // "[clt_Seller.InPerson]",19,
		Qw->SQL->Add
			("SELECT InPerson FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "LEFT JOIN clt_Seller   C ON(C.idn=B.SellerID)"
			"WHERE  A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 20: // "[clt_Requisite.INN]",20,
		Qw->SQL->Add
			("SELECT C.INN FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "LEFT JOIN clt_Requisite C ON(C.idn=B.IdRequsite)"
			"WHERE  A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 21: // [clt_Requisite.KPP]
		Qw->SQL->Add
			("SELECT C.KPP FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "LEFT JOIN clt_Requisite C ON(C.idn=B.IdRequsite)"
			"WHERE  A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 22: // //"[clt_Requisite.RS]",22,
		Qw->SQL->Add
			("SELECT C.RS FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "LEFT JOIN clt_Requisite C ON(C.idn=B.IdRequsite)"
			"WHERE  A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 23: // [clt_Requisite.Id256Bank]
		Qw->SQL->Add
			("SELECT D.iText FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "LEFT JOIN clt_Requisite C ON(C.idn=B.IdRequsite)"
			"LEFT JOIN spl_LbText256 D ON(D.idn=C.Id256Bank)" "WHERE  A.Idn=" +
			IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 24: // //"[clt_Requisite.BIK]",24,
		Qw->SQL->Add
			("SELECT C.BIK FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "LEFT JOIN clt_Requisite C ON(C.idn=B.IdRequsite)"
			"WHERE A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 25: // //[clt_Requisite.KS]
		Qw->SQL->Add
			("SELECT C.KS FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "LEFT JOIN clt_Requisite C ON(C.idn=B.IdRequsite)"
			"WHERE A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 26: // //[clt_Requisite.OGRN]
		Qw->SQL->Add
			("SELECT C.OGRN FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "LEFT JOIN clt_Requisite C ON(C.idn=B.IdRequsite)"
			"WHERE A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 27:
	case 28:
	case 29:
	/*
	 // [all_Invoices.Summa],[all_Invoices.SummaSt]
		Qw->SQL->Add
			("SELECT B.Summa FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "WHERE A.Idn=" +
			IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Cr = Qw->Fields->Fields[0]->AsCurrency;
		Qw->Close();
		Ret = MoneyToString(Cr, true, false, true);
		if (pKey->NumObr == 27) {
			i = Ret.Pos("рубл");
			Ret.Delete(1, i - 1);
			SL = CurrToStrF(Cr, ffFixed, 4);
			Ret = SL.Delete(SL.Length() - 4, 5) + " " + Ret;
		} */
		break;
	case 30:
	case 31:
	case 32:
	/*
	// "[all_Invoices.SummaNDS]",30, "[all_Invoices.SummaNDSSt]",31,
		Qw->SQL->Add
			("SELECT SummaNDS FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "WHERE A.Idn=" +
			IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Cr = Qw->Fields->Fields[0]->AsCurrency;
		Qw->Close();
		Ret = MoneyToString(Cr, true, false, true);
		if (pKey->NumObr == 30) {
			i = Ret.Pos("рубл");
			Ret.Delete(1, i - 1);
			SL = CurrToStrF(Cr, ffFixed, 4);
			Ret = SL.Delete(SL.Length() - 4, 5) + " " + Ret;
		} */
		break;

	case 40: // "[clt_Requisite.InPerson]",40, Id512InPerson
		Qw->SQL->Add
			("SELECT D.iText FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "LEFT JOIN clt_Requisite C ON(C.idn=B.IdRequsite)"
			"LEFT JOIN spl_LbText512 D ON(D.idn=C.Id512InPerson)" "WHERE A.Idn="
			+ IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 41:
		// "[clt_Requisite.PhysicalAddress]",41, Id512InPerson    Фактический адрес покупателя
		Qw->SQL->Add
			("SELECT D.FullAddr as iText " "FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices) " "LEFT JOIN clt_Client C ON(C.Idn=B.ClientID) "
			"LEFT JOIN clt_Addr H ON(H.idn=C.IdAddrFiz) " "LEFT JOIN clt_AddrFull D ON(H.IdAddrFull=D.idn) "
			"WHERE A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 42:
		// "[clt_Requisite.Address]",42, Id512InPerson            Юридический адрес покупателя
		Qw->SQL->Add
			("SELECT D.FullAddr as iText " "FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices) " "LEFT JOIN clt_Client C ON(C.Idn=B.ClientID) "
			"LEFT JOIN clt_Addr H ON(H.idn=C.IdAddrUr)" "LEFT JOIN clt_AddrFull D ON(H.IdAddrFull=D.idn) "
			"WHERE A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 43:
		// "[clt_Requisite.PostAddress]",43, Id512InPerson        Почтовый адрес покупателя
		Qw->SQL->Add
			("SELECT D.FullAddr as iText " "FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices) " "LEFT JOIN clt_Client C ON(C.Idn=B.ClientID) "
			"LEFT JOIN clt_Addr H ON(H.idn=C.IdAddrPost) " "LEFT JOIN clt_AddrFull D ON(H.IdAddrFull=D.idn) "
			"WHERE A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 44:
		// "[all_Invoices.StrInvoices]",44, Id512InPerson      Содержание счета, через запятую
		Qw->SQL->Add
			(" DECLARE @idn int,@Str nvarchar(4000),@Q int, @st nvarchar(256); "
			" SET @idn= " + IntToStr(Idn_all_InvoicesContract) +
			" SET @Str=''; " " DECLARE ClientAxapta_Cursor CURSOR LOCAL FORWARD_ONLY STATIC READ_ONLY FOR "
			" SELECT DISTINCT nm.iText/*,ad.IdAdvCondName*/ as iText,IdInvoiceOrder " " FROM all_InvoicesContract A "
			" LEFT JOIN all_InvoiceOrder i ON(i.InvoiceID=A.idInvoices) " " LEFT JOIN all_OrderItems o on(i.Idn=o.IdInvoiceOrder) "
			" LEFT JOIN all_AdvPriseList ad on o.AdvCondID=ad.IdAdvanceConditions "
			" LEFT JOIN spl_LbText512 nm on(i.Id512AdvCondName=nm.Idn)"
			" WHERE i.datedel is null and o.datedel is null and A.Idn=@idn ORDER BY nm.iText "
			"  OPEN ClientAxapta_Cursor "
			" FETCH NEXT FROM ClientAxapta_Cursor INTO @st,@Q " " WHILE @@FETCH_STATUS = 0 "
			" BEGIN "
			"   SET @Str=@Str+IsNull(@st+'; '+char(13),'') "
			" FETCH NEXT FROM ClientAxapta_Cursor INTO @st, @Q "
			"   END "
			"SELECT @Str ");
		SL = Qw->SQL->Text;
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		Ret.Delete(Ret.Length(), 1);
		break;

	case 45:
		// "[all_Invoices.StrInvoices]",44, Id512Acting Действующий на основании
		Qw->SQL->Add
			("SELECT D.iText FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "LEFT JOIN clt_Requisite C ON(C.idn=B.IdRequsite)"
			"LEFT JOIN spl_LbText512 D ON(D.idn=C.Id512Acting)" "WHERE B.Datedel is null and A.Idn="
			+ IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;
	case 46:
		// "[all_Invoices.StrInvoices]",44, Id512Acting Действующий на основании
		Qw->SQL->Add
			("SELECT MAX(B.NDS) FROM all_InvoicesContract A "
			"LEFT JOIN all_InvoiceOrder B on(A.idInvoices=B.InvoiceID)" "WHERE  B.Datedel is null and A.Idn=" +
			IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;
	case 47: // [clt_Seller.Mail]
		Qw->SQL->Add
			("SELECT SenderDol FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "LEFT JOIN clt_Seller   C ON(C.idn=B.SellerID)"
			"WHERE  B.Datedel is null and A.Idn=" +
			IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;
	case 48: // [clt_Requisite.UFK]
		Qw->SQL->Add
			("SELECT D.iText FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "LEFT JOIN clt_Requisite C ON(C.idn=B.IdRequsite)"
			"LEFT JOIN spl_LbText256 D ON(D.idn=C.Id256UFK)" "WHERE  B.Datedel is null and  A.Idn="
			+ IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;
	case 49: // [clt_Requisite.telephonel]
		Qw->SQL->Add
			("SELECT C.iText FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "LEFT JOIN clt_PhoneMail C ON(C.idn=B.idPhoneMail)"
			"WHERE  A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;
	case 50: // [all_Invoices.Ins]
		Qw->SQL->Add
			("SELECT C.auFamUser+' '+C.auNamUser+' '+C.auOtcUser FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "LEFT JOIN aa_Users C ON(C.auId=B.IdUser)"
			"WHERE  A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;
	case 51: // "[all_Invoices.DateExtract]",3,
		Qw->SQL->Add
			("SELECT convert(varchar(16),B.[DateExtract]+10,104)	FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "WHERE  A.Idn=" +
			IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;
	case 52: // [clt_Seller.Mail]
		Qw->SQL->Add
			("SELECT TELEPHONE FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "LEFT JOIN clt_Seller   C ON(C.idn=B.SellerID)"
			"WHERE  A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;

	case 53: // [all_Invoices.Ins]
		Qw->SQL->Add
			("SELECT C.auPhoneUser FROM all_InvoicesContract A "
			"LEFT JOIN all_Invoices B ON(B.idn=A.idInvoices)" "LEFT JOIN aa_Users C ON(C.auId=B.IdUser)"
			"WHERE  A.Idn=" + IntToStr(Idn_all_InvoicesContract));
		Qw->Open();
		Ret = Qw->Fields->Fields[0]->AsString;
		Qw->Close();
		break;
	}
	return (Ret);
}

// #############################################################################
// ### Процедуа заполнения шаблона(RTF-файл.Подмена ключей значениями        ###
// ### Скопинцев.Окончание                                                   ###
// #############################################################################
// #############################################################################
// ---------------------------------------------------------------------------
int __fastcall TMainForm::UpdateClient(AnsiString Clients, AnsiString Email,
	AnsiString Web, AnsiString Adres, AnsiString Phone, AnsiString Path,
	int IdPath, int *IdLoader) { // Редактирование клиентов
	int i;
	try {
		Qw->Close();
		Qw->SQL->Clear();
		Qw->SQL->Add
			("DECLARE @Email nvarchar(128),@Web nvarchar(128),@Adres nvarchar(512),@idLoader int, @idMContact int, @A int, @idClient int,"
			"@Phone nvarchar(128),@NameClient nvarchar(512),@IdPath int,@Load int,@IdCl int,@Lib nvarchar(128);" "SET @NameClient=:D0;"
			"SET @Email=:D1;" "SET @Web=:D2;" "SET @Adres=:D3;"
			"SET @Phone=:D4;" "SET @Lib=:D5;" "SET @IdPath=:D6;"
			"SET @Load=:D7;"

			"IF(@idLoader=0 or @idLoader<0 or @idLoader is null ) " "BEGIN "
			"SELECT @idLoader=MAX(idLoader) FROM bcClients  WHERE DateDel>='01.01.2100' " "IF(@idLoader=0 or @idLoader<0 or @idLoader is null )"
			"BEGIN " " SET @idLoader=0 " "END " "SET @idLoader=@idLoader+1 "
			"END " "SET @idClient=0;"
			"SELECT @idClient =idn FROM bcClients  WHERE NameClient=@NameClient AND DateDel>='01.01.2100';" "SELECT @A=idn FROM bcClAdress WHERE Adres=@Adres AND DateDel='01.01.2100' AND idClients=@idClient;"
			"IF(@idClient =0 or @idClient  is null) " "BEGIN "
			" INSERT INTO bcClients (NameClient,idLoader,Email,Web,Phone,Files,IdOtrasl)VALUES(@NameClient,@idLoader,@Email,@Web,@Phone,@Lib,@IdPath) " " SELECT @idClient =MAX(idn) FROM bcClients "
			" INSERT INTO bcClAdress(Adres,idClients)VALUES(@Adres,@idClient) " " SELECT @A=idn FROM bcClAdress WHERE Adres=@Adres AND DateDel>='01.01.2100' "

			"END " "IF(@idClient <>0 AND @idClient  is NOT null)" "BEGIN "
			"UPDATE bcOtrasl SET idClients=@idClient WHERE idn=@IdPath;" "END "

			"SELECT @idLoader,@idClient"
			/* "exec bcCreateOrg @Clients,@Load,@IdCl,@Email,@Web,@Adres,@Phone,@Path,@IdPath " */
			/* "exec bcUpdateClient @idClients,@Email,@Web,@Adres,@Phone,@Path,@IdPath;" */
			);
		Qw->Parameters->Items[0]->Value = Clients;
		Qw->Parameters->Items[1]->Value = Email;
		Qw->Parameters->Items[2]->Value = Web;
		Qw->Parameters->Items[3]->Value = Adres;
		Qw->Parameters->Items[4]->Value = Phone;
		Qw->Parameters->Items[5]->Value = Path;
		Qw->Parameters->Items[6]->Value = IdPath;
		Qw->Parameters->Items[7]->Value = *IdLoader;
		Qw->Open();
		*IdLoader = Qw->Fields->Fields[0]->AsInteger;
		i = Qw->Fields->Fields[1]->AsInteger;
		Qw->Close();
	}
	catch (...) {
		i = -1;
	}
	return (i);
}

// ---------------------------------------------------------------------------
void __fastcall TMainForm::CreateContakt(int idClients, AnsiString FIO,
	AnsiString Phone, AnsiString Dol) { // создание Контактов
	AnsiString SL;
	SL = "DECLARE @FIO nvarchar(256),@Phone char(64), "
		"@idLVDol int,@Dol nvarchar(256), " "@idClients int,@A int, "
		"@Fam nvarchar(32),@Imy nvarchar(32),@Otch nvarchar(32) " "SET @idClients=:D0 "
		"SET @FIO=:D1 " "SET @Phone=:D2 " "SET @Dol=:D3 " "SET @Fam=:D4 "
		"SET @Imy=:D5 " "SET @Otch=:D6 "

		"SELECT @idLVDol=idn FROM bcLibV WHERE Lib=@Dol AND type=1 " "if(@idLVDol is null OR @idLVDol=0) "
		"BEGIN " "INSERT INTO bcLibV(Lib,type)VALUES(@Dol,1) "
		"SELECT @idLVDol=idn FROM bcLibV WHERE Lib=@Dol AND type=1 " "END "

		"SELECT @A=idn FROM bcContaks WHERE FIO=@FIO AND Phone=@Phone AND idClients=@idClients " "IF(@A is null OR @A=0) "
		"BEGIN " "INSERT INTO bcContaks (FIO,Phone,idLVDol,idClients,Fam,Imy,Otch)"
		"VALUES(@FIO,@Phone,@idLVDol,@idClients,@Fam,@Imy,@Otch)" "END ";
	// "INSERT INTO bcContaks (FIO,Phone,idLVDol,idClients,Fam,Imy,Otch)"
	// "VALUES(@FIO,@Phone,@idLVDol,@idClients,@Fam,@Imy,@Otch)";
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(SL);
	Qw->Parameters->Items[0]->Value = idClients;
	Qw->Parameters->Items[1]->Value = FIO;
	Qw->Parameters->Items[2]->Value = Phone;
	Qw->Parameters->Items[3]->Value = Dol;
	Qw->Parameters->Items[4]->Value = " ";
	Qw->Parameters->Items[5]->Value = " ";
	Qw->Parameters->Items[6]->Value = " ";
	Qw->ExecSQL();
	Qw->Close();
}

// -------------------------------------------------------------------------------
void __fastcall TMainForm::TestLenStr(AnsiString *SL, int SizeI)
	// Проверить и изменить длину строки.
{
	int i;
	*SL = SL->Trim();
	i = SL->Pos("  ");
	while (i > 0) {
		SL->Delete(i, 1);
		i = SL->Pos("  ");
	}
	if (SL->Length() > SizeI)
		SL->SetLength(SizeI);
	if (SL->Length() == 0)
		* SL = " ";
}
// -------------------------------------------------------------------------------
/*
 @Np VARCHAR(256), --Наименование программы SET @Np='Программа учета стада овец.';
 @Nr  VARCHAR(256) --Маршрут и наименование ресурса SET @Nr='//Отара 11/стриженные./1212/wwwww/3456//789/12';
 AS
 */

int __fastcall TMainForm::WritePath(AnsiString APath)
	// Создать и записать маршрут
{
	AnsiString SL;
	int i;
	try {
		SL = "DECLARE @Np VARCHAR(2256),@Nr  VARCHAR(2256);"
			"DECLARE @Iv VARCHAR(2256),@Ivt VARCHAR(2256),@IDp INT,@IDr INT,@I INT,@J INT;"

			"SET @Np='Отраслевой каталог 2008';" "SET @Nr='" + APath +
			"';" // '//Отара 11/стриженные./1212вапр/wwwwwапрва/3456апрва//789уцкецук/12укецуке';

			"SELECT top 1 @IDp=Idn FROM bcOtrasl WHERE otName=@Np AND IdnP=-1 ORDER BY Idn;" // --Дерево ресурсов начинается с имени программы
			"if(@IDp is null)" "BEGIN "
			"INSERT INTO bcOtrasl(IdnP,otName,otLvl)VALUES(-1,@Np,0);" "SELECT top 1 @IDp=Idn FROM bcOtrasl WHERE otName=@Np AND IdnP=-1 ORDER BY Idn;"
			// --Дерево ресурсов начинается с имени программы
			"END "

			"SET @Iv=@Nr;" "__LP_Sets: " "SET @I= CHARINDEX ('/',@Iv);"
			"IF(@I>0)" "BEGIN " "SET @J=LEN(@Iv); SET @Ivt=@Iv;"
			"SET @Ivt= STUFF(@Ivt,@I,@J,''); SET @Iv=  STUFF(@Iv,1,@I,'');SET @IDr=0;" "IF(@I=1)GOTO __LP_Sets;"
			"SET @Ivt=LEFT(@Ivt,256);" "SELECT @IDr=Idn FROM bcOtrasl WHERE otName = @Ivt AND IdnP=@IDp;"
			"if(@IDr is null OR @IDr=0)" "BEGIN "
			"INSERT INTO bcOtrasl(IdnP,otName,otLvl,idClients)VALUES(@IDp,@Ivt,1,0);" "SELECT @IDr=Idn FROM bcOtrasl WHERE otName=@Ivt AND IdnP=@IDp;"
			"END " "SET @IDp=@IDr;" "GOTO __LP_Sets;" "END "

			"SET @IDr=0;" "SELECT @IDr=Idn FROM bcOtrasl WHERE otName = @Iv AND IdnP=@IDp;"
			"if(@IDr is null OR @IDr=0)" "BEGIN "
			"INSERT INTO bcOtrasl(IdnP,otName,otLvL,idClients)VALUES(@IDp,@Iv,2,-1);" "SELECT @IDr=Idn FROM bcOtrasl WHERE otName=@Iv AND IdnP=@IDp;"
			"END " "SELECT @IDr,@Ivt,@Iv;";
		Qw->Close();
		Qw->ParamCheck = false;
		Qw->SQL->Clear();
		Qw->SQL->Add(SL);
		Qw->Open();
		i = Qw->Fields->Fields[0]->AsInteger;
		Qw->Close();
		Qw->ParamCheck = true;
	}
	catch (...) {
		i = -1;
	}
	return (i);
}

// -------------------------------------------------------------------------------
// ###################################################################################
// ####                  Процедура Отправки счета через VENTAFAX b E'Mail        #####
// #### Создана 03.03.2010. АСкопинцев                                           #####
// #### Входные параметры-                                                       #####
// #### IdAccount - код документа                                                #####
// #### FaxNum                                                                   #####
// ####                                                                          #####
// ###################################################################################
void __fastcall TMainForm::SentAccountFax(int IdAccount, AnsiString FaxNum)
{ // Отправка счета по факсу
	// #define vPATH_VENTAFAX "C:\Program Files\Venta\Venta4Net 2\main.ini"   	//Машрут к модулям прграммы VENTAFAX
	// MainForm->
	this->IdAccount = IdAccount;
	Qa1->Close();
	Qa1->Parameters->Items[0]->Value = IdAccount;
	Qa1->Open();

	// Отправить по факсу
	AnsiString SL, SV;
	int i;
	/*
	 R0->ReportOptions->CreateDate=Now();
	 R0->ReportOptions->LastChange=Now();
	 R0->ReportOptions->Author=Qa1Ins->AsString;
	 R0->ReportOptions->Description->Text=Qa1Ins->AsString+" Счет №"+Qa1Num->AsString;
	 R0->ReportOptions->Name=Qa1Ins->AsString+" Счет №"+Qa1Num->AsString;
	 R0->PrintOptions->Printer="VentaFax";  //Default
	 R0->PrintOptions->ShowDialog=false;  //Default

	 frxPreview1->Print();
	 */
	CallExternWindow(1, "");
	SL = FaxNum;
	for (i = 1; i < SL.Length(); i++) {
		while (SL.IsDelimiter("0123456789", i) != true)
			SL.Delete(i, 1);
	}
	SV = SL.SubString(1, 3);
	SL.Delete(1, 3);
	CallExternWindow(1, "   ");
	// ВЫзвать окно управления факсом и записать код страны
	Sleep((unsigned long)400); // Дать время на активизацию
	CallExternWindow(1, "");
	// ВЫзвать окно управления факсом и записать код страны
	CallExternWindow(2, "");
	// ВЫзвать окно управления факсом и записать код города
	CallExternWindow(3, "78" + SV + SL);
	// ВЫзвать окно управления факсом и записать номер факса
	CallExternWindow(4, Qa1NameFull->AsString);
	// ВЫзвать окно управления факсом и записать Наименование учреждения
	CallExternWindow(5, Qa1FIO->AsString);
	// ВЫзвать окно управления факсом и записать Фамилию
	// R0->PrintOptions->Printer="Default";  //

	Qa1->Close();
}
// ---------------------------------------------------------------------------
// ##################################################################################################

void __fastcall TMainForm::N13Click(TObject *Sender) {
	// Инструкция пользователя 13
	StartHelp(-1); // Запуск отображения HELP (старый. Общий текстовый файл)

}
// ---------------------------------------------------------------------------

void __fastcall TMainForm::N14Click(TObject *Sender) {
	// Допуск к программе 14
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#undef  NN
#endif
#define TFR TFrIndivUsers
#define FR  FrIndivUsers
#define FL  flFrIndivUsers
#define NN  N14
	if (NN->Enabled != true)
		return;
	ObrBefoOpenForm(NN->Tag); // Обработчик перед открытием любого окна
	switch (FL) {
	case WINCLS:
		FR = new TFR(Application);
		FL = WINWRK;
		FR->Caption = NN->Caption;
		FR->Show();
		break;
	case WINWRK:
		if (FR->WindowState == wsMinimized) {
			FR->WindowState = wsMaximized;
		}
		FR->Show();
		break;
	}
}
// ---------------------------------------------------------------------------

void __fastcall TMainForm::N15Click(TObject *Sender)
{ // Загрузка новой версии 15
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#undef  NN
#endif
#define TFR TFrLoadProgram
#define FR  FrLoadProgram
#define FL  flFrLoadProgram
#define NN  N15
	if (NN->Enabled != true)
		return;
	ObrBefoOpenForm(NN->Tag); // Обработчик перед открытием любого окна
	switch (FL) {
	case WINCLS:
		FR = new TFR(Application);
		FL = WINWRK;
		FR->Caption = NN->Caption;
		FR->Show();
		break;
	case WINWRK:
		if (FR->WindowState == wsMinimized) {
			FR->WindowState = wsMaximized;
		}
		FR->Show();
		break;
	}

}
// ---------------------------------------------------------------------------

void __fastcall TMainForm::Nd01Click(int IdOrg, int IdCallActions,
	int IdInvoise, int IdTel) {
}

// ---------------------------------------------------------------------------
void __fastcall TMainForm::N23Click(TObject *Sender) {
	/*
	 //Прайс-лист
	 #ifdef  TFR
	 #undef  TFR
	 #undef  FR
	 #undef  FL
	 #undef  NN
	 #endif
	 #define TFR TFrPrice_Nom
	 #define FR  FrPrice_Nom
	 #define FL  flFrPrice_Nom
	 #define NN  N23
	 if(NN->Enabled!=true)return;
	 switch(FL)
	 {case WINCLS:   FR=new TFR(this);FL=WINWRK;FR->Caption=NN->Caption;
	 FR->CreateCallActionsInvoices(N23CallActions,IdAccount,N23Type);
	 FR->Show();break;
	 case WINWRK:   if(FR->WindowState==wsMinimized){FR->WindowState=wsNormal;}
	 FR->CreateCallActionsInvoices(N23CallActions,IdAccount,N23Type);
	 FR->Show();break;
	 }
	 */
}

// ---------------------------------------------------------------------------
void __fastcall TMainForm::OpenTFrClientFind(int TypeCl, char FR) {
	/*
	 #ifdef  TFR
	 #undef  TFR
	 #undef  FR
	 #undef  FL
	 #undef  NN
	 #endif
	 #define TFR TFrClientFind
	 #define FR  FrClientFind
	 #define FL  flFrClientFind
	 #define NN  N24
	 if(NN->Enabled!=true)return;
	 switch(FL)
	 {case WINCLS:   FR=new TFR(this);FL=WINWRK;FR->Caption=NN->Caption;
	 FrClientList->CreateFormInit(TypeCl,FR);
	 FR->Show();break;
	 case WINWRK:   if(FR->WindowState==wsMinimized){FR->WindowState=wsNormal;}
	 FrClientList->CreateFormInit(TypeCl,FR);
	 FR->Show();break;
	 }
	 */
}

// ---------------------------------------------------------------------------
void __fastcall TMainForm::GetListMarkNode(TcxTreeList *TL, int NumLI)
	// Считать ID выбранных НАБОРОВ
{
	/* int IIp,IIc,iI,jJ,*Pii,*Vii;
	 char *Cii,*Cpi;
	 struct ListItems *LI;
	 TcxTreeListNode *Nd;
	 Nd=TL->Nodes->Root;
	 LI=&SetupIni.sMain.ListItems[NumLI];
	 Cii=&(LI->ListProperty[0]);   //Список свойств для каждого ID выбранного издания 0x01=Parent
	 Pii=&(LI->ListIdPubl[0]);     //Список ID выбранных изданий - завершение -0
	 Vii=&(LI->ListPIdPubl[0]);    //Список Id Родителей выбранных изданий - завершение -0
	 Cpi=&(LI->StringPubl[0]);     //Наименования выбранных изданий
	 *Cii=0;*Cpi=0;*Pii=0;IIp=0;IIc=0;LI->CountPubl=0;LI->CountList=0;

	 while(Nd!=NULL && IIp<MAXLISTNUM-1)
	 {if(Nd->Values[0].IsNull()==true){Nd=Nd->GetNext();continue;}
	 iI=Nd->Values[0];
	 if((iI&0x01)==1)
	 {if(Nd->Values[0].IsNull()==true){Nd=Nd->GetNext();continue;}
	 *Pii=Nd->Values[5];//*Vii=Nd->Values[6];

	 if(Nd->HasChildren==true)   //   if((iI&0x02)!=0)
	 {*Cii=1;}
	 else
	 {*Cii=0;
	 StrLCat(Cpi,AnsiString(VarToStr(Nd->Values[1])).c_str(),sizeof(SetupIni.sMain.ListItems[0].StringPubl)-2);
	 StrLCat(Cpi,";",sizeof(SetupIni.sMain.ListItems[0].StringPubl)-2);
	 IIc++;
	 }
	 Pii++;Vii++;Cii++;IIp++;
	 }
	 Nd=Nd->GetNext();
	 }
	 LI->CountList=IIp;
	 LI->CountPubl=IIc;
	 *Pii=0;*Cii=0; */

	/* CountList=0;
	 CountPubl=0 ;
	 ListIdPubl[0]=0;
	 ListPIdPubl[0]=0;
	 ListProperty[0]=0;
	 StringPubl[0]=0;
	 */
}

// ---------------------------------------------------------------------------
void __fastcall TMainForm::OpenFrAccountPrint(int IdFrom, int IdAccount,
	int Show) {

}

// ---------------------------------------------------------------------------
void __fastcall TMainForm::ManagersSetClick(int Idn) {
}

// ---------------------------------------------------------------------------
void __fastcall TMainForm::N30Click(TObject *Sender) {
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#undef  NN
#endif
#define TFR TFrEditPriseList
#define FR  FrEditPriseList
#define FL  flFrEditPriseList
#define NN  N30
	if (NN->Enabled != true)
		return;
	ObrBefoOpenForm(NN->Tag); // Обработчик перед открытием любого окна
	switch (FL) {
	case WINCLS:
		FR = new TFR(Application);
		FL = WINWRK;
		FR->Caption = NN->Caption;
		FR->Show();
		break;
	case WINWRK:
		if (FR->WindowState == wsMinimized) {
			FR->WindowState = wsMaximized;
		}
		FR->Show();
		break;
	}

}
// ---------------------------------------------------------------------------

void __fastcall TMainForm::N31Click(TObject *Sender) {
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#undef  NN
#endif
#define TFR TFrControlEditProduce
#define FR  FrControlEditProduce
#define FL  flFrControlEditProduce
#define NN  N31
	if (NN->Enabled != true)
		return;
	ObrBefoOpenForm(NN->Tag); // Обработчик перед открытием любого окна
	switch (FL) {
	case WINCLS:
		FR = new TFR(Application);
		FL = WINWRK;
		FR->Caption = NN->Caption;
		FR->Show();
		break;
	case WINWRK:
		if (FR->WindowState == wsMinimized) {
			FR->WindowState = wsMaximized;
		}
		FR->Show();
		break;
	}

}
//-------------------------- Аудит контроля экспорта прейскуранта -----------------------------------------------------------
void __fastcall TMainForm::N47Click(TObject *Sender)
{
//  Application->CreateForm(__classid(TFrAuditPriseList), &FrAuditPriseList);

#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#undef  NN
#endif
#define TFR TFrAuditPriseList
#define FR  FrAuditPriseList
#define FL  flAuditPriseList
#define NN  N47
  if (NN->Enabled != true)
	  return;
  switch(FL)
		{case WINCLS:  FR = new TFR(Application);
					   FL = WINWRK;
					   FR->WindowState = wsNormal;

					   FR->Top    = Ini->ReadInteger("AuditPriseList", "Top",    100);
					   FR->Left   = Ini->ReadInteger("AuditPriseList", "Left",   100);
					   FR->Width  = Ini->ReadInteger("AuditPriseList", "Width",  800);
					   FR->Height = Ini->ReadInteger("AuditPriseList", "Height", 280);

					   FR->Show();
					   break;
		 case WINWRK:  if (FR->WindowState == wsMinimized)
						  {FR->WindowState = wsNormal;}
					   FR->Show();
					   break;
		 }
}
// --------------------------------------------------------------------------------------------------------------------------
void __fastcall TMainForm::IdMessage1InitializeISO(System::WideChar &VHeaderEncoding, UnicodeString &VCharSet)
{
	// Настройка кодировки //
	// VCharSet= "win1251";
	// VTransferHeader=bit7;
	// VCharSet = L"utf-8";
	// VCharSet= "koi8-r";
	VHeaderEncoding = '8'; // Для лотуса

	/* VHeaderEncoding='B';
	 VCharSet="windows-1251"; */

	// VHeaderEncoding = L'B';
	VCharSet = L"Windows-1251";

}
// ---------------------------------------------------------------------------
void __fastcall TMainForm::Button1Click(TObject *Sender) {
	/* struct rMail rMail;

	 IdSMTP1->Host="10.0.64.8";
	 rMail.Body=new TStringList();
	 rMail.Body->Add(UnicodeString("Тест письма отправлен TEST2"+ Now().FormatString("dd.mmm.yyyy hh.nn.ss")));
	 rMail.Subject=UnicodeString("Тест письма отправлен TEST "+ Now().FormatString("dd.mmm.yyyy hh.nn.ss")+"Хост"+IdSMTP1->Host);
	 rMail.SenderName=UnicodeString("Тестовая рассылка из TestMail ");
	 rMail.ResiveMailAddress=UnicodeString("aSadovskiy@mcfr.ru");
	 rMail.SenderMailAddress=UnicodeString("aSadovskiy@mcfr.ru");
	 rMail.SenderName=UnicodeString("Тестовое письмо");
	 SendEmail(&rMail);

	 ShowMessage("Сообщение отправлено"); */
}
// ---------------------------------------------------------------------------
TcxTreeListNode * __fastcall TMainForm::SetSelectNodes(TcxTreeListNode *NdP,
	int Per) // Установить права на все вложенные узлы
{
	int Kd;
	TcxTreeListNode *Nd;

	Nd = NdP->getFirstChild();
	do {
		if (Nd->HasChildren == true) {
			Kd = 0; // Имеет дочерние
			Nd->Values[0] = Per + Kd;
			SetSelectNodes(Nd, Per); // Установить права на все вложенные узлы
		}
		else
			Nd->Values[0] = Per;
	}
	while ((Nd = NdP->GetNextChild(Nd)) != NULL);
  return NULL;
}
// ---------------------------------------------------------------------------
UnicodeString __fastcall TMainForm::WinToWin1251Q(UnicodeString Str) {
	UnicodeString strTo;
	/* strTo.sprintf(L"=?windows-1251?Q?");
	 AnsiString sss = Str;
	 for(int i=1; i<=sss.Length(); i++)
	 {
	 byte a = sss[i];
	 if (a == ' ') a = '_';
	 strTo.cat_printf((a<128) ? L"%c" : L"=%.2X", a);
	 }
	 strTo.cat_printf(L"?="); */
	strTo = "=?windows-1251?B?" + Base64Encode(Str) + "?=";
	return strTo;
}

AnsiString Base64Encode(AnsiString s) {

	DWORD sz;
	AnsiString res;
	CryptBinaryToString((unsigned char*)s.c_str(), s.Length(),
		CRYPT_STRING_BASE64, NULL, &sz);
	char *r;
	r = (char*)GlobalAlloc(GPTR, sz);
	CryptBinaryToString((unsigned char*)s.c_str(), s.Length(),
		CRYPT_STRING_BASE64, r, &sz);

	res = AnsiString(r);
	GlobalFree(r);
	res = res.Delete(sz - 1, 2);
	return res;
}

AnsiString Base64Decode(AnsiString s) {

	DWORD sz;
	AnsiString res;
	CryptStringToBinary(s.c_str(), s.Length(), CRYPT_STRING_BASE64, NULL, &sz,
		NULL, NULL);
	char *r;
	r = (char*)GlobalAlloc(GPTR, sz);
	CryptStringToBinary(s.c_str(), s.Length(), CRYPT_STRING_BASE64, r, &sz,
		NULL, NULL);

	res = AnsiString(r);
	res.SetLength(sz);
	GlobalFree(r);
	return res;
}
void __fastcall TMainForm::TrayIcon1MouseMove(TObject *Sender,
	TShiftState Shift, int X, int Y) {
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#undef  NN
#endif
#define TFR TFrHintJOB
#define FR  FrHintJOB
#define FL  flFrHintJOB
	int viTmpQw, viTmpQw2;
	QwHint->Open();
	Qw2Hint->Open();
	viTmpQw = QwHint->RecordCount;
	viTmpQw2 = Qw2Hint->RecordCount;
	if ((viTmpQw + viTmpQw2) < 1) {
		return;
	}
	switch (FL) {
	case WINCLS:
		FR = new TFR(Application);
		FL = WINWRK;
		FR->FormStyle = fsStayOnTop;
		FR->Height = 20 + (viTmpQw + viTmpQw2) * 16 + 20;
		FR->Left = X - FR->Width;
		FR->Top = Y - FR->Height;
		FR->AlphaBlendValue = 225;
		FR->TmQ->Enabled = true;
		FR->Show();
		break;
	case WINWRK:
		if (FR->WindowState == wsMinimized) {
			FR->WindowState = wsMaximized;
		}
		FR->AlphaBlendValue = 225;
		FR->Show();
		break;
	}
}











// ---------------------------------------------------------------------------
// ---------------------------------------------------------------------------
// ###############################################################################
// ###############################################################################
// ############## Считаль параметры е-майл  сервера  #############################
// ###############################################################################
void __fastcall TMainForm::GetParamMailServer()
	// Получить парпметры почтового сервера из настроек базы
{
	AnsiString SN, Log, Pass;
	int Port;
	bool flWrite;

	flWrite = false;
	Qw->Close();
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add( // Добавить логин
		"SELECT azImage FROM aa_Lib WHERE azId =507;");
	// парпметры почтового сервера
	try {
		Qw->Open();
	}
	catch (...) {
		SetErrorMessage(
			"Рассылка почтовых сообщений невозможна.Нет параметров почтового сервера.");
		// Зафиксировать сообщение об ошибке в таблице atErrorMessage
		MessageDlg("Рассылка почтовых сообщений невозможна.\n"
			"Нет параметров почтового сервера.", mtInformation,
			TMsgDlgButtons() << mbYes, 0);
		return;
	}

	TMemoryStream *pms = new TMemoryStream();
	TStringList *LS = new TStringList();
	try {
		((TBlobField*)Qw->Fields->Fields[0])->SaveToStream(pms);
		pms->Position = 0;
		Qw->Close();
		LS->LoadFromStream(pms);
		SN = LS->Values["Host"];
		if (SN.Length() < 2) {
			if (LS->IndexOfName("Host") == -1) {
				LS->Add("Host=daemon");
				flWrite = true;
				SN = "daemon";
			}
		}
		Port = StrToIntDef(LS->Values["Port"], 0);
		if (Port == 0) {
			if (LS->IndexOfName("Port") == -1) {
				LS->Add("Port=25");
				flWrite = true;
				Port = 25;
			}
		}
		Log = LS->Values["User"];
		if (Log.Length() < 2) {
			if (LS->IndexOfName("User") == -1) {
				LS->Add("User=");
				flWrite = true;
			}
		}
		Pass = LS->Values["Pass"];
		if (Pass.Length() < 2) {
			if (LS->IndexOfName("Pass") == -1) {
				LS->Add("Pass=");
				flWrite = true;
			}
		}
		if (flWrite == true) {
			pms->Clear();
			LS->SaveToStream(pms);
			pms->Position = 0;
			Qw->SQL->Clear();
			Qw->SQL->Add
				("SET IDENTITY_INSERT  dbo.azLib ON "
				"DELETE FROM dbo.azLib WHERE azId in(507) " "INSERT INTO dbo.azLib(azId,azPId,azName,azCode,azType) "
				"VALUES(507,500,'Параметры почтового сервера ',0,1); " "SET IDENTITY_INSERT dbo.azLib OFF "
				"UPDATE dbo.azLib SET azImage=:D0 WHERE azId=507;");
			Qw->Parameters->Items[0]->LoadFromStream(pms, ftBlob);
			Qw->ExecSQL();
			Qw->Close();
			flWrite = false;
		}
	}
	catch (...) {
	}
	Qw->Connection = CallCenterConnect;
	delete pms;
	delete LS;
	IdSMTP1->Username = Log; // Логин
	IdSMTP1->Password = Pass;
	// AnsiString(SetupIni.sMainForm.HttpIniEml[NumNextEml].Pasw);     // Пароль
	IdSMTP1->Port = Port;
	IdSMTP1->Host = SN;
	IdSMTP1->MailAgent = SN;
}

// ---------------------------------------------------------------------------

int __fastcall TMainForm::SendEmail(struct rMail *stMail)
	// Передача почты 0-успешная передача;-1-Ошибка
{ // Передача почты 0-успешная передача;-1-Ошибка

	int i, j, y;
	if (flInitMail != true) // Флаг инициализации почтового клиента
	{
		GetParamMailServer();
		flInitMail = true;
	} // Получить парпметры почтового сервера из настроек базы

	try {
		IdSMTP1->Disconnect();
		// IdSMTP1->Connect(45000);
		IdSMTP1->Connect();

	}
	catch (...) {
		SetErrorMessage("Ош.Почты-1;" + stMail->ResiveMailAddress + ";" + stMail->Subject);
		// Зафиксировать сообщение об ошибке в таблице atErrorMessage
		IdSMTP1->Tag = -1;
		return (-1);
	}
	// IdMessage1->ContentTransferEncoding = L"bit7";
	// IdMessage1->ContentTransferEncoding = L"base64";
	// IdMessage1->ContentTransferEncoding = "quoted-printable";
	// IdMessage1->ContentType = L"text/plain; type=multipart/alternative; charset=utf-8";
	// IdMessage1->ContentType = L"text/plain; charset=windows-1251";
	// IdMessage1->ContentType  = L"multipart/alternative; charset=windows-1251"; //type=;   multipart/related

	try {
		IdMessage1->ContentTransferEncoding = L"base64";
		// IdMessage1->CharSet  = L"Windows-1251";
		IdMessage1->CharSet = L"windows-1251";
		IdMessage1->ContentType = L"multipart/mixed;"; // charset=windows-1251";
		// IdMessage1->ContentType = L"text/plain; charset=windows-1251";
		IdMessage1->Recipients->Items[0]->Address = stMail->ResiveMailAddress;
		IdMessage1->Recipients->Items[0]->Name = WinToWin1251Q(stMail->ResiveName);

		IdMessage1->Sender->Address = (stMail->SenderMailAddress); //
		IdMessage1->Sender->Name = WinToWin1251Q(stMail->SenderName);
		IdMessage1->Subject = WinToWin1251Q(stMail->Subject);

		IdMessage1->From->Address = WinToWin1251Q(stMail->SenderMailAddress); //
		IdMessage1->From->Name = WinToWin1251Q(stMail->SenderName);
		IdMessage1->Body->Clear();

		TIdAttachmentFile *PPP;

		if (stMail->Body != NULL) {
			IdMessage1->Body->Assign(stMail->Body);
		} // Текст письма

		if (stMail->PathAddFiles != NULL)
		   {
			UnicodeString att;
			IdMessage1->MessageParts->Clear();
			for (i = 0, j = stMail->PathAddFiles->Count; i < j; i++)
				{
				 att = "";
				 PPP = new TIdAttachmentFile(IdMessage1->MessageParts, UnicodeString(stMail->PathAddFiles->Strings[i]));
				 // Подклучение файла
				 att = stMail->PathAddFiles->Strings[i];
				 att = ExtractFileName(att);
				 PPP->FileName = WinToWin1251Q(att);
				 PPP->ContentDescription = "attachment;";
				 PPP->ContentTransfer = "base64";
				 }
			}

		// ...................................................................
		// IdSMTP1->Tag=-1;
		IdSMTP1->Tag = 0;
	}
	catch (...) {
		SetErrorMessage("Ош.Почты-2; " + stMail->ResiveMailAddress + "; " + stMail->Subject);
	} // Зафиксировать сообщение об ошибке в таблице atErrorMessage

	try {
		IdSMTP1->Send(IdMessage1);
	}
	catch (...) {
		IdSMTP1->Tag = -1;
		SetErrorMessage("Ош.Почты-3; " + stMail->ResiveMailAddress + "; " + stMail->Subject);
	}
	return (IdSMTP1->Tag);
	// Зафиксировать сообщение об ошибке в таблице atErrorMessage

}

// _____________________________________________________________________________
// #############################################################################
// ####  Получить хэндлер окна внешнего процесса                           #####
// #### (при его отсутствии - запустить) и заполнить окно текстом          #####
// #### Входные параметры Index внешнего окна (0-тел. 1-5факс)             #####
// ####                   SQ строка текста                                 #####
// ####                                                                    #####
// #############################################################################
struct PathWinControl {
	char *NmText;
	char *NmClass;
	int NmClassCount;
};

struct ServiceWinControl {
	struct PathWinControl *PW; // список имен классов
	bool Enable; // Разрешено использование
	bool Exec; // Запускать при отсутствии
	char *StartStr; // Строка запуска(расположения программы
};

struct PathWinControl DashBoard[] = {
	"- Agent Dashboard", NULL, 1, "PaneManager", "AfxWnd90u", 1, NULL,
	"AfxFrameOrView90u", 3, NULL, "SysTabControl32", 1, NULL, "AfxWnd90u", 1,
	"Управление", "#32770", 1, NULL, "Edit", 1, "", "", -1
};

struct PathWinControl VentaFax_KodCantry[] = {
	"Передача сообщения", "TSendDialog", 1, NULL, "TPageControl", 1, NULL,
	"TTabSheet", 1, "Получатель", "TGroupBox", 1, NULL, "TEdit", 2, "", "", -1
};

struct PathWinControl VentaFax_KodSity[] = {
	"Передача сообщения", "TSendDialog", 1, NULL, "TPageControl", 1, NULL,
	"TTabSheet", 1, "Получатель", "TGroupBox", 1, NULL, "TEdit", 1, "", "", -1
};

struct PathWinControl VentaFax_KodPhone[] = {
	"Передача сообщения", "TSendDialog", 1, NULL, "TPageControl", 1, NULL,
	"TTabSheet", 1, "Получатель", "TGroupBox", 1, NULL, "TComboBox", 3, NULL,
	"Edit", 1, "", "", -1
};

struct PathWinControl VentaFax_TextOrg[] = {
	"Передача сообщения", "TSendDialog", 1, NULL, "TPageControl", 1, NULL,
	"TTabSheet", 1, "Получатель", "TGroupBox", 1, NULL, "TComboBox", 2, NULL,
	"Edit", 1, "", "", -1
};

struct PathWinControl VentaFax_TextResiver[] = {
	"Передача сообщения", "TSendDialog", 1, NULL, "TPageControl", 1, NULL,
	"TTabSheet", 1, "Получатель", "TGroupBox", 1, NULL, "TComboBox", 1, NULL,
	"Edit", 1, "", "", -1
};

struct ServiceWinControl ServiceWinControl[] = {
	DashBoard, false, true,
	"C:\\Program Files\\FrontRange Solutions\\IP Communications Management\\bin\\cagd.exe",
	VentaFax_KodCantry, false, false,
	"C:\Program Files\Venta\Venta4Net 2\ventafax.exe", VentaFax_KodSity, false,
	false, "C:\Program Files\Venta\Venta4Net 2\ventafax.exe", VentaFax_KodPhone,
	false, false, "C:\Program Files\Venta\Venta4Net 2\ventafax.exe",
	VentaFax_TextOrg, false, false,
	"C:\Program Files\Venta\Venta4Net 2\ventafax.exe", VentaFax_TextResiver,
	false, false, "C:\Program Files\Venta\Venta4Net 2\ventafax.exe", NULL, NULL
};
// ############################################################################
// bool flFRONTRANGE;          //"Настройки/Разрешение исползования FRONTRANGE"
// bool flVENTAFAX;            //"Настройки/Разрешение исползования   VENTAFAX"

void __fastcall TMainForm::CallExternWindow(int Index, AnsiString SQ)
	// ВЫзвать окно управления телефоном и записать номер
{
	HWND h1;
	int i;
	switch (Index) {
	case 0:
		if (flFRONTRANGE == false)
			return;
		break;
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		if (flVENTAFAX == false)
			return;
		break;
	}
	// if(ServiceWinControl[Index].Enable==false)return;
	if ((i = SQ.Pos("СтароеЗначение")) > 0) {
		SQ.Delete(i, SQ.Length() + 1);
		SQ.Trim();
	}
	while ((i = SQ.LastDelimiter(",")) > 0) {
		SQ.Delete(i, SQ.Length() + 1);
		SQ.Trim();
	}

	if ((h1 = FindWinServiceSystem(Index)) != NULL) { // Записать текст
		SendWindowAnsiString(h1, SQ);
		Application->ProcessMessages(); // Дадим возможность поработать другим
	}
}
// -----------------------------------------------------------------------------

// ---------------------------------------------------------------------------
void __fastcall TMainForm::SendWindowAnsiString(HWND h1, AnsiString SQ) {
	int i; // Записать в найденное окно строку
	char pbuf[1024];
	Ansistrings::StrLCopy(pbuf, SQ.c_str(), 1024);
	SendMessage(h1, WM_SETFOCUS, 0, 0);
	for (i = 0; i < 32; i++)
		SendMessage(h1, WM_CHAR, 0x8, 0xE0001); // Клавиша забой
	for (i = 0; i < 16; i++) {
		SendMessage(h1, WM_KEYDOWN, 0x2E, 0x1530001);
		SendMessage(h1, WM_KEYUP, 0x2E, 0x1530001);
	} // Клавиша DEL
	SendMessage(h1, EM_REPLACESEL, false, (LPARAM)pbuf);
	// for(i=0;pbuf[i]!=0;i++)	{SendMessage(h1,WM_CHAR,(int)pbuf[i],0); }
}

// ---------------------------------------------------------------------------

void __fastcall TMainForm::RzStatusPane4MouseEnter(TObject *Sender) {
	RzStatusPane4->Font->Color = clMaroon;
	((TRzStatusPane*)Sender)->Color = clCream;
	((TRzStatusPane*)Sender)->Font->Color = clMaroon;
}
// ---------------------------------------------------------------------------

void __fastcall TMainForm::RzStatusPane4MouseLeave(TObject *Sender) {
	((TRzStatusPane*)Sender)->Color = clBtnFace;
	((TRzStatusPane*)Sender)->Font->Color = clGray;
}

bool __fastcall TMainForm::AddRowToRtfDoc(TMemoryStream *pms, int CountRow) {
	AnsiString SL, Sa, Sb, SE, SV;
	int i, j, l;
	bool Fl;
#define KEYWORDREPROW  "{\\*\\nesttableprops"

	SV.SetLength(pms->Size);
	pms->Position = 0;
	pms->ReadBuffer(SV.c_str(), pms->Size);
	if ((i = SV.Pos("[VTb0")) == 0) {
		return (false);
	} // Добавление невозможно нет ключевого поля "[VTb0"
	SE = SV.SubString(1, i - 1);
	SV.Delete(1, i - 1);
	for (Fl = false, Sa = ""; (i = SE.Pos(KEYWORDREPROW)) > 0;)
	{ // Sb=SE.SubString(i-32,i+320);
		i += sizeof(KEYWORDREPROW) - 2;
		Sa += SE.SubString(1, i);
		SE.Delete(1, i);
		Fl = true;
	}
	if (Fl == false) {
		return (false);
	} // Добавление невозможно нет ключевого поля  KEYWORDREPROW
	Sa.SetLength(Sa.Length() - (sizeof(KEYWORDREPROW) - 1));
	for (Fl = false, Sb = KEYWORDREPROW + SE; (i = SV.Pos(KEYWORDREPROW)) > 0;)
	{
		Sb += SV.SubString(1, i - 1);
		SV.Delete(1, i - 1);
		Fl = true;
		break;
	}
	for (i = 0; i < CountRow; i++) {
		SE = "";
		while ((j = Sb.Pos("[VTb")) > 0) {
			j += sizeof("[VTb") - 1;
			for (l = 0; l < 10; l++) { // SE+=Sb.SubString(j+l,1);
				if (Sb.IsDelimiter(".]", j + l) == true) {
					if (Sb.IsDelimiter("]", j + l) == true) {
						Sb.Insert(".", j + l);
					}
					l++;
					while (Sb.IsDelimiter("]", j + l) != true) {
						Sb.Delete(j + l, 1);
					}
					Sb.Insert(IntToStr(i), j + l);
					break;
				}
			}
			SE += Sb.SubString(1, j + l);
			Sb.Delete(1, j + l);
		}
		Sb = SE + Sb;
		Sa += Sb;
	}

	Sa += SV;
	pms->Clear();
	pms->WriteBuffer(Sa.c_str(), Sa.Length());
	pms->Position = 0;
	return (true);
}

// ------------------------------------------------------------------------------
void __fastcall TMainForm::ExportExcelLog(AnsiString FormName,
	AnsiString Parameter) {
	AnsiString SL;

	SL = "DECLARE @Id512PO int, @Id512FormName int, @Id1024Parameter int, @IdUser int,@idLevel int,@512PO nvarchar(512), @512FormName nvarchar(512), @1024Parameter nvarchar(1024) "
		"SET @IdUser=:D0 " "SET @512PO=:D1 " "SET @512FormName=:D2 "
		"SET @1024Parameter=:D3 " "exec prLb_TextTrim @512PO output; "
		"if len(@512PO)>0 exec prLb_GetNumField 'auExportExcelLog ','Id512PO','spl_LbText512',@512PO output,@idLevel output,@Id512PO output; " "exec prLb_TextTrim @512FormName output; "
		"if len(@512FormName)>0 exec prLb_GetNumField 'auExportExcelLog ','Id512FormName','spl_LbText512',@512FormName output,@idLevel output,@Id512FormName output; " "exec prLb_TextTrim @1024Parameter output; "
		"if len(@1024Parameter)>0 exec prLb_GetNumField 'auExportExcelLog ','Id1024Parameter','spl_LbText1024',@1024Parameter output,@idLevel output,@Id1024Parameter output; "

		"INSERT INTO dbo.aa_ExportExcelLog (Id512PO, Id512FormName, Id1024Parameter, IdUser, DateExport) " "VALUES (@Id512PO, @Id512FormName, @Id1024Parameter, @IdUser, getdate())";
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(SL);
	Qw->Parameters->Items[0]->Value = PermisHdr.KeyUserStartProgramm;
	Qw->Parameters->Items[1]->Value = vPROGRAMNAME;
	Qw->Parameters->Items[2]->Value = FormName;
	Qw->Parameters->Items[3]->Value = Parameter;
	Qw->ExecSQL();
}

// ---------------------------------------------------------------------------
void __fastcall TMainForm::InitOneCallAction(int vIdClienDouble,
	int vIdCallAction) {

}

// ---------------------------------------------------------------------------
void __fastcall TMainForm::N60Click(TObject *Sender) { /*
	 #ifdef  TFR
	 #undef  TFR
	 #undef  FR
	 #undef  FL
	 #undef  NN
	 #endif
	 #define TFR TFrBisniessMenedger
	 #define FR  FrBisniessMenedger
	 #define FL  flFrBisniessMenedger
	 #define NN  N11

	 switch(FL)
	 {case WINCLS:   FR=new TFR(Application);FL=WINWRK;
	 FR->WindowState=wsMaximized;FR->Show();break;
	 case WINWRK:   if(FR->WindowState==wsMinimized){FR->WindowState=wsMaximized;}
	 FR->Show();break;
	 } */
}
// ---------------------------------------------------------------------------

void __fastcall TMainForm::N6Click(TObject *Sender) {
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#undef  NN
#endif
#define TFR TFrManagersChief
#define FR  FrManagersChief
#define FL  flFrManagersChief
#define NN  N11

	switch (FL) {
	case WINCLS:
		FR = new TFR(Application);
		FL = WINWRK;
		FR->WindowState = wsMaximized;
		FR->Show();
		break;
	case WINWRK:
		if (FR->WindowState == wsMinimized) {
			FR->WindowState = wsMaximized;
		}
		FR->Show();
		break;
	}
}
// ---------------------------------------------------------------------------

void __fastcall TMainForm::N26Click(TObject *Sender) {
#ifdef  TFR
#undef  TFR
#undef  FR

#endif
#define TFR TFrEditLibs
#define FR  FrEditLibs

	FR = new TFR(Application);

	FR->fType = 6;
	FR->Caption = "Типы распоряжений";
	FR->ShowModal();
	FR->WindowState = wsMinimized;
	if (FR->ModalResult == mrOk) {
		/* vsSQLQw=" SELECT Idn, iText FROM spl_LbText256 WHERE iLvl=1519";
		 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		 Qw->Open();
		 clActionPurpose->Items->Clear();

		 while(Qw->Eof==false)
		 {
		 clActionPurpose->Items->AddObject(Qw->Fields->Fields[1]->AsString.Trim(),(TObject*)Qw->Fields->Fields[0]->AsInteger);
		 Qw->Next();
		 }
		 Qw->Close(); */
	}
	delete(FR);

}
// ---------------------------------------------------------------------------

void __fastcall TMainForm::N12Click(TObject *Sender) {
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#undef  NN
#endif
#define TFR TFrBisniessMenedger
#define FR  FrBisniessMenedger
#define FL  flFrBisniessMenedger
#define NN  N12

	switch (FL) {
	case WINCLS:
		FR = new TFR(Application);
		FL = WINWRK;
		FR->WindowState = wsMaximized;
		FR->Show();
		break;
	case WINWRK:
		if (FR->WindowState == wsMinimized) {
			FR->WindowState = wsMaximized;
		}
		FR->Show();
		break;
	}
}
// ---------------------------------------------------------------------------

void __fastcall TMainForm::N160Click(TObject *Sender) {
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#undef  NN
#endif
#define TFR TFrTraceMail
#define FR  FrTraceMail
#define FL  flFrTraceMail
#define NN  N11

	switch (FL) {
	case WINCLS:
		FR = new TFR(Application);
		FL = WINWRK;
		FR->WindowState = wsNormal;
		FR->Show();
		break;
	case WINWRK:
		if (FR->WindowState == wsMinimized) {
			FR->WindowState = wsMaximized;
		}
		FR->Show();
		break;
	}
}
// ---------------------------------------------------------------------------

void __fastcall TMainForm::N32Click(TObject *Sender) { // Пользователи в системе
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#undef  NN
#endif
#define TFR TFrProtOn
#define FR  FrProtOn
#define FL  flFrProtOn
#define NN  N32
	if (NN->Enabled != true)
		return;
	ObrBefoOpenForm(NN->Tag); // Обработчик перед открытием любого окна
	switch (FL) {
	case WINCLS:
		FR = new TFR(Application);
		FL = WINWRK;
		FR->Caption = NN->Caption;
		FR->Show();
		break;
	case WINWRK:
		if (FR->WindowState == wsMinimized) {
			FR->WindowState = wsMaximized;
		}
		FR->Show();
		break;
	}

}
// ---------------------------------------------------------------------------

void __fastcall TMainForm::frxRaspAlterGetValue(const AnsiString VarName,
	Variant &Value) {
	if (VarName == "sYear") {
		AnsiString vsTmpDay, vsTmpMouth, vsTmpYear;
		vsTmpYear = Now().FormatString("yyyy");
		// vsTmpYear=QRaspDateRasp->AsDateTime.FormatString("yyyy");

		Value = vsTmpYear;
	}
	if (VarName == "iCountRec") {
		Value = QEmplUserDolRass->RecordCount;
	}
	if (VarName == "SumPr") {
		AnsiString vsTmpDay, vsTmpMouth, vsTmpYear;

		vsTmpYear = QRaspDateRasp->AsDateTime.FormatString("yyyy");
		if (vsTmpYear == "1900")
			Value = "__________ года";
		else {
			vsTmpDay = QRaspDateRasp->AsDateTime.FormatString("d");
			vsTmpMouth = QRaspDateRasp->AsDateTime.FormatString("m");

			switch (StrToInt(vsTmpMouth)) {
			case 1:
				vsTmpMouth = "января";
				break;
			case 2:
				vsTmpMouth = "февраля";
				break;
			case 3:
				vsTmpMouth = "марта";
				break;
			case 4:
				vsTmpMouth = "апреля";
				break;
			case 5:
				vsTmpMouth = "мая";
				break;
			case 6:
				vsTmpMouth = "июня";
				break;
			case 7:
				vsTmpMouth = "июля";
				break;
			case 8:
				vsTmpMouth = "августа";
				break;
			case 9:
				vsTmpMouth = "сентября";
				break;
			case 10:
				vsTmpMouth = "октября";
				break;
			case 11:
				vsTmpMouth = "ноября";
				break;
			case 12:
				vsTmpMouth = "декабря";
				break;
			}

			Value = vsTmpDay + " " + vsTmpMouth + " " + vsTmpYear + " года";
		}
	}

  if (VarName == "TextAdv")
	 {
	  switch (QRaspDetailfAdv->AsInteger)
			 {
			  case  0: Value = "годовой";
					   break;
			  case  1: Value = "1п\г";
					   break;
			  case  2: Value = "2п\г";
					   break;
			  case  3: Value = "1 квартал";
					   break;
			  case  4: Value = "2 квартал";
					   break;
			  case  5: Value = "3 квартал";
					   break;
			  case  6: Value = "4 квартал";
					   break;
			  case  7: Value = "раз в год";
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

	if (VarName == "DateRasp") {
		AnsiString vsTmpDay, vsTmpMouth, vsTmpYear;

		vsTmpYear = QRaspDateRasp->AsDateTime.FormatString("yyyy");
		if (vsTmpYear == "1900")
			Value = "__________ г.";
		else
			Value = QRaspDateRasp->AsDateTime.FormatString("dd.mm.yyyyг.");
	}
	if (VarName == "NumbRasp") {
		if (Trim(QRaspNumbRaspName->AsString) == "")
			Value = "__________ ";
		else
			Value = QRaspNumbRaspName->AsString;
	}
}
// ---------------------------------------------------------------------------

void __fastcall TMainForm::TmStartWorkTimer(TObject *Sender) {
	int IdRasp;
//	TStringList *LS = new TStringList();
	struct rMail rMail;
	struct rMail rMailAdmin;
	AnsiString NewFileName;
	int i, viTmpMINfTurn, viTmpMINfTurnLast;
	AnsiString vsQRaspRaspNameRTF, vsSQLQw;
	TfrxReport *fReport;

	TmStartWork->Enabled = false;

	if (flReBoot == true || CallCenterConnect->Connected != true) {
		Close();
		return;
	}

	if (vAuto == true)
		// если программа запущена автоматически, то совершаем повторную рассылку не утвердившим
	{

		QListRasp->Close();
		QListRasp->Open();
		QListRasp->First();

		rMailAdmin.Body = new TStringList();
		rMailAdmin.Subject = "Лог рассылки";
		rMailAdmin.Body->Add("Лог рассылки: ");
		// LS->Clear();
		rMailAdmin.PathAddFiles = NULL; // LS;
		while (QListRasp->Eof == false) {
			IdRasp = QListRaspIdn->AsInteger;
			QInfoMailList->Close();
			QInfoMailList->Parameters->Items[0]->Value = IdRasp;
			QInfoMailList->Open();

			if ((QInfoMailList->RecordCount > 0) && ((MinutesBetween(Now(),
				QInfoMailListDateSheet->AsDateTime)) > 1)) // HoursBetween >23
			{
				rMail = CreateMail(IdRasp, 1);
				rMail.SenderMailAddress = "rperkatov@mcfr.ru";
				// ЕMail отправителя
				rMail.SenderName = "Рассылка МЦФЭР";
				// + IntToStr(viTestTimer);          //Фамилия и Инициалы отправителя

				////рассылка
				QInfoMailList->First();
				while (QInfoMailList->Eof == false) {
					rMail.ResiveName = QInfoMailListTmpFamIO->AsString;
					rMail.ResiveMailAddress = QInfoMailListMail->AsString;
					rMailAdmin.Body->Add("Распоряжение " + vsQRaspRaspNameRTF +
						" Код:" + IntToStr(IdRasp) + " отослано " +
						QInfoMailListTmpFamIO->AsString + " на адрес " +
						QInfoMailListMail->AsString + " Время отправки " +
						Now().DateTimeString() + "\n");
					vsSQLQw =
						" UPDATE bm_ListMail  SET " " DateSheet=GetDate()"
						" WHERE Idn=:D0 ; ";
					Qw->Close();
					Qw->SQL->Clear();
					Qw->SQL->Add(vsSQLQw);
					Qw->Parameters->Items[0]->Value = QInfoMailListIdn->AsInteger; // почемуто стояло AsString
					Qw->ExecSQL();
					SendEmail(&rMail);
					QInfoMailList->Next();
				}
			} // if (QInfoMailList->RecordCount>0)

			QListRasp->Next();
		}
		rMailAdmin.ResiveMailAddress = "rperkatov@mcfr.ru";
		rMailAdmin.ResiveName = "Перкатову Роману";
		rMailAdmin.SenderName = "Рассылка МЦФЭР. Лог рассылки от  " +
			Now().DateTimeString();
		SendEmail(&rMailAdmin);
		rMailAdmin.ResiveMailAddress = "dskopintseva@mcfr.ru";
		rMailAdmin.ResiveName = "Скопинцевой Диане Андреевне";
		SendEmail(&rMailAdmin);
		Close();
	}
	if (vSheet == true)
		// если программа запущена автоматически, то совершаем  рассылку следующим по очереди
	{
		bool fClearSheet; // флаг осутствия рассылок
	METKA_JOB: // метка для goto повторного выполенени JOB рассылки
			QListRasp->Close();
		QListRasp->Open();
		QListRasp->First();
		while (QListRasp->Eof == false) {
			IdRasp = QListRaspIdn->AsInteger;
			QMailList->Close();
			QMailList->Parameters->Items[0]->Value = IdRasp;
			QMailList->Open();

			vsSQLQw =
				" DECLARE @IdRasp int; " " SET @IdRasp=:D0; " " SELECT ft "
				" 	FROM " " 	(SELECT MIN(fTurn) ft FROM bm_ListMail "
				" 					  WHERE  DateDel is null " " 					  AND IdRasp=@IdRasp "
				" 					  AND (fType=0 OR fType=2) " " 					  AND fTurn>0 "
				" 					  AND (fResault=0 OR fResault is NULL )) A " " 	WHERE "
				" 	(SELECT count(Idn)  FROM bm_ListMail " " 					  WHERE  DateDel is null "
				" 					  AND IdRasp=@IdRasp " " 					  AND (fType=0 OR fType=2) "
				" 					  AND fTurn=A.ft " " 					  AND (fResault=0 OR fResault is NULL ) "
				" 					  AND DateSheet is null)= " " 	(SELECT count(Idn)  FROM bm_ListMail "
				" 					  WHERE  DateDel is null " " 					  AND IdRasp=@IdRasp "
				" 					  AND (fType=0 OR fType=2) " " 					  AND fTurn=A.ft)";
			Qw->Close();
			Qw->SQL->Clear();
			Qw->SQL->Add(vsSQLQw);
			Qw->Parameters->Items[0]->Value = IdRasp;
			Qw->Open();
			// if (Qw->RecordCount==Qw2->RecordCount)
			if (Qw->RecordCount > 0) {
				viTmpMINfTurnLast = Qw->Fields->Fields[0]->AsInteger;
				rMail = MainForm->CreateMail(IdRasp, 1);
				rMail.SenderMailAddress = ""; // ЕMail отправителя
				rMail.SenderName = "Рассылка МЦФЭР";

				while ((QMailList->Eof == false)) {
					if ((Trim(QMailListMail->AsString) != "") &&
						(QMailListfTurn->AsInteger == viTmpMINfTurnLast)) {
						rMail.ResiveName = QMailListTmpFamIO->AsString;
						rMail.ResiveMailAddress = QMailListMail->AsString;
						vsSQLQw =
							"UPDATE bm_ListMail  SET " "  DateSheet=GetDate()"
							" WHERE Idn=:D0 ; ";
						Qw->Close();
						Qw->SQL->Clear();
						Qw->SQL->Add(vsSQLQw);
						Qw->Parameters->Items[0]->Value =
							QMailListIdn->AsString;
						Qw->ExecSQL();
						AnsiString Tmp123 = rMail.Body->Text;
						MainForm->SendEmail(&rMail);
					}
					QMailList->Next();
				} // while((QEmplUserDol2->Eof==false))

				// Рассылаем замещающим утверждающих
				QEmplUserDol3->Close();
				QEmplUserDol3->Parameters->Items[0]->Value = IdRasp;
				QEmplUserDol3->Open();
				QEmplUserDol3->First();
				while ((QEmplUserDol3->Eof == false)) {
					if ((Trim(QEmplUserDol3Mail->AsString) != "") &&
						(QEmplUserDol3fTurn->AsInteger == viTmpMINfTurn)) {
						rMail.ResiveName = QEmplUserDol3FamIO->AsString;
						rMail.ResiveMailAddress = QEmplUserDol3Mail->AsString;

						MainForm->SendEmail(&rMail);
					}
					QEmplUserDol3->Next();
				}
			} // if (Qw->RecordCount==Qw2->RecordCount)
			QListRasp->Next();
		} // while(QListRasp->Eof==false)

		QListRasp->Close();
		QListRasp->Open();
		QListRasp->First();
		while (QListRasp->Eof == false) {
			vsSQLQw =
				" DECLARE @IdRasp int; " " SET @IdRasp=:D0; " " SELECT ft "
				" 	FROM " " 	(SELECT MIN(fTurn) ft FROM bm_ListMail "
				" 					  WHERE  DateDel is null " " 					  AND IdRasp=@IdRasp "
				" 					  AND (fType=0 OR fType=2) " " 					  AND fTurn>0 "
				" 					  AND (fResault=0 OR fResault is NULL )) A " " 	WHERE "
				" 	(SELECT count(Idn)  FROM bm_ListMail " " 					  WHERE  DateDel is null "
				" 					  AND IdRasp=@IdRasp " " 					  AND (fType=0 OR fType=2) "
				" 					  AND fTurn=A.ft " " 					  AND (fResault=0 OR fResault is NULL ) "
				" 					  AND DateSheet is null)= " " 	(SELECT count(Idn)  FROM bm_ListMail "
				" 					  WHERE  DateDel is null " " 					  AND IdRasp=@IdRasp "
				" 					  AND (fType=0 OR fType=2) " " 					  AND fTurn=A.ft)";
			Qw->Close();
			Qw->SQL->Clear();
			Qw->SQL->Add(vsSQLQw);
			Qw->Parameters->Items[0]->Value = IdRasp;
			Qw->Open();
			if (Qw->RecordCount > 0)
				goto METKA_JOB;
			QListRasp->Next();
		}
		Close();
	}
	if (vUtverjdenie == true)
		// Открываем программу на выбранном распоряжении из приложения письма.
	{
		vsUtverjdenie = Trim(vsUtverjdenie);
		// ShowMessage(vsUtverjdenie.SubString(3,vsUtverjdenie.Length()));

#ifdef  TFR
#undef  TFR
#undef  FR
#endif
#define TFR TFrTraceMail
#define FR  FrTraceMail

		FR = new TFR(Application);
		FR->viRaspIdn =
			StrToInt(vsUtverjdenie.SubString(3, vsUtverjdenie.Length()));
		FR->ShowModal();
		FR->WindowState = wsMinimized;
		delete(FR);
	}
}
// ---------------------------------------------------------------------------

rMail __fastcall TMainForm::CreateMail(int IdRasp, int fType) {
	struct rMail rMail;
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL

#endif
#define TFR TFrAccountPrint
#define FR  FrAccountPrint
#define FL  flFrAccountPrint

	{
		switch (FL) {
		case WINCLS:
			FR = new TFR(Application);
			FL = WINWRK;
			FR->WindowState = wsMinimized;
			FR->fGenerationPDF = true;
			FR->fType = fType;
			FR->OpenFormAccountPrint(11, IdRasp, 1);
			rMail = FR->rMail;
			break;
		case WINWRK:
			FR->WindowState = wsMinimized;
			FR->fGenerationPDF = true;
			FR->fType = fType;
			FR->OpenFormAccountPrint(11, IdRasp, 1);
			rMail = FR->rMail;
			break;
		}
	} return rMail;
}

void __fastcall TMainForm::Sheet(int IdRasp) // Рассылка с утверждением
{
	int viTmpLocate, viTmpfTurn, viTmpMINfTurn, viTmpMINfTurnLast, vifResault_1, vifResault_2;
	struct rMail rMail;
	AnsiString vsSQLQw;
	// Проверяем есть ли распоряжение с таким номером?
	vsSQLQw =
		" DECLARE @IdRasp int; SET @IdRasp=:D0; " " SELECT Idn FROM bm_Rasp "
		" WHERE  DateDel is null " " AND LTRIM(RTRIM(NumbRaspName))=(SELECT LTRIM(RTRIM(NumbRaspName)) FROM bm_Rasp WHERE Idn=@IdRasp) "
		" /*AND Idn<>@IdRasp*/ AND LTRIM(RTRIM(NumbRaspName))<>'' AND Id24NameStatus=5448352  AND YEAR(DateRasp)= (SELECT YEAR(DateRasp)FROM bm_Rasp WHERE Idn=@IdRasp)";
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	Qw->Parameters->Items[0]->Value = IdRasp;
	Qw->Open();
	if (Qw->RecordCount > 1) {
		ShowMessage(
			"Утверждение и рассылка невозможны. \n Распоряжение с таким номером уже существует.");
		return;
	}

	//////////////////////////

	///Проверем, Все ли утвердили Если все, то совершаем рассылку по ведомости рассылки
	vsSQLQw =
		" SELECT Idn FROM bm_ListMail" " WHERE  DateDel is null"
		" AND IdRasp=:D0" " AND fType=0 " " AND fTurn>0"
		" AND (fResault=0 OR fResault is NULL )";
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	Qw->Parameters->Items[0]->Value = IdRasp;
	Qw->Open();
	vifResault_1 = Qw->RecordCount; // Количество не принявших решение
	///Получаем количество отклонивших распоряжение
	vsSQLQw =
		" SELECT Idn FROM bm_ListMail" " WHERE  DateDel is null"
		" AND IdRasp=:D0" " AND fType=0 " " AND fTurn>0" " AND fResault=2";
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	Qw->Parameters->Items[0]->Value = IdRasp;
	Qw->Open();
	vifResault_2 = Qw->RecordCount; // Количество не принявших решение

	if ((vifResault_1 == 0) && (vifResault_2 == 0)) {
		///Выставляем распоряжению состояние-Утверждено-
		vsSQLQw =
			" UPDATE bm_Rasp  SET " " Id24NameStatus=5448352" // Утверждено
			" ,DateConfirm= GetDate() " " ,IdConfirm=:D0  " " WHERE Idn=:D1 ; ";
		Qw->Close();
		Qw->SQL->Clear();
		Qw->SQL->Add(vsSQLQw);
		Qw->Parameters->Items[0]->Value = PermisHdr.KeyUserStartProgramm;
		Qw->Parameters->Items[1]->Value = IdRasp;
		Qw->ExecSQL();
		// Если #define vUSER_IN_SHEET (код)  /.Код пользователя из EmplUser обязательного для рассылки	 отсутствует в списке рассылке, то добавляем
		vsSQLQw =
			" select  Idn from bm_ListMail where IdRasp=:D0 AND IDUser=:D1 AND DateDel is NULL AND fType=1";
		Qw->Close();
		Qw->SQL->Clear();
		Qw->SQL->Add(vsSQLQw);

		Qw->Parameters->Items[0]->Value = IdRasp;
		Qw->Parameters->Items[1]->Value = vUSER_IN_SHEET;
		Qw->Open();

		if (Qw->RecordCount == 0) {
			vsSQLQw =
				" DECLARE @IdRasp int, @IDUser int; SET @IdRasp=:D0; SET @IDUser=:D1;" " INSERT INTO bm_ListMail (IdRasp,IDUser,Mail,IdnEmplDol,fTurn,fType,DateIns,IdIns)"
				" SELECT @IdRasp, A.IDUser ,C.Mail,B.IDn,0, 1,GetDate(), -1 FROM EmplUsers A " " LEFT JOIN EmplDol B ON B.IDUser=A.IDUser "
				" LEFT JOIN EmplUserMail C ON C.IDUser=A.IDUser " " where A.IDUser=@IDUser AND B.DiscDate='2100-01-01 00:00:00.000' ";
			Qw->Close();
			Qw->SQL->Clear();
			Qw->SQL->Add(vsSQLQw);
			Qw->Parameters->Items[0]->Value = IdRasp;
			Qw->Parameters->Items[1]->Value = vUSER_IN_SHEET;
			Qw->ExecSQL();

		}

		///
		rMail = MainForm->CreateMail(IdRasp, 2);
		vsSQLQw =
			" select RaspName, DateRasp, NumbRaspName, Idn from dbo.bm_Rasp where Idn=:D0";
		Qw->Close();
		Qw->SQL->Clear();
		Qw->SQL->Add(vsSQLQw);

		Qw->Parameters->Items[0]->Value = IdRasp;
		Qw->Open();
		TReplaceFlags ReplaceFlags;
		AnsiString vsQRaspRaspNameRTF;
		vsQRaspRaspNameRTF = Qw->Fields->Fields[0]->AsString;
		vsQRaspRaspNameRTF = StringReplace(vsQRaspRaspNameRTF, "\n", "",
			ReplaceFlags << rfReplaceAll >> rfIgnoreCase);
		vsQRaspRaspNameRTF = StringReplace(vsQRaspRaspNameRTF, "\r", " ",
			ReplaceFlags << rfReplaceAll >> rfIgnoreCase);
		vsQRaspRaspNameRTF = StringReplace(vsQRaspRaspNameRTF, "\t", " ",
			ReplaceFlags << rfReplaceAll >> rfIgnoreCase);
		rMail.Subject =
			AnsiString("\" Рассылка  по ведомости распоряжения (Код") +
			IntToStr(Qw->Fields->Fields[3]->AsInteger) + ") " +
			vsQRaspRaspNameRTF + " №" + Qw->Fields->Fields[2]->AsString +
			" от " + Qw->Fields->Fields[1]->AsDateTime.FormatString
			("dd.mm.yyyy") + AnsiString("г.\"");
		Qw->Close();
		/////Рассылка  писем адресатам
		QEmplUserDolSheet->Close();
		QEmplUserDolSheet->Parameters->Items[0]->Value = IdRasp;
		QEmplUserDolSheet->Open();

		QEmplUserDolSheet->First();

		while (QEmplUserDolSheet->Eof == false) {
			if (Trim(QEmplUserDolSheetMail->AsString) != "") {
				// LS->Clear();
				// LS->Add("c:\\Work_DB\\DesignerOrders\\EXEC\\TEMP\\Проект_распоряжения.pdf");
				// rMail.PathAddFiles=LS;//Files;          //Маршрут и имя прикрепляемых файлов

				rMail.ResiveName = QEmplUserDolSheetFamIO->AsString;
				rMail.ResiveMailAddress = QEmplUserDolSheetMail->AsString;
				MainForm->SendEmail(&rMail);
			}
			QEmplUserDolSheet->Next();
		}
		ShowMessage("Рассылка писем по ведомости рассылки начата.");
	}
	else {
		ShowMessage(
			"Рассылка и перевод распоряжения в разряд 'Утвержденное' невозможно, так как не все ответственные лица утвердили.");
		return;
	}
}
// ---------------------------------------------------------------------------
void __fastcall TMainForm::N24Click(TObject *Sender) { // Персонал
	ShellExecute(0, NULL, "C:\\Work_Db\\Персонал\\clm_Personnel.exe", "",
		"C:\\Work_Db\\Персонал", SW_SHOWDEFAULT);
}
// ---------------------------------------------------------------------------
void __fastcall TMainForm::N27Click(TObject *Sender) {
	// Заведение ценового коитета
#ifdef  TFR
#undef  TFR
#undef  FR

#endif
#define TFR TFrListMailAddress
#define FR  FrListMailAddress

	FR = new TFR(Application);

	FR->fType = 4;
	FR->cxGridTableViewEmplUser->Bands->Items[0]->Caption =
		"Сформировать список ценового комитета";

	FR->IdRasp = 1;
	// Не существует. Выбран как код виртуального распоряжения для списка ценового комитета
	FR->ShowModal();
	FR->WindowState = wsMinimized;
	FR->ModalResult;

	delete(FR);
}
// ---------------------------------------------------------------------------
void __fastcall TMainForm::Otkaz(int IdRasp) {
	int viTmpLocate, viTmpfTurn, viTmpMINfTurn, viTmpMINfTurnLast, vifResault_1,
		vifResault_2;
	struct rMail rMail;
	AnsiString vsSQLQw;

	///Выставляем распоряжению состояние-Отклонено-
	vsSQLQw = " UPDATE bm_Rasp  SET " " Id24NameStatus=5448413" // Отклонено
		" ,DateConfirm= GetDate() " " ,IdConfirm=:D0  " " WHERE Idn=:D1 ; ";
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);
	Qw->Parameters->Items[0]->Value = PermisHdr.KeyUserStartProgramm;
	Qw->Parameters->Items[1]->Value = IdRasp;
	Qw->ExecSQL();
	flOtkaz = true;
	rMail = MainForm->CreateMail(IdRasp, 2);
	vsSQLQw =
		" select RaspName, DateRasp, NumbRaspName, Idn from dbo.bm_Rasp where Idn=:D0";
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(vsSQLQw);

	Qw->Parameters->Items[0]->Value = IdRasp;
	Qw->Open();
	TReplaceFlags ReplaceFlags;
	AnsiString vsQRaspRaspNameRTF;
	vsQRaspRaspNameRTF = Qw->Fields->Fields[0]->AsString;
	vsQRaspRaspNameRTF = StringReplace(vsQRaspRaspNameRTF, "\n", "",
		ReplaceFlags << rfReplaceAll >> rfIgnoreCase);
	vsQRaspRaspNameRTF = StringReplace(vsQRaspRaspNameRTF, "\r", " ",
		ReplaceFlags << rfReplaceAll >> rfIgnoreCase);
	vsQRaspRaspNameRTF = StringReplace(vsQRaspRaspNameRTF, "\t", " ",
		ReplaceFlags << rfReplaceAll >> rfIgnoreCase);
	rMail.Subject = AnsiString("\" Уведомленин об отказе распоряжения (Код") +
		IntToStr(Qw->Fields->Fields[3]->AsInteger) + ") " + vsQRaspRaspNameRTF +
		" №" + Qw->Fields->Fields[2]->AsString + " от " +
		Qw->Fields->Fields[1]->AsDateTime.FormatString("dd.mm.yyyy") +
		AnsiString("г.\"");
	Qw->Close();
	/////Рассылка  писем адресатам
	QEmplUserDolOtkaz->Close();
	QEmplUserDolOtkaz->Parameters->Items[0]->Value = IdRasp;
	QEmplUserDolOtkaz->Open();

	QEmplUserDolOtkaz->First();

	while (QEmplUserDolOtkaz->Eof == false) {
		if (Trim(QEmplUserDolOtkazMail->AsString) != "") {
			// LS->Clear();
			// LS->Add("c:\\Work_DB\\DesignerOrders\\EXEC\\TEMP\\Проект_распоряжения.pdf");
			// rMail.PathAddFiles=LS;//Files;          //Маршрут и имя прикрепляемых файлов

			rMail.ResiveName = QEmplUserDolOtkazFamIO->AsString;
			rMail.ResiveMailAddress = QEmplUserDolOtkazMail->AsString;
			MainForm->SendEmail(&rMail);
		}
		QEmplUserDolOtkaz->Next();
	}
}
//-----------------------------------------------------------------------------------
void __fastcall TMainForm::N125Click(TObject *Sender)
{
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#undef  NN
#endif
#define TFR TFrEditProduce
#define FR  FrEditProduce
#define FL  flFrEditProduce
#define NN  N125
	if (NN->Enabled != true)
		return;
	ObrBefoOpenForm(NN->Tag); // Обработчик перед открытием любого окна
	switch (FL) {
	case WINCLS:
		FR = new TFR(Application);
		FL = WINWRK;
		FR->Caption = NN->Caption;
		FR->Show();
		break;
	case WINWRK:
		if (FR->WindowState == wsMinimized) {
			FR->WindowState = wsMaximized;
		}
		FR->Show();
		break;
	}

}
// ---------------------------------------------------------------------------
void __fastcall TMainForm::N40Click(TObject *Sender)
{
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#undef  NN
#endif
#define TFR TFrBlockProduce
#define FR  FrBlockProduce
#define FL  flBlockProduce
#define NN  N40

  if (NN->Enabled != true)
	  return;

  ObrBefoOpenForm(NN->Tag); // Обработчик перед открытием любого окна
  switch (FL)
		 {
		  case WINCLS:
					   FR = new TFR(Application);
					   FL = WINWRK;
					   FR->Caption = NN->Caption;

					   FR->Top    = Ini->ReadInteger("BlockProduce", "Top",    100);
					   FR->Left   = Ini->ReadInteger("BlockProduce", "Left",   100);
					   FR->Width  = Ini->ReadInteger("BlockProduce", "Width",  116);
					   FR->Height = Ini->ReadInteger("BlockProduce", "Height", 560);

					   FR->Show();
					   break;
		  case WINWRK:
					   if (FR->WindowState == wsMinimized)
						  {FR->WindowState = wsMaximized;}
					   FR->Show();
					   break;
		  }
}
// ---------------------------------------------------------------------------
void __fastcall TMainForm::N25Click(TObject *Sender) {
	AnsiString vsSQLQw;
#ifdef  TFR
#undef  TFR
#undef  FR

#endif
#define TFR TFrEditLibs
#define FR  FrEditLibs

	FR = new TFR(Application);

	FR->fType = 9;
	FR->Caption = "Типы подписных индексов";
	FR->ShowModal();
	FR->WindowState = wsMinimized;
	if (FR->ModalResult == mrOk) {
		/* vsSQLQw=" SELECT Idn,iText FROM dbo.spl_LbText24 WHERE iLvl=1354 and DateDel is null" ;
		 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		 Qw->Open();cbTypeName->Clear();
		 while(Qw->Eof==false){cbTypeName->AddObject(Qw->Fields->Fields[1]->AsString,(TObject*)Qw->Fields->Fields[0]->AsInteger);Qw->Next();}Qw->Close();
		 edProduceIdn=0; */
	}
	delete(FR);
}
// -----------------------------------------------------------------------------
void __fastcall TMainForm::N29Click(TObject *Sender)
{

#ifdef  TFR
#undef  TFR
#undef  FR

#endif
#define TFR TFrNESincProduce
#define FR  FrNESincProduce

	FR = new TFR(Application);

	FR->ShowModal();
	FR->WindowState = wsMinimized;
	if (FR->ModalResult == mrOk) {

	}
	delete(FR);

}
// ---------------------------------------------------------------------------
void __fastcall TMainForm::N28Click(TObject *Sender)
{
AnsiString vsSQLQw;

#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#undef  NN
#endif
#define TFR TFrSincNE
#define FR  FrSincNE
#define FL  flFrSincNE
#define NN  N28
	if (NN->Enabled != true)
		return;
	ObrBefoOpenForm(NN->Tag); // Обработчик перед открытием любого окна
	switch (FL) {
	case WINCLS:
		FR = new TFR(Application);
		FL = WINWRK; /* FR->Caption=NN->Caption; */
		FR->RzToolButton8->Enabled = flUserKC;
		FR->Show();
		break;
	case WINWRK:
		if (FR->WindowState == wsMinimized) {
			FR->WindowState = wsMaximized;
		}
		FR->RzToolButton8->Enabled = flUserKC;
		FR->Show();
		break;
	}

}



//--------------------------------------------------------------------------
void __fastcall TMainForm::N33Click(TObject *Sender)
{

#ifdef  TFR
#undef  TFR
#undef  FR

#endif
#define TFR TFrListTarif
#define FR  FrListTarif

	FR = new TFR(Application);

	FR->Caption = "Тарифы Электронных продуктов";
	FR->ShowModal();
	FR->WindowState = wsMinimized;
	if (FR->ModalResult == mrOk) {
		//
	}
	delete(FR);

}
// ---------------------------------------------------------------------------

void __fastcall TMainForm::N37Click(TObject *Sender) {
	// Сопоставление Подписных Индексов и Продуктового Предложения по ЭП
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#undef  NN
#endif
#define TFR TFrSincPI_PP
#define FR  FrSincPI_PP
#define FL  flFrSincPI_PP
#define NN  N37
	// if(NN->Enabled!=true)return;
	// ObrBefoOpenForm(NN->Tag);//Обработчик перед открытием любого окна
	switch (FL) {
	case WINCLS:
		FR = new TFR(Application);
		FL = WINWRK;
		FR->Caption = NN->Caption;
		FR->StartWorkFormTFrSincPI_PP();
		FR->Show();
		break;
	case WINWRK:
		if (FR->WindowState == wsMinimized) {
			FR->WindowState = wsMaximized;
		}
		FR->StartWorkFormTFrSincPI_PP();
		FR->Show();
		break;
	}
}
// ---------------------------------------------------------------------------

void __fastcall TMainForm::N39Click(TObject *Sender) {
	// Печать Продуктовый каталог
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#undef  NN
#endif
#define TFR TFrPrintProductCatalog
#define FR  FrPrintProductCatalog
#define FL  flFrPrintProductCatalog
#define NN  N39
	if (NN->Enabled != true)
		return;
	ObrBefoOpenForm(NN->Tag); // Обработчик перед открытием любого окна
	switch (FL) {
	case WINCLS:
		FR = new TFR(Application);
		FL = WINWRK;
		FR->Caption = NN->Caption;
		FR->Show();
		break;
	case WINWRK:
		if (FR->WindowState == wsMinimized) {
			FR->WindowState = wsMaximized;
		}
		FR->Show();
		break;
	}
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TMainForm::N42Click(TObject *Sender)
{
// заглушка для сепаратора меню
}
//---------------------------------------------------------------------------------------------------------------------------
bool SHCopyFile(HWND ParentWindow, AnsiString &Source, AnsiString &Dest, bool Overwrite, bool ShowProgress)
{
  SHFILEOPSTRUCT SHFOStruct;
				 SHFOStruct.hwnd = ParentWindow;
				 SHFOStruct.wFunc = FO_COPY;
				 SHFOStruct.pFrom = Source.c_str();
				 SHFOStruct.pTo = Dest.c_str();
				 SHFOStruct.fFlags = FOF_ALLOWUNDO | FOF_NOCONFIRMATION | FOF_NOERRORUI;
  if(!Overwrite)
	  SHFOStruct.fFlags = SHFOStruct.fFlags | FOF_RENAMEONCOLLISION;
  if(!ShowProgress)
	  SHFOStruct.fFlags |= FOF_SILENT;
  return !SHFileOperation(&SHFOStruct);
}
//...........................................................................................................................
void __fastcall TMainForm::N41Click(TObject *Sender)
{
/*  WideString dir = "C:\\Work_Db\\Discounting";      //папка с файлами, которую следует проверить перед запуском "Discounting"
  WideString tmp = "C:\\Work_Db\\Discounting\\TEMP";          //создание временной папки, в которой будут распоряжения  *.pdf
  AnsiString src = "\\\\gm\\OSRPO\\WORK_DB\\Discounting\\*.*";           //источник исполняемых и служебных файлов приложения
  AnsiString epf = "C:\\Work_Db\\Discounting\\Discounting.exe";          //                        исполняемый файл программы

  AnsiString Source = src;
  AnsiString Dest   = dir;

  if (!DirectoryExists(dir))                         //если  папки  с  файлами  программы на диске пользователя не существует
	 {
	  DiscountPanel->Visible = true;
	  DiscountMemo->Lines->Add("Происходит первый запуск программы ''Согласование скидок''...");
	  Sleep(500);
	  DiscountMemo->Lines->Add("");
	  DiscountMemo->Lines->Add("Будет создан каталог программы...");
	  Sleep(500);
	  ForceDirectories(dir.c_bstr());                //создаём рабочую папку на диске пользователя "C:\\Work_Db\\Discounting"
	  ForceDirectories(tmp.c_bstr());
	  DiscountMemo->Lines->Add("Каталог программы (C:\Work_Db\Discounting) успешно создан...");
	  DiscountMemo->Lines->Add("");
	  Sleep(500);
	  DiscountMemo->Lines->Add("Будут скопированы рабочие файлы в каталог программы...");
	  Sleep(500);
	  SHCopyFile(Handle, Source, Dest, true, false); //         копируем все рабочие файлы с сетевого ресурса в рабочую папку
	  DiscountMemo->Lines->Add("Файлы успешно скопированы!");
	  Sleep(500);
	  DiscountMemo->Lines->Add("''Согласование скидок'' сейчас будет запущено...");
	  Sleep(500);
	  DiscountMemo->Lines->Add("Запуск программы...");
	  Sleep(500);
	  }
  if (!FileExists(epf))                              //если вдруг - в папке пропали файлы - скопируем с ресурса их ещё раз!!!
	 {
	  DiscountPanel->Visible = true;
	  DiscountMemo->Lines->Add("Отсутствует исполняемый файл программы ''Согласование скидок''");
	  Sleep(500);
	  DiscountMemo->Lines->Add("Файл программы будет восстановлен...");
	  Sleep(500);
	  SHCopyFile(Handle, Source, Dest, true, false);
	  Sleep(500);
	  DiscountMemo->Lines->Add("Файл программы восстановлен...");
	  Sleep(500);
	  DiscountMemo->Lines->Add("Запуск программы...");
	  Sleep(500);
	  ShellExecute(Handle, "open", epf.c_str(), NULL, NULL, SW_RESTORE); //запускаем исполняемый файл программы "Discounting"
	  DiscountPanel->Visible = false;
	  return;
	  }
  else
	 {ShellExecute(Handle, "open", epf.c_str(), NULL, NULL, SW_RESTORE);}//запускаем исполняемый файл программы "Discounting"

  DiscountPanel->Visible = false;  */
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TMainForm::N43Click(TObject *Sender)
{
//
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::N44Click(TObject *Sender)
{
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#undef  NN
#endif
#define TFR TFrBugHistory
#define FR  FrBugHistory
#define FL  flBugHistory
#define NN  N44
  if (NN->Enabled != true)
	  return;
  switch(FL)
		{case WINCLS:  FR = new TFR(Application);
					   FL = WINWRK;
					   FR->WindowState = wsNormal;

					   FR->Top    = Ini->ReadInteger("BugHistory", "Top",    100);
					   FR->Left   = Ini->ReadInteger("BugHistory", "Left",   100);
					   FR->Width  = Ini->ReadInteger("BugHistory", "Width",  893);
					   FR->Height = Ini->ReadInteger("BugHistory", "Height", 250);

					   FR->Show();
					   break;
		 case WINWRK:  if (FR->WindowState == wsMinimized)
						  {FR->WindowState = wsNormal;}
					   FR->Show();
					   break;
		 }
}
//-------------------------- Справочник Категория/Вид -----------------------------------------------------------------------
void __fastcall TMainForm::N45Click(TObject *Sender)
{
  Application->CreateForm(__classid(TFrCategory), &FrCategory);
}
//---------------------------------------------------------------------------------------------------------------------------


