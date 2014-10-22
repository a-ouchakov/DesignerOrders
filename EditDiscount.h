//---------------------------------------------------------------------------

#ifndef EditDiscountH
#define EditDiscountH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzEdit.hpp"
#include "RzPanel.hpp"
#include <ExtCtrls.hpp>
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TFrEditDiscount : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzToolButton *btInsRaspDetail;
	TRzSpacer *RzSpacer5;
	TRzToolButton *btClose;
	TRzSpacer *RzSpacer6;
	TRzGroupBox *RzGroupBox1;
	TRzEdit *edIndex;
private:	// User declarations
public:		// User declarations
	__fastcall TFrEditDiscount(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrEditDiscount *FrEditDiscount;
//---------------------------------------------------------------------------
#endif
