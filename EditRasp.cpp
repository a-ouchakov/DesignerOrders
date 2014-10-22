//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EditRasp.h"
#include "FindEmplUser.h"
#include "FindRaspName.h"
#include "Init.h"
#include "FundRTFText.h"
#include "AccountPrint.h"
#include "main.h"
#include "EditLibs.h"
#include "FindProduce.h"
#include "AddFiles.h"
#include "ListMail.h"
#include "EditProduce.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzPanel"
#pragma link "RzEdit"
#pragma link "RzCmboBx"
#pragma link "RzBckgnd"
#pragma link "RzLabel"
#pragma link "RzCommon"
#pragma link "cxContainer"
#pragma link "cxControls"
#pragma link "cxEdit"
#pragma link "cxMemo"
#pragma link "cxRichEdit"
#pragma link "cxTextEdit"
#pragma link "RzShellDialogs"
#pragma link "RzTabs"
#pragma link "cxClasses"
#pragma link "cxCurrencyEdit"
#pragma link "cxCustomData"
#pragma link "cxData"
#pragma link "cxDataStorage"
#pragma link "cxDBData"
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
#pragma link "RzChkLst"
#pragma link "RzLstBox"
#pragma link "RzSplit"
#pragma link "cxButtonEdit"
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
#pragma resource "*.dfm"
TFrEditRasp *FrEditRasp;
char flFrEditRasp;
//---------------------------------------------------------------------------
__fastcall TFrEditRasp::TFrEditRasp(TComponent* Owner)
	: TForm(Owner)
{ int i;
 fOkButton=false;
 fPrint=false;
 dtDateRasp->Date=Now();

 LoadPicList(RzComboBox1->Items,NULL,NULL);


  vsSQLQw=" SELECT  DISTINCT   B.IdUserBM ,A.FamIO  FROM EmplUsers A,  bm_Rasp B "
" WHERE A.DiscDate='21000101'  and A.IDUser= B.IdUserBM "
" ORDER BY A.FamIO; ";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Open();cbBMName->Clear();
  while(Qw->Eof==false){cbBMName->AddObject(Qw->Fields->Fields[1]->AsString,(TObject*)Qw->Fields->Fields[0]->AsInteger);Qw->Next();}Qw->Close();

// vsSQLQw=" SELECT Idn, iText FROM spl_LbText256 WHERE iLvl=1523" ;
 vsSQLQw=" SELECT Idn, iText FROM spl_LbText256 WHERE iLvl=1523 AND Idn NOT IN (4742153)" ;
 if (!(MainForm->flGetPI)) {vsSQLQw=vsSQLQw+" AND Idn NOT IN (4742383) "; }

 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Open();cbVidRasp->Clear();
  while(Qw->Eof==false){cbVidRasp->AddObject(Qw->Fields->Fields[1]->AsString,(TObject*)Qw->Fields->Fields[0]->AsInteger);Qw->Next();}Qw->Close();
 cbVidRasp->ItemIndex=cbVidRasp->Items->IndexOf("Распоряжение об установлении цен (подписных, льготных)");


 vsSQLQw=" SELECT Idn, iText FROM spl_LbText24 WHERE iLvl=1450" ;
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Open();cbNameStatus->Clear();
  while(Qw->Eof==false){cbNameStatus->AddObject(Qw->Fields->Fields[1]->AsString,(TObject*)Qw->Fields->Fields[0]->AsInteger);Qw->Next();}Qw->Close();
 cbNameStatus->ItemIndex=cbNameStatus->Items->IndexOf("Черновик");

 vsSQLQw=" SELECT Idn, iText FROM spl_LbText256 WHERE iLvl=1454" ;
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Open();cbTypeRasp->Clear();
  while(Qw->Eof==false){cbTypeRasp->AddObject(Qw->Fields->Fields[1]->AsString,(TObject*)Qw->Fields->Fields[0]->AsInteger);Qw->Next();}Qw->Close();

  vsSQLQw=" SELECT Idn, iText FROM spl_LbText24 WHERE iLvl=1452" ;
  Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
  Qw->Open();cbCity->Clear();
  while(Qw->Eof==false){cbCity->AddObject(Qw->Fields->Fields[1]->AsString,(TObject*)Qw->Fields->Fields[0]->AsInteger);Qw->Next();}Qw->Close();
  cbCity->ItemIndex=cbCity->Items->IndexOf("Москва");

  vsSQLQw=" SELECT Idn, iText FROM spl_LbText24 WHERE iLvl=1453" ;
  Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
  Qw->Open();btNameStatuser->Clear();
  while(Qw->Eof==false){btNameStatuser->AddObject(Qw->Fields->Fields[1]->AsString,(TObject*)Qw->Fields->Fields[0]->AsInteger);Qw->Next();}Qw->Close();



  if(MainForm->flSheet) {btSheet->Visible=true;RzSpacer4->Visible=true;btOtkaz->Visible=true;RzSpacer2->Visible=true; }
  else {btSheet->Visible=false;RzSpacer4->Visible=false;btOtkaz->Visible=false;RzSpacer2->Visible=false; }

  btAddNameActionDiscount->Visible=MainForm->flCommentsCheckLists;
  btAddActionPurpose->Visible=MainForm->flCommentsCheckLists;
  btAddGroupClients->Visible=MainForm->flCommentsCheckLists;
  btAddAdvancementChannel->Visible=MainForm->flCommentsCheckLists;


//	RzComboBox1->ItemIndex=0;

/*  //Создаем временную таблицу для прогнозируемых затрат
   AnsiString  vsSQLTmpTable;
   DateTimeToString(TempTableName,"yyyymmdd",Now());
   TempTableName="#TMP_PZ_"+TempTableName+"_"+"_"+IntToStr(PermisHdr.KeyUserStartProgramm)+"_"+IntToStr(PermisHdr.KeyConnect);// Уникальный код подключения; Код текущего пользователя

  vsSQLTmpTable= "IF(EXISTS (select * from tempdb..sysobjects where id = object_id('tempdb.."+TempTableName+"')))DROP TABLE "+TempTableName+";"
   "CREATE TABLE "+TempTableName+"(Idn int NULL, idRasp int NULL, Produce varchar(250) NULL, PrognozOtklik int NULL, FactorCost money NULL, HalfReceivedProfit money NULL, AllCost money NULL, PrognozProfit money NULL, AllProfit money NULL);"; //fInsDouble флаг "Создать как"-1? "Переместить"-0
   QTmpTable->Close();
   QTmpTable->SQL->Clear();
   QTmpTable->SQL->Add(vsSQLTmpTable);
   QTmpTable->ExecSQL();     */


}
//---------------------------------------------------------------------------
void __fastcall TFrEditRasp::btCloseClick(TObject *Sender)
{ 
 Close();
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRasp::dtDateRaspCloseUp(TObject *Sender)
{ AnsiString vsTmpDay, vsTmpMouth, vsTmpYear;


   vsTmpDay=dtDateRasp->Date.FormatString("d");
   vsTmpMouth=dtDateRasp->Date.FormatString("m");
   vsTmpYear=dtDateRasp->Date.FormatString("yyyy");


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


 if(StrToInt(vsTmpYear)<=1900)edDateRasp->Text=""; else edDateRasp->Text=vsTmpDay+" "+vsTmpMouth+" "+vsTmpYear+" года";
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRasp::btAddEmplUserClick(TObject *Sender)
{
int i;
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#undef  NN
#endif
#define TFR TFrEmplUser
#define FR  FrEmplUser
#define FL  flFrEmplUser
#define NN  N11


  FR=new TFR(Application);

  FR->ShowModal();
  FR->WindowState=wsMinimized;
  if (FR->fOkButton)
	 {
	  int i = cbEmplUsers->Items->IndexOf(FR->QEmplUserFamIO->AsString); //получаем индекс данной записи. Если ее не т вcombobox то -1

	  if (i == -1)
		 {
		  cbEmplUsers->AddObject(FR->QEmplUserFamIO->AsString, (TObject*)FR->QEmplUserIDUser->AsInteger);
		  i = (cbEmplUsers->Items->Count)-1;
		  }
	  cbEmplDol->Clear();
	  cbEmplDol->ItemIndex = -1;
	  cbEmplUsers->ItemIndex = i;

	  AnsiString vsSQLEmplDlg;
	  if (((cbEmplUsers->ItemIndex) != -1))
			cbEmplDol->Enabled = true;
		 {
		  if ((RzComboBox1->ItemIndex==-1))
			 {i = 0;}
		  else {i = (int)RzComboBox1->Items->Objects[RzComboBox1->ItemIndex];}

	  vsSQLEmplDlg = "SELECT MAX(IDn), Dol FROM EmplDol "
					 " WHERE DiscDate = '21000101' AND IDUser = " + IntToStr((int)cbEmplUsers->Items->Objects[cbEmplUsers->ItemIndex]) +
					 "   AND IDUR IN(SELECT FlUr FROM dbo.clt_Seller WHERE idn = " + IntToStr(i) + ") GROUP BY Dol";
	  QEmplDol->Close();
	  QEmplDol->SQL->Clear();
	  QEmplDol->SQL->Add(vsSQLEmplDlg);
	  QEmplDol->Open();
	  cbEmplDol->Clear();
	  while (!QEmplDol->Eof)
			{
			 cbEmplDol->AddObject(QEmplDolDol->AsString,(TObject*)QEmplDolIDn->AsInteger);
			 QEmplDol->Next();
			 }
	  QEmplDol->Close();
	  cbEmplDol->ItemIndex = 0;
	  }
	}
  delete (FR);
  
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRasp::cbEmplDolDropDown(TObject *Sender)
{
  TmEmplDol->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRasp::TmEmplDolTimer(TObject *Sender)
{ int i;
 TmEmplDol->Enabled=false;
 AnsiString vsSQLEmplDlg;
 if (cbEmplUsers->ItemIndex==-1)
	 return;
	//{ShowMessage(AnsiString("Выберете ФИО утверждающего лица")); }
 else
	{ if ((RzComboBox1->ItemIndex==-1)) {i=0;} else {i=(int)RzComboBox1->Items->Objects[RzComboBox1->ItemIndex]; }
	 vsSQLEmplDlg="   SELECT  MAX(IDn), Dol FROM EmplDol  WHERE  DiscDate='21000101' and IDUser= "+IntToStr((int)cbEmplUsers->Items->Objects[cbEmplUsers->ItemIndex] ) +" and IDUR in(select FlUr from  dbo.clt_Seller where idn= "+IntToStr(i)+") group by Dol";
	//vsSQLEmplDlg="   SELECT  MAX(IDn), Dol FROM EmplDol  WHERE  DiscDate='21000101' and IDUser= "+IntToStr((int)cbEmplUsers->Items->Objects[cbEmplUsers->ItemIndex] ) +" group by Dol";
	 QEmplDol->Close();QEmplDol->SQL->Clear();QEmplDol->SQL->Add(vsSQLEmplDlg);
	 QEmplDol->Open();cbEmplDol->Clear();
 while(QEmplDol->Eof==false){cbEmplDol->AddObject(QEmplDolDol->AsString,(TObject*)QEmplDolIDn->AsInteger);QEmplDol->Next();}QEmplDol->Close();
	}
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRasp::cbTypeRaspExit(TObject *Sender)
{
 /*  switch (StrToInt(vsTmpMouth))
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
   }{
     
 }  */
}
//---------------------------------------------------------------------------


void __fastcall TFrEditRasp::btAddEmplUserBMClick(TObject *Sender)
{
 #ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#undef  NN
#endif
#define TFR TFrEmplUser
#define FR  FrEmplUser
#define FL  flFrEmplUser
#define NN  N11


  FR=new TFR(Application);

  FR->ShowModal();
  FR->WindowState=wsMinimized;
   if (FR->fOkButton) 
	  {int i=cbBMName->Items->IndexOf(FR->QEmplUserFamIO->AsString); //получаем индекс данной записи. Если ее не т вcombobox то -1
	  if(i==-1)
		 { cbBMName->AddObject(FR->QEmplUserFamIO->AsString,(TObject*)FR->QEmplUserIDUser->AsInteger);
		   i=(cbBMName->Items->Count)-1;
		 }
	   cbBMName->ItemIndex=i;
	  }
  delete (FR);
	
}
//---------------------------------------------------------------------------


void __fastcall TFrEditRasp::edNumbRaspNameKeyPress(TObject *Sender, char &Key)
{    
 AnsiString vsTmp;

 vsTmp=AnsiString(Key);
 vsTmp=vsTmp.UpperCase() ;
 Key= *(vsTmp.c_str());
		
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRasp::btInsRaspClick(TObject *Sender)
{
  if (reComment->Text.Length() == 0)
	 {
      ShowMessage("Пожалуйста, заполните КОММЕНТАРИИ к распоряжению!");
	  reComment->SetFocus();
	  reComment->Style->Color = clYellow;
	  return;
	  }

  if (cbVidRasp->ItemIndex == -1)
	 {
	  ShowMessage("Пожалуйста, выберите ВИД распоряжения!");
	  cbVidRasp->SetFocus();
	  return;
	  }

  if (cbTypeRasp->ItemIndex == -1)
	 {
	  ShowMessage("Пожалуйста, выберите ТИП распоряжения!");
	  cbTypeRasp->SetFocus();
	  return;
	  }

  if (RzComboBox1->ItemIndex == -1)
	 {
	  ShowMessage("Пожалуйста, выберите юридическое лицо!");
	  RzComboBox1->SetFocus();
	  return;
	  }

  if (edDateRasp->Text.Length() == 0)
	 {
	  ShowMessage("Пожалуйста, выберите ДАТУ распоряжения!");
	  edDateRasp->SetFocus();
	  edDateRasp->Color = clYellow;
	  return;
	  }

  if (cbCity->ItemIndex == -1)
	 {
	  ShowMessage("Пожалуйста, выберите ГОРОД из списка!");
	  cbCity->SetFocus();
	  return;
	  }

  if (reRaspName->Text.Length() == 0)
	 {
	  ShowMessage("Пожалуйста, введите НАИМЕНОВАНИЕ распоряжения!");
	  reRaspName->SetFocus();
	  reRaspName->Style->Color = clYellow;
	  return;
	  }

  if (reContentTargetRTF->Text.Length() == 0)
	 {
	  ShowMessage("Пожалуйста, введите ЦЕЛЬ распоряжения!");
	  reContentTargetRTF->SetFocus();
	  reContentTargetRTF->Style->Color = clYellow;
	  return;
	  }

  if (reContentRTF->Text.Length() == 0)
	 {
	  ShowMessage("Пожалуйста, введите ТЕКСТ распоряжения!");
	  reContentRTF->SetFocus();
	  reContentRTF->Style->Color = clYellow;
	  return;
	  }


  TMemoryStream *pms= new TMemoryStream();
  AnsiString  vsSQLINS_EditRasp, vsSQLQw;
  int viTmpResult;
/*reRaspName->SelectAll();
reRaspName->SelAttributes->Name="Times New Roman";
reRaspName->SelAttributes->Size=11;

reContentTargetRTF->SelectAll();
reContentTargetRTF->SelAttributes->Name="Times New Roman";
reContentTargetRTF->SelAttributes->Size=14;

//reContentRTF->DefAttributes->Name="Times New Roman";
reContentRTF->SelectAll();
reContentRTF->SelAttributes->Name="Times New Roman";
reContentRTF->SelAttributes->Size=14;
*/

////////////  При смене Юр.Лица удаляем все созданные подписные индексы.
  vsSQLQw=" SELECT  idSeller   FROM bm_Rasp WHERE Idn="+IntToStr(viRaspIdn);
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Open() ;

   vsSQLQw=" SELECT  Idn   FROM bm_RaspDetail WHERE DateDel is null AND  IdRasp="+IntToStr(viRaspIdn);
 Qw2->Close();Qw2->SQL->Clear();Qw2->SQL->Add(vsSQLQw);
 Qw2->Open() ;
  if ((Qw->Fields->Fields[0]->AsInteger!=(int)RzComboBox1->Items->Objects[RzComboBox1->ItemIndex])&&(Qw2->RecordCount>0))
  {if(MessageDlg("Вы уверены, что хотите сохранить данные?\n У Вас изменилось Юридическое лицо. Все подписные индексы будут удалены." ,mtWarning,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrNo){return;  }
	else
	{  vsSQLQw=" UPDATE   bm_RaspDetail SET DateDel=GetDate(),IdDel= "+IntToStr(PermisHdr.KeyUserStartProgramm)+"  WHERE IdRasp="+IntToStr(viRaspIdn);
	   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	   Qw->ExecSQL() ;
	}
  }
 ////////////////

 if(RzComboBox1->ItemIndex==-1)
 {
	ShowMessage(AnsiString("Укажите \"Юридическое лицо\"."));
	RzComboBox1->SetFocus();
	return;
 }
 if(cbEmplUsers->ItemIndex==-1)
 {
	ShowMessage(AnsiString("Укажите кому адресовано данное распоряжение."));
	cbEmplUsers->SetFocus();
	return;
 }
  if( btNameStatuser->ItemIndex==-1)
 {
	ShowMessage(AnsiString("Укажите  \"Статус\"."));
	 btNameStatuser->SetFocus();
	return;
 }
   if(  cbTypeRasp->ItemIndex==-1)
 {
	ShowMessage(AnsiString("Укажите  \"Тип документа\"."));
	  cbTypeRasp->SetFocus();
	return;
 }


 QINS_EditRasp->Close();
 QINS_EditRasp->SQL->Clear();



 /////////////////////Формируем запрос на INS/////////////////////////////
  if (fFlagEditInsert==0)
	 {
	  if (Trim(edNumbRaspName->Text) != "") //Создание новой записи
		 {
		  vsSQLQw = "SELECT Idn FROM bm_Rasp WHERE LTRIM(RTRIM(NumbRaspName)) = LTRIM(RTRIM(:D0)) "
											  "AND YEAR(DateRasp) = YEAR(:D1) AND DateDel is  null" ;
		  Qw->Close();
		  Qw->SQL->Clear();
		  Qw->SQL->Add(vsSQLQw);
		  Qw->Parameters->Items[0]->Value = edNumbRaspName->Text;
		  if (edDateRasp->Text == "")
			 {Qw->Parameters->Items[1]->Value = TDateTime(1900, 01, 01);}
		  else
			  {Qw->Parameters->Items[1]->Value = dtDateRasp->Date;}
		  Qw->Open();
		  if (Qw->RecordCount > 0)
			 {
			  ShowMessage(AnsiString("Распоряжение с номером " + edNumbRaspName->Text + "  за выбранный год уже существует. \n"
									 "         Выберите другие значения."));
			  return;
			  }
		  }
  vsSQLINS_EditRasp = " declare @idins int; set @idins = :D0;"
					  " INSERT INTO bm_Rasp"
			"(IdUserBM"
			",Id24NameStatus"
			",Id256TypeRasp"
			",Id24City"
			",DateRasp"
			",NumbRaspName"
			",RaspNameRTF"
			",ContentTargetRTF"
			",Id24NameStatuser"
			",ContentRTF"
			",EmplDol"
			",IdEmplUsers"
			",DateIns"
			",IdIns"
			",RaspName"
			",VidRasp"
			",Comment"
			",PathAddFiles"
			",idSeller)"
  " VALUES  (:D1"      //IdUserBM
			",:D2"     //Id24NameStatus
			",:D3"     //Id256TypeRasp
			",:D4"     //Id24City
			",:D5"     //DateRasp
			",:D6"     //NumbRaspName
			",:D7"     //RaspNameRTF
			",:D8"     //ContentTargetRTF
			",:D9"     //Id24NameStatuser
			",:D10"     //ContentRTF
			",:D11"    //EmplDol
			",:D12"    //IdEmplUsers
			",GetDate()"    //DateIns
			",@idins "    //IdIns
			",:D13 " //RaspName
			",:D14 "  //VidRasp
			",:D15 " //Comment
			",:D16 "
			",:D17);" //PathAddFiles

	" declare @viTmp int; SET  @viTmp=SCOPE_IDENTITY(); "
	" exec pr_SetAccessToRasp @viTmp, @idins " // добавить доступ к распоряжению
	"  SELECT @viTmp";
  }
 if (fFlagEditInsert==1) //редактирование
  {   	 if((QListRaspIdIns->AsInteger!=PermisHdr.KeyUserStartProgramm)&&(!MainForm->flEditAllRasp))
	{ShowMessage("Сохранение невозможно. \n Только создавший запись может ее сохранить"); return; }
  vsSQLINS_EditRasp=
  " declare @viTmp int, @idmod int; set @idmod = :D0;"
  " UPDATE bm_Rasp "
  " SET       IdUserBM=:D1"
			",Id24NameStatus=:D2"
			",Id256TypeRasp=:D3"
			",Id24City=:D4"
			",DateRasp=:D5"
			",NumbRaspName=:D6"
			",RaspNameRTF=:D7"
			",ContentTargetRTF=:D8"
			",Id24NameStatuser=:D9"
			",ContentRTF=:D10"
			",EmplDol=:D11"
			",IdEmplUsers=:D12"
			",DateMod=GetDate()"
			",IdMod=@idmod"
			",RaspName=:D13"
			",VidRasp=:D14"
			",Comment=:D15"
			",PathAddFiles=:D16"
			",idSeller= :D17 "
  " WHERE Idn=:D18;"
  " SET @viTmp=:D19 "
  " SELECT @viTmp";
  }

	QINS_EditRasp->SQL->Add(vsSQLINS_EditRasp);
	if (fFlagEditInsert==1)
	   {QINS_EditRasp->Parameters->Items[18]->Value=QListRaspIdn->AsInteger;
		QINS_EditRasp->Parameters->Items[19]->Value=QListRaspIdn->AsInteger;
	   }

	QINS_EditRasp->Parameters->Items[0]->Value=PermisHdr.KeyUserStartProgramm;//idUser;
	if ((cbBMName->ItemIndex==-1)) {viTmpResult=0;} else {viTmpResult=(int)cbBMName->Items->Objects[cbBMName->ItemIndex]; }
	QINS_EditRasp->Parameters->Items[1]->Value= viTmpResult;
	if ((cbNameStatus->ItemIndex==-1)) {viTmpResult=0;} else {viTmpResult=(int)cbNameStatus->Items->Objects[cbNameStatus->ItemIndex]; }
	QINS_EditRasp->Parameters->Items[2]->Value=viTmpResult;
	if ((cbTypeRasp->ItemIndex==-1)) {viTmpResult=0;} else {viTmpResult=(int)cbTypeRasp->Items->Objects[cbTypeRasp->ItemIndex]; }
	QINS_EditRasp->Parameters->Items[3]->Value=viTmpResult;
	if ((cbCity->ItemIndex==-1)) {viTmpResult=0;} else {viTmpResult=(int)cbCity->Items->Objects[cbCity->ItemIndex]; }
	QINS_EditRasp->Parameters->Items[4]->Value=viTmpResult;

	if (edDateRasp->Text=="")
	{//QINS_EditRasp->Parameters->Items[4]->DataType=ftDateTime;
	 QINS_EditRasp->Parameters->Items[5]->Value=TDateTime(1900, 01, 01) ;}
	else {
	QINS_EditRasp->Parameters->Items[5]->Value=dtDateRasp->Date;}
	QINS_EditRasp->Parameters->Items[6]->Value=Trim(edNumbRaspName->Text);
	pms->Position=0;
	reRaspName->Lines->SaveToStream(pms);
	pms->Position=0;
	QINS_EditRasp->Parameters->Items[7]->LoadFromStream(pms,ftMemo);
	pms->Clear();
	pms->Position=0;
	reContentTargetRTF->Lines->SaveToStream(pms);
	pms->Position=0;
	QINS_EditRasp->Parameters->Items[8]->LoadFromStream(pms,ftMemo);
	pms->Clear();
	if ((btNameStatuser->ItemIndex==-1)) {viTmpResult=0;} else {viTmpResult=(int)btNameStatuser->Items->Objects[btNameStatuser->ItemIndex]; }
	QINS_EditRasp->Parameters->Items[9]->Value=viTmpResult;
	pms->Position=0;
	reContentRTF->Lines->SaveToStream(pms);
	pms->Position=0;
	QINS_EditRasp->Parameters->Items[10]->LoadFromStream(pms,ftMemo);
	pms->Clear();
	if ((cbEmplUsers->ItemIndex==-1)) {viTmpResult=0;} else {viTmpResult=(int)cbEmplUsers->Items->Objects[cbEmplUsers->ItemIndex]; }
	QINS_EditRasp->Parameters->Items[12]->Value=viTmpResult;
	if ((cbEmplDol->ItemIndex==-1)) {viTmpResult=0;} else {viTmpResult=(int)cbEmplDol->Items->Objects[cbEmplDol->ItemIndex]; }
	QINS_EditRasp->Parameters->Items[11]->Value=viTmpResult;

	QINS_EditRasp->Parameters->Items[13]->Value=reRaspName->Text;
	if ((cbVidRasp->ItemIndex==-1)) {viTmpResult=0;} else {viTmpResult=(int)cbVidRasp->Items->Objects[cbVidRasp->ItemIndex]; }
	QINS_EditRasp->Parameters->Items[14]->Value=viTmpResult;
	QINS_EditRasp->Parameters->Items[15]->Value=reComment->Text;
	QINS_EditRasp->Parameters->Items[16]->Value=Trim(edPathAddFiles->Text);
	if ((RzComboBox1->ItemIndex==-1)) {viTmpResult=0;} else {viTmpResult=(int)RzComboBox1->Items->Objects[RzComboBox1->ItemIndex]; }
	QINS_EditRasp->Parameters->Items[17]->Value=viTmpResult;

/////////////////////////////////////////////////////////////////////////
 //QINS_EditRasp->SQL->Add(vsSQLINS_EditRasp);
 //QINS_EditRasp->ExecSQL();
 QINS_EditRasp->Open();
 TLocateOptions Opts;
 Variant locvalues[1];
  viRaspIdn= QINS_EditRaspIdn->AsInteger;
 /////Сохранение комментариев
  int viTypeCost;
	  viTypeCost=0;
	  if(rbBase->Checked)             viTypeCost=1;
	  if(rbBudjet->Checked)           viTypeCost=2;
	  if(rbDiscountStandart->Checked) viTypeCost=3;
	  if(rbDiscountRaschet->Checked)  viTypeCost=4;
 if (fFlagEditInsert==0)
	{
	 vsSQLQw=   " INSERT INTO bm_Comments"
				" ( idRasp" //
				", TypeCost" //
				", DateIns"
				", IdIns )"
		" VALUES (:D0" //idRasp
				",:D1" //Produce
				",GetDate()" //DateIns
				",:D2);"  //IdIns
		" declare @viTmp int; SET  @viTmp=SCOPE_IDENTITY(); "
		" SELECT @viTmp";
		Qw->Close(); Qw->SQL->Clear(); Qw->SQL->Add(vsSQLQw);
		Qw->Parameters->Items[0]->Value=viRaspIdn;
		Qw->Parameters->Items[1]->Value= viTypeCost;
		Qw->Parameters->Items[2]->Value=PermisHdr.KeyUserStartProgramm;    //ID пользователя
		Qw->Open();
	}
 if (fFlagEditInsert==1)
	{
	 vsSQLQw=	" declare @viTmp int,"
				" @Id256Name  int,	  "
				" @idLevel    int,	  "
				" @T256Name varchar(256), @TypeCost int, @Id256NameDiscount int, @Id256NameAction int;"
				" SET @T256Name=:D0;" //Значение заврдимого параметра.
				" SET @TypeCost=:D1;"
				" SET @Id256NameDiscount=:D2;"
				" SET @Id256NameAction=:D3;"
				" IF (@Id256NameDiscount=0) SET @Id256NameDiscount = NULL; "
				" IF (@Id256NameAction=0) SET @Id256NameAction = NULL; "
				" exec prLb_GetNumField 'bm_Comments','Id256CostDiscount','spl_LbText256',@T256Name output,@idLevel output,@Id256Name output"
				" UPDATE bm_Comments "
	  " SET        TypeCost=@TypeCost"
				" ,Id256NameDiscount =@Id256NameDiscount "
				" ,Id256NameAction =@Id256NameAction "
				" ,Id256CostDiscount = @Id256Name "
				" ,DateRealization=:D4"
				" ,PrognozEffects=:D5"
				" ,GrantingConditions=:D6"
				" ,DateMod=GetDate()"
				" ,IdMod=:D7"
	" WHERE idRasp=:D8 "
	" SELECT TOP 1 Idn FROM bm_Comments WHERE idRasp=:D9";
	Qw->Close(); Qw->SQL->Clear(); Qw->SQL->Add(vsSQLQw);
	Qw->Parameters->Items[0]->Value= Trim(cbCostDiscount->Text);
	Qw->Parameters->Items[1]->Value= viTypeCost;
	if ((cbNameActionDiscount->ItemIndex==-1)) {viTmpResult=0;} else {viTmpResult=(int)cbNameActionDiscount->Items->Objects[cbNameActionDiscount->ItemIndex]; }
	Qw->Parameters->Items[2]->Value=0;
	Qw->Parameters->Items[3]->Value=0;
	if(viTypeCost==3) Qw->Parameters->Items[2]->Value= viTmpResult;
	if(viTypeCost==4) Qw->Parameters->Items[3]->Value= viTmpResult;
	if (dtDateRealization->Text=="")
	{ Qw->Parameters->Items[4]->Value=TDateTime(1900, 01, 01) ;}
	else {Qw->Parameters->Items[4]->Value=dtDateRealization->Date;}
	Qw->Parameters->Items[5]->Value= Trim(mePrognozEffects->Text);
	Qw->Parameters->Items[6]->Value= Trim(meGrantingConditions->Text);
	Qw->Parameters->Items[7]->Value=PermisHdr.KeyUserStartProgramm;    //ID пользователя
	Qw->Parameters->Items[8]->Value=viRaspIdn;
	Qw->Parameters->Items[9]->Value=viRaspIdn;
	Qw->Open();
	viPZIdn=Qw->Fields->Fields[0]->AsInteger;

	//Заполнение таблиц по  CheckListам
	vsSQLQw = " UPDATE bm_CommentsCheckLists "
			  " SET  DateDel=GetDate()"
			  " ,IdDel=:D0"
			  " WHERE IdComments=:D1 " ;
		Qw->Close(); Qw->SQL->Clear(); Qw->SQL->Add(vsSQLQw);
		Qw->Parameters->Items[0]->Value=PermisHdr.KeyUserStartProgramm;    //ID пользователя
		Qw->Parameters->Items[1]->Value=viPZIdn;
		Qw->ExecSQL();
	for( int i=0;i < clActionPurpose->Items->Count;i++)
	   { if(clActionPurpose->ItemChecked[i]==true)
			{
			 vsSQLQw=   " INSERT INTO bm_CheckLists"
					" ( id256TextActionPurpose" //
					", TypeFiеld" //
					", DateIns"
					", IdIns )"
			" VALUES (:D0" //id256TextActionPurpose
					",:D1" //TypeFiеld
					",GetDate()" //DateIns
					",:D2);"  //IdIns
			" declare @viTmp int; SET  @viTmp=SCOPE_IDENTITY(); "
			" SELECT @viTmp";
			Qw->Close(); Qw->SQL->Clear(); Qw->SQL->Add(vsSQLQw);

			Qw->Parameters->Items[0]->Value= (int)clActionPurpose->Items->Objects[i];
			Qw->Parameters->Items[1]->Value= 1;
			Qw->Parameters->Items[2]->Value=PermisHdr.KeyUserStartProgramm;    //ID пользователя
			Qw->Open();
			viTmpResult=Qw->Fields->Fields[0]->AsInteger;
			vsSQLQw=" INSERT INTO bm_CommentsCheckLists"
					" ( IdComments" //
					", IdCheckLists" //
					", DateIns"
					", IdIns )"
			" VALUES (:D0" //IdComments
					",:D1" //IdCheckLists
					",GetDate()" //DateIns
					",:D2);"  //IdIns
			" declare @viTmp int; SET  @viTmp=SCOPE_IDENTITY(); "
			" SELECT @viTmp";
			Qw->Close(); Qw->SQL->Clear(); Qw->SQL->Add(vsSQLQw);

			Qw->Parameters->Items[0]->Value= viPZIdn;
			Qw->Parameters->Items[1]->Value= viTmpResult;
			Qw->Parameters->Items[2]->Value=PermisHdr.KeyUserStartProgramm;    //ID пользователя
			Qw->Open();
			}
	   }
	for( int i=0;i < clGroupClients->Items->Count;i++)
	   { if(clGroupClients->ItemChecked[i]==true)
			{
			 vsSQLQw=   " INSERT INTO bm_CheckLists"
					" ( id256TextGroupClients" //
					", TypeFiеld" //
					", DateIns"
					", IdIns )"
			" VALUES (:D0" //id256TextActionPurpose
					",:D1" //TypeFiеld
					",GetDate()" //DateIns
					",:D2);"  //IdIns
			" declare @viTmp int; SET  @viTmp=SCOPE_IDENTITY(); "
			" SELECT @viTmp";
			Qw->Close(); Qw->SQL->Clear(); Qw->SQL->Add(vsSQLQw);

			Qw->Parameters->Items[0]->Value= (int)clGroupClients->Items->Objects[i];
			Qw->Parameters->Items[1]->Value= 2;
			Qw->Parameters->Items[2]->Value=PermisHdr.KeyUserStartProgramm;    //ID пользователя
			Qw->Open();
			viTmpResult=Qw->Fields->Fields[0]->AsInteger;
			vsSQLQw=" INSERT INTO bm_CommentsCheckLists"
					" ( IdComments" //
					", IdCheckLists" //
					", DateIns"
					", IdIns )"
			" VALUES (:D0" //IdComments
					",:D1" //IdCheckLists
					",GetDate()" //DateIns
					",:D2);"  //IdIns
			" declare @viTmp int; SET  @viTmp=SCOPE_IDENTITY(); "
			" SELECT @viTmp";
			Qw->Close(); Qw->SQL->Clear(); Qw->SQL->Add(vsSQLQw);

			Qw->Parameters->Items[0]->Value= viPZIdn;
			Qw->Parameters->Items[1]->Value= viTmpResult;
			Qw->Parameters->Items[2]->Value=PermisHdr.KeyUserStartProgramm;    //ID пользователя
			Qw->Open();
			}
	   }
	for( int i=0;i < clAdvancementChannel->Items->Count;i++)
	   { if(clAdvancementChannel->ItemChecked[i]==true)
			{
			 vsSQLQw=   " INSERT INTO bm_CheckLists"
					" ( id256TextAdvancementChannel" //
					", TypeFiеld" //
					", DateIns"
					", IdIns )"
			" VALUES (:D0" //id256TextActionPurpose
					",:D1" //TypeFiеld
					",GetDate()" //DateIns
					",:D2);"  //IdIns
			" declare @viTmp int; SET  @viTmp=SCOPE_IDENTITY(); "
			" SELECT @viTmp";
			Qw->Close(); Qw->SQL->Clear(); Qw->SQL->Add(vsSQLQw);

			Qw->Parameters->Items[0]->Value= (int)clAdvancementChannel->Items->Objects[i];
			Qw->Parameters->Items[1]->Value= 3;
			Qw->Parameters->Items[2]->Value=PermisHdr.KeyUserStartProgramm;    //ID пользователя
			Qw->Open();
			viTmpResult=Qw->Fields->Fields[0]->AsInteger;
			vsSQLQw=" INSERT INTO bm_CommentsCheckLists"
					" ( IdComments" //
					", IdCheckLists" //
					", DateIns"
					", IdIns )"
			" VALUES (:D0" //IdComments
					",:D1" //IdCheckLists
					",GetDate()" //DateIns
					",:D2);"  //IdIns
			" declare @viTmp int; SET  @viTmp=SCOPE_IDENTITY(); "
			" SELECT @viTmp";
			Qw->Close(); Qw->SQL->Clear(); Qw->SQL->Add(vsSQLQw);

			Qw->Parameters->Items[0]->Value= viPZIdn;
			Qw->Parameters->Items[1]->Value= viTmpResult;
			Qw->Parameters->Items[2]->Value=PermisHdr.KeyUserStartProgramm;    //ID пользователя
			Qw->Open();
			}
	   }
  ////


	}//if (fFlagEditInsert==0)

 ////////////////////////////////////






  fOkButton=true;//Не использую ModalResault, так как не надо закрывать  форму;
 if(fPrint) fFlagEditInsert=1;

 else
	{if (fFlagEditInsert==0){ShowMessage(AnsiString("Запись успешно сохранена."));Close();}
	 if (fFlagEditInsert==1){ShowMessage(AnsiString("Изменения успешно сохранены."));}
	 }


  }
void __fastcall TFrEditRasp::btAddTextsRTFClick(TObject *Sender)
{ /*
#ifdef  TFR
#undef  TFR
#undef  FR

#endif
#define TFR TFrFundRTFText
#define FR  FrFundRTFText


  TMemoryStream *pms= new TMemoryStream();
  FR=new TFR(Application);
  FR->cxGridTableViewEmplUserContentTargetRTF->DataBinding->FieldName="RaspNameRTF";
  FR->ShowModal();
  FR->WindowState=wsMinimized;
   if (FR->ModalResult==mrOk)
	  {
		 pms->Position=0;
		 FR->QRaspNameRaspNameRTF->SaveToStream(pms);
		 pms->Position=0;
		 reRaspName->Lines->LoadFromStream(pms);
		 pms->Clear();

	  }
  delete (FR);    */
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#undef  NN
#endif
#define TFR TFrFindRaspName
#define FR  FrFindRaspName
#define FL  flFrFindRaspName
#define NN  N11

  TMemoryStream *pms= new TMemoryStream();
  FR=new TFR(Application);

  FR->ShowModal();
  FR->WindowState=wsMinimized;
   if (FR->fOkButton)
	  {  pms->Position=0;
		 FR->QRaspNameRaspNameRTF->SaveToStream(pms);
		 pms->Position=0;
		 reRaspName->Lines->LoadFromStream(pms);
		 pms->Clear();

		 pms->Position=0;
		 FR->QRaspNameContentTargetRTF->SaveToStream(pms);
		 pms->Position=0;
		 reContentTargetRTF->Lines->LoadFromStream(pms);
		 pms->Clear();

		 pms->Position=0;
		 FR->QRaspNameContentRTF->SaveToStream(pms);
		 pms->Position=0;
		 reContentRTF->Lines->LoadFromStream(pms);
		 pms->Clear();
	  }
  delete (FR);

}
//---------------------------------------------------------------------------

void __fastcall TFrEditRasp::cbEmplUsersChange(TObject *Sender)
{
  int i;
  AnsiString vsSQLEmplDlg;
  cbEmplDol->Enabled = false;

  if (((cbEmplUsers->ItemIndex) != -1))
		cbEmplDol->Enabled=true;
	// int tttt=((int)cbEmplUsers->Items->Objects[cbEmplUsers->ItemIndex] );
	 {
	  if ((RzComboBox1->ItemIndex == -1))
		 {i = 0;}
	  else {i = (int)RzComboBox1->Items->Objects[RzComboBox1->ItemIndex];}

	  vsSQLEmplDlg = "SELECT  MAX(IDn), Dol FROM EmplDol  WHERE  DiscDate='21000101' and IDUser= " +
					 IntToStr((int)cbEmplUsers->Items->Objects[cbEmplUsers->ItemIndex]) +
					 " AND IDUR in(select FlUr from dbo.clt_Seller where idn = " + IntToStr(i) + ") group by Dol";

	  QEmplDol->Close();
	  QEmplDol->SQL->Clear();
	  QEmplDol->SQL->Add(vsSQLEmplDlg);
	  QEmplDol->Open();
	  cbEmplDol->Clear();

	  while (QEmplDol->Eof==false)
			{
			 cbEmplDol->AddObject(QEmplDolDol->AsString,(TObject*)QEmplDolIDn->AsInteger);
			 QEmplDol->Next();
			 }
	  QEmplDol->Close();
	  cbEmplDol->ItemIndex=0;
	  }
}
//---------------------------------------------------------------------------


void __fastcall TFrEditRasp::FormKeyDown(TObject *Sender, WORD &Key,
	  TShiftState Shift)
{
   if(Key == VK_ESCAPE) Close();
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRasp::RzButton1Click(TObject *Sender)
{
#ifdef  TFR
#undef  TFR
#undef  FR

#endif
#define TFR TFrFundRTFText
#define FR  FrFundRTFText


  TMemoryStream *pms= new TMemoryStream();
  FR=new TFR(Application);
  FR->cxGridTableViewEmplUserContentTargetRTF->DataBinding->FieldName="ContentTargetRTF";
  FR->ShowModal();
  FR->WindowState=wsMinimized;
   if (FR->ModalResult==mrOk)
	  {
		 pms->Position=0;
		 FR->QRaspNameContentTargetRTF->SaveToStream(pms);
		 pms->Position=0;
		 reContentTargetRTF->Lines->LoadFromStream(pms);
		 pms->Clear();

	  }
  delete (FR);
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRasp::RzButton2Click(TObject *Sender)
{
#ifdef  TFR
#undef  TFR
#undef  FR

#endif
#define TFR TFrFundRTFText
#define FR  FrFundRTFText


  TMemoryStream *pms= new TMemoryStream();
  FR=new TFR(Application);
  FR->cxGridTableViewEmplUserContentTargetRTF->DataBinding->FieldName="ContentRTF";
  FR->ShowModal();
  FR->WindowState=wsMinimized;
   if (FR->ModalResult==mrOk)
	  {
		 pms->Position=0;
		 FR->QRaspNameContentRTF->SaveToStream(pms);
		 pms->Position=0;
		 reContentRTF->Lines->LoadFromStream(pms);
		 pms->Clear();

	  }
  delete (FR);
}
//---------------------------------------------------------------------------



void __fastcall TFrEditRasp::FormActivate(TObject *Sender)
{   AnsiString vsSQLQw;
	int i;
	TMemoryStream *pms= new TMemoryStream();
	QListRasp->Close();
	QListRasp->Parameters->Items[0]->Value=viRaspIdn;
	QListRasp->Open();
	i=0;
	i=QListRasp->RecordCount;
	Edit1->Text = "";
	if(i>0)
	{
	Edit1->Text = QListRaspIdn->AsString;
	i=QListRaspIdSeller->AsInteger;
	if(i>0){RzComboBox1->ItemIndex=   (int)RzComboBox1->Items->IndexOfObject((TObject*)i);}
	 LoadPicList(NULL,cbEmplUsers->Items,NULL);
	 if(RzComboBox1->ItemIndex>-1) RzComboBox1Change(NULL);
	 if(cbEmplUsers->ItemIndex>-1) cbEmplUsersChange(NULL);
	if(QListRaspEmplDol->AsInteger>0){try{cbEmplDol->ItemIndex=cbEmplDol->Items->IndexOfObject((TObject*)QListRaspEmplDol->AsInteger);}catch(...){};}
	}
	RzPanel21->Visible=false;TabSheet2->TabVisible=false;

	if(fFlagEditInsert==1){ //Загрузка данных при Edit

	if(QListRaspVidRasp->AsInteger>0){try{cbVidRasp->ItemIndex=cbVidRasp->Items->IndexOfObject((TObject*)QListRaspVidRasp->AsInteger);}catch(...){};}
	//Собираем информацию о работе с разными типами распоряжений. потом переделать под таблицу.
		rbBase->Checked=true;
		btAddProduce->Visible=false;
		if(cbVidRasp->Text=="Распоряжение об установлении цен (подписных, льготных)")
		  {RzPanel21->Visible=false;TabSheet2->TabVisible=true;rbDiscountStandart->Checked=true;}
		if(cbVidRasp->Text=="Распоряжение о выпуске нового продукта")
		  {RzPanel21->Visible=true;TabSheet2->TabVisible=false;btAddProduce->Visible=true;}
		if(cbVidRasp->Text=="Техническое задание на разработку в Отдел разработки и сопровождения программных продуктов")
		  {RzPanel21->Visible=true;TabSheet2->TabVisible=false;}
		if(cbVidRasp->Text=="Распоряжение о выпуске нового продукта (с ценой)")
		  {RzPanel21->Visible=true;TabSheet2->TabVisible=true;rbDiscountStandart->Checked=true;btAddProduce->Visible=true;}

	   //	if(cbVidRasp->Text=="")
	  // if(cbVidRasp->ItemIndex==0) {RzPanel21->Visible=false;TabSheet2->TabVisible=true;}//Распоряжение об установлении цен (подписных, льготных)
	  // if(cbVidRasp->ItemIndex==1) {RzPanel21->Visible=true;TabSheet2->TabVisible=false;}//Распоряжение о выпуске нового продукта
	  
	if(QListRaspIdUserBM->AsInteger>0){try{cbBMName->ItemIndex=cbBMName->Items->IndexOfObject((TObject*)QListRaspIdUserBM->AsInteger);}catch(...){};}
	if(QListRaspId24NameStatus->AsInteger>0){try{cbNameStatus->ItemIndex=cbNameStatus->Items->IndexOfObject((TObject*)QListRaspId24NameStatus->AsInteger);}catch(...){};}
	if(QListRaspId256TypeRasp->AsInteger>0){try{cbTypeRasp->ItemIndex=cbTypeRasp->Items->IndexOfObject((TObject*)QListRaspId256TypeRasp->AsInteger);}catch(...){};}
	if(QListRaspId24City->AsInteger>0){try{cbCity->ItemIndex=cbCity->Items->IndexOfObject((TObject*)QListRaspId24City->AsInteger);}catch(...){};}
	dtDateRasp->Date=QListRaspDateRasp->AsDateTime;
	if (QListRaspDateRasp->AsDateTime>TDateTime(1900, 01, 01)){

	AnsiString vsTmpDay, vsTmpMouth, vsTmpYear;

	vsTmpDay=dtDateRasp->Date.FormatString("d");
	vsTmpMouth=dtDateRasp->Date.FormatString("m");
	vsTmpYear=dtDateRasp->Date.FormatString("yyyy");

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

 edDateRasp->Text=vsTmpDay+" "+vsTmpMouth+" "+vsTmpYear+" года";
   } else{edDateRasp->Text="";}
 edNumbRaspName->Text=QListRaspNumbRaspName->AsString;

 pms->Position=0;
 QListRaspRaspNameRTF->SaveToStream(pms);
 pms->Position=0;
 reRaspName->Lines->LoadFromStream(pms);
 pms->Clear();

 pms->Position=0;
 QListRaspContentTargetRTF->SaveToStream(pms);
 pms->Position=0;
 reContentTargetRTF->Lines->LoadFromStream(pms);
 pms->Clear();

 if(QListRaspId24NameStatuser->AsInteger>0){try{btNameStatuser->ItemIndex=btNameStatuser->Items->IndexOfObject((TObject*)QListRaspId24NameStatuser->AsInteger);}catch(...){};}
 pms->Position=0;
 QListRaspContentRTF->SaveToStream(pms);
 pms->Position=0;
 reContentRTF->Lines->LoadFromStream(pms);
 pms->Clear();
 reComment->Text=QListRaspComment->AsString;
 edPathAddFiles->Text=QListRaspPathAddFiles->AsString;
/*
  if(QListRaspIdEmplUsers->AsInteger>0)
	{try{cbEmplUsers->ItemIndex=cbEmplUsers->Items->IndexOfObject((TObject*)QListRaspIdEmplUsers->AsInteger);}catch(...){};

	 vsSQLQw="   SELECT  MAX(IDn), Dol FROM EmplDol  WHERE  DiscDate='21000101' and IDUser= "+IntToStr((int)cbEmplUsers->Items->Objects[cbEmplUsers->ItemIndex] ) +" group by Dol";
	 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	 Qw->Open();cbEmplDol->Clear();
	 while(Qw->Eof==false){cbEmplDol->AddObject(Qw->Fields->Fields[1]->AsString,(TObject*)Qw->Fields->Fields[0]->AsInteger);Qw->Next();}Qw->Close();
	 if(QListRaspEmplDol->AsInteger>0){try{cbEmplDol->ItemIndex=cbEmplDol->Items->IndexOfObject((TObject*)QListRaspEmplDol->AsInteger);}catch(...){};}
	}
*/	
	 }
   cbEmplDol->Enabled=false;
   if(MainForm->flEditAllRasp) RzGroupBox1->Visible=true; else RzGroupBox1->Visible=false;//возможность выставлять состояние;
   if(MainForm->flEditDM){cbNameStatus->Enabled=true;RzGroupBox1->Enabled=true;RzGroupBox1->Visible=true;}else{cbNameStatus->Enabled=false;RzGroupBox1->Enabled=false;RzGroupBox1->Visible=false;} //Права доступа/Разрешить пользователю создавать/редактировать  шаблоны распоряжений


  vsSQLQw=" SELECT Idn, iText FROM spl_LbText256 WHERE iLvl=1519";
  Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
  Qw->Open();
clActionPurpose->Items->Clear();

while(Qw->Eof==false)
  {
   clActionPurpose->Items->AddObject(Qw->Fields->Fields[1]->AsString.Trim(),(TObject*)Qw->Fields->Fields[0]->AsInteger);
   Qw->Next();
  }
Qw->Close();

  vsSQLQw=" SELECT Idn, iText FROM spl_LbText256 WHERE iLvl=1520";
  Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
  Qw->Open();
  clGroupClients->Items->Clear();

while(Qw->Eof==false)
  {
   clGroupClients->Items->AddObject(Qw->Fields->Fields[1]->AsString.Trim(),(TObject*)Qw->Fields->Fields[0]->AsInteger);
   Qw->Next();
  }
Qw->Close();
  vsSQLQw=" SELECT Idn, iText FROM spl_LbText256 WHERE iLvl=1521";
  Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
  Qw->Open();
  clAdvancementChannel->Items->Clear();

while(Qw->Eof==false)
  {
   clAdvancementChannel->Items->AddObject(Qw->Fields->Fields[1]->AsString.Trim(),(TObject*)Qw->Fields->Fields[0]->AsInteger);
   Qw->Next();
  }
Qw->Close();

QAddFiles->Close();
QAddFiles->Parameters->Items[0]->Value=viRaspIdn;
QAddFiles->Open();

//Заполнение данных комментария
QListComments->Close();
QListComments->Parameters->Items[0]->Value=viRaspIdn;
QListComments->Open();

   switch (QListCommentsTypeCost->AsInteger)
   {
   case	1: rbBase->Checked = true ;break;
   case	2: rbBudjet->Checked = true ;break;
   case	3: rbDiscountStandart->Checked = true ;break;
   case	4: rbDiscountRaschet->Checked = true ;break;
   }
 if(rbDiscountStandart->Checked)
	  {
		 vsSQLQw=" SELECT Idn, iText FROM spl_LbText256 WHERE iLvl=1516";
		 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		 Qw->Open();cbNameActionDiscount->Clear();
		 while(Qw->Eof==false){cbNameActionDiscount->AddObject(Qw->Fields->Fields[1]->AsString,(TObject*)Qw->Fields->Fields[0]->AsInteger);Qw->Next();}Qw->Close();
	  }
	if(rbDiscountRaschet->Checked)
	  {
		 vsSQLQw=" SELECT Idn, iText FROM spl_LbText256 WHERE iLvl=1517";
		 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		 Qw->Open();cbNameActionDiscount->Clear();
		 while(Qw->Eof==false){cbNameActionDiscount->AddObject(Qw->Fields->Fields[1]->AsString,(TObject*)Qw->Fields->Fields[0]->AsInteger);Qw->Next();}Qw->Close();
	  }
	Qw->Close();

QListComments->Close();
QListComments->Parameters->Items[0]->Value=viRaspIdn;
QListComments->Open();

if(QListCommentsId256NameDiscount->AsInteger>0){try{cbNameActionDiscount->ItemIndex=cbNameActionDiscount->Items->IndexOfObject((TObject*)QListCommentsId256NameDiscount->AsInteger);}catch(...){};}
if(QListCommentsId256NameAction->AsInteger>0){try{cbNameActionDiscount->ItemIndex=cbNameActionDiscount->Items->IndexOfObject((TObject*)QListCommentsId256NameAction->AsInteger);}catch(...){};}
cbCostDiscount->Text=QListCommentsiText->AsString;
dtDateRealization->Date=QListCommentsDateRealization->AsDateTime;
mePrognozEffects->Text= QListCommentsPrognozEffects->AsString;
meGrantingConditions->Text= QListCommentsGrantingConditions->AsString;



 for( int i=0;i < clActionPurpose->Items->Count;i++)
	{
	   vsSQLQw=	" SELECT A.Idn "
				" FROM bm_CheckLists A, bm_CommentsCheckLists B"
				" WHERE  B.IdCheckLists=A.Idn AND B.IdComments=(SELECT Idn FROM bm_Comments WHERE idRasp=:D0) AND B.DateDel is NULL AND id256TextActionPurpose=:D1";
	   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	   Qw->Parameters->Items[0]->Value=viRaspIdn;
	   Qw->Parameters->Items[1]->Value=(int)clActionPurpose->Items->Objects[i];
	   Qw->Open();
	   if (Qw->RecordCount>0) clActionPurpose->ItemChecked[i]=true;
	}
 for( int i=0;i < clGroupClients->Items->Count;i++)
	{
	   vsSQLQw=	" SELECT A.Idn "
				" FROM bm_CheckLists A, bm_CommentsCheckLists B"
				" WHERE  B.IdCheckLists=A.Idn AND B.IdComments=(SELECT Idn FROM bm_Comments WHERE idRasp=:D0) AND B.DateDel is NULL AND id256TextGroupClients=:D1";
	   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	   Qw->Parameters->Items[0]->Value=viRaspIdn;
	   Qw->Parameters->Items[1]->Value=(int)clGroupClients->Items->Objects[i];
	   Qw->Open();
	   if (Qw->RecordCount>0) clGroupClients->ItemChecked[i]=true;
	}
 for( int i=0;i < clAdvancementChannel->Items->Count;i++)
	{
	   vsSQLQw=	" SELECT A.Idn "
				" FROM bm_CheckLists A, bm_CommentsCheckLists B"
			    " WHERE  B.IdCheckLists=A.Idn AND B.IdComments=(SELECT Idn FROM bm_Comments WHERE idRasp=:D0) AND B.DateDel is NULL AND id256TextAdvancementChannel=:D1";
	   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	   Qw->Parameters->Items[0]->Value=viRaspIdn;
	   Qw->Parameters->Items[1]->Value=(int)clAdvancementChannel->Items->Objects[i];
	   Qw->Open();
	   if (Qw->RecordCount>0) clAdvancementChannel->ItemChecked[i]=true;
	}

///

 fDropDown=true;
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRasp::btPrintRaspClick(TObject *Sender)
{
 int viIdn ;
 fPrint=true;
 btInsRaspClick(Sender);
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL

#endif
#define TFR TFrAccountPrint
#define FR  FrAccountPrint
#define FL  flFrAccountPrint

  viIdn = viRaspIdn;//Передаем Idn записи для печати

   {
	switch(FL)
	{
	case WINCLS:   FR=new TFR(Application);FL=WINWRK;FR->Caption="Печать распоряжения";
				 FR->OpenFormAccountPrint(111,viIdn,1);
				 FR->Show();break;
	case WINWRK:   if(FR->WindowState==wsMinimized){FR->WindowState=wsNormal;}
				 FR->Caption="Печать распоряжения";FR->OpenFormAccountPrint(111,viIdn,1);
				 FR->Show();break;
  }
 }
//Close(); 
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRasp::btSheetClick(TObject *Sender)
{   int viIdn ;
/*
 QAddFilesEXEL->Close();
 QAddFilesEXEL->Parameters->Items[0]->Value=viRaspIdn;
 QAddFilesEXEL->Open();
 if((cbVidRasp->Text=="Распоряжение о выпуске нового продукта")&&(QAddFiles->QAddFilesEXEL<1))
 {ShowMessage("Рассылка невозможна. \n Необходимо указать прикрепленный файл EXEL"); return; }*/

 btInsRaspClick(Sender);
  //Проверяем есть ли распоряжение с таким номером?
	vsSQLQw=" DECLARE @IdRasp int; SET @IdRasp=:D0; "
			" SELECT Idn FROM bm_Rasp "
			" WHERE  DateDel is null "
			" AND LTRIM(RTRIM(NumbRaspName))=(SELECT LTRIM(RTRIM(NumbRaspName)) FROM bm_Rasp WHERE Idn=@IdRasp) "
			" /*AND Idn<>@IdRasp*/ AND LTRIM(RTRIM(NumbRaspName))<>'' AND Id24NameStatus=5448352  AND YEAR(DateRasp)= (SELECT YEAR(DateRasp)FROM bm_Rasp WHERE Idn=@IdRasp)";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value= viRaspIdn;
 Qw->Open();
 if (Qw->RecordCount>1) {ShowMessage("Утверждение и рассылка невозможны. \n Распоряжение с таким номером уже существует."); return; }

 //////////////////////////


  cbNameStatus->ItemIndex=(int)cbNameStatus->Items->IndexOfObject((TObject*)5448352); //   IndexOf("Утверждено");
 //MainForm->Sheet(viRaspIdn);
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#endif
#define TFR TFrListMail
#define FR  FrListMail
#define FL  flFrListMail
 viIdn=viRaspIdn;
switch(FL)
 {case WINCLS:   FR=new TFR(Application);
                 FL=WINWRK;
				 FR->IdRasp=viIdn;
				 FR->WindowState=wsNormal;
				 FR->pcSoglasovanieRassilka->ActivePage=FR->tsRassilka;
				 FR->Show();break;
  case WINWRK:   FR->IdRasp=viIdn;
				 if(FR->WindowState==wsMinimized){FR->WindowState=wsMaximized;}
				 FR->pcSoglasovanieRassilka->ActivePage=FR->tsRassilka;
				 FR->Show();break;
 }
}
//---------------------------------------------------------------------------


void __fastcall TFrEditRasp::RzButton3Click(TObject *Sender)
{
#ifdef  TFR
#undef  TFR
#undef  FR

#endif
#define TFR TFrAddFiles
#define FR  FrAddFiles


//  TMemoryStream *pms= new TMemoryStream();
  FR=new TFR(Application);
  FR->viRaspIdn=viRaspIdn;
  FR->ShowModal();
  FR->WindowState=wsMinimized;
   if (FR->ModalResult==mrOk)
	  {   /*  if(Qw->Active==true)Qw->Active=false;Qw->SQL->Clear();
			Qw->SQL->Add(" INSERT INTO bm_AddFiles(AddFile,NameFile,idRasp,DateIns,IdIns,)"
						 " VALUES(:D0,:D1,:D2,GetDate(),:D3)");
			Qw->Parameters->Items[0]->LoadFromFile(OD->FileName,ftBlob);
			Qw->Parameters->Items[1]->Value=vsNameFile;
			Qw->Parameters->Items[2]->Value=viRaspIdn;
			Qw->Parameters->Items[3]->Value=PermisHdr.KeyUserStartProgramm;//idUser;
			Qw->ExecSQL();

		   */
	  }
  delete (FR);
	QAddFiles->Close();
	QAddFiles->Parameters->Items[0]->Value=viRaspIdn;
	QAddFiles->Open();
/*RzOpenDialog1->Execute();
edPathAddFiles->Text= RzOpenDialog1->FileName;  */
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrEditRasp::cbVidRaspChange(TObject *Sender)
{
  RzPanel21->Visible    = false;
  TabSheet2->TabVisible = false;
  btAddProduce->Visible = false;

  if (cbVidRasp->Text == "Распоряжение об установлении цен (подписных, льготных)")
	 {
	  cbEmplUsers->ItemIndex = cbEmplUsers->Items->IndexOf("Гирихиди В.П.");
	  }
  if (cbVidRasp->Text == "Распоряжение о выпуске нового продукта")
	 {
	  cbEmplUsers->ItemIndex = cbEmplUsers->Items->IndexOf("Гирихиди В.П.");
	  btAddProduce->Visible = true;
	  }
  if (cbVidRasp->Text == "Распоряжение о выпуске нового продукта (с ценой)")
	 {
	  cbEmplUsers->ItemIndex = cbEmplUsers->Items->IndexOf("Гирихиди В.П.");
	  btAddProduce->Visible = true;
	  }
  rbBase->Checked = true;
  if ((cbVidRasp->Text == "Распоряжение об установлении цен (подписных, льготных)") && (fFlagEditInsert == 1))
	 {
	  RzPanel21->Visible = false;
	  TabSheet2->TabVisible = true;
	  rbDiscountStandart->Checked=true;
	  }
  if ((cbVidRasp->Text == "Распоряжение о выпуске нового продукта") && (fFlagEditInsert == 1))
	 {
	  RzPanel21->Visible = true;
	  TabSheet2->TabVisible = false;
	  }
  if ((cbVidRasp->Text == "Распоряжение о выпуске нового продукта (с ценой)") && (fFlagEditInsert == 1))
	 {
	  RzPanel21->Visible = true;
	  TabSheet2->TabVisible = true;
	  rbDiscountStandart->Checked = true;
	  }

 //if((cbVidRasp->Text=="Цена")&&(fFlagEditInsert==1)) {RzPanel21->Visible=false;TabSheet2->TabVisible=true;}
 //if((cbVidRasp->Text=="Продукт")&&(fFlagEditInsert==1)) {RzPanel21->Visible=true;RzPageControl1->ActivePage=TabSheet1; TabSheet2->TabVisible=false;}
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRasp::rbDiscountStandartClick(TObject *Sender)
{
 if(rbDiscountStandart->Checked)
	{RzPanel22->Visible=true;
	 RzGroupBox4->Visible=true;
	 RzGroupBox4->Caption="Вид скидки";
	 cbNameActionDiscount->Clear();
//	 RzPanel23->Visible=false;
	 RzSplitter2->Percent=100;
	 cxGridEmplUser->Visible=false;
	 RzPanel24->Visible=false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRasp::rbBaseClick(TObject *Sender)
{
 if(rbBase->Checked){RzPanel22->Visible=false;}
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRasp::rbDiscountRaschetClick(TObject *Sender)
{
 if(rbDiscountRaschet->Checked)
	{RzPanel22->Visible=true;
	 RzGroupBox4->Visible=true;
	 RzGroupBox4->Caption="Специальные акции (краткосрочные)";
	 cbNameActionDiscount->Clear();
//	 RzPanel23->Visible=true;
	RzSplitter2->Percent=41;
	 TmRefresh->Enabled=true;
	 cxGridEmplUser->Visible=true;
	 RzPanel24->Visible=true;
	}
}
//---------------------------------------------------------------------------








void __fastcall TFrEditRasp::btAddNameActionDiscountClick(TObject *Sender)
{
#ifdef  TFR
#undef  TFR
#undef  FR

#endif
#define TFR TFrEditLibs
#define FR  FrEditLibs


  FR=new TFR(Application);
	FR->fType=0;
	if ((rbDiscountStandart->Checked)&&(!rbDiscountRaschet->Checked)){ FR->fType=1; FR->Caption="Размер скидки";}
	if ((!rbDiscountStandart->Checked)&&(rbDiscountRaschet->Checked)){ FR->fType=2;FR->Caption="Специальные акции (краткосрочные)";}
	if (FR->fType==0) { ShowMessage("Не выбрано поле для редактирования. В случае появления этого сообщения обратитесь к разработчику.");delete (FR);return; }
	FR->ShowModal();
	FR->WindowState=wsMinimized;
	if (FR->ModalResult==mrOk)
	  {
	  }
  delete (FR);
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRasp::rbBudjetClick(TObject *Sender)
{
 if(rbBudjet->Checked){RzPanel22->Visible=false;}
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRasp::cbNameActionDiscountDropDown(TObject *Sender)
{  if(rbDiscountStandart->Checked)
	  {
		 vsSQLQw=" SELECT Idn, iText FROM spl_LbText256 WHERE iLvl=1516";
		 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		 Qw->Open();cbNameActionDiscount->Clear();
		 while(Qw->Eof==false){cbNameActionDiscount->AddObject(Qw->Fields->Fields[1]->AsString,(TObject*)Qw->Fields->Fields[0]->AsInteger);Qw->Next();}Qw->Close();
	  }
	if(rbDiscountRaschet->Checked)
	  {
		 vsSQLQw=" SELECT Idn, iText FROM spl_LbText256 WHERE iLvl=1517";
		 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		 Qw->Open();cbNameActionDiscount->Clear();
		 while(Qw->Eof==false){cbNameActionDiscount->AddObject(Qw->Fields->Fields[1]->AsString,(TObject*)Qw->Fields->Fields[0]->AsInteger);Qw->Next();}Qw->Close();
	  }
    Qw->Close();
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRasp::btAddActionPurposeClick(TObject *Sender)
{
#ifdef  TFR
#undef  TFR
#undef  FR

#endif
#define TFR TFrEditLibs
#define FR  FrEditLibs

  FR=new TFR(Application);

	FR->fType=3; FR->Caption="Цель акции";
	FR->ShowModal();
	FR->WindowState=wsMinimized;
	if (FR->ModalResult==mrOk)
	  {
		  vsSQLQw=" SELECT Idn, iText FROM spl_LbText256 WHERE iLvl=1519";
		  Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		  Qw->Open();
		  clActionPurpose->Items->Clear();

		while(Qw->Eof==false)
		  {
		   clActionPurpose->Items->AddObject(Qw->Fields->Fields[1]->AsString.Trim(),(TObject*)Qw->Fields->Fields[0]->AsInteger);
		   Qw->Next();
		  }
		Qw->Close();
	  }
  delete (FR);


}
//---------------------------------------------------------------------------

void __fastcall TFrEditRasp::btAddGroupClientsClick(TObject *Sender)
{
#ifdef  TFR
#undef  TFR
#undef  FR

#endif
#define TFR TFrEditLibs
#define FR  FrEditLibs

  FR=new TFR(Application);

	FR->fType=4; FR->Caption="Группа клиентов, участвующих в акции";
	FR->ShowModal();
	FR->WindowState=wsMinimized;
	if (FR->ModalResult==mrOk)
	  {
		  vsSQLQw=" SELECT Idn, iText FROM spl_LbText256 WHERE iLvl=1520";
		  Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		  Qw->Open();
		  clGroupClients->Items->Clear();

		while(Qw->Eof==false)
		  {
		   clGroupClients->Items->AddObject(Qw->Fields->Fields[1]->AsString.Trim(),(TObject*)Qw->Fields->Fields[0]->AsInteger);
		   Qw->Next();
		  }
		Qw->Close();
	  }
  delete (FR);

}
//---------------------------------------------------------------------------

void __fastcall TFrEditRasp::btAddAdvancementChannelClick(TObject *Sender)
{
#ifdef  TFR
#undef  TFR
#undef  FR

#endif
#define TFR TFrEditLibs
#define FR  FrEditLibs

  FR=new TFR(Application);

	FR->fType=5; FR->Caption="Канал продвижения";
	FR->ShowModal();
	FR->WindowState=wsMinimized;
	if (FR->ModalResult==mrOk)
	  {
		  vsSQLQw=" SELECT Idn, iText FROM spl_LbText256 WHERE iLvl=1521";
		  Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		  Qw->Open();
		  clAdvancementChannel->Items->Clear();

		while(Qw->Eof==false)
		  {
		   clAdvancementChannel->Items->AddObject(Qw->Fields->Fields[1]->AsString.Trim(),(TObject*)Qw->Fields->Fields[0]->AsInteger);
		   Qw->Next();
		  }
		Qw->Close();
	  }
  delete (FR);
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRasp::TmRefreshTimer(TObject *Sender)
{

  
 TmRefresh->Enabled=false;
 if (QPZ->Active) viPZIdn=QPZIdn->AsInteger; else viPZIdn=0;
 QPZ->DisableControls();
  QPZ->Close();
 QPZ->Parameters->Items[0]->Value=viRaspIdn;
 QPZ->Open();

 QPZ->EnableControls();
 if(viPZIdn>0) try{Opts.Clear();locvalues[0]=Variant(viPZIdn);QPZ->Locate("Idn",locvalues,Opts);}catch(...){};

}
//---------------------------------------------------------------------------

void __fastcall TFrEditRasp::btPostClick(TObject *Sender)
{
if(QPZ->State==dsEdit || QPZ->State==dsInsert)QPZ->Post();
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRasp::btRefreshClick(TObject *Sender)
{
 TmRefresh->Enabled=false; TmRefresh->Enabled=true;	
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRasp::btAddClick(TObject *Sender)
{
 //Создать данные
 vsSQLQw=" SELECT TOP 1 Idn FROM  bm_PredictedDebit WHERE idRasp=:D0  and LTRIM(RTRIM(Produce))='Новый продукт/услуга' and DateDel is null";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value=viRaspIdn;
 Qw->Open();
 if(Qw->RecordCount==0)
	{	vsSQLQw=
		" INSERT INTO bm_PredictedDebit"
				" ( idRasp" //
				", Produce" //
				", DateIns"
				", IdIns )"
		" VALUES (:D0" //idRasp
				",'Новый продукт/услуга'" //Produce
				",GetDate()" //DateIns
				",:D1);"  //IdIns
		" declare @viTmp int; SET  @viTmp=SCOPE_IDENTITY(); "
		" SELECT @viTmp";
		Qw->Close(); Qw->SQL->Clear(); Qw->SQL->Add(vsSQLQw);
		Qw->Parameters->Items[0]->Value=viRaspIdn;
		Qw->Parameters->Items[1]->Value=PermisHdr.KeyUserStartProgramm;    //ID пользователя

		Qw->Open();
	   TmRefreshTimer(Sender);

	 }
	  viPZIdn=Qw->Fields->Fields[0]->AsInteger;
		Qw->Close();

	  try{Opts.Clear();locvalues[0]=Variant(viPZIdn);QPZ->Locate("Idn",locvalues,Opts);}catch(...){};
	  QPZ->Edit();
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRasp::btDelClick(TObject *Sender)
{
// Удалить данные
if((QPZ->Fields->FieldByName("IdIns")->AsInteger==PermisHdr.KeyUserStartProgramm)||(MainForm->flEditAllRasp))
{

 if(MessageDlg("Вы уверенны, что хотите удалить продукт/услугу "+QPZProduce->AsString,mtInformation,TMsgDlgButtons()<<mbYes<<mbNo,0)!=mrYes) {Abort();return;}

   vsSQLQw=" UPDATE bm_PredictedDebit "
				" SET   DateDel=GetDate() "
				" ,IdDel= :D0 "
				" WHERE Idn=:D1; ";
   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
   Qw->Parameters->Items[0]->Value=PermisHdr.KeyUserStartProgramm;
   Qw->Parameters->Items[1]->Value=QPZIdn->AsInteger;
   Qw->ExecSQL();

   QPZ->Next();
   if (QPZ->Eof==true) {QPZ->Prior();}
   viPZIdn=QPZIdn->AsInteger;
   TmRefreshTimer(Sender);
   {try{Opts.Clear();locvalues[0]=Variant(viPZIdn);QPZ->Locate("Idn",locvalues,Opts);}catch(...){};};


}
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRasp::QPZBeforeDelete(TDataSet *DataSet)
{
 btDelClick(NULL);
 Abort();	
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRasp::QPZBeforePost(TDataSet *DataSet)
{ int i,j, viAdv;

 if(DataSet->Modified==true)//Былали модификация данных
 {  	 if((QPZIdIns->AsInteger!=PermisHdr.KeyUserStartProgramm)&&(!MainForm->flEditAllRasp))
		{ShowMessage("Сохранение невозможно. \n Только создавший запись может ее сохранить"); return; }

  switch(DataSet->State)
   {case dsInsert:break;  //Режим создания новой записи

	case dsEdit:
		{  //Режим редактирования
		for(int i=0,j=DataSet->FieldCount;i<j;i++)
		   {if(DataSet->Fields->Fields[i]->NewValue!=DataSet->Fields->Fields[i]->OldValue)

			  { vsSQLQw=  "UPDATE bm_PredictedDebit SET "+DataSet->Fields->Fields[i]->FieldName+"=:D0 , DateMod= getdate(),IdMod=:D1 where idn="+IntToStr(QPZIdn->AsInteger)+";";
				 if(DataSet->Fields->Fields[i]->FieldName=="PrognozOtklik" || DataSet->Fields->Fields[i]->FieldName=="FactorCost" || DataSet->Fields->Fields[i]->FieldName=="HalfReceivedProfit")
				 {vsSQLQw= vsSQLQw+" UPDATE bm_PredictedDebit SET AllCost= isnull(FactorCost,0)+isnull(HalfReceivedProfit,0) where idn="+IntToStr(QPZIdn->AsInteger)+";";
				  vsSQLQw= vsSQLQw+" UPDATE bm_PredictedDebit SET AllProfit= (AllCost/case when PrognozOtklik=0 then AllCost*2 else PrognozOtklik end ) where idn="+IntToStr(QPZIdn->AsInteger)+";";
				 }
				 
			   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
			   if (DataSet->Fields->Fields[i]->FieldName=="PrognozOtklik") Qw->Parameters->Items[0]->Value=DataSet->Fields->Fields[i]->AsInteger;
			   else
				  {
				   if(DataSet->Fields->Fields[i]->FieldName=="Produce") Qw->Parameters->Items[0]->Value=DataSet->Fields->Fields[i]->AsString;
				   else  Qw->Parameters->Items[0]->Value=DataSet->Fields->Fields[i]->AsCurrency;
				  }
			   Qw->Parameters->Items[1]->Value=PermisHdr.KeyUserStartProgramm;
			   Qw->ExecSQL();
			   Qw->Close();
			  }
			}
		}//case dsEdit:
   }//switch(DataSet->State)
 }// if(DataSet->Modified==true)
 TmRefresh->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRasp::cxGridTableViewEmplUserEditKeyDown(
      TcxCustomGridTableView *Sender, TcxCustomGridTableItem *AItem,
      TcxCustomEdit *AEdit, WORD &Key, TShiftState Shift)
{
  if(Key==13 || Key==40 || /*Key==38 || Key==39 ||*/ Key==37 || Key==9 )//Enter ->   <-
  { try{if(QPZ->State==dsEdit || QPZ->State==dsInsert)QPZ->Post(); }catch(...){}; }
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRasp::cbCostDiscountDropDown(TObject *Sender)
{

		 vsSQLQw=" SELECT Idn, iText FROM spl_LbText256 WHERE iLvl=1522";
		 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		 Qw->Open();cbCostDiscount->Clear();
		 while(Qw->Eof==false){cbCostDiscount->AddObject(Qw->Fields->Fields[1]->AsString,(TObject*)Qw->Fields->Fields[0]->AsInteger);Qw->Next();}Qw->Close();

}
//---------------------------------------------------------------------------

void __fastcall TFrEditRasp::cxGridTableViewEmplUserColumn1PropertiesButtonClick(
      TObject *Sender, int AButtonIndex)
{
#ifdef  TFR
#undef  TFR
#undef  FR
#undef  FL
#undef  NN
#endif
#define TFR TFrFindProduce
#define FR  FrFindProduce

#define NN  N11


  FR=new TFR(Application);
  FR->fEditRaspDetail=false;
  FR->ShowModal();
  FR->WindowState=wsMinimized;
	  if (FR->ModalResult == mrOk)
		{
               vsSQLQw=" UPDATE bm_PredictedDebit "
				" SET  idProduce=:D0 "
				" ,Produce= :D1 "
				" ,DateMod=GetDate() "
				" ,IdMod= :D2 "
				" WHERE Idn=:D3; ";
   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
   Qw->Parameters->Items[0]->Value=FR->QProduceidn->AsInteger;
   Qw->Parameters->Items[1]->Value=FR->QProduceiText->AsString;
   Qw->Parameters->Items[2]->Value=PermisHdr.KeyUserStartProgramm;
   Qw->Parameters->Items[3]->Value=QPZIdn->AsInteger;
   Qw->ExecSQL();
    TmRefresh->Enabled=true;
		}
  delete (FR);
}
//---------------------------------------------------------------------------



void __fastcall TFrEditRasp::btOtkazClick(TObject *Sender)
{     
  MainForm->Otkaz(viRaspIdn);
	ShowMessage("Распоряжение отмечено как 'Отклоненное'.\nРассылка уведомлений об отказе начата.");
///
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRasp::btAddProduceClick(TObject *Sender)
{

#ifdef  TFR
#undef  TFR
#undef  FR

#endif
#define TFR TFrEditProduce
#define FR  FrEditProduce




  FR=new TFR(Application);

  FR->ShowModal();
  FR->WindowState=wsMinimized;
  FR->ModalResult;

  delete (FR);
}
//---------------------------------------------------------------------------
//_______________ ДИАНА _______________
void __fastcall TFrEditRasp::LoadPicList(TStrings *Seller,TStrings *User, TStrings *Dol)
{//Загрузка нового листа выбора
AnsiString Sl;
TStrings *S;
TTreeNodes *Sn;
TField *F,*Fi,*Ft;
TADOQuery *Qi;
int i;

Qi=Qw;

if(Seller!=NULL)
  {S=Seller;Qi->Close();Qi->SQL->Clear();Qi->SQL->Add(
  " select Idn,ShortName from dbo.clt_Seller where [default]=1 ");
 Qi->Open();Fi=Qi->Fields->Fields[0];F=Qi->Fields->Fields[1];S->Clear();
  while(Qi->Eof==false){S->AddObject(F->AsString,(TObject*)Fi->AsInteger);Qi->Next();}Qi->Close();

 }


if(User!=NULL)
  {if(RzComboBox1->ItemIndex==-1) {i=0;} else {i=(int)RzComboBox1->Items->Objects[RzComboBox1->ItemIndex]; }
  S=User;Qi->Close();Qi->SQL->Clear();Qi->SQL->Add(
  " SELECT  DISTINCT   B.IdEmplUsers ,A.FamIO  FROM EmplUsers A,  bm_Rasp B "
	" WHERE A.DiscDate='21000101' and A.IDUser= B.IdEmplUsers and B.idSeller= "+IntToStr(i)+    //idSeller 36-ЗАО  37-НАО
	" ORDER BY A.FamIO; ");
 Qi->Open();Fi=Qi->Fields->Fields[0];F=Qi->Fields->Fields[1];S->Clear();
  while(Qi->Eof==false){S->AddObject(F->AsString,(TObject*)Fi->AsInteger);Qi->Next();}Qi->Close();

 }

if(Dol!=NULL)
  {S=Dol;Qi->Close();Qi->SQL->Clear();Qi->SQL->Add(
 "SELECT  MAX(IDn), Dol FROM EmplDol  "
 "WHERE  DiscDate='21000101'"
 " and IDUser= "+IntToStr((int)cbEmplUsers->Items->Objects[cbEmplUsers->ItemIndex] ) +
 " and IDUR in(select FlUr from  dbo.clt_Seller where idn= "+IntToStr(i)+") group by Dol "
 );
 Qi->Open();Fi=Qi->Fields->Fields[0];F=Qi->Fields->Fields[1];S->Clear();
  while(Qi->Eof==false){S->AddObject(F->AsString,(TObject*)Fi->AsInteger);Qi->Next();}Qi->Close();

 }

}
//---------------------------------------------------------------------------
//_______________ ДИАНА _______________

//---------------------------------------------------------------------------
void __fastcall TFrEditRasp::RzComboBox1Change(TObject *Sender)
{
	 LoadPicList(NULL,cbEmplUsers->Items,NULL);
	 if(cbEmplUsers->Items->Count>0)
	{
		try{cbEmplUsers->ItemIndex=cbEmplUsers->Items->IndexOfObject((TObject*)QListRaspIdEmplUsers->AsInteger);}catch(...){cbEmplUsers->ItemIndex=cbEmplUsers->Items->IndexOfObject((TObject*)45);;};
	}
}  //_______________________________

//---------------------------------------------------------------------------

void __fastcall TFrEditRasp::cbVidRaspDropDown(TObject *Sender)
{  if (fDropDown)
 {

   if(viRaspIdn!=0)
	  { vsSQLQw=" SELECT Idn FROM bm_RaspDetail WHERE IdRasp=:D0 AND DateDel is null";
		Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		Qw->Parameters->Items[0]->Value=viRaspIdn;
		Qw->Open();
		if (Qw->RecordCount>0) {ShowMessage("Изменить тип распоряжения невозможно пока в нем имеются подписные индексы. ");reComment->SetFocus();return; }

		if(MessageDlg("При изменении типа распоряжения техт распоряжения будет очищен. Продолжить?" ,mtInformation,TMsgDlgButtons()<<mbYes<<mbNo,0)!=mrYes)
		   {reComment->SetFocus();} else
			{
				reContentRTF->Text="";  	fDropDown=false;
					///Если распоряженияе типа "О внесении изменений в ПИ", то дописываем в текст распоряжения строчку
		 vsSQLQw=  " SELECT Idn FROM bm_Rasp WHERE VidRasp=4742383  And Idn=:D0";
		 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		 Qw->Parameters->Items[0]->Value= viRaspIdn;
		 Qw->Open();
   if (Qw->RecordCount>0) { reContentRTF->Text="\nПри утверждении данного распоряжения, все существующие счета и заказы будут безвозвратно  изменены. В программных продуктах  ПО КЦ и САП-3!\n";}
			 }

	  }
 }
 else fDropDown=true;
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrEditRasp::reCommentExit(TObject *Sender)
{
  if (reComment->Text.Length() > 0)
	  reComment->Style->Color = clWhite;
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrEditRasp::edDateRaspExit(TObject *Sender)
{
  if (edDateRasp->Text.Length() > 0)
	  edDateRasp->Color = clWhite;
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrEditRasp::reRaspNameExit(TObject *Sender)
{
  if (reRaspName->Text.Length() > 0)
	  reRaspName->Style->Color = clWhite;
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrEditRasp::reContentTargetRTFExit(TObject *Sender)
{
  if (reContentTargetRTF->Text.Length() > 0)
	  reContentTargetRTF->Style->Color = clWhite;
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrEditRasp::reContentRTFExit(TObject *Sender)
{
  if (reContentRTF->Text.Length() > 0)
	  reContentRTF->Style->Color = clWhite;
}
//---------------------------------------------------------------------------------------------------------------------------
