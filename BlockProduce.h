//---------------------------------------------------------------------------

#ifndef BlockProduceH
#define BlockProduceH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "RzButton.hpp"
#include "RzPanel.hpp"
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ImgList.hpp>
#include "cxControls.hpp"
#include "cxCustomData.hpp"
#include "cxDBTL.hpp"
#include "cxGraphics.hpp"
#include "cxInplaceContainer.hpp"
#include "cxLookAndFeelPainters.hpp"
#include "cxLookAndFeels.hpp"
#include "cxStyles.hpp"
#include "cxTL.hpp"
#include "cxTLData.hpp"
#include "cxTLdxBarBuiltInMenu.hpp"
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
#include "cxClasses.hpp"
#include "cxData.hpp"
#include "cxDataStorage.hpp"
#include "cxDBData.hpp"
#include "cxEdit.hpp"
#include "cxFilter.hpp"
#include "cxGrid.hpp"
#include "cxGridCustomTableView.hpp"
#include "cxGridCustomView.hpp"
#include "cxGridDBTableView.hpp"
#include "cxGridLevel.hpp"
#include "cxGridTableView.hpp"
#include "dxSkinscxPCPainter.hpp"
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include "RzCmboBx.hpp"
#include "frxClass.hpp"
#include "frxDBSet.hpp"
#include "frxExportHTML.hpp"
#include "frxExportImage.hpp"
#include "frxExportPDF.hpp"
#include "frxExportRTF.hpp"
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TFrBlockProduce : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzSpacer *RzSpacer5;
	TRzToolButton *btClose;
	TRzSpacer *RzSpacer6;
	TImageList *ImageList1;
	TRzToolButton *NewBButt;
	TcxGridDBTableView *cxGrid1DBTableView1;
	TcxGridLevel *cxGrid1Level1;
	TcxGrid *cxGrid1;
	TADOQuery *BlockQuer;
	TDataSource *BlockData;
	TRzToolButton *DelBButt;
	TRzToolButton *EditBButt;
	TADOCommand *BDelComm;
	TRzPanel *RzPanel2;
	TRzGroupBox *RzGroupBox2;
	TRzComboBox *BlockBox;
	TRzComboBox *BlockTypeBox;
	TADOQuery *ProdQuer;
	TADOQuery *BlocQuer;
	TWideMemoField *BlocQuerBlockName;
	TRzToolButton *ExclButt;
	TADOQuery *CDelQuer;
	TIntegerField *CDelQuerProduceIdn;
	TRzToolButton *PrntButt;
	TfrxReport *BlockReport;
	TfrxDBDataset *BlockDBDS;
	TRzToolButton *ClearFilterButt;
	TfrxDBDataset *CostDBDS;
	TADOQuery *CostQuer;
	TAutoIncField *CostQueridn;
	TAutoIncField *CostQuerCycleId;
	TWideStringField *CostQuerCycle;
	TBCDField *CostQuerCost;
	TIntegerField *CostQuerDiscount;
	TBCDField *CostQuerCostWitnDiscount;
	TBooleanField *CostQuerBaseCost;
	TWideStringField *CostQuerDescription;
	TIntegerField *CostQuerDept;
	TBooleanField *CostQuerActive;
	TADOQuery *DiscQuer;
	TIntegerField *DiscQuerProduceBlockId;
	TIntegerField *DiscQuerProduceBlockDiscId;
	TDateTimeField *DiscQuerPStart;
	TDateTimeField *DiscQuerPEnd;
	TFloatField *DiscQuerMINdis;
	TFloatField *DiscQuerMAXdis;
	TWideStringField *DiscQuerDescription;
	TWideMemoField *DiscQuerAllCycle;
	TStringField *DiscQuerActive;
	TfrxDBDataset *DiscDBDS;
	TfrxPDFExport *BlockPDF;
	TfrxRTFExport *BlockRTF;
	TfrxHTMLExport *BlockHTM;
	TfrxTIFFExport *BlockTIF;
	TRzToolButton *CopyBButt;
	TRzSpacer *RzSpacer1;
	TRzSpacer *RzSpacer2;
	TRzSpacer *RzSpacer3;
	TRzSpacer *RzSpacer4;
	TRzSpacer *RzSpacer7;
	TStringField *ProdQueriText;
	TIntegerField *CostQuerBlockId;
	TAutoIncField *BlockQueridn;
	TWideMemoField *BlockQuerBlockName;
	TStringField *BlockQuerBlockType;
	TDateTimeField *BlockQuerDateIns;
	TStringField *BlockQuerInsBy;
	TDateTimeField *BlockQuerDateEdit;
	TStringField *BlockQuerEditBy;
	TIntegerField *BlockQuerLinkIdBlock;
	TDateTimeField *BlockQuerLinkDateLast;
	TIntegerField *BlockQuerListId;
	TIntegerField *BlockQuerCompositionOfPI;
	TWideMemoField *BlockQuerBlockTerm;
	TWideMemoField *BlockQuerBlockDesc;
	TcxGridDBColumn *cxGrid1DBTableView1idn;
	TcxGridDBColumn *cxGrid1DBTableView1BlockName;
	TcxGridDBColumn *cxGrid1DBTableView1BlockType;
	TcxGridDBColumn *cxGrid1DBTableView1DateIns;
	TcxGridDBColumn *cxGrid1DBTableView1InsBy;
	TcxGridDBColumn *cxGrid1DBTableView1DateEdit;
	TcxGridDBColumn *cxGrid1DBTableView1EditBy;
	TcxGridDBColumn *cxGrid1DBTableView1LinkIdBlock;
	TcxGridDBColumn *cxGrid1DBTableView1LinkDateLast;
	TIntegerField *BlockQueridMBlockName;
	TIntegerField *BlockQueridMBlockTerm;
	TIntegerField *BlockQueridMBlockDesc;
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall NewBButtClick(TObject *Sender);
	void __fastcall btInsRaspClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall cxGrid1DBTableView1CellDblClick(TcxCustomGridTableView *Sender,
          TcxGridTableDataCellViewInfo *ACellViewInfo, TMouseButton AButton,
          TShiftState AShift, bool &AHandled);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall DelBButtClick(TObject *Sender);
	void __fastcall ExclButtClick(TObject *Sender);
	void __fastcall PrntButtClick(TObject *Sender);
	void __fastcall cxGrid1DBTableView1DataControllerFilterChanged(TObject *Sender);
	void __fastcall ClearFilterButtClick(TObject *Sender);
	void __fastcall BlockDataDataChange(TObject *Sender, TField *Field);
	void __fastcall CopyBButtClick(TObject *Sender);
	void __fastcall BlockBoxChange(TObject *Sender);

private:	// User declarations
	void List2(void);
	void List3(void);
	void PrintC(void);
	void PrintD(void);
public:		// User declarations
	void QOpen(void);
		 TBookmark SavePosS;
	__fastcall TFrBlockProduce(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrBlockProduce *FrBlockProduce;
extern char flBlockProduce;
//---------------------------------------------------------------------------
#endif
