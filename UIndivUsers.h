//----------------------------------------------------------------------------
#ifndef UIndivUsersH
#define UIndivUsersH
//----------------------------------------------------------------------------
#include <ADODB.hpp>
#include <Classes.hpp>
#include <ComCtrls.hpp>
#include <Controls.hpp>
#include <DB.hpp>
#include <DBCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <ImgList.hpp>
#include <Mask.hpp>
#include <StdCtrls.hpp>
#include <ToolWin.hpp>
#include "RzEdit.hpp"
#include "cxClasses.hpp"
#include "cxControls.hpp"
#include "cxCustomData.hpp"
#include "cxData.hpp"
#include "cxDataStorage.hpp"
#include "cxDBData.hpp"
#include "cxEdit.hpp"
#include "cxFilter.hpp"
#include "cxGraphics.hpp"
#include "cxGrid.hpp"
#include "cxGridCustomTableView.hpp"
#include "cxGridCustomView.hpp"
#include "cxGridDBTableView.hpp"
#include "cxGridLevel.hpp"
#include "cxGridTableView.hpp"
#include "cxStyles.hpp"
#include "RzPanel.hpp"
#include "cxLookAndFeelPainters.hpp"
#include "cxLookAndFeels.hpp"
#include "dxSkinBlack.hpp"
#include "dxSkinBlue.hpp"
#include "dxSkinCaramel.hpp"
#include "dxSkinCoffee.hpp"
#include "dxSkinDarkRoom.hpp"
#include "dxSkinDarkSide.hpp"
#include "dxSkinFoggy.hpp"
#include "dxSkinGlassOceans.hpp"
#include "dxSkiniMaginary.hpp"
#include "dxSkinLilian.hpp"
#include "dxSkinLiquidSky.hpp"
#include "dxSkinLondonLiquidSky.hpp"
#include "dxSkinMcSkin.hpp"
#include "dxSkinMoneyTwins.hpp"
#include "dxSkinOffice2007Black.hpp"
#include "dxSkinOffice2007Blue.hpp"
#include "dxSkinOffice2007Green.hpp"
#include "dxSkinOffice2007Pink.hpp"
#include "dxSkinOffice2007Silver.hpp"
#include "dxSkinOffice2010Black.hpp"
#include "dxSkinOffice2010Blue.hpp"
#include "dxSkinOffice2010Silver.hpp"
#include "dxSkinPumpkin.hpp"
#include "dxSkinsCore.hpp"
#include "dxSkinscxPCPainter.hpp"
#include "dxSkinsDefaultPainters.hpp"
#include "dxSkinSeven.hpp"
#include "dxSkinSharp.hpp"
#include "dxSkinSilver.hpp"
#include "dxSkinSpringTime.hpp"
#include "dxSkinStardust.hpp"
#include "dxSkinSummer2008.hpp"
#include "dxSkinValentine.hpp"
#include "dxSkinXmas2008Blue.hpp"
#include "dxSkinBlueprint.hpp"
#include "dxSkinDevExpressDarkStyle.hpp"
#include "dxSkinDevExpressStyle.hpp"
#include "dxSkinHighContrast.hpp"
#include "dxSkinSevenClassic.hpp"
#include "dxSkinSharpPlus.hpp"
#include "dxSkinTheAsphaltWorld.hpp"
#include "dxSkinVS2010.hpp"
#include "dxSkinWhiteprint.hpp"
#include "cxNavigator.hpp"
#include "dxSkinMetropolis.hpp"
#include "dxSkinMetropolisDark.hpp"
#include "dxSkinOffice2013DarkGray.hpp"
#include "dxSkinOffice2013LightGray.hpp"
#include "dxSkinOffice2013White.hpp"




