//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AccountPrint.h"
#include "main.h"
#include "Init.h"
//#include "userunit.hpp"
//#include <System.hpp>
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzPanel"
#pragma link "frxClass"
#pragma link "frxPreview"
#pragma link "frxDBSet"
#pragma link "RzRadGrp"
#pragma link "frxRich"
#pragma link "frxExportCSV"
#pragma link "frxExportHTML"
#pragma link "frxExportPDF"
#pragma link "frxExportRTF"
#pragma link "frxExportXLS"
#pragma link "frxExportXML"
#pragma link "RzCommon"
#pragma link "RzEdit"
#pragma link "RzLabel"
#pragma link "frxExportImage"
#pragma link "frxExportMail"
#pragma link "frxServerClient"
#pragma link "frxDMPExport"
#pragma link "frxDesgn"
#pragma link "frxExportText"
#pragma resource "*.dfm"
TFrAccountPrint *FrAccountPrint;
char flFrAccountPrint;

//---------------------------------------------------------------------------
__fastcall TFrAccountPrint::TFrAccountPrint(TComponent* Owner): TForm(Owner)
{
BtnVentaFax->Enabled=MainForm->flVENTAFAX;
fGenerationPDF=false;
}
void FunctionToCall (HANDLE hFile, DWORD dwOffset, DWORD dwSize,LPCSTR lpTextToReplicate)
{
/*static*/ char* pszTest = new char [dwSize];
memset (pszTest, ' ', dwSize);
DWORD dwBytesWritten;
SetFilePointer (hFile, dwOffset, NULL, FILE_BEGIN);
WriteFile (hFile, pszTest, dwSize, &dwBytesWritten, NULL);
delete [] pszTest;

LPCSTR vInputServerName;
vInputServerName=lpTextToReplicate;
 SetFilePointer (hFile, dwOffset, NULL, FILE_BEGIN);
 WriteFile (hFile, vInputServerName, (int)strlen(vInputServerName), &dwBytesWritten, NULL);
}

