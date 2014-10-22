//---------------------------------------------------------------------------

#ifndef AddProduceNewH
#define AddProduceNewH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzPanel.hpp"
#include <ExtCtrls.hpp>
#include "RzEdit.hpp"
#include "RzRadChk.hpp"
#include <Mask.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
//---------------------------------------------------------------------------
class TFrAddProduceNew : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzToolButton *btInsRaspDetail;
	TRzSpacer *RzSpacer5;
	TRzToolButton *btClose;
	TRzSpacer *RzSpacer6;
	TRzGroupBox *RzGroupBox1;
	TRzRadioButton *RzRadioButton1;
	TRzRadioButton *RzRadioButton2;
	TADOQuery *Qw;
	TRzPanel *RzPanel4;
	TRzGroupBox *RzGroupBox7;
	TRzMemo *edT512Name;
	TRzPanel *RzPanel2;
	TRzGroupBox *RzGroupBox2;
	TRzEdit *edCodeB;
	TRzGroupBox *RzGroupBox3;
	TRzEdit *edISSN;
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall btInsRaspDetailClick(TObject *Sender);
	void __fastcall RzRadioButton1Click(TObject *Sender);
	void __fastcall RzRadioButton2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFrAddProduceNew(TComponent* Owner);
		int viIdnProduce;     //Idn Продукции
		int	viIdnPProduce;    //Парент создаваемой записи
        bool fEdit; //Флаг редактирование\заведение нового
};
//---------------------------------------------------------------------------
extern PACKAGE TFrAddProduceNew *FrAddProduceNew;
//---------------------------------------------------------------------------
#endif
