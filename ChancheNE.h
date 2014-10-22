//---------------------------------------------------------------------------

#ifndef ChancheNEH
#define ChancheNEH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "RzButton.hpp"
#include "RzPanel.hpp"
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ImgList.hpp>
#include "cxButtonEdit.hpp"
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
#include "cxLookAndFeelPainters.hpp"
#include "cxLookAndFeels.hpp"
#include "cxStyles.hpp"
#include "dxSkinsCore.hpp"
#include "dxSkinscxPCPainter.hpp"
#include "dxSkinsDefaultPainters.hpp"
#include "RzEdit.hpp"
#include <Data.Win.ADODB.hpp>
#include <DB.hpp>
#include <Vcl.Mask.hpp>
#include "RzLabel.hpp"
#include <Vcl.Graphics.hpp>
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
class TFrChancheNE : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzSpacer *RzSpacer5;
	TRzToolButton *btClose;
	TRzSpacer *RzSpacer6;
	TRzToolButton *RzToolButton1;
	TRzSpacer *RzSpacer1;
	TImageList *ImageList1;
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TcxGrid *cxGrid1;
	TcxGridDBColumn *cxGridDBColumn1;
	TcxGridDBColumn *cxGridDBColumn2;
	TcxGridDBColumn *cxGridDBColumn3;
	TcxGridDBColumn *cxGridDBColumn4;
	TcxGridDBColumn *cxGridDBColumn5;
	TcxGridDBColumn *cxGridDBColumn6;
	TcxGridDBColumn *cxGridDBColumn7;
	TcxGridDBColumn *cxGridDBColumn8;
	TcxGridDBBandedTableView *cxGridDBBandedTableView1;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Column1;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Column2;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Column3;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Column5;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Column6;
	TcxGridLevel *cxGridLevel1;
	TADOQuery *QNE_Axapta;
	TDataSource *DSNE_Axapta;
	TTimer *TmNE_Axapta;
	TRzGroupBox *RzGroupBox5;
	TRzEdit *edFind;
	TRzBitBtn *RzBitBtn1;
	TIntegerField *QNE_AxaptaIdn;
	TWideStringField *QNE_AxaptaItemName;
	TWideStringField *QNE_AxaptaItemId;
	TStringField *QNE_AxaptaiTextId24ItemType;
	TSmallintField *QNE_AxaptaiYear;
	TBCDField *QNE_AxaptaNDS;
	TRzGroupBox *RzGroupBox1;
	TRzEdit *RzEdit1;
	TRzBitBtn *RzBitBtn2;
	TcxGrid *cxGrid2;
	TcxGridDBColumn *cxGridDBColumn9;
	TcxGridDBColumn *cxGridDBColumn10;
	TcxGridDBColumn *cxGridDBColumn11;
	TcxGridDBColumn *cxGridDBColumn12;
	TcxGridDBColumn *cxGridDBColumn13;
	TcxGridDBColumn *cxGridDBColumn14;
	TcxGridDBColumn *cxGridDBColumn15;
	TcxGridDBColumn *cxGridDBColumn16;
	TcxGridDBBandedTableView *cxGridDBBandedTableView2;
	TcxGridDBBandedColumn *cxGridDBBandedColumn1;
	TcxGridDBBandedColumn *cxGridDBBandedColumn2;
	TcxGridDBBandedColumn *cxGridDBBandedColumn3;
	TcxGridDBBandedColumn *cxGridDBBandedColumn4;
	TcxGridDBBandedColumn *cxGridDBBandedColumn5;
	TcxGridLevel *cxGridLevel2;
	TADOQuery *ADOQuery1;
	TIntegerField *IntegerField1;
	TWideStringField *WideStringField1;
	TWideStringField *WideStringField2;
	TStringField *StringField1;
	TSmallintField *SmallintField1;
	TBCDField *BCDField1;
	TDataSource *DataSource1;
	TTimer *Timer1;
	TPanel *Panel4;
	TPanel *Panel5;
	TPanel *Panel6;
	TRzMemo *edAlterName;
	TRzMemo *RzMemo1;
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall RzToolButton1Click(TObject *Sender);
	void __fastcall RzBitBtn1Click(TObject *Sender);
	void __fastcall TmNE_AxaptaTimer(TObject *Sender);
	void __fastcall edFindChange(TObject *Sender);
	void __fastcall DSNE_AxaptaDataChange(TObject *Sender, TField *Field);
	void __fastcall RzEdit1Change(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall RzBitBtn2Click(TObject *Sender);
	void __fastcall DataSource1DataChange(TObject *Sender, TField *Field);
private:	// User declarations
public:		// User declarations
	__fastcall TFrChancheNE(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrChancheNE *FrChancheNE;
//---------------------------------------------------------------------------
#endif
