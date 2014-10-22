#ifndef MainIniH0
#define MainIniH0
#define CONST_FILE_NAME "FILE NAME="

#include <ADOdb.hpp>



//Состояние процесса
# define WINCLS 0
# define WINWRK 2
#define vPROGRAMNAME  "Конструктор распоряжений"                     	         //Имя программы без точек
#define vFILENAME     "DesignerOrders"                                   	//Имя EXE файла
#define vFILEPATHDEF  "C:\\Work_DB\\"vFILENAME"\\EXEC"               	//Маршрут инсталяции по умолчанию
#define vFILEPATH_IS  "\\\\icnotes\\kur\\TC\\OSPO_EXE\\"vFILENAME    	//Маршрут к исходникам (EXE и SFX)
#define vFILEPATHTEMP "\\TEMP"                                       	//Пака для временных файлов.Очищается при каждом перезапуске
#define vPROGRAMCode  7777                                           	//Уникальный Код из таблицы [ALL_Src] в базе данных [DM] [Src]
#define vPATH_VENTAFAX "C:\\Program Files\\Venta\\Venta4Net 2\\main.ini"   	//Машрут к модулям прграммы VENTAFAX
#define vNAMEHOSTSTATIC "GM"                                               //Имя сервера
#define vDesignerOrdersNAMEBASESTATIC "DesignerOrders"                     //Имя базы данных
#define vUSER_IN_SHEET 19  //Код пользователя из EmplUser обязательного для рассылки



extern char NamedMutex[];
extern char ExecFileName[];
extern char ExecDate[];
extern char NameProgram[];

class TClockThread : public TThread
{
private:
protected:
	void __fastcall Execute();
public:
__fastcall TClockThread(bool CreateSuspended);
TDateTime *begtime;
TDateTime *lasttime;
int clockstop;
void *clc;
};


#define DefNameShablon "Шаблон по умолчанию"

//##############################################################################
//#####Распределение прав в меню программы #####################################
//##############################################################################
struct Permis
{int   id;
 int   Code;
 char *NamePerm;
 bool  EnablePerm;
 bool  VisiblePerm;
 bool  EnableRoleGuest; //Разрешения по умолчанию для гостей
 bool  VisiblRoleGuest; //Разрешения по умолчанию для гостей
};

struct  PermisHdr
{struct Permis *StartPerm;
 char   *NameProgram;
 char   *Vers;
 char   *ExecFileName;
 int    KeyUserStartProgramm;       // id пользователя по таблице подключений
 int    IdUserFromEmplUser;         // Id пользователя из таблицы сотрудников
 int    KeyConnect;                 // Уникальный код подключения
 char   NameUserStartProgramm[32];  // Фамилия и Инициалы Текущего пользователя
 char   LoginUserStartProgramm[32]; // Login Текущего пользователя
 char   MailUserStartProgramm[64];  // Mail Текущего пользователя
 char  *Rez3[24];
};
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

struct Lex001
{//Структура лексем для построения SQL запроса по переменным полям
AnsiString ColumnName;    //Русское Наименование для колонки
AnsiString KeyFieldName;  //Имя поля - исползуется как ключ для поиска в cxGrid2DBTableView2
AnsiString SQLFieldName;  //Имя поля - непосредственно учасtвующее в запросе
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
	  int  ColOrdB;       //Индех банда которому принадлежит колонка
	  int  ColSizM;       //Размер каждой колонки по начальной загрузке
	  int  ColSizB;       //Размер банда хозяина колонки
	  int  ColGroup;      //Индекс группировки
	  bool ColVisM;       //Признак видимости колонки по начальной загрузке
	  bool CellMerging;   //Признак объединения одинаковых значений в столбхах
	  bool FilterOn;      //Включение фильтра
				 };

#define TbCtrlMAXSIZE 128
struct SaveTblControl{       //Структура управления cxGreed сохраняемая в базе данных
  struct TblControl TbCtrl[TbCtrlMAXSIZE];       //Структура управления cxGreed
  bool  CellAutoHeight;                          //Авто высота ячеек в гриде
  bool  ColumnAutoWidth;                         //Авто ширина столбцов в гриде
  bool  SetColumnParamDefolt;                    //Установка значений по умолчания(Запрещено сохранение до первого восстановления)
  int   ChekSum;                                 //Контрольная сумма структуры
  	 };

