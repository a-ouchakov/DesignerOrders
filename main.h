//$$---- Form HDR ----
//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzCommon.hpp"
#include <ADODB.hpp>
#include <DB.hpp>
#include <Menus.hpp>
#include "RzShellDialogs.hpp"
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <ActnList.hpp>
#include <StdActns.hpp>
#include "RzStatus.hpp"
#include "RzCommon.hpp"
#include "RzShellDialogs.hpp"
#include "RzBHints.hpp"
#include "RzPanel.hpp"
#include "RzButton.hpp"
#include <jpeg.hpp>
#include "RzLaunch.hpp"

#include "cxGrid.hpp"
#include "cxGridCustomTableView.hpp"
#include "cxGridCustomView.hpp"
#include "cxGridDBTableView.hpp"
#include "cxGridLevel.hpp"
#include "cxGridTableView.hpp"
#include "cxGridBandedTableView.hpp"
#include "cxGridDBBandedTableView.hpp"
//#include "cxExportGrid4Link.hpp"
#include "cxInplaceContainer.hpp"
#include "cxMaskEdit.hpp"
#include "cxStyles.hpp"
#include "cxTL.hpp"
#include "cxTLData.hpp"
//#include "cxExportTL4Link.hpp"

#include <Buttons.hpp>
#include <ImgList.hpp>
#include "cxDBTL.hpp"
//#include "cxExportGrid4Link.hpp"
#include "cxTL.hpp"
#include "cxMaskEdit.hpp"
#include "cxImageComboBox.hpp"
#include "cxDBTL.hpp"
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdMessage.hpp>
#include <IdMessageClient.hpp>
#include <IdSMTP.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include "RzEdit.hpp"
#include <ComCtrls.hpp>
#include "cxContainer.hpp"
#include "cxControls.hpp"
#include "cxEdit.hpp"
#include "cxMemo.hpp"
#include "cxRichEdit.hpp"
#include "cxTextEdit.hpp"
//#include "RichView.hpp"
//#include "RVEdit.hpp"
//#include "RVScroll.hpp"
//#include "RVStyle.hpp"
#include <OleCtrls.hpp>
#include <SHDocVw.hpp>
#include "frxClass.hpp"
#include "frxDBSet.hpp"
#include "frxExportPDF.hpp"
#include "frxPreview.hpp"
#include "cxCustomData.hpp"
#include "cxGraphics.hpp"
#include "RzTray.hpp"
#include <IdExplicitTLSClientServerBase.hpp>
#include <IdSMTPBase.hpp>
#include "Cxgridexportlink.hpp"
#include "cxTLExportLink.hpp"
#include <System.Actions.hpp>

