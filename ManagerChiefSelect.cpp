//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ManagerChiefSelect.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
//#pragma link "dxmdaset"
#pragma link "cxClasses"
#pragma link "cxData"
#pragma link "cxDataStorage"
#pragma link "cxDBData"
#pragma link "cxEdit"
#pragma link "cxFilter"
#pragma link "cxGrid"
#pragma link "cxGridCustomTableView"
#pragma link "cxGridCustomView"
#pragma link "cxGridDBTableView"
#pragma link "cxGridLevel"
#pragma link "cxGridTableView"
#pragma link "dxSkinscxPCPainter"
#pragma link "RzEdit"
#pragma link "cxNavigator"
#pragma resource "*.dfm"
TFRManagerChiefSelect *FRManagerChiefSelect;
//---------------------------------------------------------------------------
__fastcall TFRManagerChiefSelect::TFRManagerChiefSelect(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TFRManagerChiefSelect::rztbOkClick(TObject *Sender)
{
	ModalResult = mrOk;
}
//---------------------------------------------------------------------------
void __fastcall TFRManagerChiefSelect::rztbCancelClick(TObject *Sender)
{
	ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
void __fastcall TFRManagerChiefSelect::FormShow(TObject *Sender)
{
	Refresh();
}
//---------------------------------------------------------------------------
void __fastcall TFRManagerChiefSelect::Refresh(void)
{
  MemTree->DisableControls();
  Qtree->Close();
  Qtree->Parameters->Items[0]->Value = SeekEdit->Text;
  Qtree->Open();
  MemTree->CopyFromDataSet(Qtree);
  MemTree->First();
  MemTree->EnableControls();
}
//---------------------------------------------------------------------------
void __fastcall TFRManagerChiefSelect::SeekEditKeyPress(TObject *Sender, System::WideChar &Key)
{
//  Refresh();
}
//---------------------------------------------------------------------------

void __fastcall TFRManagerChiefSelect::SeekEditChange(TObject *Sender)
{
  Refresh();
}
//---------------------------------------------------------------------------

