//---------------------------------------------------------------------------
#ifndef EditRaspDetailH
#define EditRaspDetailH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "BisinessMenedger.h"
#include "RzButton.hpp"
#include "RzPanel.hpp"
#include <ExtCtrls.hpp>
#include "RzCmboBx.hpp"
#include "RzSplit.hpp"
#include "cxClasses.hpp"
#include "cxControls.hpp"
#include "cxCurrencyEdit.hpp"
#include "cxCustomData.hpp"
#include "cxData.hpp"
#include "cxDataStorage.hpp"
#include "cxDBData.hpp"
#include "cxEdit.hpp"
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
#include "dmEditRaspDetail.h"

#include <ADODB.hpp>
#include <DB.hpp>
#include <ImgList.hpp>
#include "RzEdit.hpp"
#include <Mask.hpp>
#include "RzSpnEdt.hpp"
#include "cxDBNavigator.hpp"
#include "cxNavigator.hpp"
#include "cxContainer.hpp"
#include "cxTextEdit.hpp"
#include "RzLabel.hpp"
#include "frxClass.hpp"
#include "frxDBSet.hpp"
#include "RzRadChk.hpp"
#include "RzTabs.hpp"
#include "cxCheckComboBox.hpp"
#include "cxDropDownEdit.hpp"
#include "cxMaskEdit.hpp"
#include "cxExtEditRepositoryItems.hpp"
#include "cxDBLookupComboBox.hpp"
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
#include "cxCheckBox.hpp"
#include "dxSkinBlueprint.hpp"
#include "dxSkinDevExpressDarkStyle.hpp"
#include "dxSkinDevExpressStyle.hpp"
#include "dxSkinHighContrast.hpp"
#include "dxSkinSevenClassic.hpp"
#include "dxSkinSharpPlus.hpp"
#include "dxSkinTheAsphaltWorld.hpp"
#include "dxSkinVS2010.hpp"
#include "dxSkinWhiteprint.hpp"
#include "dxSkinMetropolis.hpp"
#include "dxSkinMetropolisDark.hpp"
#include "dxSkinOffice2013DarkGray.hpp"
#include "dxSkinOffice2013LightGray.hpp"
#include "dxSkinOffice2013White.hpp"
#include "cxDBCheckComboBox.hpp"
//---------------------------------------------------------------------------
class TFrEditRaspDetail : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzToolButton *btInsRaspDetail;
	TRzSpacer *RzSpacer5;
	TRzToolButton *btClose;
	TRzSpacer *RzSpacer6;
	TImageList *ImageList1;
	TTimer *TmNE;
	TDataSource *DSNE;
	TADOQuery *QNE;
	TADOQuery *Qw;
	TLabel *Label10;
	TAutoIncField *QNEIdn;
	TIntegerField *QNEPIdn;
	TIntegerField *QNEidRasp;
	TIntegerField *QNEidAdvProduceClass;
	TStringField *QNENameRaspDetail;
	TIntegerField *QNENumbNE;
	TBCDField *QNECostWithNDS;
	TBCDField *QNECostWithoutNDS;
	TBCDField *QNECostNDS;
	TBCDField *QNEProcNDS;
	TBCDField *QNEDiscount;
	TBCDField *QNEProcDiscount;
	TIntegerField *QNEfAdv;
	TIntegerField *QNEfType;
	TIntegerField *QNEYear;
	TADOQuery *QINS_EditRaspDetail;
	TIntegerField *QINS_EditRaspDetailIdn;
	TIntegerField *QNEIdIns;
	TRzPanel *RzPanel7;
	TRzGroupBox *RzGroupBox3;
	TRzGroupBox *RzGroupBox4;
	TRzGroupBox *RzGroupBox5;
	TRzGroupBox *RzGroupBox6;
	TRzComboBox *cbTypeName;
	TRzBitBtn *RzBitBtn6;
	TRzComboBox *cbfAdv;
	TRzBitBtn *RzBitBtn1;
	TRzSpinner *spYear;
	TRzEdit *edProduce;
	TRzBitBtn *RzBitBtn3;
	TRzButton *btedProduce;
	TTimer *TmAlarm;
	TRzGroupBox *RzGroupBox8;
	TRzNumericEdit *edNumbNE;
	TRzGroupBox *RzGroupBox10;
	TRzComboBox *cbProcNDS;
	TRzBitBtn *edAddProduce;
	TRzGroupBox *RzGroupBox9;
	TRzNumericEdit *edfAdvMIN;
	TRzCheckBox *chbEditCallResult;
	TADOQuery *QIns_idAdvTNClass;
	TIntegerField *QIns_idAdvTNClassidn;
	TRzSplitter *RzSplitter1;
	TRzGridPanel *RzGridPanel1;
	TRzButton *btCountCostWithNDS;
	TRzNumericEdit *edCostNEWithoutNDS;
	TRzNumericEdit *edCostWithoutNDS;
	TRzLabel *RzLabel1;
	TRzLabel *RzLabel10;
	TRzNumericEdit *edCostNEWithNDS;
	TRzLabel *RzLabel4;
	TRzNumericEdit *edCostNDS;
	TRzNumericEdit *edCostWithNDS;
	TRzLabel *RzLabel2;
	TRzLabel *RzLabel5;
	TRzButton *btCountCostProcDiscount;
	TRzLabel *RzLabel8;
	TRzNumericEdit *edProcDiscount;
	TRzLabel *RzLabel7;
	TRzNumericEdit *edDiscount;
	TRzNumericEdit *edCostMINWithNDS;
	TRzNumericEdit *edCostMINWithoutNDS;
	TRzMemo *RzMemo1;
	TRzMemo *RzMemo3;
	TRzPanel *RzPanel2;
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
	TRzGroupBox *RzGroupBox11;
	TDataSource *DS1;
	TADOQuery *Q1;
	TBCDField *Q1BCDField1;
	TBCDField *Q1BCDField12;
	TBCDField *Q1BCDField;
	TBCDField *Q1BCDField2;
	TBCDField *Q1c;
	TcxGrid *cxGrid1;
	TcxGridDBColumn *cxGridDBColumn9;
	TcxGridDBColumn *cxGridDBColumn10;
	TcxGridDBColumn *cxGridDBColumn11;
	TcxGridDBColumn *cxGridDBColumn12;
	TcxGridDBColumn *cxGridDBColumn13;
	TcxGridDBColumn *cxGridDBColumn14;
	TcxGridDBColumn *cxGridDBColumn15;
	TcxGridDBColumn *cxGridDBColumn16;
	TcxGridDBBandedTableView *cxGridDBBandedTableView1;
	TcxGridLevel *cxGridLevel2;
	TcxGrid *cxGrid2;
	TcxGridDBColumn *cxGridDBColumn17;
	TcxGridDBColumn *cxGridDBColumn18;
	TcxGridDBColumn *cxGridDBColumn19;
	TcxGridDBColumn *cxGridDBColumn20;
	TcxGridDBColumn *cxGridDBColumn21;
	TcxGridDBColumn *cxGridDBColumn22;
	TcxGridDBColumn *cxGridDBColumn23;
	TcxGridDBColumn *cxGridDBColumn24;
	TcxGridDBBandedTableView *cxGridDBBandedTableView2;
	TcxGridDBBandedColumn *cxGridDBBandedColumn1;
	TcxGridDBBandedColumn *cxGridDBBandedColumn2;
	TcxGridDBBandedColumn *cxGridDBBandedColumn3;
	TcxGridDBBandedColumn *cxGridDBBandedColumn4;
	TcxGridDBBandedColumn *cxGridDBBandedColumn5;
	TcxGridLevel *cxGridLevel3;
	TDataSource *DS2;
	TADOQuery *Q2;
	TBCDField *BCDField1;
	TBCDField *BCDField2;
	TBCDField *BCDField3;
	TBCDField *BCDField4;
	TBCDField *BCDField5;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1DBBandedColumn1;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1DBBandedColumn11;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1DBBandedColumn;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1DBBandedColumn2;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1c;
	TTimer *Timer1;
	TRzGridPanel *RzGridPanel2;
	TRzLabel *RzLabel6;
	TRzLabel *RzLabel11;
	TRzNumericEdit *edCostBaseWithNDS;
	TRzNumericEdit *edCostBudjetWithNDS;
	TRzBitBtn *RzBitBtn2;
	TRzCheckBox *chbAvtoCost;
	TRzSpacer *RzSpacer1;
	TRzGroupBox *RzGroupBox12;
	TRzDateTimeEdit *dtDateJobMAX;
	TRzLabel *RzLabel13;
	TRzLabel *RzLabel12;
	TRzDateTimeEdit *dtDateJobMIN;
	TRzGroupBox *RzGroupBox13;
	TcxCheckComboBox *chcbKanalSale;
	TcxEditRepository *cxEditRepository1;