int SearchText (LPCSTR lpFilename,
 LPCSTR lpTextToFind, LPCSTR lpTextToReplicate,
 bool bCaseSens,  // поиск с учетом регистра букв или без онного
 bool bContinueSearch//будет ли наш поиск продолжен после того, как нашли одно слово
)
{
 unsigned int uTextLength = (int)strlen(lpTextToFind); // сколько букв в слове, которое найти надо

//сначала нам надо открыть файл для поиска ;)
HANDLE hFile = CreateFile ( lpFilename, //Это имя нашего файла
GENERIC_READ|GENERIC_WRITE, //Мы его хотим читать и писать
FILE_SHARE_READ, //Разрешим другим программам наш файл читать
NULL, //атрибутов безопасности нам не надо
OPEN_EXISTING, //.надо открыть существующий файл и если этого сделать не выйдет, то вывалится с ошибкой
FILE_FLAG_SEQUENTIAL_SCAN, //Скажем операционке, что хотим  читать файл от начала и до конца последовательно
NULL); //Темплейтов не надо
//открылся ли файл?
if (hFile == INVALID_HANDLE_VALUE)
   {
//	DWORD dwError = GetLastError ();
	ShowMessage ("Файл не открылся");
	return 0; //выходим из функции
   }

//процедура для поиска текста
char* pszBuffer = new char[uTextLength];
memset (pszBuffer, 0, uTextLength);
DWORD dwBytesRead = 0;
DWORD dwOffset = 0;
unsigned int uCount = 0;
while (dwOffset + uTextLength <= GetFileSize (hFile, NULL))
 {
	SetFilePointer (hFile, dwOffset, NULL, FILE_BEGIN);
 if (ReadFile (hFile, pszBuffer, uTextLength, &dwBytesRead, NULL))
   {
	if (!bCaseSens)
	   {
		if (!memcmp (&pszBuffer[0], &lpTextToFind[0], uTextLength))
			if (!bContinueSearch)
			   {
				FunctionToCall (hFile, dwOffset, uTextLength,lpTextToReplicate);
				delete [] pszBuffer ;
				CloseHandle (hFile);
				return 1;
			   }
			else
			   {
			   FunctionToCall (hFile, dwOffset, uTextLength,lpTextToReplicate);
			   uCount++;
			   }
		   }
	   else
			if (!memicmp (&pszBuffer[0], &lpTextToFind[0], uTextLength))
			   {
				if (!bContinueSearch)
				   {
					FunctionToCall (hFile, dwOffset, uTextLength,lpTextToReplicate);
					delete [] pszBuffer ;
					CloseHandle (hFile);
					return 1;
				   }
				else
				   {
					FunctionToCall (hFile, dwOffset, uTextLength,lpTextToReplicate);
					uCount++;
				   }
			   }
   }
dwOffset++;
}//while

delete [] pszBuffer ;
CloseHandle (hFile); //закрываем наш файл

return uCount; //Возвращаем количество найденного

}    
 /*
void Funcs (HANDLE hFile, DWORD dwOffset, DWORD dwSize,LPCSTR lpTextToReplicate)
{
static char* pszTest = new char [dwSize];
memset (pszTest, ' ', dwSize);
DWORD dwBytesWritten;
SetFilePointer (hFile, dwOffset, NULL, FILE_BEGIN);
WriteFile (hFile, pszTest, dwSize, &dwBytesWritten, NULL);
delete [] pszTest;

LPCSTR vInputServerName;
vInputServerName=lpTextToReplicate;
 SetFilePointer (hFile, dwOffset, NULL, FILE_BEGIN);
 WriteFile (hFile, vInputServerName, (int)strlen(vInputServerName), &dwBytesWritten, NULL);

}
void Funcs2 (HANDLE hFile, DWORD dwOffset, DWORD dwSize,LPCSTR lpTextToReplicate)
{
static char* pszTest = new char [dwSize];
memset (pszTest, ' ', dwSize);
DWORD dwBytesWritten;
SetFilePointer (hFile, dwOffset, NULL, FILE_BEGIN);
WriteFile (hFile, pszTest, dwSize, &dwBytesWritten, NULL);
delete [] pszTest;

LPCSTR vInputServerName;
vInputServerName=lpTextToReplicate;
 SetFilePointer (hFile, dwOffset, NULL, FILE_BEGIN);
 WriteFile (hFile, vInputServerName, (int)strlen(vInputServerName), &dwBytesWritten, NULL);

}   */
//---------------------------------------------------------------------------
void __fastcall TFrAccountPrint::OpenFormAccountPrint(int IdFrom, int IdAccount,int Show)
{ int q;
  AnsiString vsQRaspRaspNameRTF, vsSQLQw;
  TStringList *LS =new TStringList();
//  TMemoryStream *pms= new TMemoryStream();
 OpenForm=IdFrom;
 IdAccountPrint=IdAccount;                
 flShow=Show;
 BtnVentaFax->Enabled=MainForm->flVENTAFAX;



switch (OpenForm)
{case 0:  //Показать или создать счет без печати



  break;
 case 1:  //Показать или создать счет с печатью


  break;

 case 2:  //Шаблон в RTFе заполнить значением и через FastReport вывести в PDF

             
 break;

 case 10://Распоряжения
  QRasp->Close();
  QRasp->Parameters->Items[0]->Value=IdAccount;
  QRasp->Open();

  QCreateTmpTable->Close();
  QCreateTmpTable->Parameters->Items[0]->Value=IdAccount;
  QCreateTmpTable->Open();
  //QProduce->Close();
  //QProduce->Parameters->Items[0]->Value=IdAccount;
  //QProduce->Open();
  VAuthor=QRaspauFamIO->AsString; //Имя
  VDescription=QRaspauFamIO->AsString+" Распоряжение №"+QRaspNumbRaspName->AsString;;//Имя
  VName=QRaspauFamIO->AsString+" Распоряжение №"+QRaspNumbRaspName->AsString;//Имя

  frxRasp->ShowReport(false);
  fReport=frxRasp;
   break;
   case 101://Распоряжения
  //////////////////


  QEmplUserDol->Close();
  QEmplUserDol->Parameters->Items[0]->Value=IdAccount;
  QEmplUserDol->Open();
                                                                 

  /////////////////


  QRasp->Close();
  QRasp->Parameters->Items[0]->Value=IdAccount;
  QRasp->Open();

  //QCreateTmpTable->Close();
 // QCreateTmpTable->Parameters->Items[0]->Value=IdAccount;
 // QCreateTmpTable->Open();
  QRaspDetailAlter->Close();
  QRaspDetailAlter->Parameters->Items[0]->Value=IdAccount;
  QRaspDetailAlter->Open();

  QNE->Close();
  QNE->Parameters->Items[0]->Value=IdAccount;
  QNE->Open();

  //QProduce->Close();
  //QProduce->Parameters->Items[0]->Value=IdAccount;
  //QProduce->Open();
  VAuthor=QRaspauFamIO->AsString; //Имя
  VDescription=QRaspauFamIO->AsString+" Распоряжение №"+QRaspNumbRaspName->AsString;;//Имя
  VName=QRaspauFamIO->AsString+" Распоряжение №"+QRaspNumbRaspName->AsString;//Имя
 //TfrxReportPage *TmpPage;
  frxRaspAlter->Pages[1]->Visible=false;
  frxRaspAlter->Pages[3]->Visible=false;
  frxRaspAlter->Pages[4]->Visible=false;
  frxRaspAlter->Pages[5]->Visible=false;
  //frxRaspAlter->Pages[6]->Visible=false;
 //TfrxReportPage TmpPage=new TfrxReportPage();
 //TmpPage=TfrxReportPage(frxRasp->FindObject("Page1"));
 //TmpPage->Visible=false;
  frxRaspAlter->ShowReport(false);
  fReport=frxRaspAlter;

 break;
  case 11://Распоряжения  и все отчеты
  QRasp->Close();
  QRasp->Parameters->Items[0]->Value=IdAccount;
  QRasp->Open();

  QRaspDetailAlter->Close();
  QRaspDetailAlter->Parameters->Items[0]->Value=IdAccount;
  QRaspDetailAlter->Open();

  QEmplUserDol->Close();
  QEmplUserDol->Parameters->Items[0]->Value=IdAccount;
  QEmplUserDol->Open();
                                                                     
  QEmplUserDolRass->Close();
  QEmplUserDolRass->Parameters->Items[0]->Value=IdAccount;
  QEmplUserDolRass->Open();


  QRasp_Comments->Close();
  QRasp_Comments->Parameters->Items[0]->Value=IdAccount;
  QRasp_Comments->Open();

  QNE->Close();
  QNE->Parameters->Items[0]->Value=IdAccount;
  QNE->Open();


  //QProduce->Close();
  //QProduce->Parameters->Items[0]->Value=IdAccount;
  //QProduce->Open();
  VAuthor=QRaspauFamIO->AsString; //Имя
  VDescription=QRaspauFamIO->AsString+" Распоряжение №"+QRaspNumbRaspName->AsString;;//Имя
  VName=QRaspauFamIO->AsString+" Распоряжение №"+QRaspNumbRaspName->AsString;//Имя
  //frxRaspAlter->Pages[6]->Visible=false;
  frxRaspAlter->ShowReport(false);
  fReport=frxRaspAlter;

 break;
    case 111://Распоряжения
  QRasp->Close();
  QRasp->Parameters->Items[0]->Value=IdAccount;
  QRasp->Open();

  QCreateTmpTable->Close();
  QCreateTmpTable->Parameters->Items[0]->Value=IdAccount;
  QCreateTmpTable->Open();

  QRasp_Comments->Close();
  QRasp_Comments->Parameters->Items[0]->Value=IdAccount;
  QRasp_Comments->Open();
  ////
  
  QEmplUserDol->Close();
  QEmplUserDol->Parameters->Items[0]->Value=IdAccount;
  QEmplUserDol->Open();

  ////


  VAuthor=QRaspauFamIO->AsString; //Имя
  VDescription=QRaspauFamIO->AsString+" Распоряжение №"+QRaspNumbRaspName->AsString;;//Имя
  VName=QRaspauFamIO->AsString+" Распоряжение №"+QRaspNumbRaspName->AsString;//Имя
  frxRaspAlter->Pages[2]->Visible=false;
  frxRaspAlter->Pages[3]->Visible=false;
  frxRaspAlter->Pages[4]->Visible=false;
  frxRaspAlter->Pages[7]->Visible=false;
  //frxRaspAlter->Pages[6]->Visible=false;

  frxRaspAlter->ShowReport(false);
  fReport=frxRaspAlter;
  break;

   case 21://Распоряжения
  QRasp->Close();
  QRasp->Parameters->Items[0]->Value=IdAccount;
  QRasp->Open();

  QCreateTmpTable->Close();
  QCreateTmpTable->Parameters->Items[0]->Value=IdAccount;
  QCreateTmpTable->Open();
  //QProduce->Close();
  //QProduce->Parameters->Items[0]->Value=IdAccount;
  //QProduce->Open();
  VAuthor=QRaspauFamIO->AsString; //Имя
  VDescription=QRaspauFamIO->AsString+" Распоряжение №"+QRaspNumbRaspName->AsString;;//Имя
  VName=QRaspauFamIO->AsString+" Распоряжение №"+QRaspNumbRaspName->AsString;//Имя
 //TfrxReportPage *TmpPage;

 //TfrxReportPage TmpPage=new TfrxReportPage();
 //TmpPage=TfrxReportPage(frxRasp->FindObject("Page1"));
 //TmpPage->Visible=false;
  frxRaspAlter2->ShowReport(false);      
  fReport=frxRaspAlter2;
 break;
  case 30://Соглосование
  QRasp->Close();
  QRasp->Parameters->Items[0]->Value=IdAccount;
  QRasp->Open();

  QEmplUserDol->Close();
  QEmplUserDol->Parameters->Items[0]->Value=IdAccount;
  QEmplUserDol->Open();

  QRaspDetailAlter->Close();
  QRaspDetailAlter->Parameters->Items[0]->Value=IdAccount;
  QRaspDetailAlter->Open();
/*
  QCreateTmpTable->Close();
  QCreateTmpTable->Parameters->Items[0]->Value=IdAccount;
  QCreateTmpTable->Open();    */
  //QProduce->Close();
  //QProduce->Parameters->Items[0]->Value=IdAccount;
  //QProduce->Open();


  VAuthor=QRaspauFamIO->AsString; //Имя
  VDescription=QRaspauFamIO->AsString+" Рассылка №"+QRaspNumbRaspName->AsString;;//Имя
  VName=QRaspauFamIO->AsString+" Рассылка №"+QRaspNumbRaspName->AsString;//Имя

  frxRaspAlter->Pages[4]->Visible=false;
  frxRaspAlter->Pages[2]->Visible=false;
  frxRaspAlter->Pages[1]->Visible=false;
  frxRaspAlter->Pages[5]->Visible=false;
  frxRaspAlter->Pages[6]->Visible=false;
  frxRaspAlter->Pages[7]->Visible=false;
  frxRaspAlter->ShowReport(false);
  fReport=frxRaspAlter;

 // frxEmplUserDol->ShowReport(false);
 // fReport=frxEmplUserDol;
   break;

	 case 31://Рассылка

   QRasp->Close();
  QRasp->Parameters->Items[0]->Value=IdAccount; 
  QRasp->Open();

  QRaspDetailAlter->Close();
  QRaspDetailAlter->Parameters->Items[0]->Value=IdAccount;
  QRaspDetailAlter->Open();


  QEmplUserDol->Close();
  QEmplUserDol->Parameters->Items[0]->Value=IdAccount;
  QEmplUserDol->Open();
                                                                     
  QEmplUserDolRass->Close();
  QEmplUserDolRass->Parameters->Items[0]->Value=IdAccount;
  QEmplUserDolRass->Open();


  VAuthor=QRaspauFamIO->AsString; //Имя
  VDescription=QRaspauFamIO->AsString+" Рассылка №"+QRaspNumbRaspName->AsString;;//Имя
  VName=QRaspauFamIO->AsString+" Рассылка №"+QRaspNumbRaspName->AsString;//Имя

  frxRaspAlter->Pages[3]->Visible=false;
  frxRaspAlter->Pages[2]->Visible=false;
  frxRaspAlter->Pages[1]->Visible=false;
  frxRaspAlter->Pages[5]->Visible=false;
  frxRaspAlter->Pages[6]->Visible=false;
  frxRaspAlter->Pages[7]->Visible=false;
  frxRaspAlter->ShowReport(false);
  fReport=frxRaspAlter;
   break;
	 case 41://Лист согласования без фамилий
  QRasp->Close();
  QRasp->Parameters->Items[0]->Value=IdAccount;
  QRasp->Open();

  QEmplUserDol->Close();
  QEmplUserDol->Parameters->Items[0]->Value=IdAccount;
  QEmplUserDol->Open();

  QRaspDetailAlter->Close();
  QRaspDetailAlter->Parameters->Items[0]->Value=IdAccount;
  QRaspDetailAlter->Open();

  VAuthor=QRaspauFamIO->AsString; //Имя
  VDescription=QRaspauFamIO->AsString+" Рассылка №"+QRaspNumbRaspName->AsString;;//Имя
  VName=QRaspauFamIO->AsString+" Рассылка №"+QRaspNumbRaspName->AsString;//Имя

  frxRaspAlter->Pages[3]->Visible=false;
  frxRaspAlter->Pages[2]->Visible=false;
  frxRaspAlter->Pages[1]->Visible=false;
  frxRaspAlter->Pages[5]->Visible=false;
  frxRaspAlter->Pages[4]->Visible=false;
  frxRaspAlter->Pages[7]->Visible=false;  
  frxRaspAlter->ShowReport(false);
  fReport=frxRaspAlter;
   break;
 }
 if (fGenerationPDF)
	{       frxRaspAlter->Pages[7]->Visible=false;
		  if (fType==2)
			 {frxRaspAlter->Pages[3]->Visible=false;
			  frxRaspAlter->Pages[4]->Visible=false;
			  frxRaspAlter->Pages[5]->Visible=false;
			  //frxRaspAlter->Pages[7]->Visible=false;



			  //frxRaspAlter->Pages[6]->Visible=false;
			 }
		  frxRaspAlter->ShowReport(true);
		  fReport=frxRaspAlter;
		  fReport->ShowReport(false);
		  frxPDFExport1->OpenAfterExport=false;
		  frxPDFExport1->ShowDialog=false;
		  //NewFileName = GetCurrentDir()+"\\"+vFILEPATHTEMP+"\\";  //ExtractFilePath(Application->ExeName) ;
		  //SetCurrentDir(ExtractFilePath(Application->ExeName));
		  //frxPDFExport1->DefaultPath=GetCurrentDir()+"\\"+vFILEPATHTEMP+"\\";
		  frxPDFExport1->DefaultPath=AnsiString(MainForm->DirFileSetup)+"\\"+vFILEPATHTEMP+"\\";
		   if (fType==1){frxPDFExport1->FileName="Проект_распоряжения.pdf";}
		   if (fType==2){frxPDFExport1->FileName="Распоряжение.pdf";}
		  /*Idglobal::*/Sleep(2000);
		  frxPreview1->Export(frxPDFExport1);
		  /*Idglobal::*/Sleep(2000);//Рассмотреть возможность проверки монопольным доступом.






		   /////Заполняем структуру письма
		  rMail.Body=new TStringList();             //Текст письма
		  vsSQLQw=  " SELECT  C.auFamIO "
					" FROM bm_Rasp B "
					" LEFT JOIN EmplUsers A ON A.IDUser= B.IdUserBM "
					" LEFT JOIN aa_Users  C ON C.auId = B.IdIns "
					" WHERE DateDel  is null AND B.Idn=:D0; ";
		 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		 Qw->Parameters->Items[0]->Value= IdAccount;
		 Qw->Open();
		 rMail.Body->Add(" Исполнитель распоряжения: "+Qw->Fields->Fields[0]->AsString+"\n");  ///поменять на пользователя создавшего расопряжение.
		 ///////////Проверка корректности цены( при ручном расчете НДС)//
		 vsSQLQw=  " SELECT MAX(isnull(fNoNDS,0)) FROM bm_RaspDetail WHERE IdRasp =:D0 AND DateDel is null AND isnull(fNoNDS,0)<>0" ;
		 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		 Qw->Parameters->Items[0]->Value= IdAccount;
		 Qw->Open();
		// int ttt=Qw->Fields->Fields[0]->AsInteger;
		 if(Qw->Fields->Fields[0]->AsInteger==1){rMail.Body->Add(" ВНИМАНИЕ!!! В РАСПОРЯЖЕНИИ СОДЕРЖАТСЯ ЦЕНЫ И СУММЫ НДС С РУЧНЫМ ПЕРЕСЧЕТОМ. \n"); }



		 ////////////////////////////////////////////////////////////////

		  TReplaceFlags ReplaceFlags;
			vsQRaspRaspNameRTF=StringReplace(QRaspRaspNameRTF->AsString,"\n","",ReplaceFlags<<rfReplaceAll>>rfIgnoreCase);
			vsQRaspRaspNameRTF=StringReplace(vsQRaspRaspNameRTF,"\r"," ",ReplaceFlags<<rfReplaceAll>>rfIgnoreCase);
			vsQRaspRaspNameRTF=StringReplace(vsQRaspRaspNameRTF,"\t"," ",ReplaceFlags<<rfReplaceAll>>rfIgnoreCase);
			
		  rMail.Subject=("\"Проект распоряжения (Код "+IntToStr(QRaspIdn->AsInteger)+"): "+ vsQRaspRaspNameRTF+" .\"");//Тема письма
       	  vsSQLQw=  " SELECT	MAX(LTRIM(RTRIM(b.Mail))) Mail, MAX(a.FamIO) FamIO "
					" FROM   EmplUsers a, EmplUserMail b,  aa_Users c "
					" WHERE  a.DiscDate='21000101' AND a.IDUser=c.auIdUserHD and c.auId=:D0 "
					" AND a.IDUser=CASE WHEN b.IDUser=b.IDUserMail THEN b.IDUser ELSE b.IDUserMail END " ;
		Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		Qw->Parameters->Items[0]->Value=PermisHdr.KeyUserStartProgramm;;
		Qw->Open();
		rMail.SenderMailAddress=Qw->Fields->Fields[0]->AsString; //ЕMail отправителя
		rMail.SenderName=Qw->Fields->Fields[1]->AsString;          //Фамилия и Инициалы отправителя
	   //	  rMail.SenderMailAddress=""; //ЕMail отправителя
	   //	  rMail.SenderName="Служба Специальных Сообщений и Рассылки  ";//+ IntToStr(viTestTimer);          //Фамилия и Инициалы отправителя
		  LS->Clear();
		  if (fType==1){LS->Add(AnsiString(MainForm->DirFileSetup)+"\\"+vFILEPATHTEMP+"\\Проект_распоряжения.pdf");}
		  if (fType==2){LS->Add(AnsiString(MainForm->DirFileSetup)+"\\"+vFILEPATHTEMP+"\\Распоряжение.pdf");}


 if (fType==1)
	{
 /////////////Формируем и прикрепляем програму утверждения\отказа прикрепляемую к письму.
			LPCTSTR lpExistingFileName;
			LPCTSTR lpNewFileName;
			LPCTSTR lpFTURN;
			AnsiString vsTmp;
			vsTmp=AnsiString(MainForm->DirFileSetup)+"\\УТВЕРЖДЕНИЕ.exe";
			lpExistingFileName=vsTmp.c_str();
			vsTmp=AnsiString(MainForm->DirFileSetup)+"\\"+vFILEPATHTEMP+"\\УТВЕРЖДЕНИЕ.exe";
			lpNewFileName=vsTmp.c_str();

			CopyFile(lpExistingFileName,lpNewFileName,false);
			//Idglobal::Sleep(10000);
			//Получаем текущий номер очереди рассылки fTurn
			  vsSQLQw=" SELECT MIN(fTurn) FROM bm_ListMail"
			" WHERE  DateDel is null"
			" AND IdRasp=:D0"
			" AND fType IN (0,2)  "
			" AND fTurn>0"
			" AND (fResault=0 OR fResault is NULL )";
			 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
			 Qw->Parameters->Items[0]->Value= IdAccount;
			 Qw->Open();
			 vsTmp=IntToStr(Qw->Fields->Fields[0]->AsInteger);
			 lpFTURN=vsTmp.c_str();
			//////////////


			SearchText (lpNewFileName, "NAMEHOSTSTATIC=",vNAMEHOSTSTATIC, true, true);
			SearchText (lpNewFileName, "DesignerOrdersNAMEBASESTATIC=",vDesignerOrdersNAMEBASESTATIC, true, true);
			SearchText (lpNewFileName, "IDRASPSTATIC=",AnsiString(IntToStr(IdAccount)).c_str(), true, true);
			SearchText (lpNewFileName, "FTURNSTATIC=",lpFTURN, true, true);
			//Idglobal::Sleep(2000);
		   //	file F1;
			//AssignFile(F1,AnsiString(lpNewFileName));
			//CloseFile(F1);

			LS->Add(AnsiString(MainForm->DirFileSetup)+"\\"+vFILEPATHTEMP+"\\УТВЕРЖДЕНИЕ.exe");
		   //	LS->Add(AnsiString(lpNewFileName));
   }// if (fType==1)
 //////////////////////////////
		  //Восстанавливаем файлы из БД

		 vsSQLQw=  " SELECT AddFile, NameFile FROM bm_AddFiles WHERE DateDel is null AND idRasp=:D0";
		 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		 Qw->Parameters->Items[0]->Value= IdAccount;
		 Qw->Open();
		 while(Qw->Eof==false)
			{((TBlobField*)(Qw->Fields->Fields[0]))->SaveToFile(AnsiString(MainForm->DirFileSetup)+"\\"+vFILEPATHTEMP+"\\"+Qw->Fields->Fields[1]->AsString);
			 LS->Add(AnsiString(MainForm->DirFileSetup)+"\\"+vFILEPATHTEMP+"\\"+Qw->Fields->Fields[1]->AsString);
			 Qw->Next();
			}
		 Qw->Close();

		  ///

		  rMail.PathAddFiles=LS;//Files;          //Маршрут и имя прикрепляемых файлов
		   ///проверяем прикрепленный файлы и прикрепляем их.
		  QInfoMailList->Close();
		  QInfoMailList->Parameters->Items[0]->Value=IdAccount;
		  QInfoMailList->Open();
//		  rMail.Body->Add(QInfoMailListMailText->AsString);

   if (fType==1)
	{
	///Если распоряженияе типа "О внесении изменений в ПИ", то дописываем в текст письма строчку
	vsSQLQw=  " SELECT Idn FROM bm_Rasp WHERE VidRasp=4742383  And Idn=:D0";
		 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		 Qw->Parameters->Items[0]->Value= IdAccount;
		 Qw->Open();
   if (Qw->RecordCount>0) { rMail.Body->Add("\n!!!При утверждении данного распоряжения, все существующие счета и заказы будут безвозвратно  изменены. В программных продуктах  ПО КЦ и САП-3.!!!\n");}
	rMail.Body->Add(QInfoMailList->FieldByName("MailText")->AsString);}
   if ((fType==2)&&(!MainForm->flOtkaz))
	{   /////Рассылка  список адресатов
 QEmplUserDolSheet->Close();
 QEmplUserDolSheet->Parameters->Items[0]->Value= IdAccount;
 QEmplUserDolSheet->Open();

	QEmplUserDolSheet->First();
	rMail.Body->Add(" Распоряжение отослано: ");
	  while(QEmplUserDolSheet->Eof==false)
		 {if (Trim(QEmplUserDolSheetMail->AsString)!="")
			{
			 rMail.Body->Add(QEmplUserDolSheetFamIO->AsString+" на email "+QEmplUserDolSheetMail->AsString);
			}
	  QEmplUserDolSheet->Next();
	  }
	}

		  ///
		 // LS->Clear();Прикрепленные файлы пропадут
		  Close();
	}
}
//---------------------------------------------------------------------------
void __fastcall TFrAccountPrint::FormClose(TObject *Sender,
      TCloseAction &Action)
{
  DiscQuer->Active = false;
 Action = caFree;flFrAccountPrint=WINCLS;
}
//---------------------------------------------------------------------------
void __fastcall TFrAccountPrint::RzToolButton8Click(TObject *Sender)
{ Close();}
//---------------------------------------------------------------------------
void __fastcall TFrAccountPrint::BtnPrintClick(TObject *Sender)
{//RzPanel2->Visible=true;
 fReport->PrintOptions->ShowDialog=true;  //Default
 fReport->PrintOptions->Printer="Default";
 frxPreview1->Print();
 /*
 Qw->Close();
 Qw->SQL->Clear();
 Qw->SQL->Add(" update all_Invoices SET DatePrint=getdate() where idn= "+IntToStr(Qa1Idn->AsInteger));
 Qw->ExecSQL();
 Qw->Close();
 ShowMessage("Была произведенна печать и сохранилась дата печати." );     */
 }
