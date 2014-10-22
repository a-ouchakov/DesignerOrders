//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ListTarif.h"
#include "EditTarif.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cxControls"
#pragma link "cxCustomData"
#pragma link "cxDBTL"
#pragma link "cxGraphics"
#pragma link "cxInplaceContainer"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
#pragma link "cxMaskEdit"
#pragma link "cxStyles"
#pragma link "cxTL"
#pragma link "cxTLData"
#pragma link "cxTLdxBarBuiltInMenu"
#pragma link "dxSkinsCore"
#pragma link "dxSkinsDefaultPainters"
#pragma link "RzButton"
#pragma link "RzPanel"
#pragma link "dxSkinBlack"
#pragma link "dxSkinBlue"
#pragma link "dxSkinBlueprint"
#pragma link "dxSkinCaramel"
#pragma link "dxSkinCoffee"
#pragma link "dxSkinDarkRoom"
#pragma link "dxSkinDarkSide"
#pragma link "dxSkinDevExpressDarkStyle"
#pragma link "dxSkinDevExpressStyle"
#pragma link "dxSkinFoggy"
#pragma link "dxSkinGlassOceans"
#pragma link "dxSkinHighContrast"
#pragma link "dxSkiniMaginary"
#pragma link "dxSkinLilian"
#pragma link "dxSkinLiquidSky"
#pragma link "dxSkinLondonLiquidSky"
#pragma link "dxSkinMcSkin"
#pragma link "dxSkinMoneyTwins"
#pragma link "dxSkinOffice2007Black"
#pragma link "dxSkinOffice2007Blue"
#pragma link "dxSkinOffice2007Green"
#pragma link "dxSkinOffice2007Pink"
#pragma link "dxSkinOffice2007Silver"
#pragma link "dxSkinOffice2010Black"
#pragma link "dxSkinOffice2010Blue"
#pragma link "dxSkinOffice2010Silver"
#pragma link "dxSkinPumpkin"
#pragma link "dxSkinSeven"
#pragma link "dxSkinSevenClassic"
#pragma link "dxSkinSharp"
#pragma link "dxSkinSharpPlus"
#pragma link "dxSkinSilver"
#pragma link "dxSkinSpringTime"
#pragma link "dxSkinStardust"
#pragma link "dxSkinSummer2008"
#pragma link "dxSkinTheAsphaltWorld"
#pragma link "dxSkinValentine"
#pragma link "dxSkinVS2010"
#pragma link "dxSkinWhiteprint"
#pragma link "dxSkinXmas2008Blue"
#pragma resource "*.dfm"
TFrListTarif *FrListTarif;
//---------------------------------------------------------------------------
__fastcall TFrListTarif::TFrListTarif(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrListTarif::btCloseClick(TObject *Sender)
{
  ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
void __fastcall TFrListTarif::RzToolButton1Click(TObject *Sender)
{

#ifdef  TFR
#undef  TFR
#undef  FR

#endif
#define TFR TFrEditTarif
#define FR  FrEditTarif

  FR=new TFR(Application);

	FR->Caption="Добавить тариф Электронных продуктов";
	FR->ShowModal();
	FR->WindowState=wsMinimized;
	if (FR->ModalResult==mrOk)
	  {
//
	  }
  delete (FR);
}
//---------------------------------------------------------------------------
void __fastcall TFrListTarif::RzToolButton3Click(TObject *Sender)
{

#ifdef  TFR
#undef  TFR
#undef  FR

#endif
#define TFR TFrEditTarif
#define FR  FrEditTarif

  FR=new TFR(Application);

	FR->Caption="Редактировать тариф Электронных продуктов";
	FR->ShowModal();
	FR->WindowState=wsMinimized;
	if (FR->ModalResult==mrOk)
	  {
//
	  }
  delete (FR);
}
//---------------------------------------------------------------------------
void __fastcall TFrListTarif::RzToolButton2Click(TObject *Sender)
{
if(MessageDlg("Вы уверенны, что хотите удалить тариф?" ,mtWarning,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrNo){return;}
}
//---------------------------------------------------------------------------
