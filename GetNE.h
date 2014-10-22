//---------------------------------------------------------------------------

#ifndef GetNEH
#define GetNEH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
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
#include "RzButton.hpp"
#include "RzPanel.hpp"
#include <Data.Win.ADODB.hpp>
#include <DB.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ImgList.hpp>
#include "cxButtonEdit.hpp"
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
class TFrGetNE : public TForm
{
__published:	// IDE-managed Components
	TImageList *ImageList1;
	TRzPanel *RzPanel1;
	TRzToolButton *btInsRasp;
	TRzSpacer *RzSpacer5;
	TRzToolButton *btClose;
	TRzSpacer *RzSpacer6;
	TcxGrid *cxGridEmplUser;
	TcxGridDBColumn *cxGridDBColumn1;
	TcxGridDBColumn *cxGridDBColumn2;
	TcxGridDBColumn *cxGridDBColumn3;
	TcxGridDBColumn *cxGridDBColumn4;
	TcxGridDBColumn *cxGridDBColumn5;
	TcxGridDBColumn *cxGridDBColumn6;
	TcxGridDBColumn *cxGridDBColumn7;
	TcxGridDBColumn *cxGridDBColumn8;
	TcxGridDBBandedTableView *cxGridTableViewEmplUser;
	TcxGridLevel *cxGridLevel1;
	TRzPanel *RzPanel2;
	TRzSpacer *RzSpacer72;
	TRzToolButton *btPost;
	TRzSpacer *RzSpacer48;
	TRzToolButton *btAdd;
	TRzSpacer *RzSpacer49;
	TRzToolButton *btDel;
	TRzSpacer *RzSpacer71;
	TRzToolButton *btRefresh;
	TRzSpacer *RzSpacer75;
	TDataSource *DSNE;
	TADOQuery *QNE;
	TAutoIncField *QNEIdn;
	TIntegerField *QNEPIdn;
	TIntegerField *QNEidRasp;
	TIntegerField *QNEidAdvProduceClass;
	TStringField *QNENameRaspDetail;
	TIntegerField *QNENumbNE;
	TIntegerField *QNEYear;
	TIntegerField *QNEfAdv;
	TIntegerField *QNEfType;
	TIntegerField *QNEIdIns;
	TStringField *QNENameRaspDetail_1;
	TIntegerField *QNENumbNE_1;
	TIntegerField *QNEYear_1;
	TIntegerField *QNEfAdv_1;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserIdn;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserPIdn;
	TcxGridDBBandedColumn *cxGridTableViewEmplUseridRasp;
	TcxGridDBBandedColumn *cxGridTableViewEmplUseridAdvProduceClass;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserNameRaspDetail;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserNumbNE;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserYear;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserfType;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserIdIns;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserNameRaspDetail_1;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserNumbNE_1;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserYear_1;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserColumn1;
	TADOQuery *Qw;
	void __fastcall btRefreshClick(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall btInsRaspClick(TObject *Sender);
	void __fastcall cxGridTableViewEmplUserColumn1PropertiesButtonClick(TObject *Sender,
          int AButtonIndex);
	void __fastcall btDelClick(TObject *Sender);
private:	// User declarations
    AnsiString vsSQLQw;
public:		// User declarations
	int viIdnDetail;  //Код изменяемого ПИ
	int viIdnProduce;//Idn продукта ПИ.
	int viSrc; //Код Юр.Лица(ЗАО,НОУ)
	Currency vcNDS; //НДС
	__fastcall TFrGetNE(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrGetNE *FrGetNE;
//---------------------------------------------------------------------------
#endif