//---------------------------------------------------------------------------
void __fastcall TFrAccountPrint::RzToolButton7Click(TObject *Sender)
{
OpenFormAccountPrint(OpenForm,IdAccountPrint,flShow);
}
//---------------------------------------------------------------------------
void __fastcall TFrAccountPrint::BtnSaveClick(TObject *Sender)
{RzPanel400->Visible=true;}
//---------------------------------------------------------------------------
void __fastcall TFrAccountPrint::SpeedButton3Click(TObject *Sender)
{RzPanel400->Visible=false;}
//---------------------------------------------------------------------------
void __fastcall TFrAccountPrint::SpeedButton2Click(TObject *Sender)
{AnsiString SL;
int i;
 
 SpeedButton3Click(Sender);//Отмена сохранения
switch(RzRadioGroup1->ItemIndex)
 {default: case 0:          //По умолчанию Excel
  frxPreview1->Export(frxXLSExport1);//Export Excell
  break;
  case 1:
  frxPDFExport1->OpenAfterExport=true;
  frxPDFExport1->ShowDialog=true;
  SL="C:\\";
  if(AnsiString(SetupIni.PathPDF).Trim().Length()==0)  Ansistrings::StrLCopy(SetupIni.PathPDF,SL.c_str(),sizeof(SetupIni.PathPDF)-2);
  SL="файл";
 // if(Qa1->Active==true)SL=Qa1Num->AsString;
//  if(Qt1->Active==true)SL=Qa1Num->AsString;
  while((i=SL.LastDelimiter("/\\.:"))>0){SL.Delete(i,1);  }
  frxPDFExport1->DefaultPath=AnsiString(SetupIni.PathPDF)+SL+".pdf";
  frxPreview1->Export(frxPDFExport1);

  SL= frxPDFExport1->FileName;
  i=SL.LastDelimiter(":\\");
  if(i>0)
  {SL.Delete(i,SL.Length()-i+1);
   Ansistrings::StrLCopy(SetupIni.PathPDF,SL.c_str(),sizeof(SetupIni.PathPDF)-2);
   SetupIni.PathPDF[sizeof(SetupIni.PathPDF)-1]=0;
  }  

  
  break; //Adobe Acrobat reader
  case 2: frxPreview1->Export(frxHTMLExport1);break;//Explorer
  case 3: frxPreview1->Export(frxXMLExport1);break; //XML
  //case 4: frxPreview1->Export(frxCSVExport1);break; //Текст с разделителями [;]
  case 5: frxPreview1->SaveToFile();break;          //RP3
  case 6: frxPreview1->Export(frxRTFExport1);break; //RTF
  case 7: frxPreview1->Export(frxTIFFExport1);break; //TIFF
  case 8: frxPreview1->Export(frxSimpleTextExport1);break; //TXT
  case 9: frxPreview1->Export(frxJPEGExport1);break; //JPEG
  case 10: frxPreview1->Export(frxGIFExport1);break; //GIF
  case 11: frxPreview1->Export(frxBMPExport1);break; //BMP
 }
}
//---------------------------------------------------------------------------
void __fastcall TFrAccountPrint::BtnZoomInClick(TObject *Sender)
{frxPreview1->Zoom=frxPreview1->Zoom+0.10;}
//---------------------------------------------------------------------------
void __fastcall TFrAccountPrint::BtnZoomOutClick(TObject *Sender)
{frxPreview1->Zoom=frxPreview1->Zoom-0.10;}
//---------------------------------------------------------------------------
void __fastcall TFrAccountPrint::BtnViewClick(TObject *Sender)
{frxPreview1->Zoom=1;}
//---------------------------------------------------------------------------
void __fastcall TFrAccountPrint::RzToolButton1Click(TObject *Sender)
{frxPreview1->First();}
//---------------------------------------------------------------------------
void __fastcall TFrAccountPrint::RzToolButton2Click(TObject *Sender)
{frxPreview1->Prior();}
//---------------------------------------------------------------------------
void __fastcall TFrAccountPrint::BtnNextRecordClick(TObject *Sender)
{frxPreview1->Next();}
//---------------------------------------------------------------------------
void __fastcall TFrAccountPrint::BtnLastRecordClick(TObject *Sender)
{frxPreview1->Prior();}
//---------------------------------------------------------------------------
void __fastcall TFrAccountPrint::R0GetValue(const UnicodeString VarName, Variant &Value)
{   /*
if(VarName=="SumPr")
{Value=MoneyToString(Qa1Summa->AsCurrency,true,false,true) ;}
   */
}
//---------------------------------------------------------------------------
void __fastcall TFrAccountPrint::BtnVentaFaxClick(TObject *Sender)
{//Отправить по факсу
AnsiString SL,SV;
int i,y,z;
 /*
 fReport->ReportOptions->CreateDate=Now();
 fReport->ReportOptions->LastChange=Now();
 fReport->ReportOptions->Author=VAuthor;//fQueryIns->AsString;
 fReport->ReportOptions->Description->Text=VDescription;//fQueryIns->AsString+" Счет №"+fQueryNum->AsString;
 fReport->ReportOptions->Name=VName;//fQueryIns->AsString+" Счет №"+fQueryNum->AsString;
 fReport->PrintOptions->Printer="VentaFax";  //Default
 fReport->PrintOptions->ShowDialog=false;  //Default

if(MainForm->FaxNum.Length()>4){SL=MainForm->FaxNum.Trim();}
else {SL=Qa1Fax->AsString.Trim();}

frxPreview1->Print();

fReport->PrintOptions->ShowDialog=true;  //Default
fReport->PrintOptions->Printer="Default";  //

SV=SL.SubString(1,3);SL.Delete(1,3);
MainForm->CallExternWindow(1,"   ");  //ВЫзвать окно управления факсом и записать код страны
Sleep((unsigned long)400); //Дать время на активизацию
MainForm->CallExternWindow(1,""); //ВЫзвать окно управления факсом и записать код страны
MainForm->CallExternWindow(2,"");   //ВЫзвать окно управления факсом и записать код города
MainForm->CallExternWindow(3,"78"+SV+SL); //ВЫзвать окно управления факсом и записать номер факса
MainForm->CallExternWindow(4,Qa1NameFull->AsString); //ВЫзвать окно управления факсом и записать Наименование учреждения
MainForm->CallExternWindow(5,Qa1FIO->AsString);     //ВЫзвать окно управления факсом и записать Фамилию

   */
}
//---------------------------------------------------------------------------
void __fastcall TFrAccountPrint::RzToolButton4Click(TObject *Sender)
{UnicodeString SL;
 TStringList   *SSl = new TStringList();

frxPDFExport1->ShowDialog=false;
frxPDFExport1->OpenAfterExport=false;
DateTimeToString(SL,"ddmmyyyy_hhnnsszzz",Now());
SL=AnsiString(MainForm->DirFileSetup)+vFILEPATHTEMP+"\\"+SL+".pdf";
frxPDFExport1->FileName=SL;
frxPreview1->Export(frxPDFExport1);
SSl->Add(SL);
//MainForm->SentAccountEmail(Qa1Idn->AsInteger,SSl,-1);
Close();
}
//---------------------------------------------------------------------------
void __fastcall TFrAccountPrint::R2GetValue(const UnicodeString VarName,Variant &Value)
{
Value=MainForm->ReplaseKeyToDate(IdAccountPrint,"["+VarName+"]")   ;
}
//---------------------------------------------------------------------------
void __fastcall TFrAccountPrint::RzToolButton3Click(TObject *Sender)
{//Загрузить шаблон формата FR3 frxPreview1->LoadFromFile();
 /*Qw->Close();
 Qw->SQL->Clear();
 Qw->SQL->Add(" update all_Invoices SET DatePrint=getdate() where idn= "+IntToStr(Qa1Idn->AsInteger));
 Qw->ExecSQL();
 Qw->Close();
 ShowMessage("Была произведенна печать и сохранилась дата печати." );  */
}
//---------------------------------------------------------------------------
void __fastcall TFrAccountPrint::TmRefreshTimer(TObject *Sender)
{
TmRefresh->Enabled=false;
BtnVentaFaxClick(NULL);
}
//---------------------------------------------------------------------------

