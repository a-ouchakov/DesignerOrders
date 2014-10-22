//---------------------------------------------------------------------------

#ifndef EditProduceH
#define EditProduceH
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
#include "cxImageComboBox.hpp"
#include "cxClasses.hpp"
#include "cxLookAndFeelPainters.hpp"
#include "cxLookAndFeels.hpp"
#include "cxTLdxBarBuiltInMenu.hpp"
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
#include "cxCalendar.hpp"
#include "dxSkinMetropolis.hpp"
#include "dxSkinMetropolisDark.hpp"
#include "dxSkinOffice2013DarkGray.hpp"
#include "dxSkinOffice2013LightGray.hpp"
#include "dxSkinOffice2013White.hpp"
//---------------------------------------------------------------------------
class TFrEditProduce : public TForm
{
__published:	// IDE-managed Components
	TImageList *ImageList1;
	TRzPanel *RzPanel1;
	TRzToolButton *btInsRasp;
	TRzSpacer *RzSpacer5;
	TRzToolButton *btClose;
	TRzSpacer *RzSpacer6;
	TRzPanel *RzPanel2;
	TRzGroupBox *RzGroupBox1;
	TRzEdit *edProduce;
	TRzPanel *RzPanel3;
	TcxDBTreeList *tlRaspDetail;
	TcxDBTreeListColumn *tlRaspDetailiText;
	TRzPanel *RzPanel4;
	TRzToolButton *RzToolButton1;
	TRzToolButton *RzToolButton2;
	TRzSpacer *RzSpacer3;
	TRzSpacer *RzSpacer4;
	TRzSpacer *RzSpacer1;
	TTimer *TmProduce;
	TDataSource *DSProduce;
	TADOQuery *QProduce;
	TIntegerField *QProduceidn;
	TIntegerField *QProduceidnP;
	TStringField *QProduceiText;
	TIntegerField *QProduceiType;
	TImageList *ImageList2;
	TcxStyleRepository *cxStyleRepository1;
	TcxStyle *cxStyle1;
	TRzBitBtn *RzBitBtn1;
	TRzBitBtn *RzBitBtn2;
	TRzBitBtn *RzBitBtn3;
	TADOQuery *Qw;
	TIntegerField *QProduceIdIns;
	TStringField *QProduceauFamIO;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn1;
	TWideStringField *QProduceISSN;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn2;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn3;
	TcxStyleRepository *cxStyleRepository2;
	TcxStyle *cxStyle2;
	TStringField *QProduceCodeB;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn4;
	TIntegerField *QProducefActual;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn5;
	TIntegerField *QProduceId24TypeName;
	TStringField *QProduceTypeName;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn6;
	TCheckBox *CheckBox1;
	TcxDBTreeListColumn *tlRaspDetailcxDBTreeListColumn7;
	TDateTimeField *QProduceDateIns;
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall btInsRaspClick(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall TmProduceTimer(TObject *Sender);
	void __fastcall edProduceChange(TObject *Sender);
	void __fastcall RzToolButton1Click(TObject *Sender);
	void __fastcall RzToolButton2Click(TObject *Sender);
	void __fastcall RzBitBtn3Click(TObject *Sender);
	void __fastcall RzBitBtn2Click(TObject *Sender);
	void __fastcall RzBitBtn1Click(TObject *Sender);
	bool __fastcall GetPerm(int IdIns);
	void __fastcall tlRaspDetailDblClick(TObject *Sender);
	void __fastcall CheckBox1Click(TObject *Sender);
	void __fastcall tlRaspDetailCustomDrawDataCell(TcxCustomTreeList *Sender, TcxCanvas *ACanvas,
          TcxTreeListEditCellViewInfo *AViewInfo, bool &ADone);
	void __fastcall tlRaspDetailGetNodeImageIndex(TcxCustomTreeList *Sender, TcxTreeListNode *ANode,
          TcxTreeListImageIndexType AIndexType, Uitypes::TImageIndex &AIndex);
          //Есть ли права на изменение записи
private:	// User declarations
 TLocateOptions Opts;
 Variant locvalues[1];
 bool fDel; // Флаг того, что таймеру работать как после удаления    false-не Удаление, true-Удаление
public:		// User declarations
	__fastcall TFrEditProduce(TComponent* Owner);
	int viIdnProduce; //Код продукта
	};
//---------------------------------------------------------------------------
extern PACKAGE TFrEditProduce *FrEditProduce;
extern char flFrEditProduce;
//---------------------------------------------------------------------------
//extern bool flUserSAP;                
#endif