#define MAXLISTNUM 4096
#define MAXORDERS  10
struct ListItems   //Сохранение списка ID выбранных изданиц
	{ int   CountList; // Кол-во заполненных  ListIdPubl[CountPubl]==0 (всегда)
	  int   CountPubl; // Кол-во выбранных только изданий   ListIdPubl[CountPubl]==0 (всегда)
	  int   ListIdPubl[MAXLISTNUM];    //Список ID выбранных изданий - завершение -0
	  int   ListPIdPubl[MAXLISTNUM];   //Список Id Родителей выбранных изданий - завершение -0
	  char  ListProperty[MAXLISTNUM];  //Список свойств для каждого ID выбранного издания 0x01=Parent
	  char  StringPubl[1024];          //Строка наименований выбранных изданий через [;] - завершение -0
	};

struct sMain                 //Общие переменные сохраняемые в DSC
	 {int Chk ;              //Контрольная сумма содуля
	  int Reserv;
	  int NumActiveListItems;    //Номер Активного (Текущего) ListItems(0,1,2)
	  struct ListItems ListItems[MAXORDERS]; //Сохранение списка ID выбранных изданиц
	  int TdUpp;
  	  char  RzStatusPane6[MAXLISTNUM];  //Список свойств для каждого ID выбранного издания 0x01=Parent

	  

	 };

struct sLoadDates_IM
	 {int Chk ;              //Контрольная сумма содуля
	  TDateTime  Tb;
	  TDateTime  Te;
	  bool       ChkDate;
	  struct TblControl  vTbl0[16]; //Управление cxGrid1
	  char InitalDir[512];           //Запомнить маршрут с файлами HTML
	 };
struct sFrCallActions        // Компании продвижения
	 {int Chk ;              //Контрольная сумма модуля
	  TDateTime  Tb0,Tb1;
	  TDateTime  Te0,Te1;
	  bool       ChkDate;
	  struct  SaveTblControl  vTbl10; //Управление cxGrid1
	  struct  SaveTblControl  vTbl1a; //Управление cxGrid1
	  struct  SaveTblControl  vTbl2a; //Управление cxGrid1
	  struct  SaveTblControl  vTbl3a; //Управление cxGrid1
	  struct  SaveTblControl  vTbl8a; //Управление cxGrid8

	  int IdnViewShema;
	  int Splitter1Percent,Splitter3Percent,Splitter5Percent,Splitter6Percent;

	  int sIdOtrasl; //Id - выбранной отрасли
	  int view,menedger,RzComboBox6,RzComboBox9;
	  int idGrigSelect2;
	  int sGreedInd1;
	 };

struct sFrClientList        // Компании продвижения
	 {int Chk ;              //Контрольная сумма модуля
	  TDateTime  Tb0,Tb1;
	  TDateTime  Te0,Te1;
	  bool       ChkDate;
	  struct  SaveTblControl  vTbl10; //Управление cxGrid1

	  struct  SaveTblControl  vTbl1a; //Управление cxGrid1
	  struct  SaveTblControl  vTbl2a; //Управление cxGrid1
	  struct  SaveTblControl  vTbl3a; //Управление cxGrid1

	  int Splitter1Percent,Splitter3Percent,Splitter5Percent,Splitter6Percent;
	  char RzEdit1[256];//
	  char RzEdit2[256];//
	  char RzEdit3[256];//
	  char RzEdit4[256];//
	  char RzEdit5[256];//
	  char RzEdit6[256];//
	  char RzEdit7[256];//
	  char RzEdit8[256];//
	  char RzEdit9[256];//
	  char RzEdit10[256];//
	  char RzEdit11[256];//
	  char RzEdit12[256];//
	  char RzEdit13[256];//
	  char RzEdit14[256];//
	  char RzEdit15[256];//
	  char RzEdit16[256];//
	  char RzEdit17[256];//
	  char RzEdit18[256];//
	  char RzEdit19[256];//
	  char RzEdit20[256];//
	  int sIdOtrasl; //Id - выбранной отрасли
	  int menedger;
	  int view;

	  int IdnViewShema;
	 };