void __fastcall TFrAccountPrint::QRaspDateRaspGetText(TField *Sender,
	  AnsiString &Text, bool DisplayText)
{
/*AnsiString vsTmpDay, vsTmpMouth, vsTmpYear;


   vsTmpDay=QRaspDateRasp->AsDateTime.FormatString("d");
   vsTmpMouth=QRaspDateRasp->AsDateTime.FormatString("m");
   vsTmpYear=QRaspDateRasp->AsDateTime.FormatString("yyyy");


   switch (StrToInt(vsTmpMouth))
   {
  case	1: vsTmpMouth = "января";break;
  case	2: vsTmpMouth = "февраля";break;
  case	3: vsTmpMouth = "марта";break;
  case	4: vsTmpMouth = "апреля";break;
  case	5: vsTmpMouth = "мая";break;
  case	6: vsTmpMouth = "июня";break;
  case	7: vsTmpMouth = "июля";break;
  case	8: vsTmpMouth = "августа";break;
  case	9: vsTmpMouth = "сентября";break;
  case	10: vsTmpMouth = "октября";break;
  case	11: vsTmpMouth = "ноября";break;
  case	12: vsTmpMouth = "декабря";break;
   }



 Text=vsTmpDay+" "+vsTmpMouth+" "+vsTmpYear+" года";  */
}
//---------------------------------------------------------------------------


