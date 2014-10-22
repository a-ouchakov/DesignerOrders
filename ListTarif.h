//---------------------------------------------------------------------------

#ifndef ListTarifH
#define ListTarifH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
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
#include "RzPanel.hpp"
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ImgList.hpp>
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
//---------------------------------------------------------------------------
class TFrListTarif : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzSpacer *RzSpacer5;
	TRzToolButton *btClose;
	TRzSpacer *RzSpacer6;
	TImageList *ImageList1;
	TcxDBTreeList *tlRaspDetailIndex;
	TcxDBTreeListColumn *tlRaspDetailIndexNameRaspDetail;
	TRzToolButton *RzToolButton1;
	TRzToolButton *RzToolButton2;
	TRzToolButton *RzToolButton3;
	TRzSpacer *RzSpacer1;
	TRzSpacer *RzSpacer2;
	TRzSpacer *RzSpacer3;
	TRzToolButton *RzToolButton4;
	TRzSpacer *RzSpacer4;
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall RzToolButton1Click(TObject *Sender);
	void __fastcall RzToolButton3Click(TObject *Sender);
	void __fastcall RzToolButton2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFrListTarif(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrListTarif *FrListTarif;
//---------------------------------------------------------------------------
#endif
