//---------------------------------------------------------------------------

#ifndef ControlEditProduceH
#define ControlEditProduceH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "cxControls.hpp"
#include "cxCustomData.hpp"
#include "cxDBTL.hpp"
#include "cxGraphics.hpp"
#include "cxInplaceContainer.hpp"
#include "cxMaskEdit.hpp"
#include "cxStyles.hpp"
#include "cxTL.hpp"
#include "cxTLData.hpp"
#include "RzButton.hpp"
#include "RzEdit.hpp"
#include "RzLabel.hpp"
#include "RzPanel.hpp"
#include "RzPrgres.hpp"
#include "RzRadChk.hpp"
#include "RzSplit.hpp"
#include <ADODB.hpp>
#include <DB.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <ImgList.hpp>
#include <Mask.hpp>
#include "cxImageComboBox.hpp"
#include "cxCalendar.hpp"
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
class TFrControlEditProduce : public TForm
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
	TRzPanel *RzPanel3;
	TRzPanel *RzPanel4;
	TRzToolButton *RzToolButton1;
	TRzToolButton *RzToolButton2;
	TRzSpacer *RzSpacer3;
	TRzSpacer *RzSpacer4;
	TRzSpacer *RzSpacer1;
	TRzSpacer *RzSpacer9;
	TRzBitBtn *RzBitBtn1;
	TRzBitBtn *RzBitBtn2;
	TRzBitBtn *RzBitBtn3;
	TRzBitBtn *RzBitBtn4;
	TRzSplitter *RzSplitter1;
	TRzPanel *RzPanel5;
	TRzToolButton *RzToolButton3;
	TRzToolButton *RzToolButton4;
	TRzSpacer *RzSpacer2;
	TRzSpacer *RzSpacer7;
	TRzSpacer *RzSpacer8;
	TRzBitBtn *RzBitBtn8;
	TRzBitBtn *RzBitBtn5;
	TRzPanel *RzPanel300;
	TRzLabel *RzLabel10;
	TImage *Image1;
	TRzLabel *Clock;
	TRzProgressBar *RzProgressBar1;
	TRzProgressBar *RzProgressBar2;
	TImageList *ImageList1;
	TTimer *TmProduce;
	TImageList *ImageList2;
	TcxStyleRepository *cxStyleRepository1;
	TcxStyle *cxStyle1;
	TcxStyleRepository *cxStyleRepository2;
	TcxStyle *cxStyle2;
	TDataSource *DSControl;
	TADOQuery *QControl;
	TcxDBTreeList *tlRaspDetail;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn3;
	TcxDBTreeListColumn *tlRaspDetailiText;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn2;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn1;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn4;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn5;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn6;
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
	TDataSource *DSProduce;
	TcxDBTreeList *cxDBTreeList1;
	TcxDBTreeListColumn *cxDBTreeListColumn1;
	TcxDBTreeListColumn *cxDBTreeListColumn2;
	TcxDBTreeListColumn *cxDBTreeListColumn3;
	TcxDBTreeListColumn *cxDBTreeListColumn5;
	TcxDBTreeListColumn *cxDBTreeListColumn7;
	TIntegerField *QControlidn;
	TIntegerField *QControlidnP;
	TIntegerField *QControlId512NameCatalog;
	TIntegerField *QControlid512Name;
	TIntegerField *QControlIdAdvCond;
	TIntegerField *QControlIdAdvPriseList;
	TIntegerField *QControlId24TypeName;
	TStringField *QControlCodeB;
	TIntegerField *QControliType;
	TIntegerField *QControlGrantBits;
	TDateTimeField *QControlDateIns;
	TIntegerField *QControlIdIns;
	TDateTimeField *QControlDateMod;
	TIntegerField *QControlIdMod;
	TDateTimeField *QControlDateDel;
	TIntegerField *QControlIdDel;
	TIntegerField *QControlidnOld;
	TWideStringField *QControlISSN;
	TIntegerField *QControlsrcActual;
	TDateTimeField *QControlDateLastExport;
	TIntegerField *QControlIdnOldImport;
	TIntegerField *QControlIdnDO_PI;
	TStringField *QControliText;
	TStringField *QControliText_1;
	TRzRadioButton *RzRadioButton2;
	TRzRadioButton *RzRadioButton1;
	TcxDBTreeListColumn *cxDBTreeList1cxDBTreeListColumn1;
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall RzToolButton1Click(TObject *Sender);
	void __fastcall RzToolButton2Click(TObject *Sender);
	void __fastcall RzBitBtn4Click(TObject *Sender);
	void __fastcall RzBitBtn8Click(TObject *Sender);
	void __fastcall RzBitBtn5Click(TObject *Sender);
	void __fastcall cxDBTreeList1CustomDrawDataCell(TcxCustomTreeList *Sender, TcxCanvas *ACanvas,
          TcxTreeListEditCellViewInfo *AViewInfo, bool &ADone);
	void __fastcall tlRaspDetailGetNodeImageIndex(TcxCustomTreeList *Sender, TcxTreeListNode *ANode,
          TcxTreeListImageIndexType AIndexType, Uitypes::TImageIndex &AIndex);
	void __fastcall cxDBTreeList1GetNodeImageIndex(TcxCustomTreeList *Sender, TcxTreeListNode *ANode,
          TcxTreeListImageIndexType AIndexType, Uitypes::TImageIndex &AIndex);


private:	// User declarations
 TLocateOptions Opts;
 Variant locvalues[1];
public:		// User declarations
	__fastcall TFrControlEditProduce(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrControlEditProduce *FrControlEditProduce;
extern char flFrControlEditProduce;
//---------------------------------------------------------------------------
#endif
