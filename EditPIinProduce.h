//---------------------------------------------------------------------------

#ifndef EditPIinProduceH
#define EditPIinProduceH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzPanel.hpp"
#include <ExtCtrls.hpp>
#include <ImgList.hpp>
#include "RzCmboBx.hpp"
#include "RzEdit.hpp"
#include <ADODB.hpp>
#include <DB.hpp>
//---------------------------------------------------------------------------
class TFrEditPIinProduce : public TForm
{
__published:	// IDE-managed Components
	TImageList *ImageList1;
	TRzPanel *RzPanel1;
	TRzToolButton *btInsRasp;
	TRzSpacer *RzSpacer5;
	TRzToolButton *btClose;
	TRzSpacer *RzSpacer6;
	TRzGroupBox *RzGroupBox6;
	TRzComboBox *cbTypeName;
	TRzGroupBox *RzGroupBox1;
	TRzGroupBox *RzGroupBox7;
	TRzMemo *meIndex;
	TADOQuery *Qw;
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall btInsRaspClick(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
private:	// User declarations
public:		// User declarations
	__fastcall TFrEditPIinProduce(TComponent* Owner);
	int viIdnProduce;     //Idn Продукции
};
//---------------------------------------------------------------------------
extern PACKAGE TFrEditPIinProduce *FrEditPIinProduce;
//---------------------------------------------------------------------------
#endif
