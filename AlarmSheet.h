//---------------------------------------------------------------------------

#ifndef AlarmSheetH
#define AlarmSheetH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "RzButton.hpp"
#include "RzPanel.hpp"
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ImgList.hpp>
//---------------------------------------------------------------------------
class TFrAlarmSheet : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzToolButton *btInsRasp;
	TRzSpacer *RzSpacer5;
	TRzToolButton *btClose;
	TRzSpacer *RzSpacer6;
	TImageList *ImageList1;
	void __fastcall btCloseClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFrAlarmSheet(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrAlarmSheet *FrAlarmSheet;
//---------------------------------------------------------------------------
#endif
