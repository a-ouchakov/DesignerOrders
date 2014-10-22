//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EditRaspDetailComplecIndex.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzPanel"
#pragma link "cxClasses"
#pragma link "cxControls"
#pragma link "cxCurrencyEdit"
#pragma link "cxCustomData"
#pragma link "cxData"
#pragma link "cxDataStorage"
#pragma link "cxDBData"
#pragma link "cxEdit"
#pragma link "cxFilter"
#pragma link "cxGraphics"
#pragma link "cxGrid"
#pragma link "cxGridBandedTableView"
#pragma link "cxGridCustomTableView"
#pragma link "cxGridCustomView"
#pragma link "cxGridDBBandedTableView"
#pragma link "cxGridDBTableView"
#pragma link "cxGridLevel"
#pragma link "cxGridTableView"
#pragma link "cxStyles"
#pragma link "RzEdit"
#pragma resource "*.dfm"
TFrEditRaspDetailComplecIndex *FrEditRaspDetailComplecIndex;
//---------------------------------------------------------------------------
__fastcall TFrEditRaspDetailComplecIndex::TFrEditRaspDetailComplecIndex(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetailComplecIndex::btCloseClick(TObject *Sender)
{
   Close();	
}
//---------------------------------------------------------------------------

