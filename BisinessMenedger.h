//---------------------------------------------------------------------------

#ifndef BisinessMenedgerH
#define BisinessMenedgerH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzDBEdit.hpp"
#include "RzEdit.hpp"
#include "RzPanel.hpp"
#include <ExtCtrls.hpp>
#include <Mask.hpp>
#include "RzCmboBx.hpp"
#include "RzRadChk.hpp"
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
#include <DB.hpp>
#include "RzSplit.hpp"
#include <ImgList.hpp>
#include <ComCtrls.hpp>
#include <ADODB.hpp>
#include "cxCalendar.hpp"
#include "cxDBTL.hpp"
#include "cxInplaceContainer.hpp"
#include "cxMaskEdit.hpp"
#include "cxTL.hpp"
#include "cxTLData.hpp"
#include "RzTabs.hpp"
#include "cxImageComboBox.hpp"
#include "RzChkLst.hpp"
#include "RzLstBox.hpp"
#include "cxLookAndFeelPainters.hpp"
#include "cxLookAndFeels.hpp"
#include "cxTLdxBarBuiltInMenu.hpp"
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
#include "RzLabel.hpp"
#include <Vcl.Graphics.hpp>
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
#include "cxCheckComboBox.hpp"
#include "cxExtEditRepositoryItems.hpp"
#include "cxNavigator.hpp"
#include "dxSkinMetropolis.hpp"
#include "dxSkinMetropolisDark.hpp"
#include "dxSkinOffice2013DarkGray.hpp"
#include "dxSkinOffice2013LightGray.hpp"
#include "dxSkinOffice2013White.hpp"
//---------------------------------------------------------------------------
class TFrBisniessMenedger : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel10;
	TRzSplitter *spPI;
	TcxGrid *cxGrid2;
	TcxGridDBColumn *cxGridDBColumn1;
	TcxGridDBColumn *cxGridDBColumn2;
	TcxGridDBColumn *cxGridDBColumn3;
	TcxGridDBColumn *cxGridDBColumn4;
	TcxGridDBColumn *cxGridDBColumn5;
	TcxGridDBColumn *cxGridDBColumn6;
	TcxGridDBColumn *cxGridDBColumn7;
	TcxGridDBColumn *cxGridDBColumn8;
	TcxGridDBBandedTableView *cxGridDBBandedTableView1;
	TcxGridLevel *cxGridLevel1;
	TImageList *ImageList1;
	TDataSource *DSListRasp;
	TADOQuery *QListRasp;
	TTimer *TmListRasp;
	TTimer *TmRaspDetail;
	TDataSource *DSRaspDetail;
	TADOQuery *QRaspDetail;
	TADOQuery *Qw;
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
	TDateTimeField *QListRaspDateIns;
	TIntegerField *QListRaspIdIns;
	TDateTimeField *QListRaspDateMod;
	TIntegerField *QListRaspIdMod;
	TDateTimeField *QListRaspDateDel;
	TIntegerField *QListRaspIdDel;
	TStringField *QListRaspRaspName;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1DateRasp;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1NumbRaspName;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1RaspName;
	TStringField *QListRaspFamIO;
	TStringField *QListRaspauFamIO;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1DateIns;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1FamIO;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1auFamIO;
	TIntegerField *QListRaspVidRasp;
	TAutoIncField *QRaspDetailIdn;
	TIntegerField *QRaspDetailPIdn;
	TIntegerField *QRaspDetailidRasp;
	TIntegerField *QRaspDetailidAdvProduceClass;
	TStringField *QRaspDetailNameRaspDetail;
	TBCDField *QRaspDetailCostWithNDS;
	TBCDField *QRaspDetailCostWithoutNDS;
	TBCDField *QRaspDetailCostNDS;
	TBCDField *QRaspDetailProcNDS;
	TBCDField *QRaspDetailDiscount;
	TBCDField *QRaspDetailProcDiscount;
	TIntegerField *QRaspDetailfAdv;
	TIntegerField *QRaspDetailfType;
	TDateTimeField *QRaspDetailDateIns;
	TIntegerField *QRaspDetailIdIns;
	TDateTimeField *QRaspDetailDateMod;
	TIntegerField *QRaspDetailIdMod;
	TDateTimeField *QRaspDetailDateDel;
	TIntegerField *QRaspDetailIdDel;
	TStringField *QRaspDetailiText;
	TIntegerField *QRaspDetailId24TypeProduceIndex;
	TIntegerField *QRaspDetailYear;
	TStringField *QRaspDetailiText_1;
	TIntegerField *QRaspDetailNumbNE;
	TcxStyleRepository *cxStyleRepository1;
	TcxStyle *cxStyle1;
	TADOQuery *Qw2;
	TADOQuery *Qw3;
	TStringField *QRaspDetailauFamIO;
	TRzGroupBox *RzGroupBox1;
	TRzCheckBox *chbDateCreateMIN;
	TRzDateTimeEdit *dtDateCreateMIN;
	TRzCheckBox *chbDateCreateMAX;
	TRzDateTimeEdit *dtDateCreateMAX;
	TRzGroupBox *RzGroupBox2;
	TRzComboBox *cbUserBM;
	TRzSpacer *RzSpacer1;
	TRzGroupBox *RzGroupBox3;
	TRzCheckBox *chbConfirmMIN;
	TRzDateTimeEdit *dtConfirmMIN;
	TRzCheckBox *chbConfirmMAX;
	TRzDateTimeEdit *dtConfirmMAX;
	TRzSpacer *RzSpacer7;
	TRzPanel *RzPanel1;
	TRzSpacer *RzSpacer15;
	TRzPanel *RzPanel2;
	TRzSpacer *RzSpacer31;
	TRzToolButton *btInsRasp;
	TRzSpacer *RzSpacer32;
	TRzSpacer *RzSpacer33;
	TRzToolButton *btUpdRasp;
	TRzToolButton *btDelRasp;
	TRzSpacer *RzSpacer34;
	TRzToolButton *btPrintRasp;
	TRzToolButton *btCopyRasp;
	TRzSpacer *RzSpacer37;
	TRzToolButton *RzToolButton3;
	TRzSpacer *RzSpacer38;
	TRzToolButton *btControlSheet;
	TRzSpacer *RzSpacer9;
	TRzToolButton *RzToolButton6;
	TRzToolButton *btSheet;
	TRzSpacer *RzSpacer10;
	TRzToolButton *RzToolButton1;
	TRzSpacer *RzSpacer8;
	TRzSpacer *RzSpacer11;
	TRzSpacer *RzSpacer12;
	TRzSpacer *RzSpacer13;
	TRzGroupBox *RzGroupBox8;
	TRzCheckBox *chbMySheet;
	TRzSpacer *RzSpacer16;
	TRzGroupBox *RzGroupBox5;
	TRzEdit *edFindText;
	TRzGroupBox *RzGroupBox6;
	TRzComboBox *cbGroupManagerBoss;
	TRzGroupBox *RzGroupBox7;
	TRzComboBox *cbGroupManager;
	TRzGroupBox *RzGroupBox12;
	TRzComboBox *cbNameStatus;
	TRzSpacer *RzSpacer2;
	TBCDField *QRaspDetailCostMINWithNDS;
	TMemoField *QListRaspComment;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Comment;
	TStringField *QRaspDetailFiText;
	TADOQuery *QRaspDetailBase;
	TAutoIncField *AutoIncField1;
	TIntegerField *IntegerField1;
	TIntegerField *IntegerField2;
	TStringField *StringField1;
	TIntegerField *IntegerField3;
	TIntegerField *IntegerField4;
	TStringField *StringField2;
	TStringField *StringField3;
	TBCDField *BCDField1;
	TBCDField *BCDField2;
	TBCDField *BCDField3;
	TBCDField *BCDField4;
	TBCDField *BCDField5;
	TBCDField *BCDField6;
	TIntegerField *IntegerField5;
	TIntegerField *IntegerField6;
	TIntegerField *IntegerField7;
	TDateTimeField *DateTimeField1;
	TIntegerField *IntegerField8;
	TDateTimeField *DateTimeField2;
	TIntegerField *IntegerField9;
	TDateTimeField *DateTimeField3;
	TIntegerField *IntegerField10;
	TIntegerField *IntegerField11;
	TStringField *StringField4;
	TBCDField *BCDField7;
	TStringField *StringField5;
	TRzPageControl *pcRaspDetail;
	TRzTabSheet *tsVedenie;
	TRzTabSheet *tsEXEL;
	TcxDBTreeList *tlRaspDetail;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn3;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn2;
	TcxDBTreeListColumn *tlRaspDetailNameRaspDetail;
	TcxDBTreeListColumn *tlRaspDetailfAdv;
	TcxDBTreeListColumn *tlRaspDetailIdn;
	TcxDBTreeListColumn *tlRaspDetailProcNDS;
	TcxDBTreeListColumn *tlRaspDetailPIdn;
	TcxDBTreeListColumn *tlRaspDetailidRasp;
	TcxDBTreeListColumn *tlRaspDetailidAdvProduceClass;
	TcxDBTreeListColumn *tlRaspDetailiText_1;
	TcxDBTreeListColumn *tlRaspDetailiText;
	TcxDBTreeListColumn *tlRaspDetailCostWithNDS;
	TcxDBTreeListColumn *tlRaspDetailCostWithoutNDS;
	TcxDBTreeListColumn *tlRaspDetailCostNDS;
	TcxDBTreeListColumn *tlRaspDetailYear;
	TcxDBTreeListColumn *tlRaspDetailDiscount;
	TcxDBTreeListColumn *tlRaspDetailProcDiscount;
	TcxDBTreeListColumn *tlRaspDetailfType;
	TcxDBTreeListColumn *tlRaspDetailDateIns;
	TcxDBTreeListColumn *tlRaspDetailNumbNE;
	TcxDBTreeListColumn *tlRaspDetailIdIns;
	TcxDBTreeListColumn *tlRaspDetailDateDel;
	TcxDBTreeListColumn *tlRaspDetailIdDel;
	TcxDBTreeListColumn *tlRaspDetailId24TypeProduceIndex;
	TcxDBTreeListColumn *tlRaspDetailIdMod;
	TcxDBTreeListColumn *tlRaspDetailDateMod;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn1;
	TRzPanel *RzPanel3;
	TRzSpacer *RzSpacer21;
	TRzSpacer *RzSpacer22;
	TRzSpacer *RzSpacer23;
	TRzToolButton *btUpdRaspDetail;
	TRzToolButton *btDelRaspDetail;
	TRzSpacer *RzSpacer24;
	TRzSpacer *RzSpacer4;
	TRzToolButton *RzToolButton2;
	TRzSpacer *RzSpacer5;
	TRzToolButton *RzToolButton5;
	TRzSpacer *RzSpacer6;
	TRzToolButton *btInsRaspDetailIndex;
	TRzToolButton *btInsRaspDetailComplect;
	TRzToolButton *btCopyRaspDetail;
	TRzSpacer *RzSpacer17;
	TRzToolButton *RzToolButton4;
	TRzSpacer *RzSpacer14;
	TRzPanel *RzPanel4;
	TRzSpacer *RzSpacer25;
	TRzSpacer *RzSpacer26;
	TRzToolButton *RzToolButton10;
	TRzToolButton *btRefrshRaspDetailEXEL;
	TRzSpacer *RzSpacer29;
	TcxGrid *cxRaspDetail;
	TcxGridDBColumn *cxGridDBColumn17;
	TcxGridDBColumn *cxGridDBColumn18;
	TcxGridDBColumn *cxGridDBColumn19;
	TcxGridDBColumn *cxGridDBColumn20;
	TcxGridDBColumn *cxGridDBColumn21;
	TcxGridDBColumn *cxGridDBColumn22;
	TcxGridDBColumn *cxGridDBColumn23;
	TcxGridDBColumn *cxGridDBColumn24;
	TcxGridDBBandedTableView *cxGridDBBandedTableView2;
	TcxGridLevel *cxGridLevel3;
	TADOQuery *QRaspDetailEXEL;
	TAutoIncField *AutoIncField2;
	TIntegerField *IntegerField12;
	TIntegerField *IntegerField13;
	TStringField *StringField6;
	TIntegerField *IntegerField14;
	TIntegerField *IntegerField15;
	TStringField *StringField7;
	TStringField *StringField8;
	TBCDField *BCDField8;
	TBCDField *BCDField9;
	TBCDField *BCDField10;
	TBCDField *BCDField11;
	TBCDField *BCDField12;
	TBCDField *BCDField13;
	TIntegerField *IntegerField16;
	TIntegerField *IntegerField17;
	TIntegerField *IntegerField18;
	TDateTimeField *DateTimeField4;
	TIntegerField *IntegerField19;
	TDateTimeField *DateTimeField5;
	TIntegerField *IntegerField20;
	TDateTimeField *DateTimeField6;
	TIntegerField *IntegerField21;
	TIntegerField *IntegerField22;
	TStringField *StringField9;
	TBCDField *BCDField14;
	TStringField *StringField10;
	TDataSource *DSRaspDetailEXEL;
	TStringField *QRaspDetailEXELComplectNameRaspDetail;
	TcxGridDBBandedColumn *cxGridDBBandedTableView2BiText;
	TcxGridDBBandedColumn *cxGridDBBandedTableView2Year;
	TcxGridDBBandedColumn *cxGridDBBandedTableView2ComplectNameRaspDetail;
	TcxGridDBBandedColumn *cxGridDBBandedTableView2FiText;
	TcxGridDBBandedColumn *cxGridDBBandedTableView2DiText;
	TcxGridDBBandedColumn *cxGridDBBandedTableView2NameRaspDetail;
	TcxGridDBBandedColumn *cxGridDBBandedTableView2CostWithNDS;
	TcxGridDBBandedColumn *cxGridDBBandedTableView2CostWithoutNDS;
	TcxGridDBBandedColumn *cxGridDBBandedTableView2CostNDS;
	TcxGridDBBandedColumn *cxGridDBBandedTableView2ProcNDS;
	TcxGridDBBandedColumn *cxGridDBBandedTableView2NumbNE;
	TcxGridDBBandedColumn *cxGridDBBandedTableView2fAdv;
	TcxGridDBBandedColumn *cxGridDBBandedTableView2auFamIO;
	TcxGridDBBandedColumn *cxGridDBBandedTableView2CostMINWithNDS;
	TTimer *TmRaspDetailEXEL;
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
	TDateTimeField *QMailListDateSheet;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1DateMod;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1auFamIO_1;
	TStringField *QListRaspauFamIO_1;
	TStringField *QListRaspiText;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Column1;
	TDateTimeField *QListRaspDateSheet;
	TStringField *QListRaspNameSheet;
	TDateTimeField *QListRaspDateConfirm;
	TStringField *QListRaspNameConfirm;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1DateSheet;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1NameSheet;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1DateConfirm;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1NameConfirm;
	TcxStyle *cxStyle2;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Column2;
	TStringField *QListRaspNameVidRasp;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1NameVidRasp;
	TDateTimeField *QListRaspDateLastSheet;
	TStringField *QListRaspNameLastSheet;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1DateLastSheet;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1NameLastSheet;
	TDateTimeField *QListRaspDateRassilka;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1DateRassilka;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Column3;
	TStringField *QListRaspIdEmplUsers_1;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Column4;
	TRzCheckBox *chbMySheetNow;
	TStringField *QListRaspLastComment;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Column5;
	TRzToolButton *btRespRefresh;
	TRzToolButton *RzToolButton7;
	TRzSpacer *RzSpacer3;
	TIntegerField *QListRaspfAddFiles;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Column6;
	TIntegerField *QRaspDetailfNoNDS;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn4;
	TRzGroupBox *gbcbProduce;
	TRzToolButton *btOldtUpdRaspDetail;
	TRzSpacer *RzSpacer19;
	TRzCheckList *RzCheckList1;
	TStringField *QRaspDetailCodeB;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn5;
	TRzPanel *RzPanel5;
	TRzToolButton *btDown;
	TRzSpacer *RzSpacer20;
	TRzToolButton *btUp;
	TIntegerField *QRaspDetailVOrder;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn6;
	TIntegerField *QListRaspidSeller;
	TRzPanel *RzPanel300;
	TImage *Image1;
	TRzLabel *RzLabel4;
	TTimer *TmSplitter;
	TRzEdit *edProduceNE;
	TRzBitBtn *RzBitBtn3;
	TRzBitBtn *edAddProduce;
	TRzToolButton *btCopyRaspDetailAll;
	TRzSpacer *RzSpacer27;
	TStringField *QRaspDetailAxCode;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn7;
	TcxStyle *cxStyle3;
	TRzToolButton *RzToolButton8;
	TRzToolButton *RzToolButton9;
	TRzSpacer *RzSpacer18;
	TRzSpacer *RzSpacer28;
	TRzSpacer *RzSpacer30;
	TRzToolButton *RzToolButton11;
	TRzSpacer *RzSpacer35;
	TADOQuery *QMassChanche;
	TRzToolButton *RzToolButton12;
	TRzSpacer *RzSpacer36;
	TIntegerField *QRaspDetailCompositionOfPI;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn8;
	TcxEditRepository *cxEditRepository1;
	TcxEditRepositoryCheckComboBox *PLFrom;
	TcxEditRepositoryCheckComboBox *CheckComboBoxPI;
	TRzToolButton *rztbAccess;
	TRzSpacer *RzSpacer39;
	TRzEdit *SearchCodeBEd;
	TADOQuery *CodeBQuer;
	TIntegerField *CodeBQueridRasp;
	TRzToolButton *RzToolButton13;
	TRzSpacer *RzSpacer40;
	TADOCommand *LinkBCmd;
	TADOQuery *LnkBQuer;
	TIntegerField *LnkBQuerIdAdvProdClass;
	TIntegerField *LnkBQuerIdAdvPriceList;
	TIntegerField *LnkBQuerIdProduct;
	TIntegerField *LnkBQuerIdBlock;
	TIntegerField *LnkBQuerIdCostBlock;
	TBooleanField *LnkBQuerChoice;
	TADOCommand *UnlinkBCmd;
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall btInsRaspClick(TObject *Sender);
	void __fastcall btUpdRaspClick(TObject *Sender);
	void __fastcall btRespRefreshClick(TObject *Sender);
	void __fastcall TmListRaspTimer(TObject *Sender);
	void __fastcall cxGridDBBandedTableView1CellDblClick(
          TcxCustomGridTableView *Sender,
          TcxGridTableDataCellViewInfo *ACellViewInfo, TMouseButton AButton,
          TShiftState AShift, bool &AHandled);
	void __fastcall btDelRaspClick(TObject *Sender);

	void __fastcall btDelRaspDetailClick(TObject *Sender);
	void __fastcall btInsRaspDetailIndexClick(TObject *Sender);
	void __fastcall btUpdRaspDetailClick(TObject *Sender);
	void __fastcall btInsRaspDetailComplectClick(TObject *Sender);
	void __fastcall DSListRaspDataChange(TObject *Sender, TField *Field);
	void __fastcall TmRaspDetailTimer(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall tlRaspDetailDblClick(TObject *Sender);
	void __fastcall RzToolButton5Click(TObject *Sender);

	void __fastcall btPrintRaspClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall btCopyRaspClick(TObject *Sender);
	void __fastcall btCopyRaspDetailClick(TObject *Sender);
	void __fastcall RzToolButton3Click(TObject *Sender);

	void __fastcall RzToolButton2Click(TObject *Sender);
	void __fastcall cbGroupManagerBossChange(TObject *Sender);
	void __fastcall bt(TObject *Sender);
	void __fastcall RzToolButton6Click(TObject *Sender);
	void __fastcall btSheetClick(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall RzToolButton4Click(TObject *Sender);
	void __fastcall FormCloseQuery(TObject *Sender, bool &CanClose);
	void __fastcall btRefrshRaspDetailEXELClick(TObject *Sender);
	void __fastcall RzToolButton10Click(TObject *Sender);
	void __fastcall IntegerField17GetText(TField *Sender, UnicodeString &Text,
          bool DisplayText);
	void __fastcall TmRaspDetailEXELTimer(TObject *Sender);
	void __fastcall pcRaspDetailPageChange(TObject *Sender);
	void __fastcall spPICanResize(TObject *Sender, int &NewWidth, int &NewHeight,
          bool &Resize);

	void __fastcall cxGridDBBandedTableView1CustomDrawCell(
          TcxCustomGridTableView *Sender, TcxCanvas *ACanvas,
          TcxGridTableDataCellViewInfo *AViewInfo, bool &ADone);
	void __fastcall RzToolButton7Click(TObject *Sender);
	void __fastcall btOldtUpdRaspDetailClick(TObject *Sender);
	void __fastcall tlRaspDetailCustomDrawDataCell(TcxCustomTreeList *Sender, TcxCanvas *ACanvas,
          TcxTreeListEditCellViewInfo *AViewInfo, bool &ADone);
	void __fastcall QListRaspDateRaspGetText(TField *Sender, UnicodeString &Text, bool DisplayText);
	void __fastcall QRaspDetailfAdvGetText(TField *Sender, UnicodeString &Text, bool DisplayText);
	void __fastcall tlRaspDetailGetNodeImageIndex(TcxCustomTreeList *Sender, TcxTreeListNode *ANode,
          TcxTreeListImageIndexType AIndexType,Uitypes::TImageIndex &AIndex);
	void __fastcall btUpClick(TObject *Sender);
	void __fastcall btDownClick(TObject *Sender);
	void __fastcall DSRaspDetailDataChange(TObject *Sender, TField *Field);
	void __fastcall TmSplitterTimer(TObject *Sender);
	void __fastcall spPIChange(TObject *Sender);
	void __fastcall edAddProduceClick(TObject *Sender);
	void __fastcall btCopyRaspDetailAllClick(TObject *Sender);
	void __fastcall RzToolButton8Click(TObject *Sender);
	void __fastcall RzToolButton9Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall RzToolButton12Click(TObject *Sender);
	void __fastcall rztbAccessClick(TObject *Sender);
	void __fastcall SearchCodeBEdKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall RzToolButton13Click(TObject *Sender);

private:	// User declarations
	TLocateOptions Opts;
	Variant locvalues[1];
	AnsiString vsSQLQw, vsSQLQListRasp;
	bool fRefresh;    //Флаг нажатия кнопки "Обновить распоряжения"
	bool fPermission; //Флаг права просмотра\редактирования распоряжений\ПИ. true-есть право.
	bool fspPI;       //Флаг полного сворачивания окна Подписных Индексов по виду распоряжения true-свернут false-не свернут
	int  vispPI;      //Значение в % сплиттера на Подписные индексы
	void __fastcall LoadPicList(TStrings *Seller);
	void __fastcall UpdateRasp(int IdRaspEdit = 0);
	void CreateLinkBlock(void); //added by R.Perkatov (2014-03-16)
	void DeleteLinkBlock(void); //added by R.Perkatov (2014-03-28)

public:		// User declarations
	__fastcall TFrBisniessMenedger(TComponent* Owner);
	int fFlagEditInsert;     //1-редактирование 0-Создание новой записи
	int fFlagEditInsertType; //0-Корневой, 1-Продукт, 2-Подписной индекс, 3-Номенклатурная единица
	int viIdn, viIdnDetail;  //локация записи
    //Временные Idn
	int viTmpIdnRas, viTmpIdnComplect, viTmpIdnPI, viTmpIdn, viTmpOldIdnComments, viTmpNewIdnComments, viTmpOldIdnCheckLists, viTmpNewIdnCheckLists;
	int viIdnDetailPI;       //Idn ПИ(Подписного индекса) при его открытии через форму редактирования комплекта,
							 //при условии его вхождения в комплект и редактировании из формы FrBisniessMenedger
	int fIdnDetailPI;        //Флаг открытия ПИ через форму Комплекта 1-нет, 0-да;
	int  viTmpIdnTm;         //локация записи для таймера

};
//---------------------------------------------------------------------------
extern PACKAGE TFrBisniessMenedger *FrBisniessMenedger;
//---------------------------------------------------------------------------
extern char flFrBisniessMenedger;
#endif