struct sFrAllClientProduct        // Компании продвижения
	 {int Chk ;              //Контрольная сумма модуля
	  TDateTime  Tb0,Tb1;
	  TDateTime  Te0,Te1;
	  bool       ChkDate;
	  struct  SaveTblControl  vTbl10; //Управление cxGrid1

	  struct  SaveTblControl  vTbl1a; //Управление cxGrid1
	  struct  SaveTblControl  vTbl2a; //Управление cxGrid1
	  struct  SaveTblControl  vTbl3a; //Управление cxGrid1

	  int Splitter1Percent,Splitter3Percent,Splitter5Percent,Splitter6Percent;
	  char RzEdit1[256];//
	  char RzEdit2[256];//
	  char RzEdit3[256];//
	  char RzEdit4[256];//
	  char RzEdit5[256];//
	  char RzEdit6[256];//
	  char RzEdit7[256];//
	  char RzEdit8[256];//
	  char RzEdit9[256];//
	  char RzEdit10[256];//
	  char RzEdit11[256];//
	  char RzEdit12[256];//
	  char RzEdit13[256];//
	  char RzEdit14[256];//
	  char RzEdit15[256];//
	  char RzEdit16[256];//
	  char RzEdit17[256];//                   о
	  char RzEdit18[256];//
	  char RzEdit19[256];//
	  char RzEdit20[256];//
	  int sIdOtrasl; //Id - выбранной отрасли
	  int menedger;
	  int view;

	  int IdnViewShema;
	 };

struct sAccount
	 {int Chk ;              //Контрольная сумма модуля
	  TDateTime  Tb0,Tb1;
	  TDateTime  Te0,Te1;
	  bool       ChkDate;
	  struct  SaveTblControl  vTbl10; //Управление cxGrid1

	  struct  SaveTblControl  vTbl1a; //Управление cxGrid1
	  struct  SaveTblControl  vTbl2a; //Управление cxGrid1
	  struct  SaveTblControl  vTbl3a; //Управление cxGrid1

	  int Splitter1Percent,Splitter3Percent,Splitter5Percent,Splitter6Percent;
	  int sIdOtrasl; //Id - выбранной отрасли
	  int menedger;
	  int view;
	  int ChkTabSheet;// Выбранный Таб. Счет или Заказ\Платеж\Счет

	 };

struct sFrWorkPlase   //Основное рабочее пространство
	 {int Chk ;              //Контрольная сумма модуля
	  int Splitter1Percent;//Размер полей с прошлой вызрузки
	  int Group; //Номер текущей открытой группы
	  int sGreedInd0,sGreedInd1,sGreedInd2,sGreedInd3 ;// код выбранной строки в дереве просмотра.
	 };

struct sIndivUsers
	 {int Chk ;              //Контрольная сумма модуля
	  int SizeWind[8];       //Размеры окон от пользователя
	  struct TblControl vTbl0[8];
	  struct TblControl vTbl1[8];
	  struct TblControl vTbl2[8];
	 };

struct sLoadProgram
	{ int Chk ;              //Контрольная сумма модуля
	  int SizeWind;       //Размеры окон от пользователя
	  struct TblControl vTbl0[32];
	  char PatchLoad[512];
	};

#define SIZETEXTREMEMBER_sPrice_Nom  256
struct sPrice_Nom   //Справочник номенклатурных единиц
	{ int Chk ;                    //Контрольная сумма модуля
	  struct SaveTblControl vTbl0; //Структура управления cxGreed сохраняемая в базе данных
	  int IdSrc;                   //Id текущего выбранного источника
	  int Percent_0;               //Размер окон
	  int Percent_1;               //Размер окон
	  bool vYar[32];               //Выбранные года
	  char tYar[SIZETEXTREMEMBER_sPrice_Nom];  //--//-- в текстовом виде через [;]
	  char SrchString[256]; //Поисковая строка
	  int StatNode[1024];     //Для запоминания состояния Colapse-Expend
	  int sGreedInd;

	};
#define SIZETEXTREMEMBER_sCallResult  256
struct sCallResult
{     int Chk ;  
	  bool vYar[32];               //Выбранные года
	  char tYar[SIZETEXTREMEMBER_sCallResult];  //--//-- в текстовом виде через [;]
	  int RzComboBox1;//Выбор каталога
	  int RzComboBox2;
};

#define SIZETEXTREMEMBER_sAdvBreakdown  256
struct sAdvBreakdown
{	  bool vYar[32];               //Выбранные года
	  char tYar[SIZETEXTREMEMBER_sAdvBreakdown];  //--//-- в текстовом виде через [;]
	 
};
struct sAccountNew //Новый счет
{ int Chk ;                    //Контрольная сумма модуля
  int RzListBox1;
  int RzComboBox1;
  int RzComboBox2;
  int RzComboBox3;
  int RzComboBox4;
};

