//---------------------------------------------------------------------------

#ifndef AddFilesH
#define AddFilesH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzPanel.hpp"
#include "RzShellDialogs.hpp"
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
class TFrAddFiles : public TForm
{
__published:	// IDE-managed Components
	TDataSource *DSMailPathAddFiles;
	TADOQuery *QAddFiles;
	TRzOpenDialog *OD;
	TcxGrid *cxGrid1;
	TcxGridDBColumn *cxGridDBColumn17;
	TcxGridDBColumn *cxGridDBColumn18;
	TcxGridDBColumn *cxGridDBColumn19;
	TcxGridDBColumn *cxGridDBColumn20;
	TcxGridDBColumn *cxGridDBColumn21;
	TcxGridDBColumn *cxGridDBColumn22;
	TcxGridDBColumn *cxGridDBColumn23;
	TcxGridDBColumn *cxGridDBColumn24;
	TcxGridDBBandedTableView *cxGridDBBandedTableView2;
	TcxGridLevel *cxGridLevel3;
	TImageList *ImageList1;
	TADOQuery *QTmpTable;
	TRzPanel *RzPanel2;
	TRzSpacer *RzSpacer5;
	TRzToolButton *btClose;
	TRzSpacer *RzSpacer6;
	TADOQuery *Qw;
	TStringField *QAddFilesNameFile;
	TcxGridDBBandedColumn *cxGridDBBandedTableView2NameFile;
	TRzToolButton *RzToolButton1;
	TRzToolButton *RzToolButton2;
	TRzSpacer *RzSpacer1;
	TRzSpacer *RzSpacer2;
	TAutoIncField *QAddFilesIdn;
	TRzToolButton *SaveFlTB;
	TBlobField *QAddFilesAddFile;
	void __fastcall RzBitBtn3Click(TObject *Sender);
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall btInsRaspDetailClick(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall RzBitBtn4Click(TObject *Sender);
	void __fastcall SaveFlTBClick(TObject *Sender);
private:	// User declarations
	UnicodeString TempTableName;
	AnsiString vsSQLTmpTable;
public:		// User declarations
	__fastcall TFrAddFiles(TComponent* Owner);
	int viRaspIdn; //Код распоряжения
};
//---------------------------------------------------------------------------
extern PACKAGE TFrAddFiles *FrAddFiles;
//---------------------------------------------------------------------------
#endif
