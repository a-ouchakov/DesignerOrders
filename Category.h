//---------------------------------------------------------------------------

#ifndef CategoryH
#define CategoryH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "RzButton.hpp"
#include "RzPanel.hpp"
#include <Vcl.ExtCtrls.hpp>
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
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include "cxMaskEdit.hpp"
#include <Vcl.ImgList.hpp>
#include "RzEdit.hpp"
#include "RzLabel.hpp"
#include <Vcl.Mask.hpp>
#include "dxSkinMetropolis.hpp"
#include "dxSkinMetropolisDark.hpp"
#include "dxSkinOffice2013DarkGray.hpp"
#include "dxSkinOffice2013LightGray.hpp"
#include "dxSkinOffice2013White.hpp"
//---------------------------------------------------------------------------
class TFrCategory : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzToolButton *btNewCat;
	TRzSpacer *RzSpacer5;
	TRzToolButton *btClose;
	TRzSpacer *RzSpacer6;
	TRzToolButton *btNewVid;
	TRzSpacer *RzSpacer1;
	TRzToolButton *btDelPI;
	TRzSpacer *RzSpacer2;
	TcxDBTreeList *cxDBTreeList1;
	TADOQuery *CatgQuer;
	TDataSource *CatgData;
	TGuidField *CatgQuerIdn;
	TGuidField *CatgQuerPIdn;
	TWideStringField *CatgQueriText;
	TcxDBTreeListColumn *cxDBTreeList1iText;
	TImageList *ImageList1;
	TcxDBTreeListColumn *cxDBTreeList1Idn;
	TcxDBTreeListColumn *cxDBTreeList1PIdn;
	TSmallintField *CatgQueriType;
	TAutoIncField *CatgQuerrecId;
	TRzToolButton *RzToolButton1;
	TRzSpacer *RzSpacer3;
	TRzToolButton *RzToolButton2;
	TRzSpacer *RzSpacer4;
	TRzPanel *RzPanel2;
	TRzLabel *RzLabel1;
	TRzEdit *SearchEd;
	TRzSpacer *RzSpacer7;
	TRzToolButton *RzToolButton3;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall btNewCatClick(TObject *Sender);
	void __fastcall btNewVidClick(TObject *Sender);
	void __fastcall cxDBTreeList1GetNodeImageIndex(TcxCustomTreeList *Sender, TcxTreeListNode *ANode, TcxTreeListImageIndexType AIndexType, Uitypes::TImageIndex &AIndex);
	void __fastcall btDelPIClick(TObject *Sender);
	void __fastcall cxDBTreeList1DblClick(TObject *Sender);
	void __fastcall RzToolButton1Click(TObject *Sender);
	void __fastcall RzToolButton2Click(TObject *Sender);
	void __fastcall SearchEdChange(TObject *Sender);
	void __fastcall RzToolButton3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	void CatgList(void);
	__fastcall TFrCategory(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrCategory *FrCategory;
//---------------------------------------------------------------------------
#endif
