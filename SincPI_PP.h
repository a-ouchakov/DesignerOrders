//---------------------------------------------------------------------------

#ifndef SincPI_PPH
#define SincPI_PPH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzPanel.hpp"
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
#include "cxImageComboBox.hpp"
#include "RzEdit.hpp"
#include <Mask.hpp>
#include "cxButtonEdit.hpp"
#include "RzSplit.hpp"
#include "RzLabel.hpp"
#include "RzCmboBx.hpp"
#include <Menus.hpp>
#include <Graphics.hpp>
#include <ExtCtrls.hpp>
#include "RzPrgres.hpp"
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
#include "cxDBTL.hpp"
#include "cxInplaceContainer.hpp"
#include "cxMaskEdit.hpp"
#include "cxTL.hpp"
#include "cxTLData.hpp"
#include "cxTLdxBarBuiltInMenu.hpp"
#include "cxCalendar.hpp"
#include "cxNavigator.hpp"
#include "dxSkinMetropolis.hpp"
#include "dxSkinMetropolisDark.hpp"
#include "dxSkinOffice2013DarkGray.hpp"
#include "dxSkinOffice2013LightGray.hpp"
#include "dxSkinOffice2013White.hpp"

//---------------------------------------------------------------------------
class TFrSincPI_PP : public TForm
{
__published:	// IDE-managed Components
	TImageList *ImageList1;
	TTimer *TmNE_DO;
	TADOQuery *QNE_DO;
	TDataSource *DSNE_DO;
	TTimer *TmNE_Axapta;
	TADOQuery *QNE_Axapta;
	TDataSource *DSNE_Axapta;
	TADOQuery *Qw;
	TRzSplitter *RzSplitter1;
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
	TcxGridLevel *cxGridLevel1;
	TRzPanel *RzPanel2;
	TRzPanel *RzPanel7;
	TRzToolButton *RzToolButton5;
	TRzSpacer *RzSpacer4;
	TRzToolButton *RzToolButton4;
	TRzSpacer *RzSpacer7;
	TRzPanel *RzPanel6;
	TRzPanel *RzPanel5;
	TcxStyleRepository *cxStyleRepository1;
	TcxStyle *cxStyle1;
	TRzGroupBox *RzGroupBox5;
	TRzEdit *edFind;
	TRzGridPanel *RzGridPanel1;
	TRzEdit *edFindAxapta;
	TRzLabel *RzLabel1;
	TRzBitBtn *RzBitBtn3;
	TRzBitBtn *RzBitBtn2;
	TRzBitBtn *RzBitBtn1;
	TPopupMenu *PopupMenu1;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *N3;
	TRzPanel *RzPanel300;
	TImage *Image1;
	TRzLabel *RzLabel10;
	TTimer *Timer1;
	TRzProgressBar *RzProgressBar1;
	TADOConnection *DM_JobConnect;
	TADOQuery *QDM_JobConnect;
	TRzProgressBar *RzProgressBar2;
	TADOQuery *Qw2;
	TcxStyle *cxStyle2;
	TcxStyle *cxStyle3;
	TRzLabel *Clock;
	TTimer *TmProduce;
	TDataSource *DSProduce;
	TADOQuery *QProduce;
	TIntegerField *QProduceidn;
	TIntegerField *QProduceidnP;
	TStringField *QProduceiText;
	TIntegerField *QProduceiType;
	TIntegerField *QProduceIdIns;
	TStringField *QProduceauFamIO;
	TWideStringField *QProduceISSN;
	TStringField *QProduceCodeB;
	TIntegerField *QProducefActual;
	TIntegerField *QProduceId24TypeName;
	TStringField *QProduceTypeName;
	TIntegerField *QProduceIdAdvCond;
	TIntegerField *QProduceIdAdvPriseList;
	TAutoIncField *QNE_AxaptaID;
	TStringField *QNE_AxaptaOFFER_ID;
	TMemoField *QNE_AxaptaNAME;
	TIntegerField *QNE_AxaptaPERIOD_ID;
	TStringField *QNE_AxaptaTARIFF_ID;
	TAutoIncField *QNE_AxaptaID_1;
	TStringField *QNE_AxaptaTARIFF_ID_1;
	TMemoField *QNE_AxaptaNAME_1;
	TStringField *QNE_AxaptaCONTENTBLOCK_ID;
	TStringField *QNE_AxaptaContentBlockId;
	TMemoField *QNE_AxaptaName_2;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1ID;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1OFFER_ID;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1NAME;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1PERIOD_ID;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1TARIFF_ID;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1ID_1;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1TARIFF_ID_1;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1NAME_1;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1CONTENTBLOCK_ID;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1ContentBlockId;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Name_2;
	TIntegerField *QNE_DOidn;
	TIntegerField *QNE_DOidAdvProduceClass;
	TIntegerField *QNE_DOIdAdvCond;
	TIntegerField *QNE_DOIdAdvPriseList;
	TIntegerField *QNE_DOidProductOffer;
	TIntegerField *QNE_DOIdIns;
	TDateTimeField *QNE_DODateIns;
	TIntegerField *QNE_DOIdDel;
	TDateTimeField *QNE_DODateDel;
	TMemoField *QNE_DONAME;
	TStringField *QNE_DOOFFER_ID;
	TRzSpacer *RzSpacer1;
	TBCDField *QProducePrice;
	TDateTimeField *QProduceDateFrom;
	TDateTimeField *QProduceDateTo;
	TcxStyle *cxStyle4;
	TcxStyle *cxStyle5;
	TIntegerField *QProduceFRasp;
	TRzLabel *RzLabel6;
	TRzComboBox *RzComboBox1;
	TRzSplitter *RzSplitter2;
	TcxGrid *cxGridEmplUserDol;
	TcxGridDBColumn *cxGridDBColumn9;
	TcxGridDBColumn *cxGridDBColumn10;
	TcxGridDBColumn *cxGridDBColumn11;
	TcxGridDBColumn *cxGridDBColumn12;
	TcxGridDBColumn *cxGridDBColumn13;
	TcxGridDBColumn *cxGridDBColumn14;
	TcxGridDBColumn *cxGridDBColumn15;
	TcxGridDBColumn *cxGridDBColumn16;
	TcxGridDBBandedTableView *cxGridTableViewEmplUser;
	TcxGridDBBandedColumn *cxGridTableViewEmplUseridn;
	TcxGridDBBandedColumn *cxGridTableViewEmplUseridAdvProduceClass;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserIdAdvCond;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserIdAdvPriseList;
	TcxGridDBBandedColumn *cxGridTableViewEmplUseridProductOffer;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserIdIns;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserDateIns;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserIdDel;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserDateDel;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserNAME;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserOFFER_ID;
	TcxGridLevel *cxGridLevel2;
	TcxDBTreeList *tlRaspDetail;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn3;
	TcxDBTreeListColumn *tlRaspDetailiText;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn11;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn2;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn1;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn5;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn4;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn6;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn7;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn8;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn9;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn10;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn12;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn13;
	TRzToolButton *RzToolButton1;
	TRzSpacer *RzSpacer2;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserColumn1;
	TIntegerField *QNE_AxaptaFRasp;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Column1;
	void __fastcall TmNE_DOTimer(TObject *Sender);
	void __fastcall TmNE_AxaptaTimer(TObject *Sender);
	void __fastcall edFindChange(TObject *Sender);
	void __fastcall RzToolButton5Click(TObject *Sender);
	void __fastcall RzToolButton4Click(TObject *Sender);
	void __fastcall edFindAxaptaChange(TObject *Sender);
	void __fastcall cxGridDBBandedColumn6PropertiesButtonClick(TObject *Sender,
          int AButtonIndex);
	void __fastcall edYearAxaptaChange(TObject *Sender);
	void __fastcall edNumbAxaptaChange(TObject *Sender);
	void __fastcall RzBitBtn3Click(TObject *Sender);
	void __fastcall RzBitBtn2Click(TObject *Sender);
	void __fastcall RzBitBtn1Click(TObject *Sender);
	void __fastcall cbId24ItemTypeChange(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall tlRaspDetailCustomDrawDataCell(TcxCustomTreeList *Sender, TcxCanvas *ACanvas,
          TcxTreeListEditCellViewInfo *AViewInfo, bool &ADone);
	void __fastcall TmProduceTimer(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall tlRaspDetailcxDBTreeListColumn11PropertiesButtonClick(TObject *Sender,
          int AButtonIndex);
	void __fastcall DSProduceDataChange(TObject *Sender, TField *Field);
	void __fastcall RzToolButton1Click(TObject *Sender);
	void __fastcall cxGridTableViewEmplUserColumn1PropertiesButtonClick(TObject *Sender,
          int AButtonIndex);

private:	// User declarations
 TLocateOptions Opts;
 Variant locvalues[1];
AnsiString  vsSQLQw;
AnsiString StrID;
int StrCol,StrCol2;
TClockThread *ClockThread;//Организация второго потока на время ожидания

public:		// User declarations
// int viIdn;
// int viIdnProduce; //Код продукта
 void __fastcall StartWorkFormTFrSincPI_PP();
	__fastcall TFrSincPI_PP(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrSincPI_PP *FrSincPI_PP;
extern char flFrSincPI_PP;
//---------------------------------------------------------------------------
#endif