//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
	TADOConnection *CallCenterConnect;
	TRzMenuController *RzMenuController1;
	TMainMenu *MainMenu1;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *N3;
	TMenuItem *N4;
	TMenuItem *N5;
	TADOQuery *Q1;
	TADOQuery *Qw;
	TMenuItem *N8;
	TActionList *ActionList1;
	TWindowTileHorizontal *WindowTileHorizontal1;
	TWindowTileVertical *WindowTileVertical1;
	TWindowCascade *WindowCascade1;
	TWindowMinimizeAll *WindowMinimizeAll1;
	TWindowArrange *WindowArrange1;
	TMenuItem *N9;
	TMenuItem *N10;
	TMenuItem *Arrange1;
	TMenuItem *Cascade1;
	TMenuItem *MinimizeAll1;
	TImage *Image1;
	TImageList *ImageList1;
	TRzOpenDialog *OpenDialogDoc1;
	TRzLauncher *RzLauncher1;
	TRzStatusBar *RzStatusBar1;
	TRzStatusPane *RzStatusPane1;
	TRzStatusPane *RzStatusPane2;
	TRzStatusPane *RzStatusPane3;
	TTimer *TmStartWork;
	TImage *ImageNnFoto;
	TMenuItem *N13;
	TMenuItem *N14;
	TMenuItem *N15;
	TMenuItem *N18;
	TADOConnection *ADOConnectionExcell;
	TADOQuery *Qxls;
	TStringField *Qxls_;
	TIdSMTP *IdSMTP1;
	TIdMessage *IdMessage1;
	TRzStatusPane *RzStatusPane4;
	TADOQuery *Q1H;
	TDataSource *DSH;
	TIntegerField *Q1HcolH;
	TTimer *TimerQ1H;
	TRzPanel *RzPanel1;
	TADOQuery *Q2;
	TADOQuery *Qa1;
	TIntegerField *Qa1Idn;
	TStringField *Qa1Num;
	TDateTimeField *Qa1DateExtract;
	TStringField *Qa1Note;
	TBCDField *Qa1Summa;
	TBCDField *Qa1SummaNDS;
	TStringField *Qa1NameFull;
	TStringField *Qa1INN;
	TStringField *Qa1KPP;
	TStringField *Qa1ZipCode;
	TWideStringField *Qa1FullAddr;
	TWideStringField *Qa1FIO;
	TStringField *Qa1Phone;
	TStringField *Qa1Fax;
	TStringField *Qa1Catg;
	TStringField *Qa1DeptName;
	TDateTimeField *Qa1DateIns;
	TStringField *Qa1Ins;
	TIntegerField *Qa1ClientID;
	TStringField *Qa1ShortName;
	TStringField *Qa1SellerNameFull;
	TStringField *Qa1SellerINN;
	TStringField *Qa1SellerKPP;
	TStringField *Qa1SellerRS;
	TStringField *Qa1SellerBIK;
	TStringField *Qa1SellerKS;
	TStringField *Qa1SellerBank;
	TStringField *Qa1SellerAddress;
	TStringField *Qa1SellerFIO;
	TStringField *Qa1SellerPhone;
	TWideStringField *Qa1PhoneLotus;
	TMenuItem *N32;
	TRzStatusPane *RzStatusPane5;
	TTimer *TimerUPP;
	TRzStatusPane *RzStatusPane6;
	TMenuItem *N35;
	TMenuItem *N46;
	TMenuItem *N53;
	TMenuItem *N54;
	TMenuItem *N60;
	TMenuItem *N6;
	TMenuItem *N7;
	TMenuItem *N12;
	TMenuItem *N160;
	TRzPanel *RzPanel4;
	TfrxPreview *frxPreview1;
	TfrxPDFExport *frxPDFExport1;
	TfrxDBDataset *frxDSRasp;
	TfrxReport *frxRaspAlter;
	TfrxDBDataset *frxDSRaspDetailAlter;
	TADOQuery *QRaspDetailAlter;
	TIntegerField *QRaspDetailAlterIdn;
	TStringField *QRaspDetailAlterComplectName;
	TStringField *QRaspDetailAlterProduceName;
	TStringField *QRaspDetailAlterNameRaspDetail;
	TBCDField *QRaspDetailAlterCostWithNDS;
	TBCDField *QRaspDetailAlterCostWithoutNDS;
	TBCDField *QRaspDetailAlterCostOneWithoutNDS;
	TBCDField *QRaspDetailAlterCostComplectWithNDS;
	TBCDField *QRaspDetailAlterCostomplectWithoutNDS;
	TBCDField *QRaspDetailAlterCostMINWithNDS;
	TBCDField *QRaspDetailAlterCostMINWithoutNDS;
	TStringField *QRaspDetailAlterTNumbNE;
	TIntegerField *QRaspDetailAlterfAdv;
	TIntegerField *QRaspDetailAlterfAdvMIN;
	TStringField *QRaspDetailAlterTfAdv;
	TIntegerField *QRaspDetailAlterProcNDS;
	TIntegerField *QRaspDetailAlterPIdn;
	TIntegerField *QRaspDetailAlterfType;
	TADOQuery *QRaspDetail;
	TAutoIncField *QRaspDetailIdn;
	TIntegerField *QRaspDetailPIdn;
	TIntegerField *QRaspDetailidRasp;
	TStringField *QRaspDetailiText;
	TIntegerField *QRaspDetailYear;
	TIntegerField *QRaspDetailidAdvProduceClass;
	TStringField *QRaspDetailiText_1;
	TStringField *QRaspDetailNameRaspDetail;
	TBCDField *QRaspDetailCostWithNDS;
	TBCDField *QRaspDetailCostWithoutNDS;
	TBCDField *QRaspDetailCostNDS;
	TBCDField *QRaspDetailProcNDS;
	TBCDField *QRaspDetailDiscount;
	TBCDField *QRaspDetailProcDiscount;
	TIntegerField *QRaspDetailNumbNE;
	TIntegerField *QRaspDetailfAdv;
	TIntegerField *QRaspDetailfType;
	TDateTimeField *QRaspDetailDateIns;
	TIntegerField *QRaspDetailIdIns;
	TDateTimeField *QRaspDetailDateMod;
	TIntegerField *QRaspDetailIdMod;
	TDateTimeField *QRaspDetailDateDel;
	TIntegerField *QRaspDetailIdDel;
	TIntegerField *QRaspDetailId24TypeProduceIndex;
	TfrxDBDataset *frxDSEmplUserDol;
	TADOQuery *QEmplUserDol;
	TAutoIncField *AutoIncField2;
	TStringField *StringField11;
	TWideStringField *WideStringField3;
	TIntegerField *IntegerField12;
	TWideStringField *WideStringField4;
	TADOQuery *QTmpTable;
	TfrxDBDataset *frxDSEmplUserDolRass;
	TADOQuery *QEmplUserDolRass;
	TAutoIncField *AutoIncField3;
	TStringField *StringField12;
	TWideStringField *WideStringField5;
	TIntegerField *IntegerField13;
	TWideStringField *WideStringField6;
	TADOQuery *QRasp;
	TIntegerField *QRaspIdUserBM;
	TIntegerField *QRaspId24NameStatus;
	TIntegerField *QRaspId256TypeRasp;
	TIntegerField *QRaspId24City;
	TDateTimeField *QRaspDateRasp;
	TStringField *QRaspNumbRaspName;
	TMemoField *QRaspRaspNameRTF;
	TMemoField *QRaspContentTargetRTF;
	TIntegerField *QRaspId24NameStatuser;
	TMemoField *QRaspContentRTF;
	TIntegerField *QRaspEmplDol;
	TIntegerField *QRaspIdEmplUsers;
	TStringField *QRaspRaspName;
	TDateTimeField *QRaspDateIns;
	TIntegerField *QRaspIdIns;
	TDateTimeField *QRaspDateMod;
	TIntegerField *QRaspIdMod;
	TDateTimeField *QRaspDateDel;
	TIntegerField *QRaspIdDel;
	TIntegerField *QRaspVidRasp;
	TStringField *QRaspFamIO;
	TStringField *QRaspauFamIO;
	TStringField *QRaspiText;
	TStringField *QRaspiText_1;
	TStringField *QRaspiText_2;
	TStringField *QRaspFamIO_1;
	TWideStringField *QRaspDol;
	TStringField *QRaspTmpGetDate;
	TStringField *QRaspauFamIO_1;
	TADOQuery *QListRasp;
	TAutoIncField *QListRaspIdn;
	TADOQuery *QTmp;
	TAutoIncField *Q2Idn;
	TIntegerField *Q2PIdn;
	TWordField *Q2TypeRow;
	TADOQuery *QInfoMailList;
	TStringField *QInfoMailListTmpFamIO;
	TIntegerField *QInfoMailListfTurn;
	TIntegerField *QInfoMailListfResault;
	TStringField *QInfoMailListNote;
	TMemoField *QInfoMailListMailText;
	TIntegerField *QInfoMailListfType;
	TWideStringField *QInfoMailListMail;
	TAutoIncField *QInfoMailListIDUser;
	TDateTimeField *QInfoMailListDateSheet;
	TAutoIncField *QInfoMailListIdn;
	TTimer *Timer1;
	TADOQuery *QEmplUserDolSheet;
	TAutoIncField *QEmplUserDolSheetIdn;
	TStringField *QEmplUserDolSheetFamIO;
	TWideStringField *QEmplUserDolSheetMail;
	TIntegerField *QEmplUserDolSheetfTurn;
	TWideStringField *QEmplUserDolSheetDol;
	TMenuItem *N16;
	TMenuItem *N17;
	TMenuItem *N19;
	TMenuItem *N20;
	TMenuItem *N21;
	TMenuItem *N22;
	TMenuItem *N23;
	TMenuItem *N26;
	TADOQuery *QMailList;
	TAutoIncField *QMailListIdn;
	TStringField *QMailListTmpFamIO;
	TIntegerField *QMailListfTurn;
	TIntegerField *QMailListfResault;
	TStringField *QMailListNote;
	TAutoIncField *QMailListauId;
	TIntegerField *QMailListfNote;
	TMemoField *QMailListMailText;
	TIntegerField *QMailListfType;
	TWideStringField *QMailListMail;
	TAutoIncField *QMailListIDUser;
	TAutoIncField *QMailListIDUserP;
	TADOQuery *QEmplUserDol3;
	TAutoIncField *QEmplUserDol3Idn;
	TStringField *QEmplUserDol3FamIO;
	TWideStringField *QEmplUserDol3Mail;
	TIntegerField *QEmplUserDol3fTurn;
	TIntegerField *QEmplUserDol3fType;
	TMemoField *QEmplUserDol3MailText;
	TADOQuery *Qw2;
	TMenuItem *N11;
	TMenuItem *N24;
	TMenuItem *N27;
	TADOQuery *QEmplUserDolOtkaz;
	TAutoIncField *QEmplUserDolOtkazIdn;
	TStringField *QEmplUserDolOtkazFamIO;
	TWideStringField *QEmplUserDolOtkazMail;
	TIntegerField *QEmplUserDolOtkazfTurn;
	TWideStringField *QEmplUserDolOtkazDol;
	TMenuItem *N125;
	TMenuItem *N25;
	TMenuItem *N28;
	TMenuItem *N29;
	TMenuItem *N30;
	TMenuItem *N31;
	TIdSMTP *IdSMTP2;
	TTrayIcon *TrayIcon1;
	TImageList *ImageTray;
	TADOQuery *QwHint;
	TIntegerField *QwIdnJob;
	TStringField *QwUserLogin;
	TDateTimeField *QwDateIns;
	TIntegerField *QwIdEmlpUsers;
	TStringField *QwProgramName;
	TWideStringField *QwNameProject;
	TWideStringField *QwNameMove;
	TStringField *QwNameJob;
	TSmallintField *QwProgress;
	TIntegerField *QwStatus;
	TDateTimeField *QwLastStart;
	TDateTimeField *QwLastEnd;
	TADOConnection *GM_JobConnect;
	TADOQuery *Qw2Hint;
	TIntegerField *Qw2IdnJob;
	TStringField *Qw2UserLogin;
	TDateTimeField *Qw2DateIns;
	TIntegerField *Qw2IdEmlpUsers;
	TStringField *Qw2ProgramName;
	TWideStringField *Qw2NameProject;
	TWideStringField *Qw2NameMove;
	TStringField *Qw2NameJob;
	TSmallintField *Qw2Progress;
	TIntegerField *Qw2Status;
	TDateTimeField *Qw2LastStart;
	TDateTimeField *Qw2LastEnd;
	TADOConnection *DM_JobConnect;
	TADOConnection *DM_Connection;
	TADOConnection *NM_Connection;
	TMenuItem *N33;
	TMenuItem *N34;
	TMenuItem *N36;
	TMenuItem *N37;
	TMenuItem *N38;
	TMenuItem *N39;
	TRzSaveDialog *SaveDialogXLS;
	TMenuItem *N40;
	TMenuItem *N41;
	TMenuItem *N42;
	TPanel *DiscountPanel;
	TMemo *DiscountMemo;
	TMenuItem *N43;
	TMenuItem *N44;
	TMenuItem *N45;
	TMenuItem *N47;
	void __fastcall N2Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall N8Click(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall FormDestroy(TObject *Sender);
	void __fastcall HTML1Click(TObject *Sender);
	void __fastcall N13Click(TObject *Sender);
	void __fastcall N14Click(TObject *Sender);
	void __fastcall N15Click(TObject *Sender);
	void __fastcall N23Click(TObject *Sender);
	void __fastcall N30Click(TObject *Sender);
	void __fastcall RzStatusPane4MouseEnter(TObject *Sender);
	void __fastcall RzStatusPane4MouseLeave(TObject *Sender);
	void __fastcall N60Click(TObject *Sender);
	void __fastcall N6Click(TObject *Sender);
	void __fastcall N12Click(TObject *Sender);
	void __fastcall N160Click(TObject *Sender);
	void __fastcall N32Click(TObject *Sender);
	void __fastcall frxRaspAlterGetValue(const AnsiString VarName, Variant &Value);
	void __fastcall TmStartWorkTimer(TObject *Sender);
	void __fastcall N26Click(TObject *Sender);
	void __fastcall N24Click(TObject *Sender);
	void __fastcall N27Click(TObject *Sender);
	void __fastcall N125Click(TObject *Sender);
	void __fastcall N25Click(TObject *Sender);
	void __fastcall N28Click(TObject *Sender);
	void __fastcall N29Click(TObject *Sender);
	void __fastcall N31Click(TObject *Sender);
	void __fastcall IdMessage1InitializeISO(System::WideChar &VHeaderEncoding, UnicodeString &VCharSet);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall TrayIcon1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall N33Click(TObject *Sender);
	void __fastcall N37Click(TObject *Sender);
	void __fastcall N39Click(TObject *Sender);
	void __fastcall N40Click(TObject *Sender);
	void __fastcall N41Click(TObject *Sender);
	void __fastcall N42Click(TObject *Sender);
	void __fastcall N43Click(TObject *Sender);
	void __fastcall N44Click(TObject *Sender);
	void __fastcall N45Click(TObject *Sender);
	void __fastcall N47Click(TObject *Sender);



private:	// User declarations

int viTestTimer;
TForm   *pFr;  //Указатель на текущую открытую форму
bool flReBoot;//Флаг принудительной перезагрузки(обнаружена новая версия)
bool  flDelLine;//Флаг удаления повторяющейся линии подчеркивания
int  __fastcall LoadSaveFile_INI(int RW); // Загрузить (сохтанить) FILENAMEDSC
bool __fastcall DelFreeMenu(TMenuItem* It);//Удаление пустых меню
bool __fastcall SetEnableMenu(TMenuItem* It,int Num,struct Permis *P);//Растановка прав доступа
bool __fastcall CreateShortcut(LPCTSTR pwzShortCutFileName,
					LPCTSTR pszPathAndFileName,
					LPCTSTR pszWorkingDirectory,
					LPCTSTR pszArguments,
					WORD wHotKey,
					int iCmdShow,
					LPCTSTR pszIconFileName,
					int iIconIndex);//создать ярлык на рабочем столе
public:		// User declarations
  int fALFlag;
void __fastcall InitOneCallAction(int vIdClienDouble ,int vIdCallAction ) ;
void __fastcall Nd01Click(int IdOrg,int IdCallAction,int IdInvoises, int IdTel);//Форма создания счета
int  __fastcall SaveShemaView(struct SaveTblControl *SaTbl,AnsiString ShName,int KeyForm);//Сохранить  Схему имен просмотра
int  __fastcall LoadListShemaView(struct SaveTblControl *SaTbl,TRzComboBox *rzCB,int Idn,AnsiString KeyForm );// загрузить  Схему имен просмотра
void __fastcall BeforePostGeneral_Data(TDataSet *DataSet,AnsiString TablGeneral,int index,int Idn); //Сохранение данных в главной таблице
void __fastcall BeforePostLib_Data(TDataSet *DataSet,AnsiString TablGeneral,AnsiString NameLib,int index, int Idn);//Сохранение данных в библиотеках
void __fastcall SetParamTableBanded(TcxGridDBBandedTableView *g,struct SaveTblControl *pV,int MaxSiz);//Установить параметрв таблицы
void __fastcall SaveParamTableBanded (TcxGridDBBandedTableView *g,struct SaveTblControl *pV,int MaxSiz);//Сохранить параметры таблицы
void __fastcall SetParamTableView(TcxGridDBTableView *g,struct SaveTblControl *pV,int MaxSiz);
void __fastcall SaveParamTableView(TcxGridDBTableView *g,struct SaveTblControl *pV,int MaxSiz);//Сохранить параметры таблицы
void __fastcall SetParamCxTree(TcxDBTreeList  *g,struct SaveTblControl *pV,int MaxSiz);//Установить параметрв таблицы
void __fastcall SaveParamCxTree(TcxDBTreeList *g,struct SaveTblControl *pV,int MaxSiz);//Сохранить параметры таблицы
void __fastcall ObrBefoOpenForm( int Tag);//Обработчик перед открытием любого окна
AnsiString __fastcall ExportToFileFrom_FrAccountPrint(int IdForm,int IdAccount,int Show,AnsiString PathFileName);//Процедура Экспорта в файл отчетных документов из FastReport
int  __fastcall SendEmail(struct rMail *stMail);//Передача почты 0-успешная передача;-1-Ошибка
UnicodeString __fastcall WinToWin1251Q(UnicodeString Str);
int IDUser; //При открытии окна показать пользователя если не -1
int IdMs;   //При открытии окна показать мат.средство если не -1
bool flInitMail; //Флаг инициализации почтового клиента
bool DataReadOnly;
bool flOtkaz; //Флаг отказа распоряжения(для формирования письма рассылки с уведомлением об отказе)

int __fastcall SaveXlsFiles_cxDBTreeList(TcxDBTreeList *cxDBTreeList1);//Сохранить в формате XLS  для cxDBTreeList

int  __fastcall SetNameF(AnsiString *Sl);//Привести имя к нормальному виду
void __fastcall WriteLogFile(char *Msg);// Сохранить данные об ошибке
int  __fastcall ConnectBaseData(); //Подключение к базе данных
void __fastcall SetImageJpg(TADOQuery *QrFt, int FT_TYPE,TBlobField *QrFtFTFOTOCL,TImage *Image3,int i);// Отобразить фотографию  JPG
void __fastcall iTypeFill(TImage *ImDST,int TypeFill);//Заполнить при отсутсевии изображения
int  __fastcall TestNumMap(AnsiString *Sl);//Проверка номера
//void  __fastcall SortForColumn(TADOQuery *Qi,TdxDBGrid *dx1,TdxDBTreeListColumn *Column);//Сортировка по столбцам
bool  __fastcall OpenSkaner( Graphics::TBitmap *Img,int Kind);//Запуск сканера
int __fastcall CheckSumParam(char *P,int Siz);//Проверка контрольной сумммы блока параметров
int __fastcall SrchNames(TStringList *Si,AnsiString *SL); //Подключение к базе данных
int __fastcall TestFloatNum(char *P);//Проверка номера
//int __fastcall RefreshSummary(TdxDBGrid *Dg);// Обновить таблицу
int __fastcall TestDateNum(char *P);//Только цифры и точки в тексте
void __fastcall ClearWorkDir(AnsiString WrkPath);
AnsiString  __fastcall GetDoc();// Обновить таблицу

void __fastcall Open();                   //Открыть
void __fastcall GetlistMap(TStrings* SW); //Получить полный список карточек
void  __fastcall StartHelp(int Idn);//Запуск отображения HELP
Currency __fastcall StringToCurrencyMy(char *P);//Преобразование строки в деньги без учета сепаратора
void __fastcall ReadParamFromAzLib(int Idn,TStringList *SSL,int *RetCode);//Чтение списка параметров настроек в azLib
void __fastcall WriteParamFromAzLib(int Idn,int PIdn,AnsiString sName,TStringList *SSL);//Запись списка параметров настроек в azLib
int  __fastcall ReadParamFromTStringList(AnsiString *SVal,AnsiString sName,AnsiString Def,TStringList *SSL);//Чтение списка параметров настроек в azLib
void __fastcall GetParamMailServer();           //Получить парпметры почтового сервера из настроек базы HD
//int  __fastcall SendEmail(struct rMail *stMail);//Передача почты 0-успешная передача;-1-Ошибка
int  __fastcall SendMessageMail();              //Процедура рассылки почтовых сообщений о переходе документа на следующий этап
void __fastcall SetErrorMessage(AnsiString SL); //Зафиксировать сообщение об ошибке в таблице atErrorMessage
int __fastcall  MoveNextStep(int IdInquiry,int IdUser);	//Процедура передачи квитанции на следующий этап
int __fastcall  MovePrevStep(int IdInquiry);            //Процедура Возврата карточки на предыдущий этап
int  __fastcall TestNumImpHTML(char *P);//Проверка номера
bool __fastcall GetValString(char **pBgn,char *pVal,int siz);//Выборка значения из текстовой строки
bool __fastcall GetDateFromVal(char *pVal,TDateTime *Dt,int fl);//Выборка значения из текстовой строки
void __fastcall FirstLoadsTabs(struct Lex01 *Lex,struct SaveTblControl *STb);//Установить значения по загрузке

int  __fastcall SaveXlsFiles(TcxGrid *dx,AnsiString FormName, AnsiString Parameter);//Сохранить в формате XLS

 int __fastcall CreateClient(AnsiString Clients,int *IdLoader);// создание Клиентов
void __fastcall CreateContakt(int idClients,AnsiString FIO,AnsiString Phone,AnsiString Dol);// создание Контактов
void __fastcall CreateOtrosli(int idClients,AnsiString Otrosli,AnsiString NumOtrsl);// создание Отрасли
 int __fastcall UpdateClient(AnsiString Clients,AnsiString Email,AnsiString Web,AnsiString Adres,AnsiString Phone, AnsiString Path, int IdPath,int *IdLoader);// Редактирование клиентов
void __fastcall TestLenStr(AnsiString *SL,int SizeI); //Проверить и изменить длину строки.
int  __fastcall WritePath(AnsiString SL); //Создать и записать маршрут
int  __fastcall ExportToExcelForDmGroup(TADOQuery *Qe,TForm *Fr,TRzProgressBar *Pb ); //Процедура Экспорт в Excel в формате для Директ-Маркетингового отдела
void __fastcall GetListMarkNode(TcxTreeList *TL,int NumLI);//Считать ID выбранных НАБОРОВ

void __fastcall OpenFrAccount(int FlAccount,int IdClientPublic);
void __fastcall OpenFrContractTemplate(int flForm, int IdInvoices);
void __fastcall OpenFormListCallActions();
void __fastcall OpenFormSelectUser();

int flEdit, IdOrg,IdType,IdCont,CallActIdGrid2;
int N23Type,N23CallActions;
int FlQ1HTimer;
AnsiString FaxNum; /*Номер факса*/
TDateTime Tupp;



int IdCallRasuall;        ///*код результата звонка для КЦ*/
int IdAccount;            ///*ID созданного нового счета*/
int idUPP,flInUpp;

int  ID_CallHistory;            ///*код истории для создания счета*/

bool EditManagerClient;   ///*назначать менеджера  у организации*/
bool EditManager;         ///*Позволять пользователю менять ответственного менеджера*/
bool UserExcel;           // /*Позволять пользователю выгружать данные в EXEL*/
bool VoidManager;        //Права доступа/Разрешить пользователю работать за любого менеджера"
bool flFRONTRANGE;        //"Настройки/Разрешение исползования FRONTRANGE"
bool flVENTAFAX;           //"Настройки/Разрешение исползования VENTAFAX"
bool flEditActions; /*Срздание и удаление компаний продвижения*/
bool flEditClientSAP;/*Права доступа/Разрешить пользователю изменять реквизиты клиентов САП*/
bool flEditUpp;         //Права доступа/Контроль рассылок за других
bool flEditDM;          //Права доступа/Разрешить пользователю создавать/редактировать  шаблоны распоряжений

bool flInsertClient;	//Права доступа/Разрешить пользователю создавать новые организации
bool flEditClass;		//Права доступа/Разрешить пользователю создавать новые организации
bool flUserSAP,flUserKC; 		//Права доступа/Сотрудник Адресной подписки
bool flEditUFL;
bool flGetPI;
bool flNewAccountNoStop;//Разрешить создовать счета без учета продукта
bool flEditAll;
bool flRequisiteDateDel;//Разрешить разблокировать реквезиты
bool flBlokClientDelete;//Разрешить сливать (удолять) организации
bool flEditAllRasp; //Права доступа/Разрешить пользователю изменять не Черновики
bool flAllResault;//Права доступа/Разрешить пользователю Утверждать за других
bool flAllApprove; //Права доступа/Разрешить пользователю Утвердить за всех в контроле рассылок (added by r.Perkatov 2014-07-23)
bool flSheet;//Права доступа/Разрешить рассылку ведомости
bool flCommentsCheckLists;//Права доступа/Разрешить пользователю создавать (удалять) классификаторы комментариев
bool flEditCallResult; //Права доступа///не пересчитывать цены ПИ с НДС.

bool flRaspExcel;      //разрешить экспорт распоряжений в MS Office Excel


void __fastcall SentAccountFax(int IdAccount,AnsiString FaxNum); //Отправка счета по факсу
void __fastcall SentAccountEmail(int IdAccount,TStringList *AddFiles,int TEmail,AnsiString *EmailSt);//Отправка счета по почте

void __fastcall ManagersSetClick(int Idn);
void __fastcall FrCallRemindOpen(int Idn,int flW);
void __fastcall SendWindowAnsiString(HWND h1,AnsiString SQ);//Записать строку в окно
HWND __fastcall FindWinServiceSystem(int IndexSWC); // Запустить процесс и найти хэндлер
void __fastcall CallExternWindow(int Index,AnsiString SQ); //ВЫзвать окно управления телефоном и записать номер
AnsiString __fastcall KeyToText(int Idn_all_InvoicesContract,struct KeyToData *pKey);//Найти текст соответствующий ключ
AnsiString __fastcall CreateFileInvoice(int Idn_all_InvoicesContract,AnsiString AFileName); //Создать файл на основе шаблона и имени предложенного имени фала
void __fastcall OpenFrSentMail(int IdAccount,int FlForm);
AnsiString __fastcall ReplaseKeyToDate(int Idn_all_InvoicesContract,AnsiString AKeyName);
void __fastcall OpenFrAccountPrint(int IdFrom, int IdAccount,int Show);
void __fastcall MainFormFormOpenClientNew(int IdClient,int Type,int idCallActions, int PIdCallActions);
////////////////////////////////////////////////////////////////////////////////
void __fastcall OpenFormMainDoubleCompany(int IdClient);
void __fastcall OpenFormFrClientDocKeeper(int IdClient);
void __fastcall OpenFormContractTemplateAddInfo(int flForm, int IdInvoices, int IdTemplate);
void __fastcall OpenFormContakts(int flForm, int IdClient, int IdContact);
AnsiString __fastcall CreateFileInEdit(int Idn_all_InvoicesContract,AnsiString AFileName);// показать загруженный файл в программе.
TcxTreeListNode * __fastcall SetSelectNodes(TcxTreeListNode *NdP,int Per);//Установить права на все вложенные узлы

void __fastcall OpenTFrClientFind(int TypeCl,char FR);
void __fastcall SaveAdr(int idCl,int TypeAdr ,AnsiString AdresPole
,AnsiString ZipCode
,AnsiString Country
,AnsiString SubjectRF
,AnsiString RegionType
,AnsiString Region
,AnsiString RayonType
,AnsiString Rayon
,AnsiString CityType
,AnsiString City
,AnsiString NasPunktType
,AnsiString NasPunkt
,AnsiString StreetType
,AnsiString Street
,AnsiString Korpus
,AnsiString Building
,AnsiString Home
,AnsiString Office
,AnsiString Flat
,AnsiString Note
,AnsiString FullAddr);
void __fastcall SaveRequisite(int idCl,int TypeEdit
,AnsiString NameFull
,AnsiString NameShort
,AnsiString INN
,AnsiString KPP
,AnsiString OGRN
,AnsiString OPF
,AnsiString OKPO
,AnsiString Bank
,AnsiString BIK
,AnsiString RS
,AnsiString KS
,AnsiString Otrasl
,AnsiString OtraslKod
,AnsiString PodOtrasl
,AnsiString PodOtraslKod
,AnsiString PodOtrasl1
,AnsiString PodOtrasl1Kod
,AnsiString PodOtrasl2
,AnsiString PodOtrasl2Kod
,AnsiString PodOtrasl3
,AnsiString PodOtrasl3Kod
,AnsiString OKVED
,AnsiString OKVEDKod
,AnsiString OKONH
,AnsiString OKONHKod
,AnsiString InPerson
,AnsiString InDogovor
,AnsiString BIK_rkc
,AnsiString LS
,AnsiString ShareCapital
,AnsiString Turnover
,AnsiString IdnRequisite
,AnsiString UFK );

void __fastcall SaveContakts(int IdnClient// Код клиента
,AnsiString FIO // Полное имя
,AnsiString Fam // Фамилия
,AnsiString Imya // Имя
,AnsiString Otch // Отчество
,AnsiString Dolg // Должность
,AnsiString Comment
,AnsiString Phone // Телефон (1)
,AnsiString Fax //Факс (2)
,AnsiString email // e-mail (3)
,AnsiString www //Сайт (4)
,AnsiString HomePhone // Домашний телефон (5)
,AnsiString MobPhone // Мобильный телефон (6)
,AnsiString ICQ // ICQ (7)
,AnsiString Skype // Skype (8)
,int can_upd // Признак возможности изменения сведений
,int *IdnContakts // Код контакта
,int *idPhone // Телефон (1)
,int *idFax //Факс (2)
,int *idemail // e-mail (3)
,int *idwww //Сайт (4)
,int *idHomePhone // Домашний телефон (5)
,int *idMobPhone // Мобильный телефон (6)
,int *idICQ // ICQ (7)
,int *idSkype // Skype (8)
);
void __fastcall InsertInto_UPP(TDateTime Ti);
void __fastcall ReadFileDocFromDataBase(AnsiString PathSave,AnsiString *FileName, int Type,AnsiString *IDN);//Выгрузить файл из базы данных на диск
void __fastcall OpenFRCallResult();
 int __fastcall ConnectBaseDataFRS(); // подключение к FRS
bool __fastcall AddRowToRtfDoc(TMemoryStream *pms,int CountRow);
void __fastcall ExportExcelLog(AnsiString FormName, AnsiString Parameter);
void __fastcall OpenFormFRCallResult(int IdOpen,int IdClient);
rMail  __fastcall CreateMail(int IdRasp, int fType);//Заполнение структуры письма.
void  __fastcall Sheet(int IdRasp);//рассылка распоряжени1 и перевод распоряжения в состояние-ктвержденное
void  __fastcall Otkaz(int IdRasp);//рассылка распоряжени1 и перевод распоряжения в состояние-ктвержденное

void __fastcall Ic(int n,TIcon Icon);//работа с треем

AnsiString mainFinStr;
int ReturnNewClient,CellComp,CellCont,CallResultIdFrPhoneMail;
AnsiString Stroka;
//AnsiString DirFileExe; // Путь к exe файлу методом ExtractFilePath (Получаем при запуске программы)
AnsiString DirFileSetup;
	__fastcall TMainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
extern char flFrListMail;
struct rMail{
UnicodeString ResiveMailAddress; //ЕMail получателя
UnicodeString ResiveName;        //Фамилия и Инициалы получателя
UnicodeString SenderMailAddress; //ЕMail отправителя
UnicodeString SenderName;        //Фамилия и Инициалы отправителя
UnicodeString Subject;           //Тема письма
TStrings   *Body;             //Текст письма
TStrings   *PathAddFiles;     //маршрут и имя прикрепляемых файлов
};
extern bool   externUserExcel;           // /*Позволять пользователю выгружать данные в EXEL*/
extern bool __fastcall TestLoadNewVers(TADOQuery *Q,int KeyConnect);      //Проверка на загрузку новой версии
extern bool __fastcall TestAutoInstall(AnsiString SW);                    //АвтоИнсталяция программы
extern bool __fastcall TestUDLAutoInstall(AnsiString SW,TADOConnection *ADOConnection1);                 //Проверка наличия UDL и копирование или генерация

//---------------------------------------------------------------------------
#endif
