//---------------------------------------------------------------------------

#ifndef HelpsTextH
#define HelpsTextH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzEdit.hpp"
#include <ImgList.hpp>
//---------------------------------------------------------------------------
class TFrHelpsText : public TForm
{
__published:	// IDE-managed Components
	TRzMemo *meIndex;
	TImageList *ImageList1;
	TRzBitBtn *RzBitBtn1;
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall RzBitBtn1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFrHelpsText(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrHelpsText *FrHelpsText;
//---------------------------------------------------------------------------
#endif
