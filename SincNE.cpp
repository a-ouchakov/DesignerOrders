//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Init.h"
#include "main.h"
#include "SincNE.h"
#include "LookSheet.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzPanel"
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

#pragma link "cxImageComboBox"
#pragma link "RzEdit"
#pragma link "cxButtonEdit"
#pragma link "RzSplit"
#pragma link "RzLabel"
#pragma link "RzCmboBx"
#pragma link "RzPrgres"
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
#pragma resource "*.dfm"
TFrSincNE *FrSincNE;
char flFrSincNE;
//---------------------------------------------------------------------------
__fastcall TFrSincNE::TFrSincNE(TComponent* Owner)
	: TForm(Owner)
{
	  
}
//---------------------------------------------------------------------------
void __fastcall TFrSincNE::btCloseClick(TObject *Sender)
{
Close();//   ModalResult = mrCancel;	
}
//---------------------------------------------------------------------------
void __fastcall TFrSincNE::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
 if(Key == VK_ESCAPE) Close();//ModalResult = mrCancel;	
}
//---------------------------------------------------------------------------
void __fastcall TFrSincNE::TmNE_DOTimer(TObject *Sender)
{
  TmNE_DO->Enabled = false;
  QNE_DO->DisableControls();
  QNE_DO->Close();
///
	vsSQLQw= "DECLARE @edFind varchar(512); SET @edFind=:D0;"
			 "SELECT A.Idn, B.NameRaspDetail, C.iText [Тип продукта], E.iText [Продукт], J.iText [Тематическое направление], A.NameRaspDetail, A.NumbNE [Номер], "
					"A.[Year] [Год], isnull(A.ItemId,'') [Код], A.IdnAxapta, A.NameAxapta /*[Наименование Axapta]*/, A.ItemIdAxapta /*[Код Axapta]*/, "
					"isnull(A.fState, 0) fState, H.NumbRaspName "
			 " FROM bm_RaspDetail A"
			 " LEFT JOIN bm_RaspDetail B ON B.Idn=A.PIdn"
			 " LEFT JOIN spl_LbText24 C ON C.Idn=B.Id24TypeProduceIndex"
			 " LEFT JOIN all_AdvProduceClass D ON D.Idn=B.idAdvProduceClass"
			 " LEFT JOIN spl_LbText512 E ON E.Idn=D.id512Name"
			 " LEFT JOIN all_AdvProduceClass F ON F.Idn=B.idAdvTNClass"
			 " LEFT JOIN spl_LbText512 J ON J.Idn=F.id512Name"
			 " LEFT JOIN bm_Rasp H ON H.Idn=A.IdRasp"
			// " LEFT JOIN bm_Rasp B2 ON B2.Idn=A.IdRasp"
			 " WHERE  isnull(H.fTime_Zero, 0)<>1 AND A.fType=3 AND A.DateDel IS NULL AND B.DateDel IS NULL"
			 " AND H.Id24NameStatus IN (5448352/*,5448350,5448428*/) AND B.NameRaspDetail<>'Новый подписной индекс'"
			 " AND A.NameRaspDetail<>'Новая номенклатурная еденица'"
			 //" AND B2.Id24NameStatus IN (5448352/*,5448350,5448428*/)"
			 " AND H.DateDel is null "
			 " AND ((A.DateLastExport is null) OR (A.DateLastExport is not null AND (coalesce(A.DateDel,A.DateMod,A.DateIns)>A.DateLastExport))) "; //Отключить эту строчку, если необходимо перепривязать ранее переданные
  if (Trim(edFind->Text) != "")
	 {
	  vsSQLQw = vsSQLQw + " AND ((A.NameRaspDetail LIKE '%'+@edFind+'%') OR (B.NameRaspDetail LIKE '%'+@edFind+'%') OR (A.ItemId LIKE '%'+@edFind+'%'))" ;
	  }
  vsSQLQw = vsSQLQw + " ORDER BY A.NameRaspDetail ";

   QNE_DO->Close();QNE_DO->SQL->Clear();QNE_DO->SQL->Add(vsSQLQw);
   QNE_DO->Parameters->Items[0]->Value=Trim(edFind->Text);
   QNE_DO->Open();
///

 if(viIdn>0)
  {try{Opts.Clear();locvalues[0]=Variant(viIdn);QNE_DO->Locate("Idn",locvalues,Opts);}catch(...){};};
 QNE_DO->EnableControls();
}
//---------------------------------------------------------------------------
void __fastcall TFrSincNE::FormActivate(TObject *Sender)
{
  vsSQLQw = " SELECT Idn, iText FROM dbo.spl_LbText24 WHERE iLvl=1232 and DateDel is null" ;
  Qw->Close();
  Qw->SQL->Clear();
  Qw->SQL->Add(vsSQLQw);
  Qw->Open();

  cbId24ItemType->Clear();
  cbId24ItemType->Add("ВСЕ");

  while(Qw->Eof==false)
	   {
		cbId24ItemType->AddObject(Qw->Fields->Fields[1]->AsString,(TObject*)Qw->Fields->Fields[0]->AsInteger);
		Qw->Next();
		}
  Qw->Close();

 TmNE_DO->Enabled     = true;
 TmNE_Axapta->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TFrSincNE::QNE_DOBeforePost(TDataSet *DataSet)
{
 int i,j;   AnsiString vsTmpNameField, vsTmpNewValue;

 if(DataSet->Modified==true)//Была ли модификация данных
 {
   switch(DataSet->State)
   {case dsInsert:break;  //Режим создания новой записи

	case dsEdit:
		{  //Режим редактирования
		for(int i=0,j=DataSet->FieldCount;i<j;i++)
		   {if((DataSet->Fields->Fields[i]->NewValue!=DataSet->Fields->Fields[i]->OldValue))//&&(DataSet->Fields->Fields[i]->FieldName!="fHoliday")) //fHoliday вычисляемое поле. При обращении к полю начинает чудить
			  { vsSQLQw=  "UPDATE bm_RaspDetail SET "+DataSet->Fields->Fields[i]->FieldName+"=:D0 , DateMod= getdate(),IdMod=:D1 where idn="+IntToStr(QNE_DOIdn->AsInteger)+";";
			   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
			   vsTmpNameField=DataSet->Fields->Fields[i]->FieldName;
			   vsTmpNewValue=DataSet->Fields->Fields[i]->NewValue;
			   if((DataSet->Fields->Fields[i]->FieldName=="ItemIdAxapta")||(DataSet->Fields->Fields[i]->FieldName=="NameAxapta")) Qw->Parameters->Items[0]->Value=DataSet->Fields->Fields[i]->AsString;
			   if((DataSet->Fields->Fields[i]->FieldName=="fState")/*||(DataSet->Fields->Fields[i]->FieldName=="fState")||(DataSet->Fields->Fields[i]->FieldName=="fTurnSheet")*/) Qw->Parameters->Items[0]->Value=DataSet->Fields->Fields[i]->AsInteger;
			   Qw->Parameters->Items[1]->Value=PermisHdr.KeyUserStartProgramm;
			   viIdn=QNE_DOIdn->AsInteger;
			   Qw->ExecSQL();
			   Qw->Close();
			  }
		   } //for FieldCount
		}//case
	 } //switch
  }//DataSet->Modified==true
   ////
 if ((vsTmpNameField=="ItemIdAxapta")||(vsTmpNameField=="NameAxapta"))
	{ int viTmpIdn;         //Если есть в Axapta
	vsSQLQw= "DECLARE @ItemId varchar(24); SET @ItemId=:D0"
			 " SELECT TOP 1 A.Idn "
			 " FROM ax_Nomenclatura  A"
			 " WHERE RTRIM(LTRIM(A.ItemId))=RTRIM(LTRIM(isnull(@ItemId,' '))) AND A.DateDel IS NULL";
   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
   Qw->Parameters->Items[0]->Value=vsTmpNewValue;
   Qw->Open();
   ////
   if (Qw->RecordCount>0)
	  {   //Меняем статус
	   viTmpIdn=Qw->Fields->Fields[0]->AsInteger;

		vsSQLQw=" UPDATE bm_RaspDetail SET IdnAxapta=:D0,fState=2 "
				" WHERE Idn=:D1";
	   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	   Qw->Parameters->Items[0]->Value=viTmpIdn;
	   Qw->Parameters->Items[1]->Value=viIdn;
	   Qw->ExecSQL();
	  }
   else
	  { //Если нет, то статус 1-при наличии данных и 0- если поля NameAxapta,ItemIdAxapta пустые
		vsSQLQw=" SELECT (RTRIM(LTRIM(ItemIdAxapta))+RTRIM(LTRIM(NameAxapta))) MyStr FROM bm_RaspDetail  "
				" WHERE Idn=:D0";
	   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	   Qw->Parameters->Items[0]->Value=viIdn;
	   Qw->Open();
	  AnsiString rrr=Qw->Fields->Fields[0]->AsString;
	   if(Trim(Qw->Fields->Fields[0]->AsString)!="") viTmpIdn=1; else viTmpIdn=0;

		vsSQLQw=" UPDATE bm_RaspDetail SET fState=:D0 "
				" WHERE Idn=:D1";
	   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	   Qw->Parameters->Items[0]->Value=viTmpIdn;
	   Qw->Parameters->Items[1]->Value=viIdn;
	   Qw->ExecSQL();
	  }
	 }

TmNE_DO->Enabled=true;
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrSincNE::TmNE_AxaptaTimer(TObject *Sender)
{
  TmNE_Axapta->Enabled = false;
  QNE_Axapta->Close();
///                            Запрос изменила Диана 18.06.2012 для удобства анализа данных по НЕ
  vsSQLQw = "DECLARE @Id24ItemType int, @edNumbAxapta varchar(512); SET @Id24ItemType=:D0; SET @edNumbAxapta=:D1; "
			 "SELECT A.Idn, A.ItemName, A.ItemId, B.iText iTextId24ItemType, A.src, A.ISSN, A.iYear, A.NDS, a.IdProduct, "
					"l.iText, count(r.IdnAxapta) as [CountRasp], max(rg.Idn) as [MaxIdRasp] " //--,rg.ItemId as [ItemIdRasp] "
			   "FROM ax_Nomenclatura A "
			   "LEFT JOIN spl_LbText24            B  ON B.Idn=A.Id24ItemType "
			   "LEFT JOIN dbo.all_AdvProduceClass p  on p.idn=a.IdProduct  and p.datedel is null "
			   "LEFT JOIN spl_LbText512           l  ON l.Idn=p.id512Name "
			   "LEFT JOIN dbo.bm_RaspDetail       r  on r.IdnAxapta=a.idn and r.datedel is null "
			   "LEFT JOIN dbo.bm_Rasp             rg on rg.idn=idRasp  and rg.datedel is null "
			  "WHERE A.DateDel is null /*AND A.src=1000*/ AND Substring(A.ItemId,1,4)<>'ноу_' ";

	 if (Trim(edFindAxapta->Text)!=""){vsSQLQw=vsSQLQw+ " AND ((A.ItemName LIKE '%'+@edNumbAxapta+'%') OR (A.ItemId LIKE '%'+@edNumbAxapta+'%'))" ;}

	 if (Trim(edYearAxapta->Text)!=""){vsSQLQw=vsSQLQw+ " AND (A.iYear="+Trim(edYearAxapta->Text)+") " ;}

	 if (Trim(edNumbAxapta->Text)!=""){vsSQLQw=vsSQLQw+ " AND (A.Number="+Trim(edNumbAxapta->Text)+") " ;}

	 if (!((cbId24ItemType->ItemIndex==-1)||(cbId24ItemType->Text=="ВСЕ"))) {vsSQLQw=vsSQLQw+" AND  A.Id24ItemType=@Id24ItemType ";}

	 if (rb1000->Checked) {vsSQLQw=vsSQLQw+" AND A.src=1000";}
	 if (rb2000->Checked) {vsSQLQw=vsSQLQw+" AND A.src=2000";}
	 if (rb3000->Checked) {vsSQLQw=vsSQLQw+" AND A.src=3000";}



  vsSQLQw = vsSQLQw + " group by A.Idn,A.ItemName,A.ItemId,B.iText ,A.src,A.ISSN,A.iYear,A.NDS,a.IdProduct,l.iText ORDER BY A.ItemName ";
  QNE_Axapta->Close();
  QNE_Axapta->SQL->Clear();
  QNE_Axapta->SQL->Add(vsSQLQw);

  if (!((cbId24ItemType->ItemIndex==-1)||(cbId24ItemType->Text=="ВСЕ")))
	 {
	  QNE_Axapta->Parameters->Items[0]->Value = (int)cbId24ItemType->Items->Objects[cbId24ItemType->ItemIndex];
	  }
  else QNE_Axapta->Parameters->Items[0]->Value = 0;
	   QNE_Axapta->Parameters->Items[1]->Value = Trim(edFindAxapta->Text);

   QNE_Axapta->Open();
}
//---------------------------------------------------------------------------

void __fastcall TFrSincNE::DSNE_DODataChange(TObject *Sender, TField *Field)
{
 edProduce->Text=QNE_DOStringField3->AsString;
 edTemNapr->Text=QNE_DOStringField4->AsString;
 edTypeProduce->Text=QNE_DOStringField5->AsString;
 edYear->Text=IntToStr(QNE_DOIntegerField->AsInteger);
 edNumb->Text=IntToStr(QNE_DOIntegerField2->AsInteger);
}
//---------------------------------------------------------------------------


void __fastcall TFrSincNE::RzToolButton2Click(TObject *Sender)
{
   vsSQLQw= " UPDATE Q SET Q.NameAxapta=A.ItemName, Q.ItemIdAxapta=RTRIM(LTRIM(A.ItemId)),Q.IdnAxapta=A.Idn ,Q.fState=2 "
			" from bm_RaspDetail Q "
			" INNER JOIN ax_Nomenclatura A ON RTRIM(LTRIM(A.ItemId))=RTRIM(LTRIM(Q.ItemId)) "
			" WHERE Q.fType=3 AND Q.DateDel is null AND A.DateDel is null AND isnull(Q.fState,0)=0 "
			" AND RTRIM(LTRIM(A.ItemId))<>'' ";
   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
   Qw->ExecSQL();
   vsSQLQw= " UPDATE Q SET Q.IdnAxapta=A.Idn ,Q.fState=2 "
			" from bm_RaspDetail Q "
			" INNER JOIN ax_Nomenclatura A ON RTRIM(LTRIM(A.ItemId))=RTRIM(LTRIM(Q.ItemIdAxapta)) "
			" WHERE Q.fType=3 AND Q.DateDel is null AND A.DateDel is null AND isnull(Q.fState,0)=1 "
			" AND RTRIM(LTRIM(Q.ItemIdAxapta))<>'' ";
   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
   Qw->ExecSQL();


   TmNE_DO->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TFrSincNE::cxGridTableViewEmplUserColumn1PropertiesButtonClick(TObject *Sender, int AButtonIndex)
{AnsiString vsTmpItemId, vsTmpItemName; int viTmpIdn ;
 viIdn=QNE_DOIdn->AsInteger;


   ////
	vsSQLQw= "DECLARE @ItemId varchar(24); SET @ItemId=:D0"
			 " SELECT TOP 1 RTRIM(LTRIM(A.ItemId)),A.ItemName,A.Idn "
			 " FROM ax_Nomenclatura  A"
			 " WHERE RTRIM(LTRIM(A.ItemId))=RTRIM(LTRIM(isnull(@ItemId,' '))) AND A.DateDel IS NULL";
   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
   Qw->Parameters->Items[0]->Value=QNE_DOStringField2->AsString;
   Qw->Open();
   ////
   if (Qw->RecordCount>0)
	  { vsTmpItemId=Qw->Fields->Fields[0]->AsString;
		vsTmpItemName=Qw->Fields->Fields[1]->AsString;
		viTmpIdn=Qw->Fields->Fields[2]->AsInteger;

		vsSQLQw=" DECLARE @ItemId varchar(24), @NameRaspDetail varchar(512), @Idn int; "
				" SET @ItemId=:D0; SET @NameRaspDetail=:D1; SET @Idn=:D2; "
				" UPDATE bm_RaspDetail SET NameAxapta=@NameRaspDetail, ItemIdAxapta=RTRIM(LTRIM(@ItemId)),IdnAxapta=@Idn,fState=2, DateMod=GetDate(), IdMod=:D3 "
				" WHERE Idn=:D4";
	   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	   Qw->Parameters->Items[0]->Value=vsTmpItemId;
	   Qw->Parameters->Items[1]->Value=vsTmpItemName;
	   Qw->Parameters->Items[2]->Value=viTmpIdn;
	   Qw->Parameters->Items[3]->Value=PermisHdr.KeyUserStartProgramm;
	   Qw->Parameters->Items[4]->Value=viIdn;
	   Qw->ExecSQL();
	  }
   else
	  {

		vsSQLQw= " UPDATE bm_RaspDetail SET NameAxapta=NameRaspDetail, ItemIdAxapta=RTRIM(LTRIM(ItemId)) ,fState=1, DateMod=GetDate(), IdMod=:D0 "
				" WHERE Idn=:D1";
	   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	   Qw->Parameters->Items[0]->Value=PermisHdr.KeyUserStartProgramm;
	   Qw->Parameters->Items[1]->Value=viIdn;
	   Qw->ExecSQL();
	  }


   TmNE_DO->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TFrSincNE::RzToolButton1Click(TObject *Sender)
{
   viIdn=QNE_DOIdn->AsInteger;
		vsSQLQw= " UPDATE bm_RaspDetail SET NameAxapta=NameRaspDetail, ItemIdAxapta=RTRIM(LTRIM(ItemId)) ,fState=1, DateMod=GetDate(), IdMod=:D0 "
				" WHERE isnull(fState,0)=0";
	   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	   Qw->Parameters->Items[0]->Value=PermisHdr.KeyUserStartProgramm;
	   Qw->ExecSQL();

 TmNE_DO->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TFrSincNE::cxGridTableViewEmplUserColumn3PropertiesButtonClick(TObject *Sender, int AButtonIndex)
{
 viIdn=QNE_DOIdn->AsInteger;
	vsSQLQw= " UPDATE bm_RaspDetail SET NameAxapta='', ItemIdAxapta='', IdnAxapta=0 ,fState=0, DateMod=GetDate(), IdMod=:D0 "
	" WHERE Idn IN ("+StrID+")";
		   //	" WHERE Idn=:D1";
   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
   Qw->Parameters->Items[0]->Value=PermisHdr.KeyUserStartProgramm;
  // Qw->Parameters->Items[1]->Value=viIdn;
   Qw->ExecSQL();
   TmNE_DO->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TFrSincNE::edFindChange(TObject *Sender)
{
TmNE_DO->Enabled=true;
   
}
//---------------------------------------------------------------------------

void __fastcall TFrSincNE::RzToolButton5Click(TObject *Sender)
{
MainForm->SaveXlsFiles(cxGridEmplUserDol,"FrSincNE","");
}
//---------------------------------------------------------------------------

void __fastcall TFrSincNE::RzToolButton4Click(TObject *Sender)
{
 TmNE_DO->Enabled=false; TmNE_DO->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TFrSincNE::cxGridTableViewEmplUserKeyDown(TObject *Sender,
      WORD &Key, TShiftState Shift)
{
 /* if(Key==13 )//Enter
  { if(QNE_DO->State==dsEdit || QNE_DO->State==dsInsert)QNE_DO->Post();  }  */
}
//---------------------------------------------------------------------------

void __fastcall TFrSincNE::cxGridTableViewEmplUserEditKeyDown(
      TcxCustomGridTableView *Sender, TcxCustomGridTableItem *AItem,
      TcxCustomEdit *AEdit, WORD &Key, TShiftState Shift)
{
  if(Key==13 )//Enter
  { if(QNE_DO->State==dsEdit || QNE_DO->State==dsInsert)QNE_DO->Post();  }
}
//---------------------------------------------------------------------------

void __fastcall TFrSincNE::btInsRaspDetailClick(TObject *Sender)
{
Close();// 	ModalResult = mrOk;
}
//---------------------------------------------------------------------------

void __fastcall TFrSincNE::edFindAxaptaChange(TObject *Sender)
{
  TmNE_Axapta->Enabled=true;
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrSincNE::cxGridDBBandedColumn6PropertiesButtonClick(TObject *Sender, int AButtonIndex)
{
  AnsiString vsTmpItemId, vsTmpItemName;
		 int viTmpIdn;

  viIdn = QNE_DOIdn->AsInteger;

  vsTmpItemId   = QNE_AxaptaItemId->AsString;
  vsTmpItemName = QNE_AxaptaItemName->AsString;
  viTmpIdn      = QNE_AxaptaIdn->AsInteger;
  //Проверка на принадлежность НЕ к одному году
  vsSQLQw = " SELECT B.Idn FROM bm_RaspDetail  A "
			   "LEFT JOIN bm_RaspDetail   B ON A.PIdn = B.PIdn "
			  "INNER JOIN ax_Nomenclatura C ON C.Idn = B.IdnAxapta "
			  "WHERE A.DateDel IS NULL AND B.DateDel IS NULL AND A.fType = 3 AND B.fType = 3 "
				"AND A.Idn IN(" + StrID + ") AND C.iYear <> (SELECT iYear FROM ax_Nomenclatura WHERE Idn = :D0) "; //Сравнение с null даст false. таким образом выбираем нужный нам год и/или null
  Qw->Close();
  Qw->SQL->Clear();
  Qw->SQL->Add(vsSQLQw);
  Qw->Parameters->Items[0]->Value = viTmpIdn;
  Qw->Open();
  if (Qw->RecordCount>0)
	 {
	  ShowMessage("Сохранение невозможно. \n Номенклатуры в одном подписном индексе должны принадлежать одному году.");
	  return;
	  }
 /////////////////

  //Проверка на пренадлежность всех НЕ в данном ПИ к одному продукту
		vsSQLQw= " SELECT B.Idn FROM bm_RaspDetail  A "
				 " LEFT JOIN bm_RaspDetail  B ON A.PIdn=B.PIdn "
				 " INNER JOIN ax_Nomenclatura C ON C.Idn=B.IdnAxapta "
				 " WHERE A.DateDel is null and B.DateDel is null And A.fType=3 and B.fType=3 "
				 " AND A.Idn IN("+StrID+") AND C.IdProduct <> (SELECT IdProduct FROM ax_Nomenclatura WHERE Idn=:D0) "; //Сравнение с null даст false. таким образом выбираем нужный нам год и/или null
		Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		Qw->Parameters->Items[0]->Value=viTmpIdn;
		Qw->Open();
		if(Qw->RecordCount>0)	{ShowMessage("Сохранение невозможно. \n Номенклатуры в одном подписном индексе должны принадлежать одному продукту."); return; }

 /////////////


 //Проверка на пренадлежность данной НЕ Axapta к одному продукту
 if ((viTmpIdn!=40130)&&(viTmpIdn!=55200))//Проверка, что не "проживание". Проживание может быть в нескольких продуктах
  {
     

		vsSQLQw= " SELECT A.idAdvProduceClass, B.Idn FROM bm_RaspDetail  A"
				 " LEFT JOIN bm_RaspDetail  B ON A.Idn=B.PIdn"
				 " WHERE A.DateDel is null and B.DateDel is null"
				 " AND B.Idn IN("+StrID+")  AND A.idAdvProduceClass <>(SELECT IdProduct FROM ax_Nomenclatura WHERE Idn=:D0)";
		Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		Qw->Parameters->Items[0]->Value=viTmpIdn;
		Qw->Open();
		if(Qw->RecordCount>0)	{ShowMessage("Сохранение невозможно. \n Имеется выбранная номенклатура, уже привязанная к другому продукту."); return; }
 }
 /////////////


 ///Проверка на НДС(должен быть одинаковым у выбранных НЕ и привязываемого НЕ из Axapta
 //Проверка на пренадлежность всех НЕ к лдному НДС
		vsSQLQw= " SELECT A.ProcNDS  FROM bm_RaspDetail  A"
				 " WHERE A.DateDel is null "
				 " AND A.Idn IN ("+StrID+")  AND isnull(A.ProcNDS,0) <>(SELECT isnull(NDS,0) FROM ax_Nomenclatura WHERE Idn=:D0)";
		Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		Qw->Parameters->Items[0]->Value=viTmpIdn;
		Qw->Open();
		if(Qw->RecordCount>0)	{ShowMessage("Сохранение невозможно. \n НДС должен быть одинаковым у выбранных НЕ и привязываемого НЕ из Axapta."); return; }


 ////////////////////////////////////////////////






		vsSQLQw=" DECLARE @ItemId varchar(24), @NameRaspDetail varchar(512), @Idn int; "
				" SET @ItemId=:D0; SET @NameRaspDetail=:D1; SET @Idn=:D2; "
				" UPDATE bm_RaspDetail SET NameAxapta=@NameRaspDetail, ItemIdAxapta=RTRIM(LTRIM(@ItemId)),IdnAxapta=@Idn,fState=2, DateMod=GetDate(), IdMod=:D3 "
				" WHERE Idn IN ("+StrID+")";
			   //	" WHERE Idn=:D4";
	   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	   Qw->Parameters->Items[0]->Value=vsTmpItemId;
	   Qw->Parameters->Items[1]->Value=vsTmpItemName;
	   Qw->Parameters->Items[2]->Value=viTmpIdn;
	   Qw->Parameters->Items[3]->Value=PermisHdr.KeyUserStartProgramm;
	 //  Qw->Parameters->Items[4]->Value=viIdn;
	   Qw->ExecSQL();

	   TmNE_DO->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TFrSincNE::edYearAxaptaChange(TObject *Sender)
{
  TmNE_Axapta->Enabled=true;	
}
//---------------------------------------------------------------------------

void __fastcall TFrSincNE::edNumbAxaptaChange(TObject *Sender)
{
TmNE_Axapta->Enabled=true;	
}
//---------------------------------------------------------------------------



void __fastcall TFrSincNE::RzBitBtn3Click(TObject *Sender)
{
  edFindAxapta->Text=edFind->Text;
}
//---------------------------------------------------------------------------

void __fastcall TFrSincNE::RzBitBtn2Click(TObject *Sender)
{
 edFindAxapta->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TFrSincNE::RzBitBtn1Click(TObject *Sender)
{
  edFind->Text="" ;
}
//---------------------------------------------------------------------------

void __fastcall TFrSincNE::RzBitBtn7Click(TObject *Sender)
{
 cbId24ItemType->ItemIndex=-1;
 TmNE_Axapta->Enabled=true;	
}
//---------------------------------------------------------------------------

void __fastcall TFrSincNE::cbId24ItemTypeChange(TObject *Sender)
{
   TmNE_Axapta->Enabled=true;	
}
//---------------------------------------------------------------------------


void __fastcall TFrSincNE::cxGridTableViewEmplUserSelectionChanged(TcxCustomGridTableView *Sender)
{
 int i;
if(cxGridLevel2->Active==true)
{StrID="";for(i=0,StrCol=0;i<cxGridTableViewEmplUser->Controller->SelectedRowCount;i++)
	{StrCol=StrCol+1;StrID=StrID+cxGridTableViewEmplUser->Controller->SelectedRecords[i]->Values[9]+",";
	}
}
StrID=StrID.Delete(StrID.Trim().Length(),1);
}
//---------------------------------------------------------------------------
void __fastcall TFrSincNE::RzToolButton6Click(TObject *Sender)
{  if(StrID.Trim().Length()>0)
  {
 viIdn=QNE_DOIdn->AsInteger;
	vsSQLQw= " UPDATE bm_RaspDetail SET NameAxapta='', ItemIdAxapta='', IdnAxapta=0 ,fState=0, DateMod=GetDate(), IdMod=:D0 "
	" WHERE Idn IN ("+StrID+")";
		   //	" WHERE Idn=:D1";
   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
   Qw->Parameters->Items[0]->Value=PermisHdr.KeyUserStartProgramm;
  // Qw->Parameters->Items[1]->Value=viIdn;
   Qw->ExecSQL();
   TmNE_DO->Enabled=false;   TmNE_DO->Enabled=true;
   }	
}
//---------------------------------------------------------------------------

void __fastcall TFrSincNE::RzToolButton7Click(TObject *Sender)
{AnsiString vsTmpItemId, vsTmpItemName, vsItemIdSelect ; int viTmpIdn, viIdnSelect,i ;
 
  if(cxGridLevel2->Active==true)
{ viIdn=QNE_DOIdn->AsInteger;
  for(i=0,StrCol2=0;i<cxGridTableViewEmplUser->Controller->SelectedRowCount;i++)
	{StrCol=StrCol+1;
	viIdnSelect=cxGridTableViewEmplUser->Controller->SelectedRecords[i]->Values[8];
	vsItemIdSelect= cxGridTableViewEmplUser->Controller->SelectedRecords[i]->Values[1];

   ////   Выбираем НЕ из Axapta с таким же   ItemId
	vsSQLQw= "DECLARE @ItemId varchar(24); SET @ItemId=:D0"
			 " SELECT TOP 1 RTRIM(LTRIM(A.ItemId)),A.ItemName,A.Idn "
			 " FROM ax_Nomenclatura  A"
			 " WHERE RTRIM(LTRIM(A.ItemId))=RTRIM(LTRIM(isnull(@ItemId,' '))) AND A.DateDel IS NULL";
   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
   Qw->Parameters->Items[0]->Value=vsItemIdSelect.Trim();
   Qw->Open();
   ////  Если нашли, то привязываем   через IdnAxapta
   if (Qw->RecordCount>0)
	  { vsTmpItemId=Qw->Fields->Fields[0]->AsString;
		vsTmpItemName=Qw->Fields->Fields[1]->AsString;
		viTmpIdn=Qw->Fields->Fields[2]->AsInteger;

		vsSQLQw=" DECLARE @ItemId varchar(24), @NameRaspDetail varchar(512), @Idn int; "
				" SET @ItemId=:D0; SET @NameRaspDetail=:D1; SET @Idn=:D2; "
				" UPDATE bm_RaspDetail SET NameAxapta=@NameRaspDetail, ItemIdAxapta=RTRIM(LTRIM(@ItemId)),IdnAxapta=@Idn,fState=2, DateMod=GetDate(), IdMod=:D3 "
				" WHERE Idn=:D4";
	   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	   Qw->Parameters->Items[0]->Value=vsTmpItemId;
	   Qw->Parameters->Items[1]->Value=vsTmpItemName;
	   Qw->Parameters->Items[2]->Value=viTmpIdn;
	   Qw->Parameters->Items[3]->Value=PermisHdr.KeyUserStartProgramm;
	   Qw->Parameters->Items[4]->Value=viIdnSelect;
	   Qw->ExecSQL();
	  }
   else
	  {
   ////Если не нашли, просто переводим НЕ в состояни еобрабатываемое.
		vsSQLQw = " UPDATE bm_RaspDetail SET NameAxapta = NameRaspDetail, ItemIdAxapta=RTRIM(LTRIM(ItemId)), fState=1, DateMod=GetDate(), IdMod=:D0 "
				  " WHERE Idn=:D1";
	   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	   Qw->Parameters->Items[0]->Value=PermisHdr.KeyUserStartProgramm;
	   Qw->Parameters->Items[1]->Value=viIdnSelect;
	   Qw->ExecSQL();
	  }
	 }

	  TmNE_DO->Enabled=false; TmNE_DO->Enabled=true;
 }	
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrSincNE::RzToolButton8Click(TObject *Sender)
{
  Timer1->Enabled = true;
}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrSincNE::Timer1Timer(TObject *Sender)
{
  Timer1->Enabled = false;

  RzPanel300->Visible = true;
  RzPanel300->Repaint();

  //--- проверяем статус предыдущего переноса данных на GM в DBCopy.dbo.aa_DbCopy3
  vsSQLQw = "SELECT Progress, Status FROM DBCopy.dbo.aa_DbCopy3 WHERE Idn = 65;";
  Qw->Close();
  Qw->SQL->Clear();
  Qw->SQL->Add(vsSQLQw);
  Qw->Open();

  //--- если перенос ещё осуществляется или завершился неудачно (Progress = 0; Status = -1) - ничего не делаем
  if ((Qw->Fields->Fields[0]->AsInteger != 100) || (Qw->Fields->Fields[1]->AsInteger != 100))
	 {
	  ShowMessage("Процесс уже был запущен другим пользователем.\n"
				  "Можете повторить перенос данных через 5 минут.");
	  RzPanel300->Visible = false;
	  Qw->Close();
	  return;
	  }

  //--- если по условиям выше всё в порядке: лезем
  vsSQLQw = "SELECT Progress, Status FROM aa_DbCopy3 WHERE Idn = 2;";
  Qw2->Close();
  Qw2->SQL->Clear();
  Qw2->SQL->Add(vsSQLQw);

  ////////////////////////////////////////
  try
	 {
	   ClockThread = new TClockThread(true);
	  *ClockThread->begtime   = Time();
	   ClockThread->clockstop = 0;
	   ClockThread->clc       = Clock;
	   Clock->Caption         = "00:00:00.000";
	   Clock->Visible = true;
	   ClockThread->Resume();
	   }
		catch(...)
			 {}
  FrSincNE->Enabled=false;

  int PercentProgress, Status;

  ////////////////////////////////////////
 /*vsSQLQw = "declare @IdnJobFromaa_DbCopy3 int; "
"set @IdnJobFromaa_DbCopy3=:D0; "
" UPDATE DBCopy.dbo.aa_DbCopy3 set Progress=0 where Idn=@IdnJobFromaa_DbCopy3;";
  Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
  Qw->Parameters->Items[0]->DataType=ftInteger;
  Qw->Parameters->Items[0]->Value=65; //Код JOBа
  Qw->ExecSQL();
  */
  //MainForm->TrayIcon1MouseMove(Sender,ssShift,100,100);

  vsSQLQw = "DECLARE @IdnJobFromaa_DbCopy3 int; "
				"SET @IdnJobFromaa_DbCopy3 = :D0; "
			   "EXEC prDbCopy_WriteHistory @IdnJobFromaa_DbCopy3,'Принудительный старт'; "
			   "EXEC prDbCopy_StartJob @IdnJob=@IdnJobFromaa_DbCopy3, @ProgramName = :D1";
  QDM_JobConnect->Close();
  QDM_JobConnect->SQL->Clear();
  QDM_JobConnect->SQL->Add(vsSQLQw);
  QDM_JobConnect->Parameters->Items[0]->DataType = ftInteger;
  QDM_JobConnect->Parameters->Items[0]->Value    = 2;            //Код JOBа
  QDM_JobConnect->Parameters->Items[1]->DataType = ftString;
  QDM_JobConnect->Parameters->Items[1]->Value    = vPROGRAMNAME; //Наименование программы
  QDM_JobConnect->ExecSQL();

  RzProgressBar1->Percent = 0;
  for(;;)
	 {
	  Application->ProcessMessages();
	  /*Idglobal::*/Sleep(1000);
	  Qw2->Close();
	  Qw2->Open();
	  PercentProgress = Qw2->Fields->Fields[0]->AsInteger;
	           Status = Qw2->Fields->Fields[1]->AsInteger;
	  RzProgressBar2->Percent = PercentProgress;
	  if (PercentProgress == 100 && Status == 100)
		  break;
	  }

  ////////////////////////////////////////
  vsSQLQw = "DECLARE @IdnJobFromaa_DbCopy3 int; "
			"    SET @IdnJobFromaa_DbCopy3 = :D0; "
			"   EXEC DBCopy.dbo.prDbCopy_WriteHistory @IdnJobFromaa_DbCopy3,'Принудительный старт'; "
			"   EXEC DBCopy.dbo.prDbCopy_StartJob @IdnJob = @IdnJobFromaa_DbCopy3, @ProgramName = :D1";
  Qw->Close();
  Qw->SQL->Clear();
  Qw->SQL->Add(vsSQLQw);
  Qw->Parameters->Items[0]->DataType = ftInteger;
  Qw->Parameters->Items[0]->Value    = 65; //Код JOBа
  Qw->Parameters->Items[1]->DataType = ftString;
  Qw->Parameters->Items[1]->Value    = vPROGRAMNAME; //Наименование программы
  Qw->ExecSQL();
  ////////////////////

  vsSQLQw = "SELECT Progress, Status FROM DBCopy.dbo.aa_DbCopy3 WHERE Idn = 65; ";
  Qw->Close();
  Qw->SQL->Clear();
  Qw->SQL->Add(vsSQLQw);
  for(;;)
	 {
	  Application->ProcessMessages();
	  /*Idglobal::*/Sleep(1000);
	  Qw->Close();
	  Qw->Open();
	  PercentProgress = Qw->Fields->Fields[0]->AsInteger;
			   Status = Qw->Fields->Fields[1]->AsInteger;
	  RzProgressBar1->Percent = PercentProgress;
	  if (PercentProgress == 100 && Status == 100)
		  break;
	  }
  FrSincNE->Enabled = true;

  try
	 {
	  ClockThread->clockstop = 1;
	  ClockThread->Terminate();
	  Clock->Visible = false;
	  delete ClockThread;
	  }
	  catch(...)
		   {}

  RzPanel300->Visible = false;
  ShowMessage("Импорт номенклатур из Axapta завершен.");
}
//---------------------------------------------------------------------------


void __fastcall TFrSincNE::RzToolButton9Click(TObject *Sender)
{
 #ifdef  TFR
#undef  TFR
#undef  FR
#endif
#define TFR TFrLookSheet
#define FR  FrLookSheet

  FR=new TFR(Application);
  FR->ShowModal();
  FR->WindowState=wsMinimized;
  delete (FR);
}
//---------------------------------------------------------------------------
