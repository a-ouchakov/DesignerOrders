//---------------------------------------------------------------------------

#ifndef GetPIH
#define GetPIH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "RzButton.hpp"
#include "RzEdit.hpp"
#include "RzPanel.hpp"
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ImgList.hpp>
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
#include <DB.hpp>
#include <Data.Win.ADODB.hpp>
#include "cxDBTL.hpp"
#include "cxInplaceContainer.hpp"
#include "cxMaskEdit.hpp"
#include "cxTL.hpp"
#include "cxTLData.hpp"
#include "cxTLdxBarBuiltInMenu.hpp"
#include "RzLabel.hpp"
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
class TFrGetPI : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzToolButton *btInsRasp;
	TRzSpacer *RzSpacer5;
	TRzToolButton *btClose;
	TRzSpacer *RzSpacer6;
	TRzPanel *RzPanel4;
	TRzGroupBox *RzGroupBox2;
	TRzPanel *RzPanel2;
	TADOQuery *QGetPI;
	TDataSource *DSGetPI;
	TRzGroupBox *RzGroupBox1;
	TRzMemo *RzMemo2;
	TRzGroupBox *RzGroupBox4;
	TRzMemo *RzMemo4;
	TRzBitBtn *btRefrsh;
	TcxDBTreeList *tlRaspDetail;
	TAutoIncField *QGetPIIdn;
	TIntegerField *QGetPIPIdn;
	TStringField *QGetPINameDetail;
	TBCDField *QGetPICostWithNDS;
	TBCDField *QGetPIProcNDS;
	TStringField *QGetPITextAdv;
	TStringField *QGetPIItemId;
	TStringField *QGetPINumbRaspName;
	TIntegerField *QGetPIIdGetPI;
	TcxDBTreeListColumn *tlRaspDetailNameDetail;
	TcxDBTreeListColumn *tlRaspDetailCostWithNDS;
	TcxDBTreeListColumn *tlRaspDetailProcNDS;
	TcxDBTreeListColumn *tlRaspDetailTextAdv;
	TcxDBTreeListColumn *tlRaspDetailItemId;
	TcxDBTreeListColumn *tlRaspDetailNumbRaspName;
	TIntegerField *QGetPIfType;
	TImageList *ImageList1;
	TRzGroupBox *RzGroupBox5;
	TRzMemo *RzMemo1;
	TRzGroupBox *RzGroupBox3;
	TRzMemo *RzMemo3;
	TStringField *QGetPICodeB;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn1;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn2;
	TRzLabel *lbHintAlert;
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall btInsRaspClick(TObject *Sender);
	void __fastcall btRefrshClick(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall tlRaspDetailDblClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFrGetPI(TComponent* Owner);
	int vIdRasp;
};
//---------------------------------------------------------------------------
extern PACKAGE TFrGetPI *FrGetPI;
//---------------------------------------------------------------------------
#endif