struct sHelpCommon                 //Показать - загрузить HELP
	{int Chk ;                    //Контрольная сумма модуля
	 struct SaveTblControl vTbl0; //Структура управления cxGreed сохраняемая в базе данных
	 int Percent_0;              //Размер окон
	 int StatNode[256];          //Для запоминания состояния Colapse-Expend
	 char SrchString[256];      //Поисковая строка
	};

#define SIZETEXTREMEMBER  128
struct sCallActions
	 {int Chk ;              //Контрольная сумма модуля
	  int TabIndex;          //
	  int ItemIndex[MAXORDERS];
	  bool vYar[32];   //Выбранные года
	  char tYar[SIZETEXTREMEMBER];  //--//-- в текстовом виде через [;]
	  bool vNum[32]; //Выбранные номера
	  char tNum[SIZETEXTREMEMBER];  //--//-- в текстовом виде через [;]
	  struct SaveTblControl Q1Status;       //Структура управления cxGreed сохраняемая в базе данных
	 };

struct sManagersRemind
	 {int Chk ;              //Контрольная сумма модуля
	  int SizeWind[8];       //Размеры окон от пользователя
	  struct SaveTblControl vTbl10;
	  int RzComboBox2;
	 };

#define SIZETEXTREMEMBER_sRep_CallResult  256
struct sRep_CallResult   //Справочник номенклатурных единиц
	{ int Chk ;                    //Контрольная сумма модуля
	  struct SaveTblControl vTbl0; //Структура управления cxGreed сохраняемая в базе данных
	  int IdSrc;                   //Id текущего выбранного источника
	  int Percent_0;               //Размер окон
	  int Percent_1;               //Размер окон
	  bool vYar[32];               //Выбранные года
	  char tYar[SIZETEXTREMEMBER_sRep_CallResult];  //--//-- в текстовом виде через [;]
	  char SrchString[256]; //Поисковая строка
	  int StatNode[1024];     //Для запоминания состояния Colapse-Expend
	  int sGreedInd;
	};
struct sRep_CallResultManager
{     int Chk ;              //Контрольная сумма модуля
	  struct  SaveTblControl  vTbl10; //Управление cxGrid1
	  TDateTime  RzDateTimeEdit1,RzDateTimeEdit2;
	  bool RzCheckBox1,RzCheckBox2;
	  int  RzComboBox2,RzComboBox9;
	  int  idGrigSelect2;
	  int IdnViewShema;
	  char RzMenedger1[1024]; //Поисковая строка
};
struct sRep_RosterBillings
{     int Chk ;              //Контрольная сумма модуля
	  int ItemIndex ;
	  struct  SaveTblControl  vTbl10; //Управление cxGrid1
	  TDateTime  RzDateTimeEdit1,RzDateTimeEdit2;
	  bool RzCheckBox1,RzCheckBox2;
	  int  RzComboBox2,RzComboBox9;
	  int  idGrigSelect2;
	  int IdnViewShema;
};
struct sRep4_RosterBillings
{     int Chk ;              //Контрольная сумма модуля
	  struct  SaveTblControl  vTbl10; //Управление cxGrid1
	  TDateTime  RzDateTimeEdit1,RzDateTimeEdit2;
	  bool RzCheckBox1,RzCheckBox2;
	  int  RzComboBox2,RzComboBox9;
	  int  idGrigSelect2;
	  int IdnViewShema;
};


struct sRep_AccountFalsePay
{     int Chk ;              //Контрольная сумма модуля
	  struct  SaveTblControl  vTbl10; //Управление cxGrid1
	  TDateTime  RzDateTimeEdit1,RzDateTimeEdit2;
	  bool RzCheckBox1,RzCheckBox2;
	  int  RzComboBox2,RzComboBox9;
	  int  idGrigSelect2;
	  int IdnViewShema;
};

