//---------------------------------------------------------------------------

#ifndef BlockProducePeriodH
#define BlockProducePeriodH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "RzButton.hpp"
#include "RzPanel.hpp"
#include <Vcl.ExtCtrls.hpp>
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
#include "RzEdit.hpp"
#include "RzLabel.hpp"
#include <Data.DB.hpp>
#include <Vcl.Mask.hpp>
#include <Data.Win.ADODB.hpp>
#include "RzCmboBx.hpp"
//---------------------------------------------------------------------------
class TFrBlockProducePeriod : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzToolButton *RzToolButton1;
	TRzToolButton *btClose;
	TRzPanel *RzPanel2;
	TcxGridDBTableView *cxGrid1DBTableView1;
	TcxGridLevel *cxGrid1Level1;
	TcxGrid *cxGrid1;
	TADOCommand *CycleComm;
	TADOQuery *CycleQuer;
	TDataSource *CycleData;
	TAutoIncField *CycleQueridn;
	TDateTimeField *CycleQuerDateIns;
	TStringField *CycleQuerCreator;
	TDateTimeField *CycleQuerDateEdit;
	TStringField *CycleQuerEditor;
	TcxGridDBColumn *cxGrid1DBTableView1Description;
	TRzGroupBox *RzGroupBox1;
	TRzLabel *RzLabel1;
	TRzEdit *CycleEd;
	TRzComboBox *cbfAdv;
	TRzLabel *RzLabel2;
	TStringField *CycleQuerListValue;
	TcxGridDBColumn *cxGrid1DBTableView1ListValue;
	TIntegerField *CycleQuerIdFAdv;
	TIntegerField *CycleQuerCycle;
	TWideStringField *CycleQuerDescription;
	TIntegerField *CycleQuerCycleMonth;
	TcxGridDBColumn *cxGrid1DBTableView1CycleMonth;
	TADOCommand *DelCComm;
	TADOQuery *DelCQuer;
	TADOQuery *RaspQuer;
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall RzToolButton1Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall cxGrid1DBTableView1CellDblClick(TcxCustomGridTableView *Sender,
		  TcxGridTableDataCellViewInfo *ACellViewInfo, TMouseButton AButton, TShiftState AShift, bool &AHandled);
	void __fastcall CycleQuerCalcFields(TDataSet *DataSet);
	void __fastcall CycleEdChange(TObject *Sender);
	void __fastcall CycleEdKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
private:	// User declarations
    void QString(void);
	void QCycle(void);
		 TBookmark SavePos;
public:		// User declarations
	__fastcall TFrBlockProducePeriod(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrBlockProducePeriod *FrBlockProducePeriod;
//---------------------------------------------------------------------------
#endif
