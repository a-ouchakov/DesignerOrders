//---------------------------------------------------------------------------

#ifndef ProtOnH
#define ProtOnH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <ComCtrls.hpp>
#include <Db.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <ImgList.hpp>
#include <ToolWin.hpp>
#include <DB.hpp>
#include "RzEdit.hpp"
#include "RzLabel.hpp"
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

#include <Mask.hpp>
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
class TFrProtOn : public TForm
{
__published:	// IDE-managed Components
        TToolBar *ToolBar2;
        TToolButton *ToolButton5;
        TDBNavigator *DBNavigator1;
        TToolButton *ToolButton3;
        TToolButton *ToolButton1;
        TToolButton *ExitButton;
        TImageList *ImageList1;
        TADOQuery *Qi;
        TDataSource *Di;
        TIntegerField *QiatId;
        TStringField *QiauFamIO;
        TStringField *QiauFamUser;
        TDateTimeField *QiatDateOn;
        TDateTimeField *QiatDateOff;
        TWideStringField *QiWorkPlace;
        TWideStringField *QiProgram;
	TcxGrid *cxGrid1;
	TcxGridDBTableView *cxGrid1DBTableView1;
	TcxGridLevel *cxGrid1Level1;
	TcxGridDBColumn *cxGrid1DBTableView1atId;
	TcxGridDBColumn *cxGrid1DBTableView1auFamIO;
	TcxGridDBColumn *cxGrid1DBTableView1auFamUser;
	TcxGridDBColumn *cxGrid1DBTableView1atDateOn;
	TcxGridDBColumn *cxGrid1DBTableView1atDateOff;
	TcxGridDBColumn *cxGrid1DBTableView1WorkPlace;
	TcxGridDBColumn *cxGrid1DBTableView1Program;
	TRzDateTimeEdit *RzDateTimeEdit1;
	TRzDateTimeEdit *RzDateTimeEdit2;
	TRzLabel *RzLabel1;
	TRzLabel *RzLabel2;
	TcxGridDBColumn *cxGrid1DBTableView1Column1;
	TIntegerField *QiatIdApp;
        void __fastcall ExitButtonClick(TObject *Sender);
        void __fastcall ToolButton1Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        //void __fastcall dxDBGrid1ColumnClick(TObject *Sender,          TdxDBTreeListColumn *Column);
private:	// User declarations
public:		// User declarations
        __fastcall TFrProtOn(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrProtOn *FrProtOn;
extern char  flFrProtOn;
//---------------------------------------------------------------------------
#endif
