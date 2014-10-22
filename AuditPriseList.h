//---------------------------------------------------------------------------

#ifndef AuditPriseListH
#define AuditPriseListH
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
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TFrAuditPriseList : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzToolButton *btClose;
	TRzSpacer *RzSpacer6;
	TcxGridDBTableView *cxGrid1DBTableView1;
	TcxGridLevel *cxGrid1Level1;
	TcxGrid *cxGrid1;
	TADOQuery *AuditPLQuer;
	TDataSource *AuditPLData;
	TDateTimeField *AuditPLQuerStartJob;
	TDateTimeField *AuditPLQuerStopJob;
	TStringField *AuditPLQuerJobStatus;
	TStringField *AuditPLQuerJobResult;
	TWideStringField *AuditPLQuerJobDescription;
	TWideStringField *AuditPLQuerRunBy;
	TcxGridDBColumn *cxGrid1DBTableView1StartJob;
	TcxGridDBColumn *cxGrid1DBTableView1StopJob;
	TcxGridDBColumn *cxGrid1DBTableView1JobStatus;
	TcxGridDBColumn *cxGrid1DBTableView1JobResult;
	TcxGridDBColumn *cxGrid1DBTableView1JobDescription;
	TcxGridDBColumn *cxGrid1DBTableView1RunBy;
	TRzToolButton *btRefresh;
	TRzSpacer *RzSpacer1;
	TcxStyleRepository *cxStyleRepository1;
	TcxStyle *JobFail;
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall btRefreshClick(TObject *Sender);
	void __fastcall cxGrid1DBTableView1JobResultStylesGetContentStyle(TcxCustomGridTableView *Sender,
          TcxCustomGridRecord *ARecord, TcxCustomGridTableItem *AItem,
          TcxStyle *&AStyle);
private:	// User declarations
    void QPL(void);
public:		// User declarations
	__fastcall TFrAuditPriseList(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrAuditPriseList *FrAuditPriseList;
extern char flAuditPriseList;
//---------------------------------------------------------------------------
#endif
