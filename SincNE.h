//---------------------------------------------------------------------------

#ifndef SincNEH
#define SincNEH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzPanel.hpp"
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

#include <ADODB.hpp>
#include <DB.hpp>
#include <ExtCtrls.hpp>
#include <ImgList.hpp>
#include "cxImageComboBox.hpp"
#include "RzEdit.hpp"
#include <Mask.hpp>
#include "cxButtonEdit.hpp"
#include "RzSplit.hpp"
#include "RzLabel.hpp"
#include "RzCmboBx.hpp"
#include <Menus.hpp>
#include <Graphics.hpp>
#include <ExtCtrls.hpp>
#include "RzPrgres.hpp"
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

//---------------------------------------------------------------------------
class TFrSincNE : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzToolButton *btInsRaspDetail;
	TRzSpacer *RzSpacer5;
	TRzToolButton *btClose;
	TRzSpacer *RzSpacer6;
	TImageList *ImageList1;
	TTimer *TmNE_DO;
	TADOQuery *QNE_DO;
	TDataSource *DSNE_DO;
	TADOQuery *QNE_Axapta;
	TDataSource *DSNE_Axapta;
	TStringField *QNE_DOStringField2;
	TADOQuery *Qw;
	TAutoIncField *QNE_DOIdn;
	TIntegerField *QNE_DOfState;
	TAutoIncField *QNE_AxaptaIdn;
	TWideStringField *QNE_AxaptaItemName;
	TWideStringField *QNE_AxaptaItemId;
	TStringField *QNE_DOStringField3;
	TStringField *QNE_DOStringField4;
	TStringField *QNE_DOStringField5;
	TIntegerField *QNE_DOIntegerField;
	TIntegerField *QNE_DOIntegerField2;
	TStringField *QNE_DONameRaspDetail;
	TRzSplitter *RzSplitter1;
	TcxGrid *cxGridEmplUserDol;
	TcxGridDBColumn *cxGridDBColumn9;
	TcxGridDBColumn *cxGridDBColumn10;
	TcxGridDBColumn *cxGridDBColumn11;
	TcxGridDBColumn *cxGridDBColumn12;
	TcxGridDBColumn *cxGridDBColumn13;
	TcxGridDBColumn *cxGridDBColumn14;
	TcxGridDBColumn *cxGridDBColumn15;
	TcxGridDBColumn *cxGridDBColumn16;
	TcxGridDBBandedTableView *cxGridTableViewEmplUser;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserColumn2;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserDBBandedColumn1;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserAxapta;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserAxapta1;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserDBBandedColumn2;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserColumn1;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserDBBandedColumn;
	TcxGridLevel *cxGridLevel2;
	TcxGrid *cxGrid1;
	TcxGridDBColumn *cxGridDBColumn1;
	TcxGridDBColumn *cxGridDBColumn2;
	TcxGridDBColumn *cxGridDBColumn3;
	TcxGridDBColumn *cxGridDBColumn4;
	TcxGridDBColumn *cxGridDBColumn5;
	TcxGridDBColumn *cxGridDBColumn6;
	TcxGridDBColumn *cxGridDBColumn7;
	TcxGridDBColumn *cxGridDBColumn8;
	TcxGridDBBandedTableView *cxGridDBBandedTableView1;
	TcxGridDBBandedColumn *cxGridDBBandedColumn6;
	TcxGridLevel *cxGridLevel1;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Column1;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Column2;
	TRzPanel *RzPanel2;
	TRzPanel *RzPanel7;
	TRzToolButton *RzToolButton1;
	TRzSpacer *RzSpacer1;
	TRzToolButton *RzToolButton2;
	TRzSpacer *RzSpacer2;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserColumn3;
	TRzToolButton *RzToolButton3;
	TRzSpacer *RzSpacer3;
	TStringField *QNE_DONameRaspDetail_1;
	TRzToolButton *RzToolButton5;
	TRzSpacer *RzSpacer4;
	TRzToolButton *RzToolButton4;
	TRzSpacer *RzSpacer7;
	TStringField *QNE_DOItemIdAxapta;
	TStringField *QNE_DONameAxapta;
	TRzPanel *RzPanel6;
	TRzPanel *RzPanel5;
	TcxStyleRepository *cxStyleRepository1;
	TcxStyle *cxStyle1;
	TRzGroupBox *RzGroupBox5;
	TRzEdit *edFind;
	TRzGridPanel *RzGridPanel1;
	TRzEdit *edFindAxapta;
	TRzLabel *RzLabel1;
	TRzGridPanel *RzGridPanel2;
	TRzLabel *RzLabel4;
	TRzLabel *RzLabel5;
	TRzEdit *edTemNapr;
	TRzEdit *edTypeProduce;
	TRzGridPanel *RzGridPanel3;
	TRzLabel *RzLabel6;
	TRzLabel *RzLabel7;
	TRzLabel *RzLabel8;
	TRzEdit *edProduce;
	TRzEdit *edYear;
	TRzEdit *edNumb;
	TRzBitBtn *RzBitBtn3;
	TRzEdit *edYearAxapta;
	TRzEdit *edNumbAxapta;
	TRzLabel *RzLabel9;
	TRzLabel *RzLabel3;
	TRzBitBtn *RzBitBtn2;
	TRzBitBtn *RzBitBtn1;
	TStringField *QNE_AxaptaiTextId24ItemType;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Column3;
	TRzGridPanel *RzGridPanel4;
	TRzComboBox *cbId24ItemType;
	TRzLabel *RzLabel2;
	TRzBitBtn *RzBitBtn7;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserColumn4;
	TRzToolButton *RzToolButton6;
	TRzToolButton *RzToolButton7;
	TRzSpacer *RzSpacer8;
	TRzSpacer *RzSpacer9;
	TPopupMenu *PopupMenu1;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *N3;
	TRzToolButton *RzToolButton8;
	TRzSpacer *RzSpacer10;
	TRzPanel *RzPanel300;
	TImage *Image1;
	TRzLabel *RzLabel10;
	TTimer *Timer1;
	TRzProgressBar *RzProgressBar1;
	TIntegerField *QNE_Axaptasrc;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Column4;
	TGroupBox *GroupBox1;
	TRadioButton *rbAll;
	TRadioButton *rb1000;
	TRadioButton *rb2000;
	TRadioButton *rb3000;
	TADOConnection *DM_JobConnect;
	TADOQuery *QDM_JobConnect;
	TRzProgressBar *RzProgressBar2;
	TADOQuery *Qw2;
	TStringField *QNE_DONumbRaspName;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserColumn5;
	TcxStyle *cxStyle2;
	TcxStyle *cxStyle3;
	TRzToolButton *RzToolButton9;
	TRzSpacer *RzSpacer11;
	TRzLabel *Clock;
	TWideStringField *QNE_AxaptaISSN;
	TSmallintField *QNE_AxaptaiYear;
	TBCDField *QNE_AxaptaNDS;
	TIntegerField *QNE_AxaptaIdProduct;
	TStringField *QNE_AxaptaiText;
	TIntegerField *QNE_AxaptaCountRasp;
	TIntegerField *QNE_AxaptaMaxIdRasp;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Column5;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Column6;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Column7;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Column8;
	TTimer *TmNE_Axapta;
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall TmNE_DOTimer(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall QNE_DOBeforePost(TDataSet *DataSet);
	void __fastcall TmNE_AxaptaTimer(TObject *Sender);
	void __fastcall DSNE_DODataChange(TObject *Sender, TField *Field);
	void __fastcall RzToolButton2Click(TObject *Sender);
	void __fastcall cxGridTableViewEmplUserColumn1PropertiesButtonClick(
          TObject *Sender, int AButtonIndex);
	void __fastcall RzToolButton1Click(TObject *Sender);
	void __fastcall cxGridTableViewEmplUserColumn3PropertiesButtonClick(
          TObject *Sender, int AButtonIndex);
	void __fastcall edFindChange(TObject *Sender);
	void __fastcall RzToolButton5Click(TObject *Sender);
	void __fastcall RzToolButton4Click(TObject *Sender);
	void __fastcall cxGridTableViewEmplUserKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
	void __fastcall cxGridTableViewEmplUserEditKeyDown(
          TcxCustomGridTableView *Sender, TcxCustomGridTableItem *AItem,
          TcxCustomEdit *AEdit, WORD &Key, TShiftState Shift);
	void __fastcall btInsRaspDetailClick(TObject *Sender);
	void __fastcall edFindAxaptaChange(TObject *Sender);
	void __fastcall cxGridDBBandedColumn6PropertiesButtonClick(TObject *Sender,
          int AButtonIndex);
	void __fastcall edYearAxaptaChange(TObject *Sender);
	void __fastcall edNumbAxaptaChange(TObject *Sender);
	void __fastcall RzBitBtn3Click(TObject *Sender);
	void __fastcall RzBitBtn2Click(TObject *Sender);
	void __fastcall RzBitBtn1Click(TObject *Sender);
	void __fastcall RzBitBtn7Click(TObject *Sender);
	void __fastcall cbId24ItemTypeChange(TObject *Sender);
	void __fastcall cxGridTableViewEmplUserSelectionChanged(
          TcxCustomGridTableView *Sender);
	void __fastcall RzToolButton6Click(TObject *Sender);
	void __fastcall RzToolButton7Click(TObject *Sender);
	void __fastcall RzToolButton8Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall RzToolButton9Click(TObject *Sender);

private:	// User declarations
 TLocateOptions Opts;
 Variant locvalues[1];
AnsiString  vsSQLQw;
AnsiString StrID;
int StrCol,StrCol2;
TClockThread *ClockThread;//ќрганизаци€ второго потока на врем€ ожидани€

public:		// User declarations
 int viIdn;
	__fastcall TFrSincNE(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrSincNE *FrSincNE;
extern char flFrSincNE;
//---------------------------------------------------------------------------
#endif
