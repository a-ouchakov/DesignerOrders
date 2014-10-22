//---------------------------------------------------------------------------

#ifndef LoadProgramH
#define LoadProgramH

#include <ADODB.hpp>
#include <Classes.hpp>
#include <ComCtrls.hpp>
#include <Controls.hpp>
#include <DB.hpp>
#include <ImgList.hpp>
#include <ToolWin.hpp>


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
#include "cxStyles.hpp"
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
#include "dxSkinscxPCPainter.hpp"
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
#include "cxNavigator.hpp"
#include "dxSkinMetropolis.hpp"
#include "dxSkinMetropolisDark.hpp"
#include "dxSkinOffice2013DarkGray.hpp"
#include "dxSkinOffice2013LightGray.hpp"
#include "dxSkinOffice2013White.hpp"
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
class TFrLoadProgram : public TForm
{
__published:	// IDE-managed Components
        TADOQuery *Qw;
        TADOQuery *Qr;
        TDataSource *Dr;
        TToolBar *ToolBar1;
        TToolButton *ToolButton1;
        TImageList *ImageList1;
        TToolButton *ToolButton2;
        TToolButton *ToolButton3;
        TStringField *QrLpName;
        TStringField *QrLpPrxExe;
        TStringField *QrLpExe;
        TIntegerField *QrLpCode;
        TIntegerField *QrLpSize;
        TDateTimeField *QrLpDate;
        TStringField *QrLpVers;
        TStringField *QrAdmin;
        TAutoIncField *QrLpId;
	TcxGrid *cxGrid1;
	TcxGridDBTableView *cxGrid1DBTableView1;
	TcxGridLevel *cxGrid1Level1;
	TcxGridDBColumn *cxGrid1DBTableView1LpName;
	TcxGridDBColumn *cxGrid1DBTableView1LpPrxExe;
	TcxGridDBColumn *cxGrid1DBTableView1LpExe;
	TcxGridDBColumn *cxGrid1DBTableView1LpCode;
	TcxGridDBColumn *cxGrid1DBTableView1LpSize;
	TcxGridDBColumn *cxGrid1DBTableView1LpDate;
	TcxGridDBColumn *cxGrid1DBTableView1LpVers;
	TcxGridDBColumn *cxGrid1DBTableView1Admin;
	TcxGridDBColumn *cxGrid1DBTableView1LpId;
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall ToolButton1Click(TObject *Sender);
        void __fastcall ToolButton3Click(TObject *Sender);
        void __fastcall ToolButton2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TFrLoadProgram(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrLoadProgram *FrLoadProgram;
extern char flFrLoadProgram;
//---------------------------------------------------------------------------
#endif