struct sRep5_ExposedPaidAccounts
{     int Chk ;              //Контрольная сумма модуля
	  struct  SaveTblControl  vTbl10; //Управление cxGrid1
	  TDateTime  RzDateTimeEdit1,RzDateTimeEdit2;
	  bool RzCheckBox1,RzCheckBox2;
	  int  RzComboBox2,RzComboBox9;
	  int  idGrigSelect2;
	  int IdnViewShema;
};
struct sRep6_ExposedPaidAccountsHalhYear
{     int Chk ;              //Контрольная сумма модуля
	  struct  SaveTblControl  vTbl10; //Управление cxGrid1
	  TDateTime  RzDateTimeEdit1,RzDateTimeEdit2,RzDateTimeEdit3,RzDateTimeEdit4;
	  bool RzCheckBox1,RzCheckBox2;
	  bool RzCheckBox3,RzCheckBox4;
	  int  RzComboBox2,RzComboBox9;
	  int  idGrigSelect2;
	  int IdnViewShema;
};
struct sRep7_Rep_ClientPriseList
{     int Chk ;              //Контрольная сумма модуля
	  struct  SaveTblControl  vTbl10; //Управление cxGrid1
	  TDateTime  RzDateTimeEdit1,RzDateTimeEdit2,RzDateTimeEdit3,RzDateTimeEdit4;
	  bool RzCheckBox1,RzCheckBox2;
	  bool RzCheckBox3,RzCheckBox4;
	  int  RzComboBox2,RzComboBox9;
	  int  idGrigSelect2;
	  int IdnViewShema;
};
struct sRep8_Rep_Billings
{     int Chk ;              //Контрольная сумма модуля
	  struct  SaveTblControl  vTbl10; //Управление cxGrid1
	  TDateTime  RzDateTimeEdit1,RzDateTimeEdit2,RzDateTimeEdit3,RzDateTimeEdit4;
	  bool RzCheckBox1,RzCheckBox2;
	  bool RzCheckBox3,RzCheckBox4;
	  int  RzComboBox2,RzComboBox9;
	  int  idGrigSelect2;
	  int IdnViewShema;
};
struct sRep9_Rep_CallTime
{     int Chk ;              //Контрольная сумма модуля
	  struct  SaveTblControl  vTbl10; //Управление cxGrid1
	  TDateTime  RzDateTimeEdit1,RzDateTimeEdit2,RzDateTimeEdit3,RzDateTimeEdit4;
	  bool RzCheckBox1,RzCheckBox2;
	  bool RzCheckBox3,RzCheckBox4;
	  int  RzComboBox2,RzComboBox9;
	  int  idGrigSelect2;
	  int IdnViewShema;
};
struct sFraa_StatBase
{     int Chk ;              //Контрольная сумма модуля
	  struct  SaveTblControl  vTbl10; //Управление cxGrid1
	  TDateTime  RzDateTimeEdit1,RzDateTimeEdit2,RzDateTimeEdit3,RzDateTimeEdit4;
	  bool RzCheckBox1,RzCheckBox2;
	  bool RzCheckBox3,RzCheckBox4;
	  int  RzComboBox2,RzComboBox9;
	  int  idGrigSelect2;
	  int IdnViewShema;
};

struct sFrRep_auExportExcelLog
{     int Chk ;              //Контрольная сумма модуля
	  struct  SaveTblControl  vTbl10; //Управление cxGrid1
	  TDateTime  RzDateTimeEdit1,RzDateTimeEdit2;
	  bool RzCheckBox1,RzCheckBox2;
	  int  RzComboBox2,RzComboBox9;
	  int  idGrigSelect2;
	  int IdnViewShema;
};
struct sBisniessMenedger
{     int Chk ;              //Контрольная сумма модуля
	  int cbGroupManagerBoss ; //Idn руководителя в фильтре поиска
	  int cbGroupManager ;//Idn Сотрудника
	  int cbNameStatus ;//Idn Сосотояния
	  TDateTime dtDateCreateMIN ; //Date созжания распоряжения начальная для фильтра поиска
	  bool chbDateCreateMIN ; // Проверка флажка на проверку по dtDateCreateMIN
	  bool chbMySheet ; //Проверка флажка на выбор "Только своё"
	  bool chbMySheetNow ; //Проверка флажка на выбор "Текущие"
	  int spPI ; //Положение сплиттера на Подписных Индексах
};
#define SIZETEXTREMEMBER  128
struct sSelectPubl
	 {int Chk ;              //Контрольная сумма модуля
		  int TabIndex;          //
	  int ItemIndex[MAXORDERS];
	  bool vYar[32];   //Выбранные года
	  char tYar[SIZETEXTREMEMBER];  //--//-- в текстовом виде через [;]
	  bool vNum[32]; //Выбранные номера
	  char tNum[SIZETEXTREMEMBER];  //--//-- в текстовом виде через [;]
	 };

