//---------------------------------------------------------------------------

#ifndef FindRaspNameH
#define FindRaspNameH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
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

#include <DB.hpp>
#include <ExtCtrls.hpp>
#include <ADODB.hpp>
#include "cxLookAndFeelPainters.hpp"
#include "cxLookAndFeels.hpp"
#include "dxSkinsCore.hpp"
#include "dxSkinscxPCPainter.hpp"
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
//---------------------------------------------------------------------------
class TFrFindRaspName : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzPanel *RzPanel2;
	TcxGrid *cxGridRaspName;
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
	TTimer *TmRaspName;
	TDataSource *DSRaspName;
	TADOQuery *QRaspName;
	TIntegerField *QRaspNameIdn;
	TStringField *QRaspNameRaspName;
	TMemoField *QRaspNameRaspNameRTF;
	TMemoField *QRaspNameContentTargetRTF;
	TMemoField *QRaspNameContentRTF;
	TDateTimeField *QRaspNameDateRasp;
	TStringField *QRaspNameNumbRaspName;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserRaspName;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserDateRasp;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserNumbRaspName;
	TcxStyleRepository *cxStyleRepository1;
	TcxStyle *cxStyle1;
	TRzGroupBox *RzGroupBoxMenedger1;
	TRzSpacer *RzSpacer8;
	TRzSpacer *RzSpacer1;
	TRzSpacer *RzSpacer2;
	TRzToolButton *btGiveRaspName;
	TRzToolButton *btClose;
	TRzSpacer *RzSpacer3;
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall TmRaspNameTimer(TObject *Sender);
	void __fastcall btGiveRaspNameClick(TObject *Sender);
	void __fastcall QRaspNameDateRaspGetText(TField *Sender, UnicodeString &Text,
          bool DisplayText);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
private:	// User declarations
public:		// User declarations
	__fastcall TFrFindRaspName(TComponent* Owner);
	bool fOkButton;
};
//---------------------------------------------------------------------------
extern PACKAGE TFrFindRaspName *FrFindRaspName;
//---------------------------------------------------------------------------
#endif
