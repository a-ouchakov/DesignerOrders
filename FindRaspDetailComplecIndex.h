//---------------------------------------------------------------------------

#ifndef FindRaspDetailComplecIndexH
#define FindRaspDetailComplecIndexH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzPanel.hpp"
#include <ExtCtrls.hpp>
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
#include "RzEdit.hpp"
#include <ADODB.hpp>
#include <DB.hpp>
#include <Mask.hpp>
#include "cxDBTL.hpp"
#include "cxInplaceContainer.hpp"
#include "cxMaskEdit.hpp"
#include "cxTL.hpp"
#include "cxTLData.hpp"
#include <ImgList.hpp>
#include "cxCalendar.hpp"
#include "cxLookAndFeelPainters.hpp"
#include "cxLookAndFeels.hpp"
#include "cxTLdxBarBuiltInMenu.hpp"
#include "dxSkinsCore.hpp"
#include "dxSkinsDefaultPainters.hpp"
#include "cxCheckComboBox.hpp"
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
class TFrFindRaspDetailComplecIndex : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzPanel *RzPanel2;
	TcxDBTreeList *tlRaspDetailIndex;
	TRzPanel *RzPanel3;
	TRzToolButton *RzToolButton1;
	TRzToolButton *RzToolButton2;
	TRzSpacer *RzSpacer3;
	TRzSpacer *RzSpacer4;
	TRzSpacer *RzSpacer5;
	TTimer *TmIndex;
	TDataSource *DSIndex;
	TADOQuery *QIndex;
	TImageList *ImageList1;
	TIntegerField *QIndexIdn;
	TIntegerField *QIndexPIdn;
	TStringField *QIndexNameRaspDetail;
	TIntegerField *QIndexfType;
	TcxDBTreeListColumn *tlRaspDetailIndexNameRaspDetail;
	TBCDField *QIndexCostWithNDS;
	TcxDBTreeListColumn *tlRaspDetailIndexCostWithNDS;
	TRzGroupBox *RzGroupBoxMenedger1;
	TRzToolButton *btClose;
	TRzToolButton *btGiveIndex;
	TRzSpacer *RzSpacer8;
	TRzSpacer *RzSpacer1;
	TRzToolButton *btDoubleIndex;
	TRzSpacer *RzSpacer6;
	TRzGroupBox *RzGroupBox1;
	TRzEdit *edIndex;
	TBCDField *QIndexCostWithoutNDS;
	TcxDBTreeListColumn *tlRaspDetailIndexCostWithoutNDS;
	TRzSpacer *RzSpacer2;
	TTimer *TmIndexChange;
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall btGiveIndexClick(TObject *Sender);
	void __fastcall RzToolButton1Click(TObject *Sender);
	void __fastcall RzToolButton2Click(TObject *Sender);
	void __fastcall edIndexChange(TObject *Sender);
	void __fastcall TmIndexTimer(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall btDoubleIndexClick(TObject *Sender);
	void __fastcall TmIndexChangeTimer(TObject *Sender);
	void __fastcall DSIndexDataChange(TObject *Sender, TField *Field);
private:	// User declarations
public:		// User declarations
	__fastcall TFrFindRaspDetailComplecIndex(TComponent* Owner);
		bool fOkButton;//Флаг выбора ПИ для переноса в комплект
		bool fDoubleButton;//Флаг выбора ПИ для копирования

};
//---------------------------------------------------------------------------
extern PACKAGE TFrFindRaspDetailComplecIndex *FrFindRaspDetailComplecIndex;
//---------------------------------------------------------------------------
#endif