struct sFrOrderUpp //Распределение УПП платежных поручений
	 {int Chk ;              //Контрольная сумма модуля
	  struct SaveTblControl vTbl0; //Структура управления cxGreed сохраняемая в базе данных
	  struct SaveTblControl vTbl1; //Структура управления cxGreed сохраняемая в базе данных
	  struct SaveTblControl vTbl2; //Структура управления cxGreed сохраняемая в базе данных
	  struct SaveTblControl vTbl3; //Структура управления cxGreed сохраняемая в базе данных
	  int Percent[4];               //Размер окон
	  bool SetButon[8];               //Состояние кнопок выбора
	 };




struct SetupIni
	{
	 unsigned int ChSum;      //Контрольная сумма
	 TDateTime TimeStart;     //Дата последнего запуска
	 bool SetDefault;         //Установка по умолчанию

	
	 TDateTime TimeLoad;      //Дата последнего обновления
	 int  VersLoad;           //Версия последней загрузки
	 char ExecDateLast[32];   //Время создания последнего EXECфайла
	 char LastStringTime[12]; //Последнее ошибочное время
	 TDateTime DateLastTime;  //Дата возникновения последнего ошибочного времени
	 char   PathXLS[512];
	 char   PathPDF[512];	 
 //.........................
struct sMain           sMain;       //Общие переменные сохраняемые в DSC
struct sLoadDates_IM   sLoadDates_IM;//Загрузка новой базы
struct sFrCallActions  sFrCallActions; //Основное рабочее пространство
struct sLoadProgram    sLoadProgram;
struct sIndivUsers     sIndivUsers;
struct sPrice_Nom      sPrice_Nom;  //Справочник номенклатурных единиц  c ценами и вариантами подписки
struct sHelpCommon     sHelpCommon; //Показать - загрузить HELP
struct sFrWorkPlase    sFrWorkPlase;//Основное рабочее пространство
struct sAccount        sAccount;
struct sFrClientList   sFrClientList;
struct sCallActions    sCallActions;
struct sAccountNew     sAccountNew;
struct sManagersRemind sManagersRemind;
struct sRep_CallResult sRep_CallResult;  //Отчёт по результатам звонков
struct sRep_CallResultManager sRep_CallResultManager; //2. Отчет по работе менеджеров компании
struct sRep_RosterBillings sRep_RosterBillings;
struct sRep4_RosterBillings sRep4_RosterBillings;
struct sSelectPubl		sSelectPubl;
struct sFrOrderUpp					sFrOrderUpp; //Распределение УПП платежных поручений
struct sCallResult   				sCallResult;
struct sRep_AccountFalsePay			sRep_AccountFalsePay ;
struct sRep5_ExposedPaidAccounts	sRep5_ExposedPaidAccounts;
struct sAdvBreakdown 				sAdvBreakdown;
struct sFrAllClientProduct			sFrAllClientProduct;
struct sRep6_ExposedPaidAccountsHalhYear sRep6_ExposedPaidAccountsHalhYear;
struct sFraa_StatBase sFraa_StatBase;
struct sRep7_Rep_ClientPriseList sRep7_Rep_ClientPriseList;
struct sRep8_Rep_Billings sRep8_Rep_Billings;
struct sRep9_Rep_CallTime  sRep9_Rep_CallTime;
struct sFrRep_auExportExcelLog sFrRep_auExportExcelLog ;
struct sBisniessMenedger sBisniessMenedger;



 //.........................

	};
extern struct SetupIni SetupIni;
extern struct PermisHdr PermisHdr;
extern void __fastcall SetPermis(struct PermisHdr *PH,TADOQuery *Qi);
extern int  __fastcall LoadNewConnectionString (TADOConnection	*C,AnsiString *Base,AnsiString *Serv,AnsiString *Log,AnsiString *Pass,struct PermisHdr *PH); //Подключение к базе данных
extern char classic1[];
extern char classic2[];
//------------------------------------------------------------------------------

#endif

 /*  Очень толковая ВЕСЩЬ НЕ УДАЛЯТЬ
 if (Not exists (select * from tempdb..sysobjects where id = object_id('tempdb..##BaseCalcTable'))) Begin
	Select object_id('tempdb..##BaseCalcTable'), 'Noexist'	CREATE TABLE ##BaseCalcTable (
				 ShfWTD int NULL ,
				 Rcrd int NULL )


 */
