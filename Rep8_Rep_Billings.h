//---------------------------------------------------------------------------

#ifndef Rep8_Rep_BillingsH
#define Rep8_Rep_BillingsH
#include "Init.h"
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzCmboBx.hpp"
#include "RzEdit.hpp"
#include "RzPanel.hpp"
#include "RzRadChk.hpp"
#include "RzSplit.hpp"
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
#include <ImgList.hpp>
#include <Mask.hpp>
#include "RzLabel.hpp"
#include <Graphics.hpp>
#include "cxEditRepositoryItems.hpp"
#include "RzBtnEdt.hpp"
#include "cxDBTL.hpp"
#include "cxInplaceContainer.hpp"
#include "cxMaskEdit.hpp"
#include "cxTL.hpp"
#include "cxTLData.hpp"
#include <Dialogs.hpp>
#include "cxLookAndFeelPainters.hpp"
#include "cxLookAndFeels.hpp"
#include "dxSkinsCore.hpp"
#include "dxSkinscxPCPainter.hpp"
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
//---------------------------------------------------------------------------
class TFrPrintProductCatalog : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzToolButton *RzToolButton4;
	TRzSpacer *RzSpacer2;
	TRzSpacer *RzSpacer3;
	TRzSpacer *RzSpacer1;
	TRzSpacer *RzSpacer4;
	TRzToolButton *RzToolButton1;
	TRzSpacer *RzSpacer5;
	TRzToolButton *RzToolButton2;
	TRzSpacer *RzSpacer6;
	TRzSpacer *RzSpacer7;
	TRzToolButton *RzToolButton3;
	TRzSpacer *RzSpacer8;
	TRzToolButton *RzToolButton5;
	TRzSpacer *RzSpacer9;
	TRzGroupBox *RzGroupBox1;
	TRzCheckBox *RzCheckBox1;
	TRzDateTimeEdit *RzDateTimeEdit1;
	TRzCheckBox *RzCheckBox2;
	TRzDateTimeEdit *RzDateTimeEdit2;
	TRzGroupBox *RzGroupBox3;
	TRzToolButton *RzToolButton45;
	TRzComboBox *RzComboBox3;
	TRzSplitter *RzSplitter1;
	TImageList *ImageList1;
	TTimer *Timer1;
	TDataSource *DS1;
	TADOQuery *Qw;
	TcxStyleRepository *cxStyleRepository1;
	TcxStyle *cxStyle1;
	TADOStoredProc *ADOStoredProc11;
	TRzPanel *RzPanel300;
	TImage *Image1;
	TRzLabel *RzLabel4;
	TRzLabel *RzLabel24;
	TcxStyle *cxStyle2;
	TcxGrid *cxGrid2;
	TcxGridDBColumn *cxGridDBColumn1;
	TcxGridDBColumn *cxGridDBColumn2;
	TcxGridDBColumn *cxGridDBColumn3;
	TcxGridDBColumn *cxGridDBColumn4;
	TcxGridDBColumn *cxGridDBColumn5;
	TcxGridDBColumn *cxGridDBColumn6;
	TcxGridDBColumn *cxGridDBColumn7;
	TcxGridDBColumn *cxGridDBColumn8;
	TcxGridDBBandedTableView *cxGridDBBandedTableView1;
	TcxGridLevel *cxGridLevel1;
	TRzPanel *RzPanel2;
	TRzToolButton *RzToolButton6;
	TRzSpacer *RzSpacer13;
	TRzSpacer *RzSpacer14;
	TRzToolButton *RzToolButton7;
	TRzToolButton *RzToolButton8;
	TRzSpacer *RzSpacer17;
	TRzSpacer *RzSpacer19;
	TTimer *TimerQ2;
	TDataSource *DS2;
	TADOQuery *Q2;
	TStringField *Q2Num;
	TDateTimeField *Q2DateExtract;
	TBCDField *Q2Summa;
	TStringField *Q2IdAdvCondName;
	TStringField *Q2NameClient;
	TIntegerField *Q2IdClient;
	TRzToolButton *RzToolButton11;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Num;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1DateExtract;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Summa;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1IdAdvCondName;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1AdvCondCode;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1NameClient;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1IdClient;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Num_1;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1DateVyp;
	TRzSpacer *RzSpacer11;
	TRzToolButton *RzToolButton12;
	TIntegerField *Q2idn;
	TIntegerField *Q2CountA;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Column1;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Column2;
	TRzGroupBox *RzGroupBox2;
	TRzButtonEdit *RzEdit21;
	TRzCheckBox *RzCheckBox21;
	TRzSpacer *RzSpacer15;
	TcxStyle *cxStyle3;
	TcxStyle *cxStyle4;
	TcxStyle *cxStyle5;
	TcxStyle *cxStyleSelect;
	TcxStyle *cxStyleItog;
	TcxStyle *cxStyleContent;
	TColorDialog *ColorDialog2;
	TcxStyle *cxStyleToLevel;
	TcxStyle *cxStyleThreLevel;
	TcxStyle *cxStyle6;
	TcxStyle *cxStylePAY;
	TRzToolButton *RzToolButton9;
	TRzToolButton *RzToolButton10;
	TRzSpacer *RzSpacer12;
	TRzSpacer *RzSpacer16;
	TRzGroupBox *RzGroupBoxMenedger1;
	TRzButtonEdit *RzMenedger1;
	TcxEditRepository *cxEditRepository1;
	TcxEditRepositoryCurrencyItem *cxEditRepository1CurrencyItem1;
	TcxEditRepositoryCurrencyItem *cxEditRepository1CurrencyItem2;
	TcxGrid *cxGrid1;
	TcxGridDBColumn *idn;
	TcxGridDBColumn *idnp;
	TcxGridDBColumn *CallActionName;
	TcxGridDBColumn *PNameR;
	TcxGridDBColumn *NameR;
	TcxGridDBColumn *auFamIO;
	TcxGridDBColumn *ClCol;
	TcxGridDBColumn *ClPr;
	TcxGridDBBandedTableView *cxGrid1DBBandedTableView1;
	TcxGridLevel *cxGrid1Level1;
	TADOQuery *Q1;
	TRzToolButton *RzToolButton13;
	TRzSpacer *RzSpacer10;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall RzToolButton4Click(TObject *Sender);
	void __fastcall RzToolButton3Click(TObject *Sender);
	void __fastcall RzToolButton5Click(TObject *Sender);
	void __fastcall RzToolButton2Click(TObject *Sender);
	void __fastcall RzToolButton45Click(TObject *Sender);
	void __fastcall RzComboBox3Change(TObject *Sender);
	void __fastcall RzCheckBox1Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall RzToolButton1Click(TObject *Sender);
	void __fastcall cxGrid1DBBandedTableView1DblClick(TObject *Sender);
	void __fastcall RzToolButton6Click(TObject *Sender);
	void __fastcall RzToolButton11Click(TObject *Sender);
	void __fastcall TimerQ2Timer(TObject *Sender);
	void __fastcall DS1DataChange(TObject *Sender, TField *Field);
	void __fastcall RzToolButton12Click(TObject *Sender);
	void __fastcall RzToolButton10Click(TObject *Sender);
	void __fastcall RzToolButton9Click(TObject *Sender);
	void __fastcall RzToolButton8Click(TObject *Sender);
	void __fastcall RzToolButton7Click(TObject *Sender);
	void __fastcall RzCheckBox21Click(TObject *Sender);
	void __fastcall RzEdit21ButtonClick(TObject *Sender);
	void __fastcall RzMenedger1ButtonClick(TObject *Sender);
	void __fastcall RzToolButton13Click(TObject *Sender);
private:	// User declarations
AnsiString StrID,Parameter, UserList ;
int IdUser;
void __fastcall LoadPicList(TStrings *NameUser,TStrings *Status
,TStrings *Activities_KC,TStrings *ComboBox9);
void __fastcall CkeckUser();
struct SaveTblControl STblCtrl;      //—труктура управлени€ cxGreed сохран€ема€ в базе данных

public:		// User declarations
	__fastcall TFrPrintProductCatalog(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrPrintProductCatalog *FrPrintProductCatalog;
extern char flFrPrintProductCatalog;
//---------------------------------------------------------------------------
#endif