//#include "EnhTwain.hpp"
//----------------------------------------------------------------------------
class TFrIndivUsers : public TForm
{
__published:
        TPanel *Panel111;
        TPanel *Panel2;
        TToolBar *ToolBar2;
        TGroupBox *GroupBox7;
        TGroupBox *GroupBox8;
        TDBNavigator *DBNavigator1;
        TImageList *ImageList1;
        TGroupBox *GroupBox9;
        TSplitter *Splitter1;
	TADOQuery *Qw;
        TImageList *ImageList2;
        TPanel *Panel5;
        TButton *Button1;
        TButton *Button2;
        TADOQuery *Qr1;
        TIntegerField *Qr1UdcId;
        TIntegerField *Qr1UdcIdUs;
        TBlobField *Qr1UdcDoc;
        TDateTimeField *Qr1UdcData;
        TIntegerField *Qr1UdcUserSet;
        TBlobField *Qr1UdcRemAdmin;
		TBlobField *Qr1UdcAcces;
        TStringField *Qr1adSurname;
        TPageControl *PageControl2;
        TTabSheet *TabSheet3;
        TSplitter *Splitter2;
        TTreeView *TreeView1;
        TPageControl *PageControl1;
        TTabSheet *TabSheet1;
        TGroupBox *GroupBox6;
        TRichEdit *RichEdit1;
        TTabSheet *TabSheet2;
        TGroupBox *GroupBox11;
        TRichEdit *RichEdit2;
        TGroupBox *GroupBox4;
        TTimer *TimerPic;
        TImageList *ImageList3;
        TImageList *ImageList4;
        TDataSource *DsQr1;
        TADOQuery *QUs;
        TDataSource *DSUs;
        TIntegerField *QUsauId;
        TStringField *QUsauFamUser;
        TStringField *QUsauNamUser;
        TStringField *QUsauOtcUser;
        TStringField *QUsauLogUser;
        TTimer *TmUs;
        TDateTimeField *QUsauDateDel;
        TSplitter *Splitter4;
        TGroupBox *GroupBox1;
        TStringField *QUsauFamIO;
	TRzEdit *Edit1;
	TRzEdit *Edit2;
	TRzEdit *Edit3;
	TRzEdit *Edit5;
	TcxGrid *cxGrid1;
	TcxGridDBTableView *cxGrid1DBTableView1;
	TcxGridLevel *cxGrid1Level1;
	TcxGridDBColumn *cxGrid1DBTableView1auId;
	TcxGridDBColumn *cxGrid1DBTableView1auLogUser;
	TcxGridDBColumn *cxGrid1DBTableView1auFamIO;
	TRzPanel *PageControl3;
	TRzEdit *RzEdit1;
	TGroupBox *GroupBox2;
	TDBEdit *DBEdit1;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TDBEdit *DBEdit2;
	TcxGrid *cxGrid2;
	TcxGridDBTableView *cxGridDBTableView1;
	TcxGridLevel *cxGridLevel1;
	TcxGridDBColumn *cxGridDBTableView1UdcData;
	TcxGridDBColumn *cxGridDBTableView1UdcUserSet;
	TcxGridDBColumn *cxGridDBTableView1adSurname;
	TcxStyleRepository *cxStyleRepository1;
	TcxStyle *cxStyle1;
	TTimer *TmSrch;
	TGroupBox *GroupBox3;
	TRzEdit *Edit6;
	TGroupBox *GroupBox5;
	TRzEdit *Edit4;
	TGroupBox *GroupBox12;
	TRzEdit *Edit7;
	TStringField *QUsauMailUser;
	TStringField *QUsauPhoneUser;
	TStringField *QUsauMobPhoneUser;
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall ExitButtonClick(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall TreeView1DblClick(TObject *Sender);
        void __fastcall TreeView1Change(TObject *Sender,TTreeNode *Node);
        void __fastcall Edit1Change(TObject *Sender);
        void __fastcall DBNavigator1Click(TObject *Sender,TNavigateBtn Button);
		void __fastcall DBGrid1Enter(TObject *Sender);
        void __fastcall TimerPicTimer(TObject *Sender);
        void __fastcall TabSheet4Show(TObject *Sender);
        void __fastcall DSUsDataChange(TObject *Sender, TField *Field);
        void __fastcall TmUsTimer(TObject *Sender);
        void __fastcall DsQr1DataChange(TObject *Sender, TField *Field);
	void __fastcall RzEdit1Change(TObject *Sender);
	void __fastcall TmSrchTimer(TObject *Sender);
	   //void __fastcall dxDBGrid2ColumnClick(TObject *Sender,		  TdxDBTreeListColumn *Column);


private:
//#############################################
//AnsiString SQL2;
//int LastProgress;
//void __fastcall UpdateInfo(void);
//void __fastcall CinTime();        //Синхронизация
//TProgressBar *Gauge;
//#############################################
TTreeNode *SelNode;//Выбранный узел
void __fastcall EnableSave();//Разрешить сохранение данных
int   UserDrawDocAcc; //Код пользователя на которого нарисованы данные по доступу к документам
//union Acc{int Num ;char M[8];}Acc;
//union Acc Acc; //{int Num ;char M[8];};

void __fastcall MovToDataBaseFotoUser();//Загрузка в базу даных фото польз
void __fastcall OpenSkaner( Graphics::TBitmap *Img,int Kind);//Запуск сканера
void __fastcall ReDrawStatus(); //Изменился допуск перерисовать
void __fastcall RecreateChildNode(TADOQuery *Q,int PId,Variant *Pv,TTreeNode *Nn,TTreeNodes *Pn);//Нарисоват узлы допуска
/*
struct sLS{
int       id;        //Номер по порядку
int       Index;     //Индекс имени подресурса в списке имен
int       PCode;     //Код ресурса
int       Code;      //Код подресурса
char      sAcc;      //состояние доступа
bool      isVar;     //С изменениями
          }sLS[10000];

int pLS,eLS;
TStringList *sSR ;     //Указатель на список имен ресурсов
TStringList *sSRp;     //Указатель на список имен подресурсов
*/

int IdProgramm;        //Код программы
AnsiString dlAS;       //Наименование должности
AnsiString nmAS;       //фамилия с инициалами
AnsiString tfAS;       //Телефон
AnsiString mlAS;       //EMail
bool EnCoded;//Кодировать - не кодировать пароль
public:
//int nFrQrCountIn; //Номер окна у родителя
void __fastcall ChangUser();//Сменился ПОЛЬЗОВАТЕЛЬ

	virtual __fastcall TFrIndivUsers(TComponent* AOwner);
};
//----------------------------------------------------------------------------
extern PACKAGE TFrIndivUsers *FrIndivUsers;
extern char flFrIndivUsers;

//----------------------------------------------------------------------------
#endif
