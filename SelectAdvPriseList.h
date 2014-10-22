//---------------------------------------------------------------------------

#ifndef SelectAdvPriseListH
#define SelectAdvPriseListH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzEdit.hpp"
#include "RzPanel.hpp"
#include "cxControls.hpp"
#include "cxCustomData.hpp"
#include "cxDBTL.hpp"
#include "cxGraphics.hpp"
#include "cxInplaceContainer.hpp"
#include "cxMaskEdit.hpp"
#include "cxStyles.hpp"
#include "cxTL.hpp"
#include "cxTLData.hpp"
#include <ADODB.hpp>
#include <DB.hpp>
#include <ExtCtrls.hpp>
#include <ImgList.hpp>
#include <Mask.hpp>
#include "cxClasses.hpp"
#include "cxCurrencyEdit.hpp"
#include "cxData.hpp"
#include "cxDataStorage.hpp"
#include "cxDBData.hpp"
#include "cxEdit.hpp"
#include "cxFilter.hpp"
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
#include "dxSkinsCore.hpp"
#include "dxSkinscxPCPainter.hpp"
#include "dxSkinsDefaultPainters.hpp"
#include "RzRadChk.hpp"
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
class TFrSelectAdvPriseList : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzToolButton *btInsNE;
	TRzSpacer *RzSpacer5;
	TRzToolButton *btClose;
	TRzSpacer *RzSpacer6;
	TImageList *ImageList1;
	TcxStyleRepository *cxStyleRepository2;
	TcxStyle *cxStyle2;
	TcxStyleRepository *cxStyleRepository1;
	TcxStyle *cxStyle1;
	TRzPanel *RzPanel3;
	TRzPanel *RzPanel2;
	TRzGroupBox *RzGroupBox1;
	TRzEdit *edProduce;
	TTimer *TmProduce;
	TDataSource *DSSelectNE;
	TImageList *ImageList2;
	TADOQuery *QSelectNE;
	TIntegerField *QSelectNEIdn;
	TWideStringField *QSelectNEItemName;
	TAutoIncField *QSelectNEIdnProduce;
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
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Idn;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1ItemName;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1iYear;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1IdnProduce;
	TSmallintField *QSelectNEiYear;
	TSmallintField *QSelectNENumber;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Column1;
	TRzGroupBox *RzGroupBox2;
	TRzRadioButton *rbInProduce;
	TRzRadioButton *rbOutProduce;
	TADOQuery *QSelectNEOut;
	TIntegerField *QSelectNEOutIdn;
	TWideStringField *QSelectNEOutItemName;
	TSmallintField *QSelectNEOutiYear;
	TIntegerField *QSelectNEOutIdnProduce;
	TSmallintField *QSelectNEOutNumber;
	TRzRadioButton *rbOutProduceNDS;
	TRzRadioButton *rbOutProduceNDSyear;
	TRzSpacer *RzSpacer1;
	TRzLabel *RzLabel9;
	TADOQuery *QOutProduceNDS;
	TIntegerField *IntegerField1;
	TWideStringField *WideStringField1;
	TSmallintField *SmallintField1;
	TIntegerField *IntegerField2;
	TSmallintField *SmallintField2;
	TADOQuery *QOutProduceNDSyear;
	TIntegerField *IntegerField3;
	TWideStringField *WideStringField2;
	TSmallintField *SmallintField3;
	TIntegerField *IntegerField4;
	TSmallintField *SmallintField4;
	TRzPanel *RzPanel4;
	TRzLabel *lbNameProduce;
	TBCDField *QSelectNENDS;
	TWideStringField *QSelectNEItemId;
	TBCDField *QSelectNEOutNDS;
	TWideStringField *QSelectNEOutItemId;
	TBCDField *QOutProduceNDSNDS;
	TWideStringField *QOutProduceNDSItemId;
	TBCDField *QOutProduceNDSyearNDS;
	TWideStringField *QOutProduceNDSyearItemId;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Column2;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Column3;
	TADOQuery *QChekNDS;
	TRzRadioButton *rbGetNE;
	TADOQuery *QGetNE;
	TIntegerField *IntegerField5;
	TWideStringField *WideStringField3;
	TSmallintField *SmallintField5;
	TAutoIncField *AutoIncField1;
	TSmallintField *SmallintField6;
	TBCDField *BCDField1;
	TWideStringField *WideStringField4;
	TRzPanel *RzPanel6;
	TRzLabel *RzLabel2;
	TRzSpacer *RzSpacer2;
	TRzLabel *RzLabel1;
	TADOQuery *QSelectAll;
	TIntegerField *IntegerField6;
	TWideStringField *WideStringField5;
	TSmallintField *SmallintField7;
	TAutoIncField *AutoIncField2;
	TSmallintField *SmallintField8;
	TBCDField *BCDField2;
	TWideStringField *WideStringField6;
	TRzRadioButton *rbAll;
	TStringField *QSelectNEOutProduce;
	TStringField *QOutProduceNDSProduce;
	TStringField *QOutProduceNDSyearProduce;
	TStringField *QSelectAllProduce;
	TStringField *QGetNEProduce;
	TStringField *QSelectNEProduce;
	TcxGridDBBandedColumn *cxGridDBBandedTableView1Column4;
	TRzLabel *RzLabel3;
	TADOQuery *AxNEQuer;
	TWideStringField *AxNEQuerItemId;
	TWideStringField *AxNEQuerItemName;
	TStringField *AxNEQuersrc;
	TIntegerField *AxNEQuersrc_1;
	void __fastcall TmProduceTimer(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall cxGridDBBandedTableView1SelectionChanged(
          TcxCustomGridTableView *Sender);
	void __fastcall btInsNEClick(TObject *Sender);
	void __fastcall edProduceChange(TObject *Sender);
	void __fastcall rbInProduceClick(TObject *Sender);
	void __fastcall rbOutProduceClick(TObject *Sender);
	void __fastcall rbAllClick(TObject *Sender);
	void __fastcall cxGridDBBandedTableView1DblClick(TObject *Sender);
private:	// User declarations
int StrCol,StrCol2;
public:		// User declarations
	__fastcall TFrSelectAdvPriseList(TComponent* Owner);
	int viIdnProduce;//Idn продукта ПИ.
	AnsiString StrID;//Набор выбранных строк(Idn)
	int viYear; //Год
	int viSrc; //Код Юр.Лица(ЗАО,НОУ)
	Currency vcNDS, vcNDSNew; //НДС входное значение и выходное
};
//---------------------------------------------------------------------------
extern PACKAGE TFrSelectAdvPriseList *FrSelectAdvPriseList;
//---------------------------------------------------------------------------
#endif
