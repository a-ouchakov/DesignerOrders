//---------------------------------------------------------------------------

#ifndef EditCommentH
#define EditCommentH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzLabel.hpp"
#include "RzPanel.hpp"
#include "cxContainer.hpp"
#include "cxControls.hpp"
#include "cxEdit.hpp"
#include "cxMemo.hpp"
#include "cxTextEdit.hpp"

#include <ExtCtrls.hpp>
#include <ImgList.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include "cxGraphics.hpp"
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
class TFrEditComment : public TForm
{
__published:	// IDE-managed Components
	TImageList *ImageList1;
	TRzPanel *RzPanel1;
	TRzToolButton *btInsRasp;
	TRzSpacer *RzSpacer5;
	TRzToolButton *btClose;
	TRzSpacer *RzSpacer6;
	TRzLabel *RzLabel1;
	TcxMemo *reComment;
	TADOQuery *Qw;
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall btInsRaspClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
int IdRasp; //код расопряжения
int viIdIns; //Код пользователя, создавшего распоряжения 
	__fastcall TFrEditComment(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrEditComment *FrEditComment;
//---------------------------------------------------------------------------
#endif
