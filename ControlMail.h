//---------------------------------------------------------------------------

#ifndef ControlMailH
#define ControlMailH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzLabel.hpp"
#include "RzLstBox.hpp"
#include "RzPanel.hpp"
#include <ExtCtrls.hpp>
#include <ImgList.hpp>
//---------------------------------------------------------------------------
class TFrControlMail : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzToolButton *btClose;
	TRzSpacer *RzSpacer6;
	TImageList *ImageList1;
	TRzLabel *RzLabel2;
	TRzListBox *RzCheckList3;
	TRzSpacer *RzSpacer1;
	TRzToolButton *RzToolButton2;
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
private:	// User declarations
public:		// User declarations
	__fastcall TFrControlMail(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrControlMail *FrControlMail;
//---------------------------------------------------------------------------
#endif
