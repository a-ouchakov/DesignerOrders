//---------------------------------------------------------------------------

#ifndef ManagerChiefSelectH
#define ManagerChiefSelectH
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
#include "dxmdaset.hpp"
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
#include "RzEdit.hpp"
#include <Vcl.Mask.hpp>
#include "cxNavigator.hpp"
//---------------------------------------------------------------------------
class TFRManagerChiefSelect : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel4;
	TRzToolButton *rztbOk;
	TRzSpacer *RzSpacer11;
	TRzToolButton *rztbCancel;
	TRzSpacer *RzSpacer1;
	TRzSpacer *RzSpacer2;
	TImageList *ImageList2;
	TADOQuery *Qtree;
	TDataSource *DStree;
	TdxMemData *MemTree;
	TcxGridDBTableView *cxGrid1DBTableView1;
	TcxGridLevel *cxGrid1Level1;
	TcxGrid *cxGrid1;
	TBooleanField *QtreeChecked;
	TAutoIncField *QtreeauId;
	TStringField *QtreeauLogUser;
	TStringField *QtreeauFamIO;
	TcxGridDBColumn *cxGrid1DBTableView1Checked;
	TcxGridDBColumn *cxGrid1DBTableView1auId;
	TcxGridDBColumn *cxGrid1DBTableView1auLogUser;
	TcxGridDBColumn *cxGrid1DBTableView1auFamIO;
	TRzPanel *RzPanel1;
	TRzEdit *SeekEdit;
	void __fastcall rztbOkClick(TObject *Sender);
	void __fastcall rztbCancelClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Refresh(void);
	void __fastcall SeekEditKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall SeekEditChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFRManagerChiefSelect(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFRManagerChiefSelect *FRManagerChiefSelect;
//---------------------------------------------------------------------------
#endif
