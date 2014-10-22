//---------------------------------------------------------------------------

#ifndef InsertMailH
#define InsertMailH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzDBLbl.hpp"
#include "RzEdit.hpp"
#include "RzLabel.hpp"
#include "RzPanel.hpp"
#include <ExtCtrls.hpp>
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TFrInsertMail : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel3;
	TRzToolButton *RzToolButton3;
	TRzSpacer *RzSpacer4;
	TRzToolButton *RzToolButton4;
	TRzSpacer *RzSpacer6;
	TRzGroupBox *RzGroupBox6;
	TRzEdit *edMail;
	TRzLabel *lbInsertMail;
	TRzLabel *RzLabel1;
	void __fastcall RzToolButton3Click(TObject *Sender);
	void __fastcall RzToolButton4Click(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
private:	// User declarations
public:		// User declarations
	__fastcall TFrInsertMail(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrInsertMail *FrInsertMail;
//---------------------------------------------------------------------------
#endif
