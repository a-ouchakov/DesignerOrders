//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ManagerRaspAccess.h"
#include "Init.h"
#include "main.h"
#include "ManagerChiefSelect.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
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
#pragma link "RzRadChk"
#pragma link "cxNavigator"
#pragma resource "*.dfm"
TFRManagerRaspAccess *FRManagerRaspAccess;
//---------------------------------------------------------------------------
__fastcall TFRManagerRaspAccess::TFRManagerRaspAccess(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TFRManagerRaspAccess::rztbOkClick(TObject *Sender)
{
	ModalResult = mrOk;
}
//---------------------------------------------------------------------------
void __fastcall TFRManagerRaspAccess::rztbCancelClick(TObject *Sender)
{
	ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
void __fastcall TFRManagerRaspAccess::FormShow(TObject *Sender)
{
	Refresh();
}
//---------------------------------------------------------------------------
void __fastcall TFRManagerRaspAccess::rztbAddClick(TObject *Sender)
{
  TFRManagerChiefSelect *FRManagerChiefSelect = new TFRManagerChiefSelect(this);
  if(FRManagerChiefSelect)
  {
	//FRManagerChiefSelect->Left = Left + Width;
	//FRManagerChiefSelect->Top = Top+50;
	if(FRManagerChiefSelect->ShowModal() == mrOk)
	{
	  FRManagerChiefSelect->MemTree->First();
	  AnsiString SL;
	  SL=" DECLARE @idnew int, @idRasp int, @idins int; "
		 " SET @idnew = :D0; SET @idRasp = :D1; SET @idins=:D2; "
		 " declare @Res int  "
		 " if not exists(select idn from bm_RaspAccess where idRasp = @idRasp and idUser = @idnew and DateDel is null) "
		 "   insert into bm_RaspAccess (idRasp, idUser, idIns, DateIns) "
		 "   select @idRasp, @idnew, @idins, getdate() ";
	  Qw->Close();
	  Qw->SQL->Clear();
	  Qw->SQL->Add(SL);
	  while(!FRManagerChiefSelect->MemTree->Eof)
	  {
		if(FRManagerChiefSelect->MemTree->FieldByName("Checked")->AsBoolean)
		{
		  int idnew = FRManagerChiefSelect->MemTree->FieldByName("auId")->AsInteger;
		  Qw->Close();
		  Qw->Parameters->Items[0]->Value=idnew;
		  Qw->Parameters->Items[1]->Value=idRasp;
		  Qw->Parameters->Items[2]->Value=PermisHdr.KeyUserStartProgramm;
		  Qw->ExecSQL();
		}
		FRManagerChiefSelect->MemTree->Next();
	  }
	}
  }
  delete FRManagerChiefSelect;
  FRManagerChiefSelect = NULL;
  Refresh();
}
//---------------------------------------------------------------------------
void __fastcall TFRManagerRaspAccess::cbShowDelClick(TObject *Sender)
{
  Refresh();
}
//---------------------------------------------------------------------------
void __fastcall TFRManagerRaspAccess::rztbRefreshClick(TObject *Sender)
{
  Refresh();
}
//---------------------------------------------------------------------------
void __fastcall TFRManagerRaspAccess::Refresh(void)
{
 Q1->DisableControls();
 Q1->Close();
 Q1->Parameters->Items[0]->Value = idRasp;
 Q1->Parameters->Items[1]->Value = cbShowDel->Checked ? 1 : 0;
 Q1->Open();
 Q1->EnableControls();
}
//---------------------------------------------------------------------------
void __fastcall TFRManagerRaspAccess::rztbDeleteClick(TObject *Sender)
{
	if(!Q1->Active)
		return;
	if(Q1idn->IsNull)
		return;
	int iddel = Q1idn->AsInteger;
	String SL;
	SL = "Подтвердите лишение доступа менеджера "+Q1auFamIO->AsString+".";
	if(Application->MessageBox(SL.c_str(),L"Внимание!",MB_ICONQUESTION | MB_YESNO) != IDYES)
		return;

	SL=" DECLARE @idn int "
	   " SET @idn = :P0 "
	   " declare @Res int  "
	   " if exists(select idn from bm_RaspAccess where idn = @idn and DateDel is null) "
	   " begin "
	   "   update bm_RaspAccess set DateDel = GETDATE(), idDel = :P1 "
	   "   where idn = @idn "
	   "   set @Res = 1 "
	   " end "
	   " else "
	   " begin "
	   "   set @Res = 0 "
	   " end "
	   " select @Res as Res ";
	Qw->Close();
	Qw->SQL->Clear();
	Qw->SQL->Add(SL);
	Qw->Parameters->Items[0]->Value=iddel;
	Qw->Parameters->Items[1]->Value=PermisHdr.KeyUserStartProgramm;
	Qw->Open();
	Qw->Close();

  Refresh();
}
//---------------------------------------------------------------------------

void __fastcall TFRManagerRaspAccess::cxGrid1DBTableView1CustomDrawCell(TcxCustomGridTableView *Sender,
		  TcxCanvas *ACanvas, TcxGridTableDataCellViewInfo *AViewInfo,
		  bool &ADone)
{
  TColor ColRed = (TColor)0x0000E0;
  if(!AViewInfo->GridRecord->Values[0].IsNull())
	ACanvas->Font->Color = ColRed;
}
//---------------------------------------------------------------------------

