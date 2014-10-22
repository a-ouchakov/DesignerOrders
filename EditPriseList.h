//---------------------------------------------------------------------------

#ifndef EditPriseListH
#define EditPriseListH
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
#include "cxImageComboBox.hpp"
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
#include "cxCalendar.hpp"
#include "RzSplit.hpp"
#include "RzRadChk.hpp"
#include "RzLabel.hpp"
#include "RzPrgres.hpp"
#include <Graphics.hpp>
#include "cxClasses.hpp"
#include "cxLookAndFeelPainters.hpp"
#include "cxLookAndFeels.hpp"
#include "cxTLdxBarBuiltInMenu.hpp"
#include "dxSkinsCore.hpp"
#include "dxSkinsDefaultPainters.hpp"
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
#include "dxSkinMetropolis.hpp"
#include "dxSkinMetropolisDark.hpp"
#include "dxSkinOffice2013DarkGray.hpp"
#include "dxSkinOffice2013LightGray.hpp"
#include "dxSkinOffice2013White.hpp"
//---------------------------------------------------------------------------
class TFrEditPriseList : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzToolButton *btInsRasp;
	TRzSpacer *RzSpacer5;
	TRzToolButton *btClose;
	TRzSpacer *RzSpacer6;
	TRzPanel *RzPanel2;
	TRzGroupBox *RzGroupBox1;
	TRzEdit *edProduce;
	TImageList *ImageList1;
	TTimer *TmProduce;
	TDataSource *DSProduce;
	TADOQuery *QProduce;
	TImageList *ImageList2;
	TcxStyleRepository *cxStyleRepository1;
	TcxStyle *cxStyle1;
	TADOQuery *Qw1;
	TcxStyleRepository *cxStyleRepository2;
	TcxStyle *cxStyle2;
	TIntegerField *QProduceIdn;
	TIntegerField *QProducePIDn;
	TIntegerField *QProduceIdAdvanceConditions;
	TIntegerField *QProduceParentID;
	TIntegerField *QProduceIssuePriceID;
	TStringField *QProduceAdvCondCode;
	TStringField *QProduceIdAdvCondName;
	TStringField *QProduceAdvCondNameAlt;
	TStringField *QProduceAdvCondNote;
	TIntegerField *QProducesrc;
	TSmallintField *QProduceiYear;
	TBCDField *QProducePrice;
	TBCDField *QProduceNDS;
	TBCDField *QProduceSummaNDS;
	TBCDField *QProduceCalcPrice;
	TWordField *QProduceActual;
	TWordField *QProduceState;
	TDateTimeField *QProduceDateFrom;
	TDateTimeField *QProduceDateTo;
	TIntegerField *QProduceMergedCount;
	TWordField *QProduceiType;
	TIntegerField *QProduceiLevel;
	TIntegerField *QProduceColor;
	TIntegerField *QProduceCRC;
	TIntegerField *QProduceDeptsFlag;
	TDateTimeField *QProduceDateIns;
	TIntegerField *QProduceIdIns;
	TDateTimeField *QProduceDateMod;
	TIntegerField *QProduceIdMod;
	TDateTimeField *QProduceDateDel;
	TIntegerField *QProduceIdDel;
	TWordField *QProducefEnableDetal;
	TIntegerField *QProducefadv;
	TIntegerField *QProduceIdBuhDoc;
	TDateTimeField *QProduceDateImpSAP;
	TDataSource *DSControl;
	TADOQuery *QControl;
	TIntegerField *IntegerField1;
	TIntegerField *IntegerField2;
	TIntegerField *IntegerField3;
	TIntegerField *IntegerField4;
	TIntegerField *IntegerField5;
	TStringField *StringField1;
	TStringField *StringField2;
	TStringField *StringField3;
	TStringField *StringField4;
	TIntegerField *IntegerField6;
	TSmallintField *SmallintField1;
	TBCDField *BCDField1;
	TBCDField *BCDField2;
	TBCDField *BCDField3;
	TBCDField *BCDField4;
	TWordField *WordField1;
	TWordField *WordField2;
	TDateTimeField *DateTimeField1;
	TDateTimeField *DateTimeField2;
	TIntegerField *IntegerField7;
	TWordField *WordField3;
	TIntegerField *IntegerField8;
	TIntegerField *IntegerField9;
	TIntegerField *IntegerField10;
	TIntegerField *IntegerField11;
	TDateTimeField *DateTimeField3;
	TIntegerField *IntegerField12;
	TDateTimeField *DateTimeField4;
	TIntegerField *IntegerField13;
	TDateTimeField *DateTimeField5;
	TIntegerField *IntegerField14;
	TWordField *WordField4;
	TIntegerField *IntegerField15;
	TIntegerField *IntegerField16;
	TDateTimeField *DateTimeField6;
	TRzPanel *RzPanel3;
	TRzPanel *RzPanel4;
	TRzToolButton *RzToolButton1;
	TRzToolButton *RzToolButton2;
	TRzSpacer *RzSpacer3;
	TRzSpacer *RzSpacer4;
	TRzSpacer *RzSpacer1;
	TRzToolButton *RzToolButton5;
	TRzToolButton *RzToolButton6;
	TRzSpacer *RzSpacer9;
	TRzSpacer *RzSpacer10;
	TRzSpacer *RzSpacer11;
	TRzToolButton *RzToolButton7;
	TRzSpacer *RzSpacer12;
	TRzBitBtn *RzBitBtn1;
	TRzBitBtn *RzBitBtn2;
	TRzBitBtn *RzBitBtn3;
	TRzBitBtn *RzBitBtn4;
	TRzSplitter *RzSplitter1;
	TcxDBTreeList *tlRaspDetail;
	TcxDBTreeListColumn *tlRaspDetailIdn;
	TcxDBTreeListColumn *tlRaspDetailPIDn;
	TcxDBTreeListColumn *tlRaspDetailIdAdvanceConditions;
	TcxDBTreeListColumn *tlRaspDetailParentID;
	TcxDBTreeListColumn *tlRaspDetailIssuePriceID;
	TcxDBTreeListColumn *tlRaspDetailAdvCondCode;
	TcxDBTreeListColumn *tlRaspDetailIdAdvCondName;
	TcxDBTreeListColumn *tlRaspDetailAdvCondNameAlt;
	TcxDBTreeListColumn *tlRaspDetailAdvCondNote;
	TcxDBTreeListColumn *tlRaspDetailsrc;
	TcxDBTreeListColumn *tlRaspDetailiYear;
	TcxDBTreeListColumn *tlRaspDetailPrice;
	TcxDBTreeListColumn *tlRaspDetailNDS;
	TcxDBTreeListColumn *tlRaspDetailSummaNDS;
	TcxDBTreeListColumn *tlRaspDetailCalcPrice;
	TcxDBTreeListColumn *tlRaspDetailActual;
	TcxDBTreeListColumn *tlRaspDetailState;
	TcxDBTreeListColumn *tlRaspDetailDateFrom;
	TcxDBTreeListColumn *tlRaspDetailDateTo;
	TcxDBTreeListColumn *tlRaspDetailMergedCount;
	TcxDBTreeListColumn *tlRaspDetailiType;
	TRzPanel *RzPanel5;
	TRzToolButton *RzToolButton3;
	TRzToolButton *RzToolButton4;
	TRzSpacer *RzSpacer2;
	TRzSpacer *RzSpacer7;
	TRzSpacer *RzSpacer8;
	TRzBitBtn *RzBitBtn8;
	TRzBitBtn *RzBitBtn5;
	TRzRadioButton *RzRadioButton1;
	TRzRadioButton *RzRadioButton2;
	TcxDBTreeList *cxDBTreeList1;
	TcxDBTreeListColumn *cxDBTreeListColumn1;
	TcxDBTreeListColumn *cxDBTreeListColumn2;
	TcxDBTreeListColumn *cxDBTreeListColumn3;
	TcxDBTreeListColumn *cxDBTreeListColumn4;
	TcxDBTreeListColumn *cxDBTreeListColumn5;
	TcxDBTreeListColumn *cxDBTreeListColumn6;
	TcxDBTreeListColumn *cxDBTreeListColumn7;
	TcxDBTreeListColumn *cxDBTreeListColumn8;
	TcxDBTreeListColumn *cxDBTreeListColumn9;
	TcxDBTreeListColumn *cxDBTreeListColumn10;
	TcxDBTreeListColumn *cxDBTreeListColumn11;
	TcxDBTreeListColumn *cxDBTreeListColumn12;
	TcxDBTreeListColumn *cxDBTreeListColumn13;
	TcxDBTreeListColumn *cxDBTreeListColumn14;
	TcxDBTreeListColumn *cxDBTreeListColumn15;
	TcxDBTreeListColumn *cxDBTreeListColumn16;
	TcxDBTreeListColumn *cxDBTreeListColumn17;
	TcxDBTreeListColumn *cxDBTreeListColumn18;
	TcxDBTreeListColumn *cxDBTreeListColumn19;
	TcxDBTreeListColumn *cxDBTreeListColumn20;
	TcxDBTreeListColumn *cxDBTreeListColumn21;
	TADOQuery *Qw2;
	TADOQuery *Qw3;
	TRzPanel *RzPanel300;
	TRzLabel *RzLabel10;
	TImage *Image1;
	TRzLabel *Clock;
	TRzProgressBar *RzProgressBar1;
	TRzProgressBar *RzProgressBar2;
	TcxDBTreeListColumn *cxDBTreeList1cxDBTreeListColumn1;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn1;
	TADOQuery *QFindDoubleProduce;
	TADOQuery *Qw;
	TTimer *Timer1;
	TADOQuery *AuditQuer;
	TDateTimeField *AuditQuerStartJob;
	TDateTimeField *AuditQuerStopJob;
	TBooleanField *AuditQuerJobStatus;
	TBooleanField *AuditQuerJobResult;
	TWideStringField *AuditQuerRunBy;
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall RzBitBtn4Click(TObject *Sender);
	void __fastcall RzBitBtn8Click(TObject *Sender);
	void __fastcall RzBitBtn5Click(TObject *Sender);
	void __fastcall RzToolButton1Click(TObject *Sender);
	void __fastcall RzToolButton2Click(TObject *Sender);
	void __fastcall RzToolButton4Click(TObject *Sender);
	void __fastcall RzToolButton3Click(TObject *Sender);
	void __fastcall RzToolButton6Click(TObject *Sender);
	void __fastcall RzToolButton7Click(TObject *Sender);
	void __fastcall RzToolButton5Click(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall cxDBTreeList1CustomDrawDataCell(TcxCustomTreeList *Sender, TcxCanvas *ACanvas,
          TcxTreeListEditCellViewInfo *AViewInfo, bool &ADone);
	void __fastcall tlRaspDetailGetNodeImageIndex(TcxCustomTreeList *Sender, TcxTreeListNode *ANode,
          TcxTreeListImageIndexType AIndexType, Uitypes::TImageIndex &AIndex);
	void __fastcall cxDBTreeList1GetNodeImageIndex(TcxCustomTreeList *Sender, TcxTreeListNode *ANode,
          TcxTreeListImageIndexType AIndexType, Uitypes::TImageIndex &AIndex);
	void __fastcall tlRaspDetailCustomDrawDataCell(TcxCustomTreeList *Sender, TcxCanvas *ACanvas,
          TcxTreeListEditCellViewInfo *AViewInfo, bool &ADone);
	void __fastcall Timer1Timer(TObject *Sender);


private:	// User declarations
 TLocateOptions Opts;
 Variant locvalues[1];
 TClockThread *ClockThread;//ќрганизаци€ второго потока на врем€ ожидани€
public:		// User declarations
	__fastcall TFrEditPriseList(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrEditPriseList *FrEditPriseList;
extern char flFrEditPriseList;
//---------------------------------------------------------------------------
#endif
