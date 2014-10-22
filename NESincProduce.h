//---------------------------------------------------------------------------

#ifndef NESincProduceH
#define NESincProduceH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzPanel.hpp"
#include "RzSplit.hpp"
#include "cxClasses.hpp"
#include "cxControls.hpp"
#include "cxCurrencyEdit.hpp"
#include "cxCustomData.hpp"
#include "cxData.hpp"
#include "cxDataStorage.hpp"
#include "cxDBData.hpp"
#include "cxDBTL.hpp"
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
#include "cxImageComboBox.hpp"
#include "cxInplaceContainer.hpp"
#include "cxMaskEdit.hpp"
#include "cxStyles.hpp"
#include "cxTL.hpp"
#include "cxTLData.hpp"

#include <ADODB.hpp>
#include <DB.hpp>
#include <ExtCtrls.hpp>
#include <ImgList.hpp>
#include "RzSpnEdt.hpp"
#include "RzEdit.hpp"
#include <Mask.hpp>
#include "cxLookAndFeelPainters.hpp"
#include "cxLookAndFeels.hpp"
#include "cxTLdxBarBuiltInMenu.hpp"
#include "dxSkinsCore.hpp"
#include "dxSkinscxPCPainter.hpp"
#include "dxSkinsDefaultPainters.hpp"
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
//---------------------------------------------------------------------------
class TFrNESincProduce : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzToolButton *btClose;
	TRzSpacer *RzSpacer6;
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
	TcxGridLevel *cxGridLevel2;
	TTimer *TmNE_Axapta;
	TADOQuery *QNE_Axapta;
	TDataSource *DSNE_Axapta;
	TTimer *TmProduce;
	TDataSource *DSProduce;
	TADOQuery *QProduce;
	TIntegerField *QProduceidn;
	TIntegerField *QProduceidnP;
	TStringField *QProduceiText;
	TIntegerField *QProduceiType;
	TIntegerField *QProduceIdIns;
	TStringField *QProduceauFamIO;
	TWideStringField *QProduceISSN;
	TStringField *QProduceCodeB;
	TIntegerField *QProducefActual;
	TIntegerField *QNE_AxaptaIdn;
	TIntegerField *QNE_Axaptacnt;
	TWideStringField *QNE_AxaptaItemName;
	TWideStringField *QNE_AxaptaItemId;
	TStringField *QNE_AxaptaiText;
	TStringField *QNE_AxaptaiText_1;
	TStringField *QNE_AxaptaiText_2;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserIdn;
	TcxGridDBBandedColumn *cxGridTableViewEmplUsercnt;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserItemName;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserItemId;
	TcxGridDBBandedColumn *cxGridTableViewEmplUseriText;
	TcxGridDBBandedColumn *cxGridTableViewEmplUseriText_1;
	TcxGridDBBandedColumn *cxGridTableViewEmplUseriText_2;
	TcxDBTreeList *tlRaspDetail;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn3;
	TcxDBTreeListColumn *tlRaspDetailiText;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn2;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn1;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn4;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn5;
	TRzPanel *RzPanel4;
	TRzToolButton *RzToolButton1;
	TRzToolButton *RzToolButton2;
	TRzSpacer *RzSpacer3;
	TRzSpacer *RzSpacer4;
	TRzSpacer *RzSpacer1;
	TRzBitBtn *RzBitBtn3;
	TRzPanel *RzPanel2;
	TRzBitBtn *RzBitBtn1;
	TRzBitBtn *RzBitBtn2;
	TImageList *ImageList2;
	TImageList *ImageList1;
	TADOQuery *QSinc;
	TSmallintField *QNE_AxaptaYear;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserColumn1;
	TRzGroupBox *RzGroupBox1;
	TRzGroupBox *RzGroupBox7;
	TRzButton *btCreateNamePI;
	TRzEdit *edName;
	TRzSpacer *RzSpacer2;
	TRzSpacer *RzSpacer5;
	TRzGroupBox *RzGroupBox2;
	TRzGroupBox *RzGroupBox3;
	TRzButton *RzButton1;
	TRzEdit *edCod;
	TRzSizePanel *RzSizePanel1;
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
	TcxGridLevel *cxGridLevel1;
	TTimer *TmNE;
	TDataSource *DSNE;
	TADOQuery *QNE;
	TIntegerField *QNEIdn;
	TIntegerField *QNEIdAdvanceConditions;
	TStringField *QNEAdvCondCode;
	TStringField *QNEIdAdvCondName;
	TStringField *QNEAdvCondNameAlt;
	TStringField *QNEAdvCondNote;
	TSmallintField *QNEiYear;
	TBCDField *QNEPrice;
	TBCDField *QNENDS;
	TBCDField *QNESummaNDS;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Idn;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1IdAdvanceConditions;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1AdvCondCode;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1IdAdvCondName;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1AdvCondNameAlt;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1AdvCondNote;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1iYear;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Price;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1NDS;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1SummaNDS;
	void __fastcall TmNE_AxaptaTimer(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall DSNE_AxaptaDataChange(TObject *Sender, TField *Field);
	void __fastcall TmProduceTimer(TObject *Sender);
	void __fastcall RzBitBtn1Click(TObject *Sender);
	void __fastcall RzBitBtn2Click(TObject *Sender);
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall RzToolButton1Click(TObject *Sender);
	void __fastcall RzToolButton2Click(TObject *Sender);
	void __fastcall RzBitBtn3Click(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall DSProduceDataChange(TObject *Sender, TField *Field);
	void __fastcall TmNETimer(TObject *Sender);
	void __fastcall tlRaspDetailGetNodeImageIndex(TcxCustomTreeList *Sender, TcxTreeListNode *ANode,
          TcxTreeListImageIndexType AIndexType, Uitypes::TImageIndex &AIndex);

private:	// User declarations
 TLocateOptions Opts;
 Variant locvalues[1];
 AnsiString vsSQLQw;
public:		// User declarations
 int viIdnProduce,viIdnNE_Axapta;
	__fastcall TFrNESincProduce(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrNESincProduce *FrNESincProduce;
//---------------------------------------------------------------------------
#endif
