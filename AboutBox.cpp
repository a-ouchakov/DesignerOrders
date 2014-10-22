//$$---- Form CPP ----
//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AboutBox.h"
#include "Main.h"
#include "Init.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzEdit"
#pragma link "RzButton"
#pragma link "RzDBEdit"
#pragma resource "*.dfm"

TFrAboutBox *FrAboutBox;
char   flAboutBox;
//---------------------------------------------------------------------------
__fastcall TFrAboutBox::TFrAboutBox(TComponent* Owner)
	: TForm(Owner)
{ //*
Re1->Lines->Clear();
// Re1->SelAttributes->Color = clNavy;  //RichEdit1->SelAttributes->Height += 15;
// Re1->SelAttributes->Style = Re1->DefAttributes->Style << fsBold >> fsItalic;
 Re1->Lines->Add("Наименование программы:");
// Re1->SelAttributes->Color = clBlack	;  //RichEdit1->SelAttributes->Height += 15;
// Re1->SelAttributes->Style = Re1->DefAttributes->Style << fsBold >> fsItalic;
 Re1->Lines->Add("  "+Application->Title);
// Re1->SelAttributes->Color = clNavy;  //RichEdit1->SelAttributes->Height += 15;
// Re1->SelAttributes->Style = Re1->DefAttributes->Style << fsBold >> fsItalic;
 Re1->Lines->Add("Дата выпуска:");
// Re1->SelAttributes->Color = clBlack	;  //RichEdit1->SelAttributes->Height += 15;
// Re1->SelAttributes->Style = Re1->DefAttributes->Style << fsBold >> fsItalic;
 Re1->Lines->Add("  "+AnsiString(ExecDate));
// Re1->SelAttributes->Color = clNavy;  //RichEdit1->SelAttributes->Height += 15;
// Re1->SelAttributes->Style = Re1->DefAttributes->Style << fsBold >> fsItalic;
 Re1->Lines->Add("  ");
 Re1->Lines->Add("Разработчик:");
// Re1->SelAttributes->Color = clNavy	;  //RichEdit1->SelAttributes->Height += 15;
// Re1->SelAttributes->Style = Re1->DefAttributes->Style << fsBold >> fsItalic;
 Re1->Lines->Add("  ""Скопинцев Андрей Владимирович");
// Re1->SelAttributes->Color = clBlack	;
 Re1->Lines->Add("  	""тел: 937-90-80 доб.(5888);");
// Re1->SelAttributes->Color = clBlack	;
 Re1->Lines->Add("  	""E-Mail: ASopintsev@mcfr.ru");
// Re1->SelAttributes->Color = clNavy	;
// Re1->SelAttributes->Style = Re1->DefAttributes->Style << fsBold >> fsItalic;
 Re1->Lines->Add("  ""Скопинцева Диана Андреевна");
// Re1->SelAttributes->Color = clBlack	;
 Re1->Lines->Add("  	""тел: 937-90-80 доб.(2888)");
// Re1->SelAttributes->Color = clBlack	;
 Re1->Lines->Add("  	""E-Mail: DSkopintsevа@mcfr.ru");
 Re1->Lines->Add("  ""Сорокин Денис Федорович");
 //Re1->SelAttributes->Color = clBlack	;
 Re1->Lines->Add("  	""тел: 937-90-80 доб.(5192)");
 Re1->Lines->Add("  ""Садовский Антон Павлович");
// Re1->SelAttributes->Color = clBlack	;
 Re1->Lines->Add("  	""тел: 937-90-80 доб.(5133);");
// Re1->SelAttributes->Color = clBlack	;
 Re1->Lines->Add("  	""E-Mail: ASadovskiy@mcfr.ru");

// Re1->SelAttributes->Color = clBlack	;
// Re1->Lines->Add("  	""E-Mail: DSorokin@mcfr.ru");
 Re1->Lines->Add("------------------------------------------------------");
// Re1->SelAttributes->Color = clRed	;  //RichEdit1->SelAttributes->Height += 15;
// Re1->SelAttributes->Style = Re1->DefAttributes->Style << fsBold >> fsItalic;
 Re1->Lines->Add("На сервере имеется последая версия от ");
 //Re1->SelAttributes->Color = clRed	;  //RichEdit1->SelAttributes->Height += 15;
// Re1->SelAttributes->Style = Re1->DefAttributes->Style << fsBold >> fsItalic;
 Re1->Lines->Add("   "+AnsiString(SetupIni.ExecDateLast));              //*/
}
//---------------------------------------------------------------------------
void __fastcall TFrAboutBox::FormClose(TObject *Sender, TCloseAction &Action)
{flAboutBox=0; Action=caFree;}
//---------------------------------------------------------------------------
void __fastcall TFrAboutBox::RzButton1Click(TObject *Sender)
{
Close();	
}
//---------------------------------------------------------------------------
