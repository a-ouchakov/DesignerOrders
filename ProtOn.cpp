//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ProtOn.h"
//.........................
#include "main.h"
#include "INIT.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

#pragma link "RzEdit"
#pragma link "RzLabel"
#pragma link "cxClasses"
#pragma link "cxControls"
#pragma link "cxCustomData"
#pragma link "cxData"
#pragma link "cxDataStorage"
#pragma link "cxDBData"
#pragma link "cxEdit"
#pragma link "cxFilter"
#pragma link "cxGraphics"
#pragma link "cxGrid"
#pragma link "cxGridCustomTableView"
#pragma link "cxGridCustomView"
#pragma link "cxGridDBTableView"
#pragma link "cxGridLevel"
#pragma link "cxGridTableView"
#pragma link "cxStyles"

#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
#pragma link "dxSkinsCore"
#pragma link "dxSkinscxPCPainter"
#pragma link "dxSkinsDefaultPainters"
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
TFrProtOn *FrProtOn;
char  flFrProtOn;
//---------------------------------------------------------------------------
__fastcall TFrProtOn::TFrProtOn(TComponent* Owner):TForm(Owner)
{ //Протокол подключений
int i,j,k,*s,*p;
RzDateTimeEdit1->Date=Now();
RzDateTimeEdit2->Date=Now();
}
//---------------------------------------------------------------------------
void __fastcall TFrProtOn::ExitButtonClick(TObject *Sender)
{Close();
}
//---------------------------------------------------------------------------
void __fastcall TFrProtOn::ToolButton1Click(TObject *Sender)
{

Qi->Close();
Qi->Parameters->Items[0]->Value=RzDateTimeEdit1->Date;
Qi->Parameters->Items[1]->Value=RzDateTimeEdit2->Date;
Qi->Open();
}
//---------------------------------------------------------------------------//Сохранить в файл
//---------------------------------------------------------------------------
void __fastcall TFrProtOn::FormClose(TObject *Sender, TCloseAction &Action)
{int i,k,j,*s,*p;
//TdxDBGrid *g;
Qi->Close();flFrProtOn=WINCLS; Action = caFree;
}
//---------------------------------------------------------------------------
//void __fastcall TFrProtOn::dxDBGrid1ColumnClick(TObject *Sender, TdxDBTreeListColumn *Column){DM->SortForColumn(Qi,dxDBGrid1,Column,1);}//Сортировка по столбцам
//---------------------------------------------------------------------------



