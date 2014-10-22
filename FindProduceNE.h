//---------------------------------------------------------------------------

#ifndef FindProduceNEH
#define FindProduceNEH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "cxClasses.hpp"
#include "cxControls.hpp"
#include "cxCustomData.hpp"
#include "cxDBTL.hpp"
#include "cxGraphics.hpp"
#include "cxInplaceContainer.hpp"
#include "cxLookAndFeelPainters.hpp"
#include "cxLookAndFeels.hpp"
#include "cxMaskEdit.hpp"
#include "cxStyles.hpp"
#include "cxTL.hpp"
#include "cxTLData.hpp"
#include "cxTLdxBarBuiltInMenu.hpp"
#include "dxSkinsCore.hpp"
#include "dxSkinsDefaultPainters.hpp"
#include "RzButton.hpp"
#include "RzEdit.hpp"
#include "RzPanel.hpp"
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Mask.hpp>
#include "cxCheckBox.hpp"
#include "RzChkLst.hpp"
#include "RzLstBox.hpp"
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
#include "dxSkinMetropolis.hpp"
#include "dxSkinMetropolisDark.hpp"
#include "dxSkinOffice2013DarkGray.hpp"
#include "dxSkinOffice2013LightGray.hpp"
#include "dxSkinOffice2013White.hpp"
//---------------------------------------------------------------------------
class TFrFindProduceNE : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzGroupBox *RzGroupBox1;
	TRzEdit *edProduce;
	TRzPanel *RzPanel2;
	TcxDBTreeList *tlRaspDetail;
	TcxDBTreeListColumn *tlRaspDetailiText;
	TRzPanel *RzPanel3;
	TRzToolButton *RzToolButton1;
	TRzToolButton *RzToolButton2;
	TRzSpacer *RzSpacer3;
	TRzSpacer *RzSpacer4;
	TRzSpacer *RzSpacer5;
	TRzGroupBox *RzGroupBoxMenedger1;
	TRzToolButton *btClose;
	TRzToolButton *btGiveProduce;
	TRzSpacer *RzSpacer8;
	TRzSpacer *RzSpacer1;
	TRzSpacer *RzSpacer2;
	TTimer *TmProduce;
	TDataSource *DSProduce;
	TADOQuery *QProduce;
	TIntegerField *QProduceidn;
	TIntegerField *QProduceidnP;
	TStringField *QProduceiText;
	TIntegerField *QProduceiType;
	TImageList *ImageList1;
	TcxStyleRepository *cxStyleRepository1;
	TcxStyle *cxStyle1;
	TTimer *TmProduceChange;
	TRzSpacer *RzSpacer6;
	TIntegerField *QProducechek;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn1;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn2;
	TRzPanel *RzPanel4;
	TRzToolButton *RzToolButton3;
	TRzSpacer *RzSpacer7;
	TRzToolButton *RzToolButton4;
	TRzSpacer *RzSpacer9;
	TRzSpacer *RzSpacer10;
	TRzCheckList *RzCheckList1;
	TRzToolButton *RzToolButton5;
	TRzSpacer *RzSpacer11;
	TRzBitBtn *btRefrsh;
	TADOQuery *Qw;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn3;
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall btGiveProduceClick(TObject *Sender);
	void __fastcall QProduceCalcFields(TDataSet *DataSet);
	void __fastcall tlRaspDetailClick(TObject *Sender);
	void __fastcall tlRaspDetailMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall tlRaspDetailGetNodeImageIndex(TcxCustomTreeList *Sender, TcxTreeListNode *ANode,
          TcxTreeListImageIndexType AIndexType, Uitypes::TImageIndex &AIndex);
	void __fastcall TmProduceTimer(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall RzToolButton1Click(TObject *Sender);
	void __fastcall RzToolButton2Click(TObject *Sender);
	void __fastcall RzToolButton3Click(TObject *Sender);
	void __fastcall RzToolButton5Click(TObject *Sender);
	void __fastcall RzToolButton4Click(TObject *Sender);
	void __fastcall tlRaspDetailExpanding(TcxCustomTreeList *Sender, TcxTreeListNode *ANode,
          bool &Allow);

private:	// User declarations
public:		// User declarations
	bool fOkButton;
	__fastcall TFrFindProduceNE(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrFindProduceNE *FrFindProduceNE;
//---------------------------------------------------------------------------
#endif
