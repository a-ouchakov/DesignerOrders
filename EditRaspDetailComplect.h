//---------------------------------------------------------------------------

#ifndef EditRaspDetailComplectH
#define EditRaspDetailComplectH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzEdit.hpp"
#include "RzPanel.hpp"
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
#include <ADODB.hpp>
#include <DB.hpp>
#include <ExtCtrls.hpp>
#include <Mask.hpp>
#include <Buttons.hpp>
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
#include "cxCalc.hpp"
#include "cxTextEdit.hpp"
//---------------------------------------------------------------------------
class TFrEditRaspDetailComplect : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzToolButton *btInsRaspDetail;
	TRzSpacer *RzSpacer4;
	TRzSpacer *RzSpacer5;
	TRzToolButton *btClose;
	TRzSpacer *RzSpacer6;
	TTimer *TmRefresh;
	TDataSource *DSEditRaspDetailComplectNE;
	TADOQuery *QEditRaspDetailComplectNE;
	TRzSplitter *RzSplitter1;
	TRzSplitter *RzSplitter2;
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
	TRzPanel *RzPanel7;
	TRzSpacer *RzSpacer10;
	TRzToolButton *btInsEditRaspDetailComplecIndex;
	TRzSpacer *RzSpacer35;
	TRzSpacer *RzSpacer9;
	TRzToolButton *btDelEditRaspDetailComplecIndex;
	TRzGroupBox *RzGroupBox2;
	TRzMemo *meNameComplect;
	TDataSource *DSEditRaspDetailComplecIndex;
	TADOQuery *QEditRaspDetailComplecIndex;
	TADOQuery *QTmpTable;
	TADOQuery *Qw;
	TADOQuery *QINS_EditRaspDetailComplect;
	TIntegerField *QINS_EditRaspDetailComplectIdn;
	TAutoIncField *QEditRaspDetailComplectNEIdn;
	TStringField *QEditRaspDetailComplectNENameRaspDetail;
	TIntegerField *QEditRaspDetailComplectNEfType;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserIdn;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserNameRaspDetail;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserfType;
	TAutoIncField *QEditRaspDetailComplecIndexIdn;
	TStringField *QEditRaspDetailComplecIndexNameRaspDetail;
	TIntegerField *QEditRaspDetailComplecIndexfAdv;
	TBCDField *QEditRaspDetailComplecIndexCostWithoutNDS;
	TBCDField *QEditRaspDetailComplecIndexProcNDS;
	TBCDField *QEditRaspDetailComplecIndexCostWithNDS;
	TIntegerField *QEditRaspDetailComplecIndexfType;
	TBCDField *QEditRaspDetailComplecIndexProcDiscount;
	TTimer *TmIndex;
	TRzGroupBox *RzGroupBox9;
	TRzNumericEdit *edCostNDS;
	TBCDField *QEditRaspDetailComplecIndexCostNDS;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1NameRaspDetail;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1fAdv;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1CostWithoutNDS;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1ProcNDS;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1CostWithNDS;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1CostNDS;
	TRzGroupBox *RzGroupBox1;
	TRzNumericEdit *edCostWithoutNDS;
	TRzGroupBox *RzGroupBox3;
	TRzNumericEdit *edCostWithNDS;
	TcxStyleRepository *cxStyleRepository1;
	TcxStyle *cxStyle1;
	TRzToolButton *btInsRaspDetailIndex;
	TRzSpacer *RzSpacer1;
	TRzButton *btCreateNameComplect;
	TRzGroupBox *RzGroupBox4;
	TRzNumericEdit *edCostMINWithoutNDS;
	TRzGroupBox *RzGroupBox5;
	TRzNumericEdit *edCostMINWithNDS;
	TIntegerField *QEditRaspDetailComplecIndexfAdvMIN;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1fAdvMIN;
	TIntegerField *QEditRaspDetailComplecIndexColPI;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1ColPI;
	TADOQuery *QtmpQuer;
	TAutoIncField *QtmpQuerIdn;
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall btInsRaspDetailClick(TObject *Sender);
	void __fastcall btInsEditRaspDetailComplecIndexClick(TObject *Sender);
	void __fastcall FormCloseQuery(TObject *Sender, bool &CanClose);
	void __fastcall DSEditRaspDetailComplecIndexDataChange(TObject *Sender,
          TField *Field);
	void __fastcall TmRefreshTimer(TObject *Sender);
	void __fastcall QEditRaspDetailComplecIndexfAdvGetText(TField *Sender,
          UnicodeString &Text, bool DisplayText);
	void __fastcall btDelEditRaspDetailComplecIndexClick(TObject *Sender);
	void __fastcall TmIndexTimer(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall cxGridDBBandedTableView1CostWithNDSPropertiesChange(
          TObject *Sender);
	void __fastcall cxGridDBBandedTableView1DblClick(TObject *Sender);
	void __fastcall btInsRaspDetailIndexClick(TObject *Sender);
	void __fastcall btCreateNameComplectClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
int viTmpIdnComplect, viTmpIdnIndex ;////Idn Вставляемой/редактируемой записи Комплект/ПИ --Переделать и избавиться
TLocateOptions Opts;
Variant locvalues[1];
		
public:		// User declarations
	__fastcall TFrEditRaspDetailComplect(TComponent* Owner);
		int fFlagEditInsert; //Флаг 0-INS запись. 1-EDIT
		int viIdnDetail;     //Idn Вставляемой/редактируемой записи
		int viRaspIdn;       //Idn Распоряжения
		int viIdnDetailPI;  // Idn ПИ(Подписного индекса) при его открытии через форму редактирования комплекта, при условии его вхождения в комплект и редактировании из формы FrBisniessMenedger
		  UnicodeString TempTableName;
		  AnsiString vsSQLQw, vsSQLEditRaspDetailComplecIndex,vsSQLEditRaspDetailComplectNE;
		bool fPermission;// 2013-06-27 Чернышов
};
//---------------------------------------------------------------------------
extern PACKAGE TFrEditRaspDetailComplect *FrEditRaspDetailComplect;
//---------------------------------------------------------------------------
#endif