void __fastcall TFrAccountPrint::frxRaspGetValue(const UnicodeString VarName, Variant &Value)
{
  UnicodeString vsSQLQw, vsTmpUserPName;
  if (VarName=="sYear")
{ AnsiString vsTmpDay, vsTmpMouth, vsTmpYear;
   vsTmpYear=Now().FormatString("yyyy");
  // vsTmpYear=QRaspDateRasp->AsDateTime.FormatString("yyyy");

 Value=vsTmpYear;
 }
  if(VarName=="iCountRec")
{     
 Value=QEmplUserDolRass->RecordCount;
 }
if(VarName=="SumPr")
{ AnsiString vsTmpDay, vsTmpMouth, vsTmpYear;

   vsTmpYear=QRaspDateRasp->AsDateTime.FormatString("yyyy");
   if(vsTmpYear=="1900")
	  {Value= "\"___\"__________"+Now().FormatString("yyyy")+"г.";
	  }
   else
	  {
		vsTmpDay=QRaspDateRasp->AsDateTime.FormatString("d");
		vsTmpMouth=QRaspDateRasp->AsDateTime.FormatString("m");

	   switch (StrToInt(vsTmpMouth))
		{
		case 1: vsTmpMouth = "января";break;
		case 2: vsTmpMouth = "февраля";break;
		case 3: vsTmpMouth = "марта";break;
		case 4: vsTmpMouth = "апреля";break;
		case 5: vsTmpMouth = "мая";break;
		case 6: vsTmpMouth = "июня";break;
		case 7: vsTmpMouth = "июля";break;
		case 8: vsTmpMouth = "августа";break;
		case 9: vsTmpMouth = "сентября";break;
		case 10: vsTmpMouth = "октября";break;
		case 11: vsTmpMouth = "ноября";break;
		case 12: vsTmpMouth = "декабря";break;
		}

	   Value=vsTmpDay+" "+vsTmpMouth+" "+vsTmpYear+" года";
	  }
 }

  if (VarName == "TextAdv")
	 {
	  switch (QRaspDetailfAdv->AsInteger)
			 {
			  case  0: Value = "годовой";
					   break;
			  case  1: Value = "1п\г";
					   break;
			  case  2: Value = "2п\г";
					   break;
			  case  3: Value = "1 квартал";
					   break;
			  case  4: Value = "2 квартал";
					   break;
			  case  5: Value = "3 квартал";
					   break;
			  case  6: Value = "4 квартал";
					   break;
			  case  7: Value = "месячный";
					   break;
			  //all from 8 to 22 added by R.Perkatov 2014-05-13
			  case  8: Text = "полуторагодовой";
					   break;
			  case  9: Text = "трёхдневный";
					   break;
			  case 10: Text = "четырёхмесячный";
					   break;
			  case 11: Text = "трёхгодовой";
					   break;
			  case 12: Text = "60 дней";
					   break;
			  case 13: Text = "90 дней";
					   break;
			  case 14: Text = "150 дней";
					   break;
			  case 15: Text = "180 дней";
					   break;
			  case 16: Text = "210 дней";
					   break;
			  case 17: Text = "240 дней";
					   break;
			  case 18: Text = "270 дней";
					   break;
			  case 19: Text = "300 дней";
					   break;
			  case 20: Text = "330 дней";
					   break;
			  case 21: Text = "пятилетний";
					   break;
			  case 22: Text = "пятидневный";
					   break;
			  case 23: Text = "510 дней";
					   break;
			  }
  }

  if (VarName == "DateRasp")
	 {
	  AnsiString vsTmpDay, vsTmpMouth, vsTmpYear;

	  vsTmpYear = QRaspDateRasp->AsDateTime.FormatString("yyyy");
	  if (vsTmpYear == "1900")
		  Value= "__________ г.";
	  else  Value=QRaspDateRasp->AsDateTime.FormatString("dd.mm.yyyyг.");
	  }
  if(VarName=="NumbRasp")
	{
	 if(Trim(QRaspNumbRaspName->AsString)=="") Value= "__________ ";
	  else  Value=QRaspNumbRaspName->AsString;
	}
	//Проверяем, утверждал ли замещающий
	vsSQLQw= " SELECT TOP 1 C2.auFamIO from dbo.bm_ListMail A "
			 " LEFT JOIN aa_Users C2 on  C2.auIdUserHD=A.IDUserP "
			 " where Idn=:D0 AND C2.auId=A.IdLastSheet AND isnull(A.IDUserP,0)>0 ";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value=QEmplUserDolIdn->AsInteger;
 Qw->Open();
 if(Qw->RecordCount>0) vsTmpUserPName=Qw->Fields->Fields[0]->AsString+" "; else vsTmpUserPName="";
  if(VarName=="ResaultDate")
	 {if(QEmplUserDolfResault->AsInteger<1) Value="\n       ___________________/                    \n      \"____\"______________"+Now().FormatString("yyyy")+" г. ";
	  if(QEmplUserDolfResault->AsInteger==1) Value="       Утверждено "+vsTmpUserPName+QEmplUserDolDateLastSheet->AsDateTime.FormatString("dd.mm.yyyy")+"г. \n время "+QEmplUserDolDateLastSheet->AsDateTime.FormatString("hh:nn")+" ";
	  if(QEmplUserDolfResault->AsInteger==2) Value="       Отклонено "+vsTmpUserPName+QEmplUserDolDateLastSheet->AsDateTime.FormatString("dd.mm.yyyy")+"г. \n время "+QEmplUserDolDateLastSheet->AsDateTime.FormatString("hh:nn")+" ";

	 }
  if(VarName=="ResaulDateClear")
	 { Value="\n       ___________________/                    \n\n      \"____\"______________"+Now().FormatString("yyyy")+" г.           ";
	 }
  if(VarName=="NumbRaspName")
	 {if(QRaspNumbRaspName->AsString=="") Value="                                 ";
	  else Value=QRaspNumbRaspName->AsString;
	 }
  if(VarName=="auPhoneUser")
	 {if(Trim(QRaspauPhoneUser->AsString)=="") Value="";
	  else Value="(т."+QRaspauPhoneUser->AsString+")";
	 }


}
//---------------------------------------------------------------------------



