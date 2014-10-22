//---------------------------------------------------------------------------

#ifndef BlockProduceAddEdH
#define BlockProduceAddEdH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "RzButton.hpp"
#include "RzPanel.hpp"
#include <Vcl.ExtCtrls.hpp>
#include "RzEdit.hpp"
#include "RzLabel.hpp"
#include <Vcl.Mask.hpp>
#include <Vcl.ComCtrls.hpp>
#include "RzRadChk.hpp"
#include <Data.Win.ADODB.hpp>
#include <Data.DB.hpp>
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
#include "cxLookAndFeelPainters.hpp"
#include "cxLookAndFeels.hpp"
#include "cxStyles.hpp"
#include "dxSkinBlack.hpp"
#include "dxSkinBlue.hpp"
#include "dxSkinBlueprint.hpp"
#include "dxSkinCaramel.hpp"
#include "dxSkinCoffee.hpp"
#include "dxSkinDarkRoom.hpp"
#include "dxSkinDarkSide.hpp"
#include "dxSkinDevExpressDarkStyle.hpp"
#include "dxSkinDevExpressStyle.hpp"
#include "dxSkinFoggy.hpp"
#include "dxSkinGlassOceans.hpp"
#include "dxSkinHighContrast.hpp"
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
#include "dxSkinSevenClassic.hpp"
#include "dxSkinSharp.hpp"
#include "dxSkinSharpPlus.hpp"
#include "dxSkinSilver.hpp"
#include "dxSkinSpringTime.hpp"
#include "dxSkinStardust.hpp"
#include "dxSkinSummer2008.hpp"
#include "dxSkinTheAsphaltWorld.hpp"
#include "dxSkinValentine.hpp"
#include "dxSkinVS2010.hpp"
#include "dxSkinWhiteprint.hpp"
#include "dxSkinXmas2008Blue.hpp"
#include <Vcl.DBCtrls.hpp>
#include "cxCheckBox.hpp"
#include "cxCheckComboBox.hpp"
#include "cxContainer.hpp"
#include "cxDropDownEdit.hpp"
#include "cxMaskEdit.hpp"
#include "cxTextEdit.hpp"
#include "cxExtEditRepositoryItems.hpp"
//---------------------------------------------------------------------------
class TFrBlockProduceAddEd : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzToolButton *btDiscount;
	TRzSpacer *RzSpacer5;
	TRzToolButton *btClose;
	TRzSpacer *RzSpacer6;
	TADOCommand *BlockComm;
	TADOQuery *ChckQuer;
	TRzGroupBox *RzGroupBox1;
	TcxGridDBTableView *cxGrid1DBTableView1;
	TcxGridLevel *cxGrid1Level1;
	TcxGrid *cxGrid1;
	TRzGroupBox *RzGroupBox3;
	TRzMemo *NameMemo;
	TRzGroupBox *RzGroupBox4;
	TRzMemo *TermsMemo;
	TRzGroupBox *RzGroupBox5;
	TRzRichEdit *DescRich;
	TRzSpacer *RzSpacer1;
	TRzToolButton *SaveButt;
	TADOQuery *CostQuer;
	TDataSource *CostData;
	TAutoIncField *CostQueridn;
	TBCDField *CostQuerCost;
	TWideStringField *CostQuerDescription;
	TDateTimeField *CostQuerDateIns;
	TStringField *CostQuerCreator;
	TDateTimeField *CostQuerDateEdit;
	TStringField *CostQuerEditor;
	TcxGridDBColumn *cxGrid1DBTableView1Cost;
	TDBMemo *DBMemo1;
	TLabel *Label2;
	TWideStringField *CostQuerCycle;
	TcxGridDBColumn *cxGrid1DBTableView1Cycle;
	TAutoIncField *CostQuerCycleId;
	TBCDField *CostQuerCostWitnDiscount;
	TBooleanField *CostQuerBaseCost;
	TcxGridDBColumn *cxGrid1DBTableView1Discount;
	TcxGridDBColumn *cxGrid1DBTableView1CostWitnDiscount;
	TcxGridDBColumn *cxGrid1DBTableView1BaseCost;
	TIntegerField *CostQuerDiscount;
	TBooleanField *CostQuerActive;
	TcxGridDBColumn *cxGrid1DBTableView1Active;
	TIntegerField *CostQuerDept;
	TRzGroupBox *RzGroupBox6;
	TADOQuery *DiscQuer;
	TDataSource *DiscData;
	TRzSpacer *RzSpacer2;
	TRzToolButton *btMoney;
	TRzSpacer *RzSpacer3;
	TcxGrid *cxGrid2;
	TcxGridDBTableView *cxGrid2DBTableView1;
	TcxGridDBColumn *cxGrid2DBTableView1PStart;
	TcxGridDBColumn *cxGrid2DBTableView1PEnd;
	TcxGridDBColumn *cxGrid2DBTableView1MINdis;
	TcxGridDBColumn *cxGrid2DBTableView1MAXdis;
	TcxGridDBColumn *cxGrid2DBTableView1Description;
	TcxGridLevel *cxGrid2Level1;
	TRzLabel *RzLabel1;
	TcxCheckComboBox *chcbPeriod;
	TADOQuery *ListQuer;
	TIntegerField *ListQuerIdFAdv;
	TWideStringField *ListQuerDescription;
	TRzButton *CyclButt;
	TIntegerField *DiscQuerProduceBlockId;
	TIntegerField *DiscQuerProduceBlockCycleId;
	TIntegerField *DiscQuerProduceBlockDiscId;
	TDateTimeField *DiscQuerPStart;
	TDateTimeField *DiscQuerPEnd;
	TFloatField *DiscQuerMINdis;
	TFloatField *DiscQuerMAXdis;
	TWideStringField *DiscQuerDescription;
	TWideStringField *DiscQuerPeriod;
	TDateTimeField *DiscQuerDateIns;
	TDateTimeField *DiscQuerDateEdit;
	TBooleanField *DiscQuerActive;
	TcxGridDBColumn *cxGrid2DBTableView1Period;
	TWideMemoField *DiscQuerAllCycle;
	TcxGridDBColumn *cxGrid2DBTableView1AllCycle;
	TcxGridDBColumn *cxGrid2DBTableView1Active;
	TcxStyleRepository *StyleRep1;
	TcxStyle *NotActive;
	TcxStyle *Normal;
	TADOQuery *InsBQuer;
	TAutoIncField *InsBQueridn;
	TRzGroupBox *RzGroupBox7;
	TcxCheckComboBox *CompositionPIBox;
	TcxEditRepository *cxEditRepository1;
	TcxEditRepositoryCheckComboBox *CheckComboBox1;
	TADOQuery *q6Quer;
	TADOQuery *q7Quer;
	TIntegerField *q6QuerCycleId;
	TBCDField *q6QuerCost;
	TIntegerField *q6QuerDiscount;
	TBCDField *q6QuerCostWitnDiscount;
	TBooleanField *q6QuerBaseCost;
	TWideStringField *q6QuerDescription;
	TIntegerField *q6QuerDept;
	TDateTimeField *q6QuerDateIns;
	TDateTimeField *q6QuerDateEdit;
	TDateTimeField *q6QuerDateDel;
	TIntegerField *q6QuerIdDel;
	TBooleanField *q6QuerActive;
	TADOCommand *CostComm;
	TDateTimeField *q7QuerPStart;
	TDateTimeField *q7QuerPEnd;
	TFloatField *q7QuerMINdis;
	TFloatField *q7QuerMAXdis;
	TWideStringField *q7QuerDescription;
	TIntegerField *q7QuerCycleId;
	TWideMemoField *q7QuerAllCycle;
	TDateTimeField *q7QuerDateIns;
	TDateTimeField *q7QuerDateEdit;
	TDateTimeField *q7QuerDateDel;
	TIntegerField *q7QuerIdDel;
	TBooleanField *q7QuerActive;
	TADOCommand *DiscComm;
	TIntegerField *DiscQuerIdIns;
	TIntegerField *DiscQuerIdEdit;
	TRzRadioButton *MultButt;
	TRzRadioButton *BaseButt;
	TRzSpacer *RzSpacer4;
	TIntegerField *CostQuerBlockId;
	TIntegerField *q6QuerBlockId;
	TIntegerField *q7QuerBlockId;
	TRzToolButton *NewProdBut;
	TADOQuery *ProdQuer;
	TDataSource *ProdData;
	TAutoIncField *ProdQueridn;
	TStringField *ProdQueriText;
	TRzGroupBox *RzGroupBox2;
	TcxGrid *cxGrid3;
	TcxGridDBTableView *cxGrid3DBTableView1;
	TcxGridDBColumn *cxGrid3DBTableView1idn;
	TcxGridDBColumn *cxGrid3DBTableView1iText;
	TcxGridLevel *cxGrid3Level1;
	TWideMemoField *ChckQueriText;
	TADOQuery *q8Quer;
	TIntegerField *q8QuerIdBlock;
	TIntegerField *q8QuerIdProduct;
	TADOCommand *ProdComm;
	TADOCommand *DelPComm;
	TAutoIncField *ProdQuerPBLidn;
	TRzSpacer *RzSpacer7;
	TRzToolButton *DelProdBut;
	TRzSpacer *RzSpacer8;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall NameMemoExit(TObject *Sender);
	void __fastcall TermsMemoExit(TObject *Sender);
	void __fastcall DescRichExit(TObject *Sender);
	void __fastcall cxGrid1DBTableView1CellDblClick(TcxCustomGridTableView *Sender,
					TcxGridTableDataCellViewInfo *ACellViewInfo, TMouseButton AButton, TShiftState AShift, bool &AHandled);
	void __fastcall btMoneyClick(TObject *Sender);
	void __fastcall btDiscountClick(TObject *Sender);
	void __fastcall cxGrid2DBTableView1CellDblClick(TcxCustomGridTableView *Sender,
					TcxGridTableDataCellViewInfo *ACellViewInfo, TMouseButton AButton, TShiftState AShift, bool &AHandled);
	void __fastcall CyclButtClick(TObject *Sender);
	void __fastcall chcbPeriodExit(TObject *Sender);
	void __fastcall CostDataDataChange(TObject *Sender, TField *Field);
	void __fastcall cxGrid2DBTableView1StylesGetContentStyle(TcxCustomGridTableView *Sender, TcxCustomGridRecord *ARecord,
					TcxCustomGridTableItem *AItem, TcxStyle *&AStyle);
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall NewProdButClick(TObject *Sender);
	void __fastcall SaveButtClick(TObject *Sender);
	void __fastcall cxGrid3DBTableView1KeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall DelProdButClick(TObject *Sender);

private:	// User declarations
	void IDgen(void);
	void CopyBlock(void);
	void DeleteProduct(void);
	TBookmark SaveCost;
public:		// User declarations
	void QCost(void);
	void QDisc(void);
	void List1(void);
	void QProducts(void);
	__fastcall TFrBlockProduceAddEd(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrBlockProduceAddEd *FrBlockProduceAddEd;
extern char flBlockProduceAddEd;
//---------------------------------------------------------------------------
#endif