//	TcxEditRepositoryCheckComboBox *PLFrom;
	TIntegerField *QNEId32NameUnit;
	TIntegerField *QNEId32NameItemType;
	TADOQuery *QLookComboId32NameUnit;
	TDataSource *DSLookComboId32NameUnit;
	TAutoIncField *QLookComboId32NameUnitIdn;
	TStringField *QLookComboId32NameUnitStringField;
	TDataSource *DSLookComboId32NameItemType;
	TADOQuery *QLookComboId32NameItemType;
	TAutoIncField *QLookComboId32NameItemTypeIdn;
	TStringField *QLookComboId32NameItemTypeStringField;
	TRzGroupBox *RzGroupBox15;
	TRzComboBox *cbId32NameUnit;
	TRzGroupBox *RzGroupBox14;
	TRzComboBox *cbId32NameItemType;
	TRzButton *btGreateNE;
	TRzBitBtn *btAddId32NameUnit;
	TRzBitBtn *btId32NameItemType;
	TRzGroupBox *RzGroupBox16;
	TRzLabel *lbNoNDS;
	TTimer *TmAlarmNoNDS;
	TRzBitBtn *RzBitBtn4;
	TRzBitBtn *RzBitBtn5;
	TIntegerField *QNEMergedCount;
	TADOQuery *QStatic;
	TADOQuery *QStatic2;
	TRzBitBtn *btGetChangeNE;
	TADOQuery *Qw2;
	TADOQuery *Qw_DM;
	TADOQuery *Qw_NM;
	TRzGroupBox *RzGroupBox2;
	TRzLabel *meComplect;
	TRzLabel *RzLabel9;
	TRzLabel *RzLabel3;
	TRzBitBtn *RzBitBtn7;
	TRzBitBtn *btGetChangePI;
	TRzLabel *lbAlarm;
	TRzGroupBox *RzGroupBox7;
	TRzBitBtn *RzBitBtn8;
  TcxCheckComboBox *cxCheckComboBoxPI;
	TcxEditRepositoryCheckComboBox *CheckComboBoxPI;
	TRzSizePanel *RzSizePanel1;
	TRzGroupBox *RzGroupBox1;
	TRzButton *btCreateNamePI;
	TRzMemo *meIndex;
	TRzGroupBox *RzGroupBox17;
	TRzMemo *edNoteName;
	TRzMemo *edAlterName;
	TRzPageControl *PageCtrl;
	TRzTabSheet *TabSheet1;
	TRzTabSheet *TabSheet2;
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
	TcxGridDBBandedColumn *cxGridTableViewEmplUserIdn;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserPIdn;
	TcxGridDBBandedColumn *cxGridTableViewEmplUseridRasp;
	TcxGridDBBandedColumn *cxGridTableViewEmplUseridAdvProduceClass;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserNameRaspDetail;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserNumbNE;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserYear;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserCostWithNDS;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserCostWithoutNDS;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserCostNDS;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserProcNDS;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserDiscount;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserProcDiscount;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserfAdv;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserfType;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserColumn1;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserColumn2;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserColumn3;
	TcxGridLevel *cxGridLevel1;
	TcxGridDBTableView *cxGrid3DBTableView1;
	TcxGridLevel *cxGrid3Level1;
	TcxGrid *cxGrid3;
	TcxGridDBColumn *cxGrid3DBTableView1BlockName;
	TcxGridDBColumn *cxGrid3DBTableView1bType;
	TcxGridDBColumn *cxGrid3DBTableView1BlockTerm;
	TcxGridDBColumn *cxGrid3DBTableView1CostWitnDiscount;
	TcxGridDBColumn *cxGrid3DBTableView1Description;
	TADOQuery *CyclQuer;
	TWideStringField *CyclQuerDescription;
	TIntegerField *CyclQuerCycleMonth;
	TRzLabel *RzLabel14;
	TRzLabel *RzLabel15;
	TRzDateTimeEdit *dtDateEventStart;
	TRzLabel *RzLabel16;
	TRzDateTimeEdit *dtDateEventEnd;
	TRzTabSheet *TabSheet3;
	TRzMemo *DiscountMemo;
	TADOQuery *DiscQuer;
	TWideStringField *DiscQuerTermsDiscount;
	TcxGridDBColumn *cxGrid3DBTableView1ch;
	TADOCommand *LinkUnlinkBlockComm;
	TADOQuery *HotLQuer;
	TBooleanField *HotLQuerChoice;
	TADOQuery *BchkQuer;
	TIntegerField *BchkQuerChoiceCount;
	TcxStyleRepository *StyleRepos;
	TcxStyle *NullBlock;
	TcxStyle *cxStyle1;
	TADOQuery *LrecQuer;
	TIntegerField *LrecQuerDetail;
	TADOCommand *EvntComm;
	TRzGroupBox *RzGroupBox18;
	TRzNumericEdit *ColPIEd;
	TADOCommand *TryDelNEComm;
	TADOQuery *SAPQuer;
	TAutoIncField *SAPQuerIdn;
	TIntegerField *SAPQuerPIDn;
	TADOQuery *SapDQuer;
	TAutoIncField *SapDQuerIssuePriceID;
	TADOQuery *SapOQuer;
	TAutoIncField *SapOQuerIssuePriceID;
	TADOQuery *CCchQuer;
	TAutoIncField *CCchQueridn;
  TcxGridDBColumn *cxGrid3DBTableView1PI;
