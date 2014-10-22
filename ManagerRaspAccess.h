//---------------------------------------------------------------------------

#ifndef ManagerRaspAccessH
#define ManagerRaspAccessH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "RzButton.hpp"
#include "RzPanel.hpp"
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ImgList.hpp>
#include "cxCheckBox.hpp"
#include "cxControls.hpp"
#include "cxCustomData.hpp"
#include "cxDBTL.hpp"
#include "cxGraphics.hpp"
#include "cxInplaceContainer.hpp"
#include "cxLookAndFeelPainters.hpp"
#include "cxLookAndFeels.hpp"
#include "cxMaskEdit.hpp"
#include "cxStyles.hpp"
#include "cxTextEdit.hpp"
#include "cxTL.hpp"
#include "cxTLData.hpp"
#include "cxTLdxBarBuiltInMenu.hpp"
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
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
#include "cxClasses.hpp"
#include "cxData.hpp"
#include "cxDataStorage.hpp"
#include "cxDBData.hpp"
#include "cxEdit.hpp"
#include "cxFilter.hpp"
#include "cxGrid.hpp"
#include "cxGridCustomTableView.hpp"
#include "cxGridCustomView.hpp"
#include "cxGridDBTableView.hpp"
#include "cxGridLevel.hpp"
#include "cxGridTableView.hpp"
#include "dxSkinscxPCPainter.hpp"
#include "RzRadChk.hpp"
#include "cxNavigator.hpp"
//---------------------------------------------------------------------------
class TFRManagerRaspAccess : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel4;
	TRzToolButton *rztbOk;
	TRzSpacer *RzSpacer11;
	TRzSpacer *RzSpacer1;
	TImageList *ImageList2;
	TADOQuery *Q1;
	TDataSource *DS1;
	TRzPanel *RzPanel1;
	TRzSpacer *RzSpacer2;
	TRzSpacer *RzSpacer3;
	TRzSpacer *RzSpacer4;
	TRzToolButton *rztbDelete;
	TRzSpacer *RzSpacer5;
	TRzToolButton *rztbAdd;
	TRzSpacer *RzSpacer6;
	TRzCheckBox *cbShowDel;
	TcxGridDBTableView *cxGrid1DBTableView1;
	TcxGridLevel *cxGrid1Level1;
	TcxGrid *cxGrid1;
	TAutoIncField *Q1idn;
	TStringField *Q1auFamIO;
	TDateTimeField *Q1DateIns;
	TStringField *Q1auFamIOIns;
	TDateTimeField *Q1DateDel;
	TStringField *Q1auFamIODel;
	TcxGridDBColumn *cxGrid1DBTableView1idn;
	TcxGridDBColumn *cxGrid1DBTableView1auFamIO;
	TcxGridDBColumn *cxGrid1DBTableView1DateIns;
	TcxGridDBColumn *cxGrid1DBTableView1auFamIOIns;
	TcxGridDBColumn *cxGrid1DBTableView1DateDel;
	TcxGridDBColumn *cxGrid1DBTableView1auFamIODel;
	TRzSpacer *RzSpacer7;
	TRzToolButton *rztbRefresh;
	TADOQuery *Qw;
	TcxStyleRepository *cxStyleRepository1;
	TcxStyle *cxStyle1;
	TcxGridDBColumn *cxGrid1DBTableView1Column1;
	void __fastcall rztbOkClick(TObject *Sender);
	void __fastcall rztbCancelClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall rztbAddClick(TObject *Sender);
	void __fastcall cbShowDelClick(TObject *Sender);
	void __fastcall rztbRefreshClick(TObject *Sender);
	void __fastcall Refresh(void);
	void __fastcall rztbDeleteClick(TObject *Sender);
	void __fastcall cxGrid1DBTableView1CustomDrawCell(TcxCustomGridTableView *Sender,
          TcxCanvas *ACanvas, TcxGridTableDataCellViewInfo *AViewInfo,
          bool &ADone);
private:	// User declarations
public:		// User declarations
	int idManager;
	int idRasp;
	__fastcall TFRManagerRaspAccess(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFRManagerRaspAccess *FRManagerRaspAccess;
//---------------------------------------------------------------------------
#endif
