//---------------------------------------------------------------------------

#ifndef FindProduceH
#define FindProduceH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzEdit.hpp"
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
#include <Mask.hpp>
#include "cxDBTL.hpp"
#include "cxInplaceContainer.hpp"
#include "cxMaskEdit.hpp"
#include "cxTL.hpp"
#include "cxTLData.hpp"
#include <ImgList.hpp>
#include "cxLookAndFeelPainters.hpp"
#include "cxLookAndFeels.hpp"
#include "cxTLdxBarBuiltInMenu.hpp"
#include "dxSkinsCore.hpp"
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
#include "RzCmboBx.hpp"
#include "RzLabel.hpp"
//---------------------------------------------------------------------------
class TFrFindProduce : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzGroupBox *RzGroupBox1;
	TRzEdit *edProduce;
	TRzPanel *RzPanel2;
	TTimer *TmProduce;
	TDataSource *DSProduce;
	TADOQuery *QProduce;
	TImageList *ImageList1;
	TcxDBTreeList *tlRaspDetail;
	TIntegerField *QProduceidn;
	TIntegerField *QProduceidnP;
	TStringField *QProduceiText;
	TIntegerField *QProduceiType;
	TcxDBTreeListColumn *tlRaspDetailiText;
	TRzPanel *RzPanel3;
	TRzToolButton *RzToolButton1;
	TRzToolButton *RzToolButton2;
	TRzSpacer *RzSpacer3;
	TRzSpacer *RzSpacer4;
	TRzSpacer *RzSpacer5;
	TcxStyleRepository *cxStyleRepository1;
	TcxStyle *cxStyle1;
	TRzGroupBox *RzGroupBoxMenedger1;
	TRzToolButton *btGiveProduce;
	TRzSpacer *RzSpacer8;
	TRzSpacer *RzSpacer1;
	TRzSpacer *RzSpacer2;
	TTimer *TmProduceChange;
	TRzToolButton *btClose;
	TRzSpacer *RzSpacer6;
	TADOCommand *ProdComm;
	TADOQuery *CheckProdDoubleQuer;
	TIntegerField *CheckProdDoubleQuerIdProduct;
	TRzLabel *RzLabel17;
	TRzComboBox *cbCategory;
	TADOQuery *CtgrQuer;
	TWideStringField *CtgrQueriText;
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall edProduceChange(TObject *Sender);
	void __fastcall TmProduceTimer(TObject *Sender);
	void __fastcall RzToolButton1Click(TObject *Sender);
	void __fastcall RzToolButton2Click(TObject *Sender);
	void __fastcall btGiveProduceClick(TObject *Sender);
	void __fastcall tlRaspDetailChange(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall DSProduceDataChange(TObject *Sender, TField *Field);
	void __fastcall TmProduceChangeTimer(TObject *Sender);
	void __fastcall tlRaspDetailKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall FormDestroy(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
	void NewProductInsert(void);
	void CategoryList(void);
public:		// User declarations
	__fastcall TFrFindProduce(TComponent* Owner);
	int flFrFindProduce;
	bool fOkButton;
	bool fEditRaspDetail;// true-Âûחûגאועסÿ ס פמנלû FrEditRaspDetail
};
//---------------------------------------------------------------------------
extern PACKAGE TFrFindProduce *FrFindProduce;
//---------------------------------------------------------------------------
#endif
