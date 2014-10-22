//------------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "BugHistory.h"
#include "main.h"
#include "Init.h"
//------------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrBugHistory *FrBugHistory;
char flBugHistory;

  extern TIniFile *Ini;                               // файл настроек положения
//------------------------------------------------------------------------------
__fastcall TFrBugHistory::TFrBugHistory(TComponent* Owner) : TForm(Owner)
{
}
//------------------------------------------------------------------------------
void __fastcall TFrBugHistory::ClosButtClick(TObject *Sender)
{
  Close();
}
//------------------------------------------------------------------------------
void __fastcall TFrBugHistory::FormClose(TObject *Sender, TCloseAction &Action)
{
  Ini->WriteInteger("BugHistory", "Top",    FrBugHistory->Top);
  Ini->WriteInteger("BugHistory", "Left",   FrBugHistory->Left);
  Ini->WriteInteger("BugHistory", "Width",  FrBugHistory->Width);
  Ini->WriteInteger("BugHistory", "Height", FrBugHistory->Height);

  Action = caFree;
  flBugHistory = WINCLS;
}
//------------------------------------------------------------------------------
