//---------------------------------------------------------------------------

#ifndef CategoryNEH
#define CategoryNEH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "RzButton.hpp"
#include "RzPanel.hpp"
#include <Vcl.ExtCtrls.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TFrCategNE : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzToolButton *btNewCat;
	TRzToolButton *btClose;
	TEdit *TextEd;
	TLabel *Label1;
	TADOCommand *CatgComm;
    void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall btNewCatClick(TObject *Sender);
	void __fastcall TextEdExit(TObject *Sender);
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall TextEdKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
private:	// User declarations
    void NewGUID(void);
public:		// User declarations
	__fastcall TFrCategNE(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrCategNE *FrCategNE;
//---------------------------------------------------------------------------
#endif
