//---------------------------------------------------------------------------

#ifndef BlockProduceDiscountH
#define BlockProduceDiscountH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "RzButton.hpp"
#include "RzEdit.hpp"
#include "RzLabel.hpp"
#include "RzPanel.hpp"
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Mask.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include "RzRadChk.hpp"
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
#include "cxCheckBox.hpp"
#include "cxCheckComboBox.hpp"
#include "cxContainer.hpp"
#include "cxDropDownEdit.hpp"
#include "cxMaskEdit.hpp"
#include "cxTextEdit.hpp"
//---------------------------------------------------------------------------
class TFrBlockProduceDiscount : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzToolButton *SaveButt;
	TRzToolButton *btClose;
	TRzGroupBox *RzGroupBox1;
	TRzLabel *RzLabel1;
	TDateTimePicker *StartDTP;
	TRzLabel *RzLabel2;
	TDateTimePicker *EndDtDTP;
	TRzLabel *RzLabel3;
	TRzNumericEdit *MINdiscEd;
	TRzLabel *RzLabel4;
	TRzNumericEdit *MAXdiscEd;
	TRzGroupBox *RzGroupBox2;
	TADOCommand *DiscComm;
	TADOQuery *DiscQuer;
	TRzLabel *RzLabel5;
	TRzEdit *CommentEd;
	TRzCheckBox *ActiveBox;
	TcxGridDBTableView *cxGrid1DBTableView1;
	TcxGridLevel *cxGrid1Level1;
	TcxGrid *cxGrid1;
	TDataSource *DiscData;
	TAutoIncField *DiscQueridn;
	TDateTimeField *DiscQuerPStart;
	TDateTimeField *DiscQuerPEnd;
	TFloatField *DiscQuerMINdis;
	TFloatField *DiscQuerMAXdis;
	TWideStringField *DiscQuerDescription;
	TDateTimeField *DiscQuerDateIns;
	TDateTimeField *DiscQuerDateEdit;
	TBooleanField *DiscQuerActive;
	TStringField *DiscQuerCreator;
	TStringField *DiscQuerEditor;
	TcxGridDBColumn *cxGrid1DBTableView1PStart;
	TcxGridDBColumn *cxGrid1DBTableView1PEnd;
	TcxGridDBColumn *cxGrid1DBTableView1MINdis;
	TcxGridDBColumn *cxGrid1DBTableView1MAXdis;
	TcxGridDBColumn *cxGrid1DBTableView1Description;
	TcxGridDBColumn *cxGrid1DBTableView1DateIns;
	TcxGridDBColumn *cxGrid1DBTableView1DateEdit;
	TcxGridDBColumn *cxGrid1DBTableView1Active;
	TcxGridDBColumn *cxGrid1DBTableView1Creator;
	TcxGridDBColumn *cxGrid1DBTableView1Editor;
	TRzLabel *RzLabel6;
	TcxCheckComboBox *chcbPeriod;
	TADOQuery *ListQuer;
	TIntegerField *ListQuerIdFAdv;
	TWideStringField *ListQuerDescription;
	TIntegerField *DiscQuerCycleId;
	TWideMemoField *DiscQuerAllCycle;
	TIntegerField *DiscQuerBlockId;
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall SaveButtClick(TObject *Sender);
	void __fastcall ActiveBoxClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall chcbPeriodExit(TObject *Sender);
private:	// User declarations
	void QDisc(void);
	void List1(void);
	void SaveDisc(void);
public:		// User declarations
	__fastcall TFrBlockProduceDiscount(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrBlockProduceDiscount *FrBlockProduceDiscount;
//---------------------------------------------------------------------------
#endif
