//---------------------------------------------------------------------------

#ifndef BlockProduceCostH
#define BlockProduceCostH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "RzPanel.hpp"
#include <Vcl.ExtCtrls.hpp>
#include "RzButton.hpp"
#include "RzEdit.hpp"
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Data.DB.hpp>
#include "RzLabel.hpp"
#include "RzRadChk.hpp"
#include "RzSpnEdt.hpp"
#include <Vcl.Mask.hpp>
#include "RzCmboBx.hpp"
#include "cxCheckBox.hpp"
#include "cxCheckComboBox.hpp"
#include "cxContainer.hpp"
#include "cxControls.hpp"
#include "cxDropDownEdit.hpp"
#include "cxEdit.hpp"
#include "cxGraphics.hpp"
#include "cxLookAndFeelPainters.hpp"
#include "cxLookAndFeels.hpp"
#include "cxMaskEdit.hpp"
#include "cxTextEdit.hpp"
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
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TFrBlockProduceCost : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzToolButton *RzToolButton1;
	TRzToolButton *btClose;
	TRzGroupBox *RzGroupBox2;
	TComboBox *PeriodBox;
	TRzGroupBox *RzGroupBox3;
	TEdit *CostBlockEd;
	TRzGroupBox *RzGroupBox4;
	TRzMemo *DescMemo;
	TRzGroupBox *RzGroupBox1;
	TRzGroupBox *RzGroupBox5;
	TADOCommand *CostComm;
	TDBText *DBText1;
	TDBText *DBText2;
	TDBText *DBText3;
	TDBText *DBText4;
	TRzBitBtn *RzBitBtn1;
	TADOQuery *ListQuer;
	TAutoIncField *ListQueridn;
	TWideStringField *ListQuerDescription;
	TRzCheckBox *BaseCheck;
	TRzLabel *RzLabel1;
	TRzSpinEdit *DiscountEd;
	TRzEdit *WithDiscEd;
	TRzLabel *RzLabel2;
	TRzCheckBox *ActivCheck;
	TRzGroupBox *RzGroupBox6;
	TADOQuery *DeptQuer;
	TAutoIncField *DeptQueridn;
	TStringField *DeptQuerDeptName;
	TADOQuery *Qw;
	TAutoIncField *Qwidn;
	TStringField *QwDeptName;
	TcxCheckComboBox *chcbKanalSale;
	void __fastcall CostBlockEdChange(TObject *Sender);
	void __fastcall CostBlockEdExit(TObject *Sender);
	void __fastcall CostBlockEdKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall RzToolButton1Click(TObject *Sender);
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall DescMemoChange(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall RzBitBtn1Click(TObject *Sender);
	void __fastcall PeriodBoxChange(TObject *Sender);
	void __fastcall PeriodBoxKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall BaseCheckClick(TObject *Sender);
	void __fastcall DiscountEdChange(TObject *Sender);
	void __fastcall WithDiscEdChange(TObject *Sender);
	void __fastcall WithDiscEdKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall WithDiscEdExit(TObject *Sender);
private:	// User declarations
    void List2(void);
public:		// User declarations
	void List1(void);
	__fastcall TFrBlockProduceCost(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrBlockProduceCost *FrBlockProduceCost;
//---------------------------------------------------------------------------
#endif
