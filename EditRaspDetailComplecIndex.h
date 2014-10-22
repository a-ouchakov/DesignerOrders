//---------------------------------------------------------------------------

#ifndef EditRaspDetailComplecIndexH
#define EditRaspDetailComplecIndexH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzPanel.hpp"
#include <ExtCtrls.hpp>
#include "cxClasses.hpp"
#include "cxControls.hpp"
#include "cxCurrencyEdit.hpp"
#include "cxCustomData.hpp"
#include "cxData.hpp"
#include "cxDataStorage.hpp"
#include "cxDBData.hpp"
#include "cxEdit.hpp"
#include "cxFilter.hpp"
#include "cxGraphics.hpp"
#include "cxGrid.hpp"
#include "cxGridBandedTableView.hpp"
#include "cxGridCustomTableView.hpp"
#include "cxGridCustomView.hpp"
#include "cxGridDBBandedTableView.hpp"
#include "cxGridDBTableView.hpp"
#include "cxGridLevel.hpp"
#include "cxGridTableView.hpp"
#include "cxStyles.hpp"
#include "RzEdit.hpp"
#include <ADODB.hpp>
#include <DB.hpp>
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TFrEditRaspDetailComplecIndex : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzGroupBox *RzGroupBoxMenedger1;
	TRzToolButton *btClose;
	TRzToolButton *btGiveIndex;
	TRzSpacer *RzSpacer8;
	TRzSpacer *RzSpacer1;
	TRzSpacer *RzSpacer2;
	TRzGroupBox *RzGroupBox1;
	TRzEdit *edEmplUser;
	TRzPanel *RzPanel2;
	TcxGrid *cxGridEmplUser;
	TcxGridDBColumn *cxGridDBColumn1;
	TcxGridDBColumn *cxGridDBColumn2;
	TcxGridDBColumn *cxGridDBColumn3;
	TcxGridDBColumn *cxGridDBColumn4;
	TcxGridDBColumn *cxGridDBColumn5;
	TcxGridDBColumn *cxGridDBColumn6;
	TcxGridDBColumn *cxGridDBColumn7;
	TcxGridDBColumn *cxGridDBColumn8;
	TcxGridDBBandedTableView *cxGridTableViewEmplUser;
	TcxGridLevel *cxGridLevel1;
	TTimer *TmEmplUser;
	TDataSource *DSEmplUser;
	TADOQuery *QEmplUser;
	TTimer *TmSelectUser;
	void __fastcall btCloseClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFrEditRaspDetailComplecIndex(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrEditRaspDetailComplecIndex *FrEditRaspDetailComplecIndex;
//---------------------------------------------------------------------------
#endif
