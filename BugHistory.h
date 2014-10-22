//---------------------------------------------------------------------------

#ifndef BugHistoryH
#define BugHistoryH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFrBugHistory : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TButton *ClosButt;
	TMemo *Memo1;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall ClosButtClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFrBugHistory(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrBugHistory *FrBugHistory;
extern char flBugHistory;
//---------------------------------------------------------------------------
#endif