void __fastcall TFrAccountPrint::frxEmplUserDolGetValue(
      const UnicodeString VarName, Variant &Value)
{
if(VarName=="sYear")
{ AnsiString vsTmpDay, vsTmpMouth, vsTmpYear;
   vsTmpYear=Now().FormatString("yyyy");
  // vsTmpYear=QRaspDateRasp->AsDateTime.FormatString("yyyy");

 Value=vsTmpYear;
 }
  if(VarName=="DateRasp")
	{ AnsiString vsTmpDay, vsTmpMouth, vsTmpYear;

	  vsTmpYear=QRaspDateRasp->AsDateTime.FormatString("yyyy");
	  if(vsTmpYear=="1900") Value= "__________ г.";
	  else  Value=QRaspDateRasp->AsDateTime.FormatString("dd.mm.yyyyг.");
	 }
  if(VarName=="NumbRasp")
	{
	 if(Trim(QRaspNumbRaspName->AsString)=="") Value= "__________ ";
	  else  Value=QRaspNumbRaspName->AsString;
	}
 
}
//---------------------------------------------------------------------------

void __fastcall TFrAccountPrint::frxEmplUserDolRassGetValue(
	  const UnicodeString VarName, Variant &Value)
{
if(VarName=="sYear")
{ AnsiString vsTmpDay, vsTmpMouth, vsTmpYear;

	   vsTmpYear=QRaspDateRasp->AsDateTime.FormatString("yyyy");

 Value=vsTmpYear;
 }
 if(VarName=="iCountRec")
{     
 Value=QEmplUserDolRass->RecordCount;
 }
   if(VarName=="DateRasp")
	{ AnsiString vsTmpDay, vsTmpMouth, vsTmpYear;

	  vsTmpYear=QRaspDateRasp->AsDateTime.FormatString("yyyy");
	  if(vsTmpYear=="1900") Value= "__________ г.";
	  else  Value=QRaspDateRasp->AsDateTime.FormatString("dd.mm.yyyyг.");
	 }
  if(VarName=="NumbRasp")
	{
	 if(Trim(QRaspNumbRaspName->AsString)=="") Value= "__________ ";
	  else  Value=QRaspNumbRaspName->AsString;
	}


}

//---------------------------------------------------------------------------






void __fastcall TFrAccountPrint::FormShow(TObject *Sender)
{
/*  String q = "SELECT TermsDiscount FROM dbo.bm_RaspDiscountLink WHERE RaspIdn = " + IntToStr(viRaspIdn);
  DiscQuer->Active = true;
  DiscQuer->SQL->Clear();
  DiscQuer->SQL->Add(q);
  DiscQuer->Open();  */

/*  if (DiscQuer->RecordCount > 0)
	 {    */
}
//---------------------------------------------------------------------------

