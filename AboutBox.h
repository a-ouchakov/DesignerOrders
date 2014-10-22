//$$---- Form HDR ----
//---------------------------------------------------------------------------

#ifndef AboutBoxH
#define AboutBoxH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzEdit.hpp"
#include <ComCtrls.hpp>
#include "RzButton.hpp"
#include "RzDBEdit.hpp"
#include <DBCtrls.hpp>
//---------------------------------------------------------------------------
class TFrAboutBox : public TForm
{
__published:	// IDE-managed Components
	TRzButton *RzButton1;
	TRzMemo *Re1;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall RzButton1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFrAboutBox(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrAboutBox *FrAboutBox;
extern char   flAboutBox;
//---------------------------------------------------------------------------
#endif
