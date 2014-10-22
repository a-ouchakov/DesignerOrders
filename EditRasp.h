//---------------------------------------------------------------------------

#ifndef EditRaspH
#define EditRaspH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "BisinessMenedger.h"
#include "RzButton.hpp"
#include "RzPanel.hpp"
#include <ExtCtrls.hpp>
#include "RzEdit.hpp"
#include <Mask.hpp>
#include "RzCmboBx.hpp"
#include <ComCtrls.hpp>
#include "RzBckgnd.hpp"
#include "RzLabel.hpp"
#include <Graphics.hpp>
#include "RzCommon.hpp"
#include <ADODB.hpp>
#include <DB.hpp>
#include "cxContainer.hpp"
#include "cxControls.hpp"
#include "cxEdit.hpp"
#include "cxMemo.hpp"
#include "cxRichEdit.hpp"
#include "cxTextEdit.hpp"
#include "RzShellDialogs.hpp"
#include "RzTabs.hpp"
#include "cxClasses.hpp"
#include "cxCurrencyEdit.hpp"
#include "cxCustomData.hpp"
#include "cxData.hpp"
#include "cxDataStorage.hpp"
#include "cxDBData.hpp"
#include "cxFilter.hpp"
#include "cxGraphics.hpp"
#include "cxGrid.hpp"
#include "cxGridBandedTableView.hpp"
#include "cxGridCustomTableView.hpp"
#include "cxGridCustomView.hpp"
#include "cxGridDBBandedTableView.hpp"
#include "cxGridDBTableView.hpp"
#include "cxGridLevel.hpp"
#include "cxGridTableView.hpp"
#include "cxStyles.hpp"
#include "RzChkLst.hpp"
#include "RzLstBox.hpp"
#include "RzSplit.hpp"
#include <ImgList.hpp>
#include "cxButtonEdit.hpp"
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
//---------------------------------------------------------------------------
class TFrEditRasp : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzToolButton *btInsRasp;
	TRzSpacer *RzSpacer4;
	TRzSpacer *RzSpacer5;
	TRzToolButton *btClose;
	TRzSpacer *RzSpacer6;
	TRzPanel *RzPanel3;
	TRzGroupBox *RzGroupBox2;
	TRzComboBox *cbVidRasp;
	TRzGroupBox *RzGroupBox1;
	TRzComboBox *cbNameStatus;
	TRzGroupBox *RzGroupBox3;
	TRzComboBox *cbBMName;
	TTimer *TmEmplDol;
	TADOQuery *QEmplDol;
	TWideStringField *QEmplDolDol;
	TIntegerField *QEmplDolIDn;
	TADOQuery *QINS_EditRasp;
	TADOQuery *Qw;
	TIntegerField *QINS_EditRaspIdn;
	TADOQuery *QListRasp;
	TAutoIncField *QListRaspIdn;
	TIntegerField *QListRaspIdUserBM;
	TIntegerField *QListRaspId24NameStatus;
	TIntegerField *QListRaspId256TypeRasp;
	TIntegerField *QListRaspId24City;
	TDateTimeField *QListRaspDateRasp;
	TStringField *QListRaspNumbRaspName;
	TMemoField *QListRaspRaspNameRTF;
	TMemoField *QListRaspContentTargetRTF;
	TIntegerField *QListRaspId24NameStatuser;
	TMemoField *QListRaspContentRTF;
	TIntegerField *QListRaspEmplDol;
	TIntegerField *QListRaspIdEmplUsers;
	TStringField *QListRaspRaspName;
	TDateTimeField *QListRaspDateIns;
	TIntegerField *QListRaspIdIns;
	TDateTimeField *QListRaspDateMod;
	TIntegerField *QListRaspIdMod;
	TDateTimeField *QListRaspDateDel;
	TIntegerField *QListRaspIdDel;
	TStringField *QListRaspFamIO;
	TStringField *QListRaspauFamIO;
	TIntegerField *QListRaspVidRasp;
	TRzToolButton *btPrintRasp;
	TRzButton *btAddEmplUserBM;
	TRzPanel *RzPanel20;
	TRzLabel *RzLabel1;
	TcxMemo *reComment;
	TMemoField *QListRaspComment;
	TRzToolButton *btSheet;
	TRzSpacer *RzSpacer1;
	TRzPanel *RzPanel21;
	TRzLabel *RzLabel2;
	TRzOpenDialog *RzOpenDialog1;
	TRzPageControl *RzPageControl1;
	TRzTabSheet *TabSheet1;
	TRzTabSheet *TabSheet2;
	TRzPanel *rzPanel;
	TRzPanel *RzPanel4;
	TcxMemo *reContentRTF;
	TRzPanel *RzPanel7;
	TRzButton *RzButton2;
	TRzPanel *RzPanel5;
	TRzComboBox *cbEmplDol;
	TRzComboBox *cbEmplUsers;
	TRzPanel *RzPanel18;
	TRzButton *btAddEmplUser;
	TRzPanel *RzPanel22;
	TRzEdit *edPathAddFiles;
	TRzGroupBox *RadioGroup1;
	TRadioButton *rbBase;
	TRadioButton *rbBudjet;
	TRadioButton *rbDiscountStandart;
	TRadioButton *rbDiscountRaschet;
	TRzGroupBox *RzGroupBox12;
	TRzGroupBox *RzGroupBox4;
	TRzComboBox *cbNameActionDiscount;
	TRzGroupBox *RzGroupBox5;
	TRzGroupBox *RzGroupBox14;
	TRzDateTimeEdit *dtDateRealization;
	TRzBitBtn *btAddNameActionDiscount;
	TcxStyleRepository *cxStyleRepository1;
	TcxStyle *cxStyle1;
	TImageList *ImageList1;
	TRzComboBox *cbCostDiscount;
	TDataSource *DSPZ;
	TADOQuery *QPZ;
	TADOQuery *QTmpTable;
	TAutoIncField *QPZIdn;
	TIntegerField *QPZidRasp;
	TStringField *QPZProduce;
	TIntegerField *QPZPrognozOtklik;
	TBCDField *QPZFactorCost;
	TBCDField *QPZHalfReceivedProfit;
	TBCDField *QPZAllCost;
	TBCDField *QPZPrognozProfit;
	TBCDField *QPZAllProfit;
	TTimer *TmRefresh;
	TIntegerField *QPZIdIns;
	TStringField *QListRaspPathAddFiles;
	TADOQuery *QListComments;
	TAutoIncField *QListCommentsIdn;
	TIntegerField *QListCommentsidRasp;
	TIntegerField *QListCommentsTypeCost;
	TIntegerField *QListCommentsId256NameDiscount;
	TIntegerField *QListCommentsId256NameAction;
	TDateTimeField *QListCommentsDateRealization;
	TStringField *QListCommentsPrognozEffects;
	TStringField *QListCommentsGrantingConditions;
	TDateTimeField *QListCommentsDateIns;
	TIntegerField *QListCommentsIdIns;
	TDateTimeField *QListCommentsDateMod;
	TIntegerField *QListCommentsIdMod;
	TDateTimeField *QListCommentsDateDel;
	TIntegerField *QListCommentsIdDel;
	TStringField *QListCommentsiText;
	TcxStyleRepository *cxStyleRepository2;
	TcxStyle *cxStyle2;
	TcxStyle *cxStyle3;
	TcxStyle *cxStyle4;
	TRzSplitter *RzSplitter2;
	TcxGrid *cxGridEmplUser;
	TcxGridDBColumn *cxGridDBColumn1;
	TcxGridDBColumn *cxGridDBColumn2;
	TcxGridDBColumn *cxGridDBColumn3;
	TcxGridDBColumn *cxGridDBColumn4;
	TcxGridDBColumn *cxGridDBColumn5;
	TcxGridDBColumn *cxGridDBColumn6;
	TcxGridDBColumn *cxGridDBColumn7;
	TcxGridDBColumn *cxGridDBColumn8;
	TcxGridDBBandedTableView *cxGridTableViewEmplUser;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserColumn1;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserColumn2;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserColumn3;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserColumn4;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserColumn5;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserColumn6;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserColumn7;
	TcxGridLevel *cxGridLevel1;
	TRzPanel *RzPanel24;
	TRzSpacer *RzSpacer72;
	TRzToolButton *btEdit;
	TRzToolButton *btPost;
	TRzSpacer *RzSpacer48;
	TRzToolButton *btAdd;
	TRzSpacer *RzSpacer49;
	TRzToolButton *btDel;
	TRzSpacer *RzSpacer71;
	TRzToolButton *btRefresh;
	TRzSpacer *RzSpacer75;
	TRzSplitter *RzSplitter1;
	TRzGroupBox *RzGroupBox10;
	TRzCheckList *clGroupClients;
	TRzBitBtn *btAddGroupClients;
	TRzGroupBox *RzGroupBox13;
	TRzCheckList *clActionPurpose;
	TRzBitBtn *btAddActionPurpose;
	TRzGroupBox *RzGroupBox8;
	TRzMemo *mePrognozEffects;
	TRzButton *RzButton6;
	TRzGroupBox *RzGroupBox9;
	TRzMemo *meGrantingConditions;
	TRzButton *RzButton5;
	TRzGroupBox *RzGroupBox11;
	TRzCheckList *clAdvancementChannel;
	TRzBitBtn *btAddAdvancementChannel;
	TRzPanel *RzPanel2;
	TRzPanel *RzPanel9;
	TRzLabel *RzLabel4;
	TRzRichEdit *edDateRasp;
	TRzDateTimeEdit *dtDateRasp;
	TRzRichEdit *edNumbRaspName;
	TRzComboBox *cbCity;
	TRzComboBox *cbTypeRasp;
	TRzPanel *RzPanel11;
	TcxMemo *reRaspName;
	TRzPanel *RzPanel8;
	TRzButton *btAddTextsRTF;
	TRzPanel *RzPanel13;
	TcxMemo *reContentTargetRTF;
	TRzPanel *RzPanel14;
	TRzButton *RzButton1;
	TRzPanel *RzPanel6;
	TRzComboBox *btNameStatuser;
	TIntegerField *QPZidProduce;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserColumn8;
	TStringField *QPZauFamIO;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserColumn9;
	TADOQuery *QAddFiles;
	TStringField *QAddFilesNameFile;
	TDataSource *DSMailPathAddFiles;
	TcxGrid *cxGrid1;
	TcxGridDBColumn *cxGridDBColumn17;
	TcxGridDBColumn *cxGridDBColumn18;
	TcxGridDBColumn *cxGridDBColumn19;
	TcxGridDBColumn *cxGridDBColumn20;
	TcxGridDBColumn *cxGridDBColumn21;
	TcxGridDBColumn *cxGridDBColumn22;
	TcxGridDBColumn *cxGridDBColumn23;
	TcxGridDBColumn *cxGridDBColumn24;
	TcxGridDBBandedTableView *cxGridDBBandedTableView2;
	TcxGridDBBandedColumn *cxGridDBBandedTableView2NameFile;
	TcxGridLevel *cxGridLevel3;
	TRzBitBtn *RzBitBtn3;
	TADOQuery *QAddFilesEXEL;
	TStringField *QAddFilesEXELNameFile;
	TRzToolButton *btOtkaz;
	TRzSpacer *RzSpacer2;
	TRzBitBtn *btAddProduce;
	TRzComboBox *RzComboBox1;
	TAutoIncField *QListRaspIdSeller;
	TStringField *QListRaspShortName;
	TStringField *QListRaspLongName;
	TADOQuery *Qw2;
	TRzGroupBox *RzGroupBox6;
	TEdit *Edit1;
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall dtDateRaspCloseUp(TObject *Sender);
	void __fastcall btAddEmplUserClick(TObject *Sender);
	void __fastcall cbEmplDolDropDown(TObject *Sender);
	void __fastcall TmEmplDolTimer(TObject *Sender);
	void __fastcall cbTypeRaspExit(TObject *Sender);
	void __fastcall btAddEmplUserBMClick(TObject *Sender);
	void __fastcall edNumbRaspNameKeyPress(TObject *Sender, char &Key);
	void __fastcall btInsRaspClick(TObject *Sender);
	void __fastcall btAddTextsRTFClick(TObject *Sender);
	void __fastcall cbEmplUsersChange(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall RzButton1Click(TObject *Sender);
	void __fastcall RzButton2Click(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall btPrintRaspClick(TObject *Sender);
	void __fastcall btSheetClick(TObject *Sender);
	void __fastcall RzButton3Click(TObject *Sender);
	void __fastcall cbVidRaspChange(TObject *Sender);
	void __fastcall rbDiscountStandartClick(TObject *Sender);
	void __fastcall rbBaseClick(TObject *Sender);
	void __fastcall rbDiscountRaschetClick(TObject *Sender);
	void __fastcall btAddNameActionDiscountClick(TObject *Sender);
	void __fastcall rbBudjetClick(TObject *Sender);
	void __fastcall cbNameActionDiscountDropDown(TObject *Sender);
	void __fastcall btAddActionPurposeClick(TObject *Sender);
	void __fastcall btAddGroupClientsClick(TObject *Sender);
	void __fastcall btAddAdvancementChannelClick(TObject *Sender);
	void __fastcall TmRefreshTimer(TObject *Sender);
	void __fastcall btPostClick(TObject *Sender);
	void __fastcall btRefreshClick(TObject *Sender);
	void __fastcall btAddClick(TObject *Sender);
	void __fastcall btDelClick(TObject *Sender);
	void __fastcall QPZBeforeDelete(TDataSet *DataSet);
	void __fastcall QPZBeforePost(TDataSet *DataSet);
	void __fastcall cxGridTableViewEmplUserEditKeyDown(
          TcxCustomGridTableView *Sender, TcxCustomGridTableItem *AItem,
          TcxCustomEdit *AEdit, WORD &Key, TShiftState Shift);
	void __fastcall cbCostDiscountDropDown(TObject *Sender);
	void __fastcall cxGridTableViewEmplUserColumn1PropertiesButtonClick(
          TObject *Sender, int AButtonIndex);
	void __fastcall btOtkazClick(TObject *Sender);
	void __fastcall btAddProduceClick(TObject *Sender);
	void __fastcall RzComboBox1Change(TObject *Sender);
	void __fastcall cbVidRaspDropDown(TObject *Sender);
	void __fastcall reCommentExit(TObject *Sender);
	void __fastcall edDateRaspExit(TObject *Sender);
	void __fastcall reRaspNameExit(TObject *Sender);
	void __fastcall reContentTargetRTFExit(TObject *Sender);
	void __fastcall reContentRTFExit(TObject *Sender);
private:	// User declarations
	TLocateOptions Opts;
	Variant locvalues[1];

void __fastcall LoadPicList(TStrings *Seller,TStrings *User, TStrings *Dol);

public:		// User declarations
	__fastcall TFrEditRasp(TComponent* Owner);
	AnsiString vsSQLQw, vsSQLQPZ;
	int fFlagEditInsert;   //Флаг 0-INS запись. 1-EDIT
	int viRaspIdn;       //Idn Распоряжения
	bool fOkButton;
	bool fPrint; //Флаг печати false-не нажат, true-нажат
   //	AnsiString TempTableName;//Имя временной таблицы
   int viPZIdn; //Idn расчета прогнозируемвых затрат
   bool fDropDown; //Семафор для выбора Типа распоряжения.
	};
//---------------------------------------------------------------------------
extern PACKAGE TFrEditRasp *FrEditRasp;
//---------------------------------------------------------------------------
extern char flFrEditRasp;
extern char flFrListMail;
#endif
