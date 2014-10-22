//---------------------------------------------------------------------------

#ifndef TraceMailH
#define TraceMailH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzEdit.hpp"
#include "RzLabel.hpp"
#include "RzLstBox.hpp"
#include "RzPanel.hpp"
#include "RzSplit.hpp"
#include "RzTabs.hpp"
#include "cxContainer.hpp"
#include "cxControls.hpp"
#include "cxEdit.hpp"
#include "cxMemo.hpp"
#include "cxTextEdit.hpp"

#include <ExtCtrls.hpp>
#include <ImgList.hpp>
#include <Mask.hpp>
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
#include <DB.hpp>
#include <ADODB.hpp>
#include "cxImage.hpp"
#include "cxCheckBox.hpp"
#include "cxCheckComboBox.hpp"
#include "cxButtonEdit.hpp"
#include "cxImageComboBox.hpp"
#include "frxClass.hpp"
#include "frxDBSet.hpp"
#include "frxExportPDF.hpp"
#include "frxPreview.hpp"
#include "RzRadChk.hpp"
#include "RzRadGrp.hpp"
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
class TFrTraceMail : public TForm
{
__published:	// IDE-managed Components
	TRzPageControl *RzPageControl1;
	TRzTabSheet *TabSheet1;
	TRzSplitter *RzSplitter1;
	TRzSplitter *RzSplitter2;
	TRzLabel *RzLabel2;
	TImageList *ImageList1;
	TRzPanel *RzPanel1;
	TRzToolButton *btNo;
	TRzSpacer *RzSpacer5;
	TRzToolButton *btClose;
	TRzPanel *RzPanel2;
	TRzLabel *RzLabel3;
	TcxMemo *meNote;
	TRzToolButton *btYes;
	TRzSpacer *RzSpacer1;
	TRzSplitter *RzSplitter3;
	TRzPanel *RzPanel5;
	TRzLabel *RzLabel1;
	TcxMemo *reContentRTF;
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
	TcxGridLevel *cxGridLevel1;
	TcxGrid *cxGridTraceMailList;
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
	TDataSource *DSTraceMailList;
	TADOQuery *QTraceMailList;
	TStringField *QTraceMailListRaspName;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1RaspName;
	TTimer *TmTraceMailList;
	TDataSource *DSMailList;
	TADOQuery *QMailList;
	TAutoIncField *QTraceMailListIdn;
	TAutoIncField *QMailListIdn;
	TStringField *QMailListTmpFamIO;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserTmpFamIO;
	TIntegerField *QMailListfTurn;
	TIntegerField *QMailListfResault;
	TStringField *QMailListNote;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserfTurn;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserfResault;
	TAutoIncField *QMailListauId;
	TADOQuery *Qw;
	TTimer *TmMailList;
	TcxStyleRepository *cxStyleRepository1;
	TcxStyle *cxStyle1;
	TRzToolButton *RzToolButton3;
	TRzSpacer *RzSpacer2;
	TDateTimeField *QTraceMailListDateIns;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1DateIns;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserNote;
	TIntegerField *QMailListfNote;
	TMemoField *QMailListMailText;
	TRzPanel *RzPanel4;
	TfrxDBDataset *frxDSRasp;
	TADOQuery *QTmpTable;
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
	TADOQuery *QEmplUserDol;
	TAutoIncField *AutoIncField2;
	TStringField *StringField11;
	TWideStringField *WideStringField3;
	TIntegerField *IntegerField12;
	TWideStringField *WideStringField4;
	TfrxDBDataset *frxDSEmplUserDol;
	TfrxDBDataset *frxDSEmplUserDolRass;
	TADOQuery *QEmplUserDolRass;
	TAutoIncField *AutoIncField3;
	TStringField *StringField12;
	TWideStringField *WideStringField5;
	TIntegerField *IntegerField13;
	TWideStringField *WideStringField6;
	TIntegerField *QMailListfType;
	TWideStringField *QMailListMail;
	TAutoIncField *QMailListIDUser;
	TADOQuery *QEmplUserDolSheet;
	TAutoIncField *QEmplUserDolSheetIdn;
	TStringField *QEmplUserDolSheetFamIO;
	TWideStringField *QEmplUserDolSheetMail;
	TIntegerField *QEmplUserDolSheetfTurn;
	TWideStringField *QEmplUserDolSheetDol;
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
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Column1;
	TIntegerField *QTraceMailListIdIns;
	TAutoIncField *QMailListIDUserP;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserIDUserP;
	TADOQuery *QEmplUserDol3;
	TAutoIncField *QEmplUserDol3Idn;
	TStringField *QEmplUserDol3FamIO;
	TWideStringField *QEmplUserDol3Mail;
	TIntegerField *QEmplUserDol3fTurn;
	TIntegerField *QEmplUserDol3fType;
	TMemoField *QEmplUserDol3MailText;
	TRzPanel *RzPanel3;
	TRzToolButton *RzToolButton1;
	TStringField *QTraceMailListFamIO;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1FamIO;
	TRzPanel *RzPanel6;
	TRzRadioGroup *RzRadioGroup1;
	TRzRadioButton *rbSheet;
	TRzRadioButton *rbOtkl;
	TRzRadioButton *rbUtv;
	TRzToolButton *btCostComitet;
	TRzSpacer *RzSpacer3;
	TADOQuery *QCostComitet;
	TAutoIncField *QCostComitetIdn;
	TStringField *QCostComitetFamIO;
	TWideStringField *QCostComitetMail;
	TIntegerField *QCostComitetfTurn;
	TWideStringField *QCostComitetDol;
	TADOQuery *QInfoMailList;
	TMemoField *QInfoMailListMailText;
	TRzPanel *RzPanel7;
	TRzLabel *RzLabel4;
	TIntegerField *QTraceMailListCostComitet;
	TIntegerField *QTraceMailListfNoNDS;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Column2;
	TRzSpacer *RzSpacer4;
	TRzToolButton *RzToolButton2;
	TRzToolButton *btYesAll;
	TRzSpacer *RzSpacer6;
	TRzSpacer *RzSpacer7;
	TADOCommand *Vinogradova;
	TADOQuery *ChDsQuer;
	TIntegerField *ChDsQuerrc;
	TADOQuery *ApprQuer;
	TIntegerField *ApprQuerIdRasp;
	TADOCommand *ApprComm;
	TADOCommand *PriceComm;
	TADOQuery *SttsQuer;
	TIntegerField *SttsQuerId24NameStatus;
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall RzCheckList3DblClick(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall DSTraceMailListDataChange(TObject *Sender, TField *Field);
	void __fastcall TmTraceMailListTimer(TObject *Sender);
	void __fastcall DSMailListDataChange(TObject *Sender, TField *Field);
	void __fastcall btYesClick(TObject *Sender);
	void __fastcall TmMailListTimer(TObject *Sender);
	void __fastcall btNoClick(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall RzToolButton3Click(TObject *Sender);
	void __fastcall QMailListCalcFields(TDataSet *DataSet);
	void __fastcall frxRaspAlterGetValue(const UnicodeString VarName, Variant &Value);
	void __fastcall RzToolButton1Click(TObject *Sender);
	void __fastcall rbSheetClick(TObject *Sender);
	void __fastcall btCostComitetClick(TObject *Sender);
	void __fastcall cxGridDBBandedTableView1CustomDrawCell(
          TcxCustomGridTableView *Sender, TcxCanvas *ACanvas,
          TcxGridTableDataCellViewInfo *AViewInfo, bool &ADone);
	void __fastcall RzToolButton2Click(TObject *Sender);
	void __fastcall btYesAllClick(TObject *Sender);
private:	// User declarations
	AnsiString  vsSQLQw;
	TLocateOptions Opts;
	Variant locvalues[1];
	TfrxReport *fReport;
	AnsiString vsBaseSQL;//Базовый текст Qwery
	AnsiString vsAddSQL;//Добавочный текст Qwery
public:		// User declarations
	int viRaspIdn;       //Idn Распоряжения
	__fastcall TFrTraceMail(TComponent* Owner);
	int IdRasp;//Код распоряжения

};
//---------------------------------------------------------------------------
extern PACKAGE TFrTraceMail *FrTraceMail;
extern char flFrTraceMail;
//---------------------------------------------------------------------------
#endif
