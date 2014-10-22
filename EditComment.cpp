//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EditComment.h"
#include "Init.h"
#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

#pragma link "RzButton"
#pragma link "RzLabel"
#pragma link "RzPanel"
#pragma link "cxContainer"
#pragma link "cxControls"
#pragma link "cxEdit"
#pragma link "cxMemo"
#pragma link "cxTextEdit"

#pragma link "cxGraphics"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
//#pragma link "dxSkinBlack"
//#pragma link "dxSkinBlue"
//#pragma link "dxSkinCaramel"
//#pragma link "dxSkinCoffee"
//#pragma link "dxSkinDarkRoom"
//#pragma link "dxSkinDarkSide"
//#pragma link "dxSkinFoggy"
//#pragma link "dxSkinGlassOceans"
//#pragma link "dxSkiniMaginary"
//#pragma link "dxSkinLilian"
//#pragma link "dxSkinLiquidSky"
//#pragma link "dxSkinLondonLiquidSky"
//#pragma link "dxSkinMcSkin"
//#pragma link "dxSkinMoneyTwins"
//#pragma link "dxSkinOffice2007Black"
//#pragma link "dxSkinOffice2007Blue"
//#pragma link "dxSkinOffice2007Green"
//#pragma link "dxSkinOffice2007Pink"
//#pragma link "dxSkinOffice2007Silver"
//#pragma link "dxSkinOffice2010Black"
//#pragma link "dxSkinOffice2010Blue"
//#pragma link "dxSkinOffice2010Silver"
//#pragma link "dxSkinPumpkin"
//#pragma link "dxSkinsCore"
//#pragma link "dxSkinsDefaultPainters"
//#pragma link "dxSkinSeven"
//#pragma link "dxSkinSharp"
//#pragma link "dxSkinSilver"
//#pragma link "dxSkinSpringTime"
//#pragma link "dxSkinStardust"
//#pragma link "dxSkinSummer2008"
//#pragma link "dxSkinValentine"
//#pragma link "dxSkinXmas2008Blue"
//#pragma link "dxSkinBlueprint"
//#pragma link "dxSkinDevExpressDarkStyle"
//#pragma link "dxSkinDevExpressStyle"
//#pragma link "dxSkinHighContrast"
//#pragma link "dxSkinSevenClassic"
//#pragma link "dxSkinSharpPlus"
//#pragma link "dxSkinTheAsphaltWorld"
//#pragma link "dxSkinVS2010"
//#pragma link "dxSkinWhiteprint"
#pragma resource "*.dfm"
TFrEditComment *FrEditComment;
//---------------------------------------------------------------------------
__fastcall TFrEditComment::TFrEditComment(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrEditComment::btCloseClick(TObject *Sender)
{
ModalResult = mrCancel; 	
}
//---------------------------------------------------------------------------
void __fastcall TFrEditComment::btInsRaspClick(TObject *Sender)
{  AnsiString vsSQLQw;
   if((viIdIns!=PermisHdr.KeyUserStartProgramm)&&(!MainForm->flEditAllRasp))
	{ShowMessage("Сохранение невозможно. \n Только создавший запись может ее сохранить"); return; }
	 vsSQLQw=" UPDATE bm_Rasp "
		" SET  Comment=:D0 "
		" ,DateMod=GetDate() "
		" ,IdMod= :D1 "
		" WHERE Idn=:D2; ";

 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value=reComment->Text;
 Qw->Parameters->Items[1]->Value=PermisHdr.KeyUserStartProgramm;;
 Qw->Parameters->Items[2]->Value=IdRasp;
 Qw->ExecSQL();
ModalResult=mrOk;
}
//---------------------------------------------------------------------------
