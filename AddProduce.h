//---------------------------------------------------------------------------

#ifndef AddProduceH
#define AddProduceH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzPanel.hpp"
#include <ExtCtrls.hpp>
#include "cxControls.hpp"
#include "cxCustomData.hpp"
#include "cxDBTL.hpp"
#include "cxGraphics.hpp"
#include "cxInplaceContainer.hpp"
#include "cxMaskEdit.hpp"
#include "cxStyles.hpp"
#include "cxTL.hpp"
#include "cxTLData.hpp"
#include "RzEdit.hpp"
#include <ADODB.hpp>
#include <DB.hpp>
#include <Mask.hpp>
#include <ImgList.hpp>
#include "RzCmboBx.hpp"
#include "RzSplit.hpp"
#include "RzLabel.hpp"
//---------------------------------------------------------------------------
class TFrAddProduce : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzToolButton *btInsRaspDetail;
	TRzSpacer *RzSpacer5;
	TRzToolButton *btClose;
	TRzSpacer *RzSpacer6;
	TTimer *TmProduce;
	TDataSource *DSProduce;
	TADOQuery *QProduce;
	TIntegerField *QProduceidn;
	TIntegerField *QProduceidnP;
	TStringField *QProduceiText;
	TIntegerField *QProduceiType;
	TADOQuery *Qw;
	TRzPanel *RzPanel6;
	TRzGroupBox *RzGroupBox8;
	TRzComboBox *cbTypeName;
	TRzGroupBox *RzGroupBox6;
	TRzEdit *edCodeB;
	TRzPanel *RzPanel4;
	TRzPanel *RzPanel2;
	TRzGroupBox *RzGroupBox2;
	TRzComboBox *cbRazdel;
	TRzGroupBox *RzGroupBox7;
	TRzEdit *edT512Name;
	void __fastcall btInsRaspDetailClick(TObject *Sender);
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
private:	// User declarations
	AnsiString vsSQLQw;
public:		// User declarations
	__fastcall TFrAddProduce(TComponent* Owner);
	int viIdnProduce;     //Idn Продукции
};
//---------------------------------------------------------------------------
extern PACKAGE TFrAddProduce *FrAddProduce;
//---------------------------------------------------------------------------
#endif
