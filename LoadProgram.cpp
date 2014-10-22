//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop


//.......................
#include "Main.h"
#include "INIT.h"

#include "LoadProgram.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
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
#pragma link "dxSkinBlack"
#pragma link "dxSkinBlue"
#pragma link "dxSkinCaramel"
#pragma link "dxSkinCoffee"
#pragma link "dxSkinDarkRoom"
#pragma link "dxSkinDarkSide"
#pragma link "dxSkinFoggy"
#pragma link "dxSkinGlassOceans"
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
#pragma link "dxSkinsCore"
#pragma link "dxSkinscxPCPainter"
#pragma link "dxSkinsDefaultPainters"
#pragma link "dxSkinSeven"
#pragma link "dxSkinSharp"
#pragma link "dxSkinSilver"
#pragma link "dxSkinSpringTime"
#pragma link "dxSkinStardust"
#pragma link "dxSkinSummer2008"
#pragma link "dxSkinValentine"
#pragma link "dxSkinXmas2008Blue"
#pragma link "dxSkinBlueprint"
#pragma link "dxSkinDevExpressDarkStyle"
#pragma link "dxSkinDevExpressStyle"
#pragma link "dxSkinHighContrast"
#pragma link "dxSkinSevenClassic"
#pragma link "dxSkinSharpPlus"
#pragma link "dxSkinTheAsphaltWorld"
#pragma link "dxSkinVS2010"
#pragma link "dxSkinWhiteprint"
#pragma link "cxNavigator"
#pragma link "dxSkinMetropolis"
#pragma link "dxSkinMetropolisDark"
#pragma link "dxSkinOffice2013DarkGray"
#pragma link "dxSkinOffice2013LightGray"
#pragma link "dxSkinOffice2013White"
#pragma resource "*.dfm"
TFrLoadProgram *FrLoadProgram;
char            flFrLoadProgram;
//---------------------------------------------------------------------------
__fastcall TFrLoadProgram::TFrLoadProgram(TComponent* Owner):TForm(Owner)
{
AnsiString SL;
 int j,k;
 TcxGridDBTableView *g;
 try{   //Восстановление параметров прошлого запуска окна
   if(SetupIni.sLoadProgram.Chk==(MainForm->CheckSumParam((char *)&SetupIni.sLoadProgram.Chk,sizeof(SetupIni.sLoadProgram))-2))//Проверка контрольной сумммы блока параметров
	 {
	 // try{MainForm->SetParamTableView(cxGrid1DBTableView1,&SetupIni.sLoadProgram.vTbl0[0],32);}catch(...){};
	 // try{RzDateTimeEdit1->Date=SetupIni.sLoadProgram.Tb;RzDateTimeEdit2->Date=SetupIni.sLoadProgram.Te;}catch(...){};
	 // try{RzRadioButton1->Checked=SetupIni.sLoadProgram.RB0;RzRadioButton2->Checked=SetupIni.sLoadProgram.RB1;}catch(...){};
	 // try{RzCheckBox3->Checked=SetupIni.sLoadProgram.RB5; RzCheckBox4->Checked=SetupIni.sLoadProgram.RB6;}catch(...){};
	 // try{RzCheckBox1->Checked=SetupIni.sLoadProgram.RB7; RzCheckBox2->Checked=SetupIni.sLoadProgram.RB8;}catch(...){};
	 // TmRefresh->Enabled=false;
	  }
	else
	  { SetupIni.sLoadProgram.PatchLoad[0]=0;

	  }
	}catch(...){};


Qr->Open();
}
//---------------------------------------------------------------------------
extern char ExecFileName[];
extern char ExecDate[];


