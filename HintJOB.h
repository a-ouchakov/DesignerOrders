//---------------------------------------------------------------------------

#ifndef HintJOBH
#define HintJOBH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "RzButton.hpp"
#include <Vcl.ImgList.hpp>
#include <Vcl.ExtCtrls.hpp>
#include "RzEdit.hpp"
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TFrHintJOB : public TForm
{
__published:	// IDE-managed Components
	TRzToolButton *btClose;
	TImageList *ImageList1;
	TTimer *TmHintJOB;
	TRzMemo *RzMemo1;
	TADOConnection *DM_JobConnect;
	TADOConnection *GM_JobConnect;
	TADOQuery *Qw2;
	TADOQuery *Qw;
	TIntegerField *Qw2IdnJob;
	TStringField *Qw2UserLogin;
	TDateTimeField *Qw2DateIns;
	TIntegerField *Qw2IdEmlpUsers;
	TStringField *Qw2ProgramName;
	TWideStringField *Qw2NameProject;
	TWideStringField *Qw2NameMove;
	TStringField *Qw2NameJob;
	TSmallintField *Qw2Progress;
	TIntegerField *Qw2Status;
	TDateTimeField *Qw2LastStart;
	TDateTimeField *Qw2LastEnd;
	TIntegerField *QwIdnJob;
	TStringField *QwUserLogin;
	TDateTimeField *QwDateIns;
	TIntegerField *QwIdEmlpUsers;
	TStringField *QwProgramName;
	TWideStringField *QwNameProject;
	TWideStringField *QwNameMove;
	TStringField *QwNameJob;
	TSmallintField *QwProgress;
	TIntegerField *QwStatus;
	TDateTimeField *QwLastStart;
	TDateTimeField *QwLastEnd;
	TTimer *TmQ;
	TTimer *TmAnimate;
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall btCloseMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall btCloseMouseLeave(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall TmHintJOBTimer(TObject *Sender);
	void __fastcall FormMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall TmQTimer(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TFrHintJOB(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrHintJOB *FrHintJOB;
extern char flFrHintJOB;
//---------------------------------------------------------------------------
#endif
