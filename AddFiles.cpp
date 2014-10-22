//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AddFiles.h"
#include "Init.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
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
#pragma link "RzButton"
#pragma link "RzPanel"
#pragma link "RzShellDialogs"
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
TFrAddFiles *FrAddFiles;

  extern AnsiString Path;
//---------------------------------------------------------------------------
__fastcall TFrAddFiles::TFrAddFiles(TComponent* Owner)
	: TForm(Owner)
{
	DateTimeToString(TempTableName,"yyyymmdd",Now());
   TempTableName="#TMP_"+TempTableName+"_"+"_"+IntToStr(PermisHdr.KeyUserStartProgramm)+"_"+IntToStr(PermisHdr.KeyConnect);// Уникальный код подключения; Код текущего пользователя

  vsSQLTmpTable= "IF(EXISTS (select * from tempdb..sysobjects where id = object_id('tempdb.."+TempTableName+"')))DROP TABLE "+TempTableName+";"
   "CREATE TABLE "+TempTableName+"( MailPathAddFile varchar(8000) NULL);";
   QTmpTable->Close();
   QTmpTable->SQL->Clear();
   QTmpTable->SQL->Add(vsSQLTmpTable);
   QTmpTable->ExecSQL();
}
//---------------------------------------------------------------------------
void __fastcall TFrAddFiles::RzBitBtn3Click(TObject *Sender)
{ AnsiString vsNameFile;
  int i;
  if(OD->Execute() )
   {if( FileExists(OD->FileName))
	  {vsNameFile=OD->FileName;
	   try{vsNameFile=AnsiUpperCase(vsNameFile);

		   i=vsNameFile.LastDelimiter("\\");
		   vsNameFile.Delete(1,i);

  if(Qw->Active==true)Qw->Active=false;Qw->SQL->Clear();
			Qw->SQL->Add(" INSERT INTO bm_AddFiles(AddFile,NameFile,idRasp,DateIns,IdIns)"
						 " VALUES(:D0,:D1,:D2,GetDate(),:D3)");
			Qw->Parameters->Items[0]->LoadFromFile(OD->FileName,ftBlob);
			Qw->Parameters->Items[1]->Value=vsNameFile;
			Qw->Parameters->Items[2]->Value=viRaspIdn;
			Qw->Parameters->Items[3]->Value=PermisHdr.KeyUserStartProgramm;//idUser;
			Qw->ExecSQL();

		   ShowMessage("Загрузка произведена");
		   QAddFiles->Close();
		   QAddFiles->Parameters->Items[0]->Value=viRaspIdn;
		   QAddFiles->Open();
           }
        catch(...){ShowMessage("Ошибка при загрузке.");}

      }
    else
      {ShowMessage("Файл не существует.");}
   }


/*
   vsSQLTmpTable= "INSERT INTO "+TempTableName+"(MailPathAddFile) VALUES('"+RzOpenDialog1->FileName+"') ;";
   QTmpTable->Close();
   QTmpTable->SQL->Clear();
   QTmpTable->SQL->Add(vsSQLTmpTable);
   QTmpTable->ExecSQL();
   QMailPathAddFiles->Close();
   QMailPathAddFiles->SQL->Clear();
   QMailPathAddFiles->SQL->Add("SELECT MailPathAddFile FROM "+TempTableName+";");
   QMailPathAddFiles->Open(); */
}
//---------------------------------------------------------------------------
void __fastcall TFrAddFiles::btCloseClick(TObject *Sender)
{
  ModalResult = mrCancel;	
}
//---------------------------------------------------------------------------
void __fastcall TFrAddFiles::btInsRaspDetailClick(TObject *Sender)
{
   ModalResult=mrOk;	
}
//---------------------------------------------------------------------------
void __fastcall TFrAddFiles::FormActivate(TObject *Sender)
{
  QAddFiles->Close();
  QAddFiles->Parameters->Items[0]->Value=viRaspIdn;
  QAddFiles->Open();

  if (PermisHdr.KeyUserStartProgramm == 2235)
	 {
	  SaveFlTB->Enabled = true;
	  SaveFlTB->Visible = true;
	  }
}
//---------------------------------------------------------------------------
void __fastcall TFrAddFiles::RzBitBtn4Click(TObject *Sender)
{
   if(Qw->Active==true)Qw->Active=false;Qw->SQL->Clear();
			Qw->SQL->Add(" UPDATE bm_AddFiles SET DateDel=GetDate(),IdDel=:D0"
						 " WHERE Idn=:D1");
			Qw->Parameters->Items[0]->Value=PermisHdr.KeyUserStartProgramm;//idUser;
            Qw->Parameters->Items[1]->Value=QAddFilesIdn->AsInteger;
			Qw->ExecSQL();

		   QAddFiles->Close();
		   QAddFiles->Parameters->Items[0]->Value=viRaspIdn;
		   QAddFiles->Open();	
}
//-------------------------- эго-выгрузка файла-------------------------------------------------
void __fastcall TFrAddFiles::SaveFlTBClick(TObject *Sender)
{
  String ulf = "";
		 ulf = Path + "TEMP\\" + QAddFilesNameFile->Value;
		 ulf = StringReplace(ulf, "\\", "\\\\", TReplaceFlags()<<rfReplaceAll);

  TMemoryStream *M1 = new TMemoryStream();
		TStream *B1 = QAddFiles->CreateBlobStream(QAddFiles->FieldByName("AddFile"), bmRead);
				 M1->CopyFrom(B1, B1->Size);
				 M1->SaveToFile(ulf);
  delete B1;
  delete M1;

  ShowMessage("Выбранный файл сохранён по пути:\n" + ulf);
}
//---------------------------------------------------------------------------
