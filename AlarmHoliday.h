//---------------------------------------------------------------------------

#ifndef AlarmHolidayH
#define AlarmHolidayH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzLabel.hpp"
#include "RzPanel.hpp"
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFrAlarmHoliday : public TForm
{
__published:	// IDE-managed Components
	TRzLabel *lbAlarmHoliday;
	TRzPanel *RzPanel3;
	TRzToolButton *RzToolButton3;
	TRzSpacer *RzSpacer4;
	TRzToolButton *RzToolButton4;
	TRzSpacer *RzSpacer6;
	TRzToolButton *RzToolButton1;
	TRzSpacer *RzSpacer1;
	void __fastcall RzToolButton3Click(TObject *Sender);
	void __fastcall RzToolButton4Click(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall RzToolButton1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFrAlarmHoliday(TComponent* Owner);
	 int IDUserP; //Код сотрудника из EmplUsers, имеющего право подписывать за данного
};
//---------------------------------------------------------------------------
extern PACKAGE TFrAlarmHoliday *FrAlarmHoliday;
//---------------------------------------------------------------------------
#endif
