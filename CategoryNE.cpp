//*************************************************************************************************************************//
//*************************************************************************************************************************//
//                                                                                                                         //
//                                          ДОБАВЛЕНИЕ/РЕДАКТИРОВАНИЕ КАТЕГОРИИ/ВИДА                                       //
//                                                                                                                         //
//*************************************************************************************************************************//
//*************************************************************************************************************************//

#include <vcl.h>
#pragma hdrstop

#include "CategoryNE.h"                                                       //Добавление/редактирования для "Категория/Вид"
#include "Category.h"                                                         //                   Справочник "Категория/Вид"
#include "main.h"                                                             //              модуль главной формы приложения
#include "Init.h"
//---------------------------------------------------------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzPanel"
#pragma resource "*.dfm"
TFrCategNE *FrCategNE;

  extern bool flType;
  extern bool flAdEd;
  extern int rec;
  String idT = "{00000000-0000-0000-0000-000000000000}";                           //идентификатор для всех типов справочника
  String idP = "{00000000-0000-0000-0000-000000000000}";                           //    родительский идентификатор для видов

//.......................... Генерация нового идентификатора ................................................................
void TFrCategNE::NewGUID()
{
  HRESULT hr;
	 GUID guid;		  hr = CoCreateGuid(&guid);  if (!FAILED(hr))	 {	  LPOLESTR szGUID = new WCHAR[39];	  StringFromGUID2(guid, szGUID, 39);	  idT = szGUID;	  }	  else		  {		   ShowMessage("ID is fail!");		   return;		   }
}
//---------------------------------------------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------------------------------------------
__fastcall TFrCategNE::TFrCategNE(TComponent* Owner) : TForm(Owner)
{
}
//-------------------------- События при создании формы ---------------------------------------------------------------------
void __fastcall TFrCategNE::FormCreate(TObject *Sender)
{
  if ((flType == 0) && (flAdEd == 0))
	 {
	  Caption = "Ввод нового значения категории";
	  Label1->Caption = "Ввод нового значения категории:";
	  }
  if ((flType == 1) && (flAdEd == 0))
	 {
	  Caption = "Ввод нового значения вида (специализации)";
	  Label1->Caption = "Ввод нового значения вида (специализации):";
	  }
  if ((flType == 0) && (flAdEd == 1))
	 {
	  Caption = "Просмотр (редактирование) значения категории";
	  Label1->Caption = "Просмотр (редактирование) значения категории:";
	  }
  if ((flType == 1) && (flAdEd == 1))
	 {
	  Caption = "Просмотр (редактирование) значения вида (специализации)";
	  Label1->Caption = "Просмотр (редактирование) значения вида (специализации):";
	  }
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrCategNE::FormShow(TObject *Sender)
{
  FrCategory->Enabled = false;
}
//-------------------------- При выходе из поля - удаляем пробелы слева и справа --------------------------------------------
void __fastcall TFrCategNE::TextEdExit(TObject *Sender)
{
   TextEd->Text = TrimRight(TrimLeft(TextEd->Text));
  AnsiString nt = TextEd->Text;
		char *n = nt.c_str();		   n[0] = (char)CharUpper((char*)(unsigned)(unsigned char)n[0]);   TextEd->Text = n;
}
//-------------------------- Сохранить --------------------------------------------------------------------------------------
void __fastcall TFrCategNE::btNewCatClick(TObject *Sender)
{
  TextEdExit(Sender);

  //--- делаем проверку на дублирование названия категории
  if ((flType == 0) && (flAdEd == 0))
	 {
	  FrCategory->CatgQuer->First();
	  while (!FrCategory->CatgQuer->Eof)
			{
			 String v1 = TrimRight(TrimLeft(FrCategory->CatgQueriText->AsString));
			 String v2 = TrimRight(TrimLeft(TextEd->Text));

			 for (int i = 0; i < v1.Length(); ++i)
				  v1 = v1.LowerCase();
			 for (int i = 0; i < v2.Length(); ++i)
				  v2 = v2.LowerCase();

			 if (v1 == v2)
				{
				 String Caption = "Ошибка при записи новой категории!";
					String Text = "Категория с таким названием '" + TextEd->Text + "' уже существует в справочнике!";
				 Application->MessageBox(Text.w_str(), Caption.w_str(), MB_ICONHAND | MB_OK);
				 return;
				 }
			 FrCategory->CatgQuer->Next();
			 }
   }

  //--- делаем проверку на дублирование названия Вида ("Специализации")
  if ((flType == 1) && (flAdEd == 0))
	 {
	  FrCategory->CatgQuer->First();
	  while (!FrCategory->CatgQuer->Eof)
			{
			 String v1 = TrimRight(TrimLeft(FrCategory->CatgQueriText->AsString));
			 String v2 = TrimRight(TrimLeft(TextEd->Text));

			 for (int i = 0; i < v1.Length(); ++i)
				  v1 = v1.LowerCase();
			 for (int i = 0; i < v2.Length(); ++i)
				  v2 = v2.LowerCase();

			 if (v1 == v2)
				{
				 String Caption = "Ошибка при записи нового вида (''Специализации'')!";
					String Text = "Вид (''Специализация'') с таким названием '" + TextEd->Text + "' уже существует в справочнике!";
				 Application->MessageBox(Text.w_str(), Caption.w_str(), MB_ICONHAND | MB_OK);
				 return;
				 }
			 FrCategory->CatgQuer->Next();
			 }
	  }

  if (flAdEd == 0) //генерим GUID только в режиме новой записи справочника
	 {NewGUID();}

  String nv = "BEGIN TRY "
			  "      BEGIN TRANSACTION; ";

  if ((flType == 0) && (flAdEd == 0))                                          //добавляем       новую категорию в справочник
	 {
		nv += "DECLARE @Idn     AS uniqueidentifier "
			  "    SET @Idn     = '" + idT + "' "
			  "DECLARE @iText   AS nvarchar(255) "
			  "    SET @iText   = '" + TextEd->Text + "' "
			  "DECLARE @iType   AS smallint "
			  "    SET @iType   = 0 "       //0 - Категория
			  "DECLARE @DateIns AS datetime "
			  "    SET @DateIns = GETDATE() "
			  "DECLARE @IdIns   AS int "
			  "    SET @IdIns   = " + IntToStr(PermisHdr.KeyUserStartProgramm) + " "
			  " INSERT INTO [dbo].[bm_CategorySpecialization] (Idn, iText, iType, DateIns, IdIns) "
			  " VALUES(@Idn, @iText, @iType, @DateIns, @IdIns) ";
	  }

  if ((flType == 0) && (flAdEd == 1))                                          //редактируем значение категории в справочнике
	 {
		nv += "DECLARE @iText   AS nvarchar(255) "
			  "    SET @iText   = '" + TextEd->Text + "' "
			  "DECLARE @DateMod AS datetime "
			  "    SET @DateMod = GETDATE() "
			  "DECLARE @IdMod   AS int "
			  "    SET @IdMod   =  " + IntToStr(PermisHdr.KeyUserStartProgramm) + " "
			  " UPDATE [dbo].[bm_CategorySpecialization] "
			  "    SET iText = @iText, DateMod = @DateMod, IdMod = @IdMod "
			  "  WHERE Idn = '" + idT + "'";
	  }

  if ((flType == 1) && (flAdEd == 0))                                          //добавляем             новый вид в справочник
	 {
		nv += "DECLARE @Idn     AS uniqueidentifier "
			  "    SET @Idn     = '" + idT + "' "
			  "DECLARE @PIdn    AS uniqueidentifier "
			  "    SET @PIdn    =  '" + idP + "' "
			  "DECLARE @iText   AS nvarchar(255) "
			  "    SET @iText   = '" + TextEd->Text + "' "
			  "DECLARE @iType   AS smallint "
			  "    SET @iType   = 1 "       //1 - Вид ("Специализация")
			  "DECLARE @DateIns AS datetime "
			  "    SET @DateIns = GETDATE() "
			  "DECLARE @IdIns   AS int "
			  "    SET @IdIns   = " + IntToStr(PermisHdr.KeyUserStartProgramm) + " "
			  " INSERT INTO [dbo].[bm_CategorySpecialization] (Idn, PIdn, iText, iType, DateIns, IdIns) "
			  " VALUES(@Idn, @PIdn, @iText, @iType, @DateIns, @IdIns) ";
	  }

  if ((flType == 1) && (flAdEd == 1))                                          //редактируем      значение вида в справочнике
	 {
		nv += "DECLARE @iText   AS nvarchar(255) "
			  "    SET @iText   = '" + TextEd->Text + "' "
			  "DECLARE @DateMod AS datetime "
			  "    SET @DateMod = GETDATE() "
			  "DECLARE @IdMod   AS int "
			  "    SET @IdMod   =  " + IntToStr(PermisHdr.KeyUserStartProgramm) + " "
			  " UPDATE [dbo].[bm_CategorySpecialization] "
			  "    SET iText = @iText, DateMod = @DateMod, IdMod = @IdMod "
			  "  WHERE Idn = '" + idT + "'";
	  }

			/*  "DECLARE @DateDel AS datetime "
			  "    SET @DateDel =  "
			  "DECLARE @IdDel   AS int "
			  "    SET @IdDel   = " */

		nv += "COMMIT TRANSACTION; "
			  "END TRY "

			  "BEGIN CATCH "
			  "      ROLLBACK TRANSACTION; "
			  "      PRINT 'Error transaction!'; "
			  "END CATCH;";

  CatgComm->CommandText = nv;
  CatgComm->Execute();

  FrCategory->CatgList();

  if (flAdEd == 0)
	 {ShowMessage("Новое значение успешно добавлено в справочник!");}
  if (flAdEd == 1)
	 {
	  FrCategory->CatgQuer->Locate("recId", rec, TLocateOptions() <<loCaseInsensitive);
	  ShowMessage("Значение справочника успешно исправлено!");
	  }
  Close();
}
//-------------------------- Закрыть ----------------------------------------------------------------------------------------
void __fastcall TFrCategNE::btCloseClick(TObject *Sender)
{
  Close();
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrCategNE::FormClose(TObject *Sender, TCloseAction &Action)
{
  FrCategory->Enabled = true;
  Action = caFree;
}
//---------------------------------------------------------------------------------------------------------------------------

//*************************************************** THE END OF FILE *****************************************************//
//                                                 All Rights Reserved.                                                    //
//*************************************************************************************************************************//
//-------------------------- Дублирование кунопки "Сохранить" ---------------------------------------------------------------
void __fastcall TFrCategNE::TextEdKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)
{
  if (Key == VK_RETURN)
	 {
      btNewCatClick(Sender);
	  }
}
