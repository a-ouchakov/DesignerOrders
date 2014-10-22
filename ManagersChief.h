//---------------------------------------------------------------------------

#ifndef ManagersChiefH
#define ManagersChiefH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzChkLst.hpp"
#include "RzLabel.hpp"
#include "RzLstBox.hpp"
#include "RzPanel.hpp"
#include "RzSplit.hpp"
#include <ExtCtrls.hpp>
#include "RzButton.hpp"
#include <ImgList.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include "RzRadChk.hpp"
#include "RzTabs.hpp"
#include "cxCheckBox.hpp"
#include "cxControls.hpp"
#include "cxCustomData.hpp"
#include "cxDBTL.hpp"
#include "cxGraphics.hpp"
#include "cxInplaceContainer.hpp"
#include "cxMaskEdit.hpp"
#include "cxStyles.hpp"
#include "cxTL.hpp"
#include "cxTLData.hpp"
#include "RzEdit.hpp"
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TFrManagersChief : public TForm
{
__published:	// IDE-managed Components
	TADOQuery *Qm1;
	TIntegerField *Qm1Chek;
	TAutoIncField *Qm1idn;
	TIntegerField *Qm1idManager;
	TIntegerField *Qm1PidManager;
	TSmallintField *Qm1TypeM;
	TIntegerField *Qm1CountI;
	TStringField *Qm1auFamIO;
	TDataSource *DataSource1;
	TADOQuery *Qu;
	TADOQuery *QFrs;
	TAutoIncField *QFrsid;
	TIntegerField *QFrstype;
	TWideStringField *QFrsdisplay_name;
	TDataSource *DS1;
	TDataSource *DS2;
	TADOQuery *Q2;
	TStringField *Q2COLUMN1;
	TADOQuery *Q1;
	TAutoIncField *Q1auId;
	TStringField *Q1auFamIO;
	TADOQuery *Qw;
	TImageList *ImageList1;
	TRzPageControl *RzPageControl1;
	TRzTabSheet *TabSheet1;
	TRzSplitter *RzSplitter1;
	TRzSplitter *RzSplitter2;
	TRzLabel *RzLabel2;
	TRzPanel *RzPanel1;
	TRzToolButton *RzToolButton5;
	TRzSpacer *RzSpacer7;
	TRzToolButton *RzToolButton6;
	TRzSpacer *RzSpacer4;
	TRzSpacer *RzSpacer5;
	TRzListBox *RzCheckList3;
	TRzLabel *RzLabel3;
	TRzCheckList *RzCheckList2;
	TRzPanel *RzPanel2;
	TRzToolButton *RzToolButton1;
	TRzSpacer *RzSpacer1;
	TRzToolButton *RzToolButton2;
	TRzSpacer *RzSpacer2;
	TRzSpacer *RzSpacer3;
	TRzCheckBox *RzCheckBox2;
	TRzLabel *RzLabel1;
	TRzCheckList *RzCheckList1;
	TRzCheckBox *RzCheckBox1;
	TRzGroupBox *RzGroupBox6;
	TRzEdit *edFindName;
	TRzGroupBox *RzGroupBoxMenedger1;
	TRzSpacer *RzSpacer9;
	TRzToolButton *btClose;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall RzCheckBox1Click(TObject *Sender);
	void __fastcall RzCheckBox2Click(TObject *Sender);
	void __fastcall RzToolButton5Click(TObject *Sender);
	void __fastcall RzToolButton6Click(TObject *Sender);
	void __fastcall RzToolButton1Click(TObject *Sender);
	void __fastcall RzCheckList3Click(TObject *Sender);
	void __fastcall RzToolButton2Click(TObject *Sender);
	void __fastcall RzToolButton3Click(TObject *Sender);
	void __fastcall RzToolButton4Click(TObject *Sender);
	void __fastcall RzPageControl1Change(TObject *Sender);
	void __fastcall DataSource1DataChange(TObject *Sender, TField *Field);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall edFindNameChange(TObject *Sender);
	void __fastcall btCloseClick(TObject *Sender);
private:	// User declarations
void __fastcall ItemChangeFrS();
void __fastcall ItemChangeUser();
void __fastcall LoadPicList(TStrings *NameUser,TStrings *NameUser2);
public:		// User declarations
	__fastcall TFrManagersChief(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrManagersChief *FrManagersChief;
extern char flFrManagersChief;
//---------------------------------------------------------------------------
#endif