void __fastcall TFrLoadProgram::FormClose(TObject *Sender,TCloseAction &Action)
{
#define CD001 flFrLoadProgram

//try{MainForm->SaveParamTableView(cxGrid1DBTableView1,&SetupIni.sLoadProgram.vTbl0[0],32);}catch(...){}
SetupIni.sLoadProgram.Chk=(MainForm->CheckSumParam((char *)&SetupIni.sLoadProgram.Chk,sizeof(SetupIni.sLoadProgram))-2);//Проверка контрольной сумммы блока параметров
Qw->Close();Qr->Close();
CD001=WINCLS;Action=caFree;
}
//---------------------------------------------------------------------------
void __fastcall TFrLoadProgram::ToolButton1Click(TObject *Sender)
{
int Sz,i;
TOpenDialog *OD;
AnsiString  FileNamI;
AnsiString  PrxSFX;
Adodb::TParameters *P;
struct TSearchRec SearchRec;
FileNamI=AnsiString(ExecFileName);
OD = new TOpenDialog(Application);
OD->Filter="Программы (*.EXE)|*.EXE|All files (*.*)|*.*";

OD->InitialDir=AnsiString(SetupIni.sLoadProgram.PatchLoad); //Маршрут загрузки новых версий

if(OD->Execute() )
   {if( FileExists(OD->FileName))
      { try{OD->FileName=AnsiUpperCase(OD->FileName);
            if(FindFirst(OD->FileName,0x2F, SearchRec)!=0);
		   i=FileOpen(OD->FileName,Sysutils::fmOpenRead);Sz=FileSeek(i,0,2);FileClose(i);
           FileNamI=OD->FileName.Trim();PrxSFX=FileNamI;
           i=FileNamI.LastDelimiter("\\:");FileNamI.Delete(1,i);
           i=PrxSFX.AnsiPos(FileNamI);PrxSFX.Delete(i,PrxSFX.Length()-i+1);
           
           Move(PrxSFX.c_str(),SetupIni.sLoadProgram.PatchLoad,PrxSFX.Length()+1); //Маршрут загрузки новых версий
           PrxSFX=FileNamI;i=PrxSFX.LastDelimiter("\'");
           PrxSFX.Delete(i+1,PrxSFX.Length()-i);
           i=FileNamI.AnsiPos(PrxSFX);                         
           FileNamI.Delete(i,PrxSFX.Length());
           if(Qw->Active==true)Qw->Active=false;Qw->SQL->Clear();Qw->ParamCheck=true;
	   Qw->SQL->Add("INSERT INTO aa_LoadProgram(LpPrg,LpExe,LpSize,LpKeyAdm,LpPrxExe,LpDate)"
                        "VALUES(:D0,:D1,:D2,:D3,:D4,:D5)");
           P=Qw->Parameters;
           P->Items[0]->LoadFromFile(OD->FileName,ftBlob);
           P->Items[1]->Value=FileNamI;
           P->Items[2]->Value=Sz;
           P->Items[3]->Value=PermisHdr.KeyUserStartProgramm; //Id пользователя
           P->Items[4]->Value=PrxSFX;
           P->Items[5]->Value=FileDateToDateTime(SearchRec.Time);
           Qw->ExecSQL();
           ShowMessage("Загрузка произведена");
           }
        catch(...){ShowMessage("Ошибка при загрузке.");}

      }
    else
      {ShowMessage("Файл не существует.");}
   }
delete OD;
Qr->Close();Qr->Open();

}
//---------------------------------------------------------------------------
void __fastcall TFrLoadProgram::ToolButton3Click(TObject *Sender)
{if(Qw->Active==true)Qw->Active=false;Qw->SQL->Clear();Qw->ParamCheck=true;
 Qw->SQL->Add("DELETE FROM aa_LoadProgram WHERE LpId=:D0");
 Qw->Parameters->Items[0]->Value=QrLpId->AsInteger;Qw->ExecSQL();
Qr->Close();Qr->Open();
}
//---------------------------------------------------------------------------
void __fastcall TFrLoadProgram::ToolButton2Click(TObject *Sender)
{
TSaveDialog *SaveDlg;
AnsiString  FileNameI;
TStream  *pms;
int  I;
  SaveDlg = new TSaveDialog(Application);
  SaveDlg->Filter= "Программы (*.EXE)|*.EXE|All files (*.*)|*.*";
  SaveDlg->DefaultExt = "*EXE";
  if(SaveDlg->Execute())
    {if(Qw->Active==true)Qw->Active=false;Qw->SQL->Clear();Qw->ParamCheck=true;
     Qw->SQL->Add("SELECT LpPrg, LpPrxExe,LpExe FROM aa_LoadProgram WHERE LpId=:D0");
     Qw->Parameters->Items[0]->Value=QrLpId->AsInteger;Qw->Open();
      pms=Qw->CreateBlobStream(Qw->Fields->Fields[0],bmRead);
      try{TFileStream *tf= new TFileStream(SaveDlg->FileName,Classes::fmCreate);
          tf->CopyFrom(pms,pms->Size);delete tf;
         }
      catch(...){ShowMessage("Сохранить файл невозможно.Тел:967-0587.");}
     Qw->Close(); 
    }
}
//---------------------------------------------------------------------------

