//---------------------------------------------------------------------------

#ifndef LookSheetH
#define LookSheetH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzPanel.hpp"
#include "cxControls.hpp"
#include "cxCustomData.hpp"
#include "cxDBTL.hpp"
#include "cxGraphics.hpp"
#include "cxInplaceContainer.hpp"
#include "cxStyles.hpp"
#include "cxTL.hpp"
#include "cxTLData.hpp"

#include <ADODB.hpp>
#include <DB.hpp>
#include <ExtCtrls.hpp>
#include <ImgList.hpp>
#include "cxMaskEdit.hpp"
#include "cxClasses.hpp"
#include "cxLookAndFeelPainters.hpp"
#include "cxLookAndFeels.hpp"
#include "cxTLdxBarBuiltInMenu.hpp"
#include "dxSkinsCore.hpp"
#include "dxSkinsDefaultPainters.hpp"
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
#include "dxSkinMetropolis.hpp"
#include "dxSkinMetropolisDark.hpp"
#include "dxSkinOffice2013DarkGray.hpp"
#include "dxSkinOffice2013LightGray.hpp"
#include "dxSkinOffice2013White.hpp"
//---------------------------------------------------------------------------
class TFrLookSheet : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzSpacer *RzSpacer5;
	TRzToolButton *btClose;
	TRzSpacer *RzSpacer6;
	TRzPanel *RzPanel3;
	TImageList *ImageList1;
	TcxStyleRepository *cxStyleRepository2;
	TcxStyle *cxStyle2;
	TcxStyleRepository *cxStyleRepository1;
	TcxStyle *cxStyle1;
	TTimer *TmProduce;
	TDataSource *DSSelectNE;
	TImageList *ImageList2;
	TRzPanel *RzPanel4;
	TRzToolButton *RzToolButton1;
	TRzToolButton *RzToolButton2;
	TRzSpacer *RzSpacer3;
	TRzSpacer *RzSpacer4;
	TRzSpacer *RzSpacer1;
	TcxDBTreeList *tlRaspDetail;
	TADOQuery *QSelectNE;
	TStringField *QSelectNEAdvCondID;
	TStringField *QSelectNEACParentID;
	TStringField *QSelectNEAdvCondName;
	TSmallintField *QSelectNEnumber;
	TIntegerField *QSelectNEyear;
	TBCDField *QSelectNEPrice;
	TBCDField *QSelectNENDS;
	TBCDField *QSelectNESummaNDS;
	TStringField *QSelectNEUnit;
	TStringField *QSelectNEItemType;
	TIntegerField *QSelectNEMergedCount;
	TIntegerField *QSelectNEVOrder;
	TcxDBTreeListColumn *tlRaspDetailAdvCondID;
	TcxDBTreeListColumn *tlRaspDetailACParentID;
	TcxDBTreeListColumn *tlRaspDetailAdvCondName;
	TcxDBTreeListColumn *tlRaspDetailnumber;
	TcxDBTreeListColumn *tlRaspDetailyear;
	TcxDBTreeListColumn *tlRaspDetailPrice;
	TcxDBTreeListColumn *tlRaspDetailNDS;
	TcxDBTreeListColumn *tlRaspDetailSummaNDS;
	TcxDBTreeListColumn *tlRaspDetailUnit;
	TcxDBTreeListColumn *tlRaspDetailItemType;
	TcxDBTreeListColumn *tlRaspDetailMergedCount;
	TcxDBTreeListColumn *tlRaspDetailVOrder;
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall RzToolButton1Click(TObject *Sender);
	void __fastcall RzToolButton2Click(TObject *Sender);
	void __fastcall TmProduceTimer(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall tlRaspDetailGetNodeImageIndex(TcxCustomTreeList *Sender, TcxTreeListNode *ANode,
          TcxTreeListImageIndexType AIndexType, Uitypes::TImageIndex &AIndex);

private:	// User declarations
public:		// User declarations
	__fastcall TFrLookSheet(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrLookSheet *FrLookSheet;
//---------------------------------------------------------------------------
#endif