//	TRzLabel *RzLabel17;
//	TRzComboBox *cbCatSpec;
//	TADOQuery *SpecQuer;
//	TWideStringField *SpecQueriText;
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall btedProduceClick(TObject *Sender);
	void __fastcall btInsRaspDetailClick(TObject *Sender);
	void __fastcall RzBitBtn1Click(TObject *Sender);
	void __fastcall RzBitBtn2Click(TObject *Sender);
	void __fastcall edProcDiscountKeyPress(TObject *Sender, char &Key);
	void __fastcall edProcDiscountChange(TObject *Sender);
	void __fastcall TmAlarmTimer(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall RzBitBtn3Click(TObject *Sender);
	void __fastcall cbProcNDSChange(TObject *Sender);
	void __fastcall QNEBeforePost(TDataSet *DataSet);
	void __fastcall edCostWithoutNDSExit(TObject *Sender);
	void __fastcall edCostWithoutNDSChange(TObject *Sender);
	void __fastcall edCostWithNDSChange(TObject *Sender);
	void __fastcall btDiscountClick(TObject *Sender);
	void __fastcall btEditClick(TObject *Sender);
	void __fastcall btPostClick(TObject *Sender);
	void __fastcall btAddClick(TObject *Sender);
	void __fastcall btDelClick(TObject *Sender);
	void __fastcall btRefreshClick(TObject *Sender);
	void __fastcall TmNETimer(TObject *Sender);
	void __fastcall btGreateNEClick(TObject *Sender);
	void __fastcall btCountCostWithNDSClick(TObject *Sender);
	void __fastcall edNumbNEChange(TObject *Sender);
	void __fastcall cxGridTableViewEmplUserEditKeyDown(
          TcxCustomGridTableView *Sender, TcxCustomGridTableItem *AItem,
          TcxCustomEdit *AEdit, WORD &Key, TShiftState Shift);
	void __fastcall QNEAfterInsert(TDataSet *DataSet);
	void __fastcall btCreateNamePIClick(TObject *Sender);
	void __fastcall edCostNEWithoutNDSChange(TObject *Sender);
	void __fastcall edCostNEWithNDSChange(TObject *Sender);
	void __fastcall btCountCostProcDiscountClick(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall edAddProduceClick(TObject *Sender);
	void __fastcall cbfAdvChange(TObject *Sender);
	void __fastcall cbTypeNameChange(TObject *Sender);
	void __fastcall QNEBeforeDelete(TDataSet *DataSet);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall edProduceChange(TObject *Sender);
	void __fastcall spYearChange(TObject *Sender);
	void __fastcall cxGridDBBandedTableView2CellClick(
          TcxCustomGridTableView *Sender,
          TcxGridTableDataCellViewInfo *ACellViewInfo, TMouseButton AButton,
          TShiftState AShift, bool &AHandled);
	void __fastcall cxGridDBBandedTableView1CellClick(
          TcxCustomGridTableView *Sender,
          TcxGridTableDataCellViewInfo *ACellViewInfo, TMouseButton AButton,
          TShiftState AShift, bool &AHandled);
	void __fastcall RzBitBtn6Click(TObject *Sender);
	void __fastcall btAddId32NameUnitClick(TObject *Sender);
	void __fastcall btId32NameItemTypeClick(TObject *Sender);
	void __fastcall TmAlarmNoNDSTimer(TObject *Sender);
	void __fastcall RzBitBtn4Click(TObject *Sender);
	void __fastcall RzBitBtn5Click(TObject *Sender);
	void __fastcall cbTypeNameDropDown(TObject *Sender);
	void __fastcall RzBitBtn7Click(TObject *Sender);
	void __fastcall btGetChangePIClick(TObject *Sender);
	void __fastcall cbProcNDSDropDown(TObject *Sender);
	void __fastcall btGetChangeNEClick(TObject *Sender);
	void __fastcall cxGrid3DBTableView1DblClick(TObject *Sender);
	void __fastcall cxCheckComboBoxPIPropertiesChange(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall PageCtrlChange(TObject *Sender);
	void __fastcall cxGrid3DBTableView1CellClick(TcxCustomGridTableView *Sender, TcxGridTableDataCellViewInfo *ACellViewInfo,
		  TMouseButton AButton, TShiftState AShift, bool &AHandled);
	void __fastcall ColPIEdChange(TObject *Sender);
	void __fastcall chcbKanalSalePropertiesClickCheck(TObject *Sender, int ItemIndex,
          bool &AllowToggle);
private:	// User declarations
	int edProduceIdn;//Idn Продукта, переданный из поиска;
	TLocateOptions Opts;
	Variant locvalues[1];
	void __fastcall CheckNDS();
	void __fastcall List();
	void __fastcall OpenForm();
	void __fastcall ListCycle(void);
//	void ListCSpec(void);
	void __fastcall ListBlock(void);
	void __fastcall CreateLinkBlock(void);
	void __fastcall CheckHotLine(TObject *Sender);
//	void __fastcall CheckComplect(void);
	void __fastcall TryDelNE(void);
  TField* __fastcall    RaspDetail(AnsiString fieldName);
  AnsiString __fastcall RaspDetailValue(AnsiString fieldName);
public:		// User declarations
	__fastcall TFrEditRaspDetail(TComponent* Owner);
	int flFrEditRaspDetail;
	AnsiString vsSQLQw,vsSQLQw2, vsSQLEditRaspDetail;
	int viNEIdn; //локация записи
	int fFlagEditInsert; //Флаг 0-INS запись. 1-EDIT

	int viIdnDetail;      //Idn Вставляемой/редактируемой записи
	int viRaspIdn;        //Idn Распоряжения
	int viId24NameStatus; //Idn Статуса(Черноаик, проект приказа, приказ и пр.)
	int IdInsUser  ;      // Idn Пользователя, создавшего запись.
	bool fOkButton;
	float vfOldValueProcDiscount;//Старые  значения при изменении ProcDiscount
	float vfNewValueProcDiscount;//Новые значения при изменении ProcDiscount
	int viVidRasp;      //Вид распоряжения
	int viSrc;          //Код Юр.Лица(ЗАО,НОУ)
	AnsiString StrID;
	int viIdGetPI;      //Код распоряжения, для которого заменяется подписной индекс(распоряжение о внесении изменений)
	Currency vcNDSNew;  //Новoе значение НДС из номенклатуры Axapta
	bool fPermission;   // 2013-06-27 Чернышов
};
//---------------------------------------------------------------------------
extern PACKAGE TFrEditRaspDetail *FrEditRaspDetail;
//---------------------------------------------------------------------------
#endif
