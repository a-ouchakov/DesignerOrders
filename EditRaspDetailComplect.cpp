//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EditRaspDetailComplect.h"
#include "FindRaspDetailComplecIndex.h"
#include "BisinessMenedger.h"
#include "Init.h"
#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzEdit"
#pragma link "RzPanel"
#pragma link "RzSplit"
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
#pragma link "cxCalc"
#pragma link "cxTextEdit"
#pragma resource "*.dfm"
TFrEditRaspDetailComplect *FrEditRaspDetailComplect;
//---------------------------------------------------------------------------
__fastcall TFrEditRaspDetailComplect::TFrEditRaspDetailComplect(TComponent* Owner)
	: TForm(Owner)
{  AnsiString  vsSQLTmpTable;
   DateTimeToString(TempTableName,"yyyymmdd",Now());
   TempTableName="#TMP_"+TempTableName+"_"+"_"+IntToStr(PermisHdr.KeyUserStartProgramm)+"_"+IntToStr(PermisHdr.KeyConnect);// Уникальный код подключения; Код текущего пользователя

  vsSQLTmpTable= "IF(EXISTS (select * from tempdb..sysobjects where id = object_id('tempdb.."+TempTableName+"')))DROP TABLE "+TempTableName+";"
   "CREATE TABLE "+TempTableName+"(Idn int NULL, NameRaspDetail varchar(512) NULL, fType int NULL, fInsDouble int NULL);"; //fInsDouble флаг "Создать как"-1? "Переместить"-0
   QTmpTable->Close();
   QTmpTable->SQL->Clear();
   QTmpTable->SQL->Add(vsSQLTmpTable);
   QTmpTable->ExecSQL();

   viTmpIdnComplect=0;
   viTmpIdnIndex=0;
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetailComplect::btCloseClick(TObject *Sender)
{
  ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetailComplect::btInsRaspDetailClick(TObject *Sender)
{
   AnsiString  vsSQLINS_EditRaspDetailComplect, vsSQLQw; Currency vcTmpProcNDS, vcTmpfAdvMIN;
   int viTmpIdn;
	 if( FrBisniessMenedger->QListRaspIdIns->AsInteger!=PermisHdr.KeyUserStartProgramm &&
		 !MainForm->flEditAllRasp &&
		 !fPermission ) // 2013-06-27 Чернышов
	{ShowMessage("Сохранение невозможно. \n Только создавший запись может ее сохранить"); return; }

   if (Trim(meNameComplect->Text)=="")
	  {ShowMessage("Необходимо ввести наименование комплекта.");return;}
   if (viTmpIdnComplect>0) {	 try{Opts.Clear();locvalues[0]=Variant(viTmpIdnComplect);FrBisniessMenedger->QRaspDetail->Locate("Idn",locvalues,Opts);}catch(...){};   }
   Qw->Close();
   Qw->SQL->Clear();
   vsSQLQw = " SELECT Idn, ProcNDS,fAdvMIN "
			 " FROM bm_RaspDetail WHERE  fType=2 and Idn in (select Idn from "+TempTableName+" ) and  DateDel is null;";
   Qw->SQL->Add(vsSQLQw);
   Qw->Open();
   vcTmpProcNDS=Qw->Fields->Fields[1]->AsCurrency;
   vcTmpfAdvMIN=Qw->Fields->Fields[2]->AsCurrency;

   while(Qw->Eof==false)
	  {if (vcTmpProcNDS!=Qw->Fields->Fields[1]->AsCurrency)
		  {ShowMessage("У всех подписных индексов должен быть одинаковый %НДС. \n         Запись не может быть сохранена.");return;}
   Qw->Next();
	  }

   Qw->First();
   while(Qw->Eof==false)
	  {if (vcTmpfAdvMIN!=Qw->Fields->Fields[2]->AsCurrency)
	      {ShowMessage("У всех подписных индексов должен быть одинаковый минимальный период подписки. \n         Запись не может быть сохранена.");return;}
   Qw->Next();
	  }
   Qw->Close();


   QINS_EditRaspDetailComplect->Close();
   QINS_EditRaspDetailComplect->SQL->Clear();
   vsSQLINS_EditRaspDetailComplect=
				" DECLARE @idRasp int, @NameRaspDetail varchar(512), @IdInsMod int, @Idn int, @CostWithNDS money, @CostWithoutNDS money, @CostMINWithNDS money, @CostMINWithoutNDS money, @VOrder int "//, @ColPI int"
				" SET @idRasp=:D0"
				" SET @NameRaspDetail=:D1"
				" SET @IdInsMod=:D2"
				" SET @Idn=:D3"
				" SET @CostWithNDS=:D4"
				" SET @CostWithoutNDS=:D5"
				" SET @CostMINWithNDS=:D6"
				" SET @CostMINWithoutNDS=:D7"
				//" SET @ColPI = :D8 "
				" SELECT @VOrder=MAX(VOrder) FROM bm_RaspDetail WHERE idRasp=@idRasp AND DateDel is null; "
				" SET @VOrder=isnull(@VOrder,0)+1;  " ;

   if(fFlagEditInsert==0)  //Создание новой записи
	  {
	   vsSQLQw=" SELECT Idn FROM bm_RaspDetail WHERE LTRIM(RTRIM(NameRaspDetail))=LTRIM(RTRIM(:D0)) and DateDel is  null" ;
	   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	   Qw->Parameters->Items[0]->Value=meNameComplect->Text;
	   Qw->Open();
	   if(Qw->RecordCount>0)
	     {ShowMessage(AnsiString("Комплект с таким наименованием уже существует. \n Введите другое наименование")); return; }


	  vsSQLINS_EditRaspDetailComplect = vsSQLINS_EditRaspDetailComplect +
				" INSERT INTO bm_RaspDetail"
				" ( idRasp"
				", NameRaspDetail"
				", CostWithNDS"
				", CostWithoutNDS"
				", CostMINWithNDS"
				", CostMINWithoutNDS"
				", fType"
				", DateIns"
				", IdIns  "
				", VOrder) "
				//", ColPI)"
		" VALUES (@idRasp" //idRasp
				",@NameRaspDetail" //NameRaspDetail
				",@CostWithNDS"
				",@CostWithoutNDS"
				",@CostMINWithNDS"
				",@CostMINWithoutNDS"
				",1" //fType
				",GetDate()" //DateIns
				",@IdInsMod "
				",@VOrder); "
				//",@ColPI);"
		" declare @viTmp int; SET  @viTmp=SCOPE_IDENTITY(); "
		"  SELECT @viTmp";
	  }
   if(fFlagEditInsert==1)
	  {vsSQLINS_EditRaspDetailComplect = vsSQLINS_EditRaspDetailComplect+
				" UPDATE bm_RaspDetail "
				" SET NameRaspDetail = @NameRaspDetail "
				"	,CostWithNDS =@CostWithNDS "
				"	,CostWithoutNDS =@CostWithoutNDS "
				"	,CostMINWithNDS =@CostMINWithNDS "
				"	,CostMINWithoutNDS =@CostMINWithoutNDS "
				"	,DateMod = GetDate() "
				"	,IdMod =@IdInsMod "
				//"   ,ColPI = @ColPI "
				"	WHERE Idn= @Idn ;"
		" declare @viTmp int; SET  @viTmp=@Idn; "
		"  SELECT @viTmp" ;
	  }
   QINS_EditRaspDetailComplect->SQL->Add(vsSQLINS_EditRaspDetailComplect);
   QINS_EditRaspDetailComplect->Parameters->Items[0]->Value=viRaspIdn;
   QINS_EditRaspDetailComplect->Parameters->Items[1]->Value=meNameComplect->Text;
   QINS_EditRaspDetailComplect->Parameters->Items[2]->Value=PermisHdr.KeyUserStartProgramm;
   QINS_EditRaspDetailComplect->Parameters->Items[3]->Value=viIdnDetail;
   QINS_EditRaspDetailComplect->Parameters->Items[4]->Value=edCostWithNDS->Value;
   QINS_EditRaspDetailComplect->Parameters->Items[5]->Value=edCostWithoutNDS->Value;
   QINS_EditRaspDetailComplect->Parameters->Items[6]->Value=edCostMINWithNDS->Value;
   QINS_EditRaspDetailComplect->Parameters->Items[7]->Value=edCostMINWithoutNDS->Value;
   QINS_EditRaspDetailComplect->Open();
   viIdnDetail= QINS_EditRaspDetailComplectIdn->AsInteger;

   QINS_EditRaspDetailComplect->Close();QINS_EditRaspDetailComplect->SQL->Clear();
   //Очищаю список ПИ в комплекте
   vsSQLINS_EditRaspDetailComplect=
				" UPDATE bm_RaspDetail "
				" SET PIdn = NULL "
			   //	"	,DateMod = GetDate() "
			   //	"	,IdMod = :D0 "
				"	WHERE PIdn= :D0 ;";
   QINS_EditRaspDetailComplect->SQL->Add(vsSQLINS_EditRaspDetailComplect);
   //QINS_EditRaspDetailComplect->Parameters->Items[0]->Value=PermisHdr.KeyUserStartProgramm;
   QINS_EditRaspDetailComplect->Parameters->Items[0]->Value=viIdnDetail;
   QINS_EditRaspDetailComplect->ExecSQL();

   QINS_EditRaspDetailComplect->Close();QINS_EditRaspDetailComplect->SQL->Clear();
   //Завожу список ПИ в комплекте(перенос)
   vsSQLINS_EditRaspDetailComplect=
				" UPDATE bm_RaspDetail 	"
				" SET PIdn = :D0		"
				//",DateMod = GetDate()   "
				//",IdMod = :D1			"
				" WHERE Idn in(SELECT Idn FROM "+TempTableName+" WHERE fType=2 and fInsDouble =0);";
   QINS_EditRaspDetailComplect->SQL->Add(vsSQLINS_EditRaspDetailComplect);
   QINS_EditRaspDetailComplect->Parameters->Items[0]->Value=viIdnDetail;
  // QINS_EditRaspDetailComplect->Parameters->Items[1]->Value=PermisHdr.KeyUserStartProgramm;
   QINS_EditRaspDetailComplect->ExecSQL();
	  //Завожу список ПИ в комплекте(создать как)
/*   Qw->Close();
   Qw->SQL->Clear();
   vsSQLQw = "SELECT Idn FROM "+TempTableName+" WHERE fType=2 and fInsDouble =1";
   Qw->SQL->Add(vsSQLQw);
   Qw->Open();
   Qw->First();
   while(Qw->Eof==false)
   {
	   QINS_EditRaspDetailComplect->Close();QINS_EditRaspDetailComplect->SQL->Clear();
	   vsSQLINS_EditRaspDetailComplect=
							" INSERT INTO bm_RaspDetail(  "
							"  PIdn	                "
							", idRasp   	 		"
							", Id24TypeProduceIndex "
							", idAdvProduceClass  	"
							", NameRaspDetail     	"
							", NumbNE             	"
							", Year               	"
							", CostWithNDS        	"
							", CostWithoutNDS     	"
							", CostNDS            	"
							", ProcNDS           	"
							", Discount      	    "
							", ProcDiscount     	"
							", fAdv              	"
							", fAdvMIN              "
							", fType				"
							", DateMod      		"
							", DateIns      		"
							", IdIns                "
							", CostMINWithNDS       "
							", CostMINWithoutNDS)   "
							" SELECT TOP 1		  	"
							"  :D0	                "
							", idRasp   	 		"
							", Id24TypeProduceIndex "
							", idAdvProduceClass  	"
							", '_Копия.'+NameRaspDetail     	"
							", NumbNE             	"
							", Year               	"
							", CostWithNDS        	"
							", CostWithoutNDS     	"
							", CostNDS            	"
							", ProcNDS           	"
							", Discount      	    "
							", ProcDiscount     	"
							", fAdv              	"
							", fAdvMIN              "
							", fType				"
							", DateMod      		"
							", GetDate()      		"
							", :D1	                "
							", CostMINWithNDS       "
							", CostMINWithoutNDS    "
					" FROM bm_RaspDetail"
					" WHERE Idn =:D2;"
					" declare @viTmp int; SET  @viTmp=SCOPE_IDENTITY(); "
					 " SELECT @viTmp";
	   QINS_EditRaspDetailComplect->SQL->Add(vsSQLINS_EditRaspDetailComplect);
	   QINS_EditRaspDetailComplect->Parameters->Items[0]->Value=viIdnDetail;
	   QINS_EditRaspDetailComplect->Parameters->Items[1]->Value=PermisHdr.KeyUserStartProgramm;
	   QINS_EditRaspDetailComplect->Parameters->Items[2]->Value=Qw->Fields->Fields[0]->AsInteger;
	   QINS_EditRaspDetailComplect->Open();
	   viTmpIdn=QINS_EditRaspDetailComplect->Fields->Fields[0]->AsInteger;

	   QINS_EditRaspDetailComplect->Close();QINS_EditRaspDetailComplect->SQL->Clear();
		vsSQLINS_EditRaspDetailComplect=
							" INSERT INTO bm_RaspDetail(  	"
							"  PIdn	                "
							", idRasp   	 		"
							", Id24TypeProduceIndex "
							", idAdvProduceClass  	"
							", NameRaspDetail     	"
							", NumbNE             	"
							", Year               	"
							", CostWithNDS        	"
							", CostWithoutNDS     	"
							", CostNDS            	"
							", ProcNDS           	"
							", Discount      	    "
							", ProcDiscount     	"
							", fType				"
							", fAdv              	"
							", fAdvMIN              "
							", DateMod      		"
							", DateIns      		"
							", IdIns                "
							", CostMINWithNDS       "
							", CostMINWithoutNDS)   "
							" SELECT 		  		"
							"  :D0	                " //PIdn
							", idRasp  	 			"
							", Id24TypeProduceIndex "
							", idAdvProduceClass  	"
							", NameRaspDetail     	"
							", NumbNE             	"
							", Year               	"
							", CostWithNDS        	"
							", CostWithoutNDS     	"
							", CostNDS            	"
							", ProcNDS           	"
							", Discount      	    "
							", ProcDiscount     	"
							", fType				"
							", fAdv              	"
							", fAdvMIN              "
							", DateMod      		"
							", GetDate()      		" //DateIns
							", :D1                  " //IdIns
							", CostMINWithNDS       "
							", CostMINWithoutNDS    "
		 " FROM bm_RaspDetail"
		 " WHERE PIdn=:D2 AND DateDel is null;";

	 QINS_EditRaspDetailComplect->SQL->Add(vsSQLINS_EditRaspDetailComplect);
	 QINS_EditRaspDetailComplect->Parameters->Items[0]->Value=viTmpIdn;
	 QINS_EditRaspDetailComplect->Parameters->Items[1]->Value=PermisHdr.KeyUserStartProgramm;
	 QINS_EditRaspDetailComplect->Parameters->Items[2]->Value=Qw->Fields->Fields[0]->AsInteger;
	 QINS_EditRaspDetailComplect->ExecSQL();
	 Qw->Next();
   }//while(Qw->Eof==false)

  */
 if (fFlagEditInsert==0){ShowMessage(AnsiString("Запись успешно сохранена."));Close();}

 if (fFlagEditInsert==1){ShowMessage(AnsiString("Изменения успешно сохранены."));}

 ModalResult=mrOk;
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetailComplect::btInsEditRaspDetailComplecIndexClick(TObject *Sender)
{
int TmpMAXVOrder;
#ifdef  TFR
#undef  TFR
#undef  FR
#endif
#define TFR TFrFindRaspDetailComplecIndex
#define FR  FrFindRaspDetailComplecIndex

  FR=new TFR(Application);
  FR->ShowModal();
  FR->WindowState=wsMinimized;
	  if (FR->fOkButton)
		{
		  Qw->Close();
		  Qw->SQL->Clear();
		  vsSQLQw = "INSERT INTO "+TempTableName+ "( Idn, NameRaspDetail, fType, fInsDouble ) select Idn, NameRaspDetail, fType, 0 "
				    "from bm_RaspDetail where Idn ="+FR->QIndexIdn->AsInteger+" OR PIdn="+FR->QIndexIdn->AsInteger +" and DateDel is null;";
		  Qw->SQL->Add(vsSQLQw);
		  Qw->ExecSQL();
		}
	  if (FR->fDoubleButton)
		{
		///Находим MAX VOrder в расопряжении
			 vsSQLQw=	 "SELECT MAX(isnull(VOrder,0)) FROM  bm_RaspDetail WHERE fType in (1,2) AND DateDel is null AND IdRasp="+IntToStr(viRaspIdn);
			 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
			 Qw->Open();
		 TmpMAXVOrder=Qw->Fields->Fields[0]->AsInteger;
		 ///
		   vsSQLQw="INSERT INTO bm_RaspDetail(  "
						"  PIdn	                "
						", idRasp   	 		"
						", Id24TypeProduceIndex "
						", idAdvProduceClass  	"
						", NameRaspDetail     	"
						", NumbNE             	"
						", Year               	"
						", CostWithNDS        	"
						", CostWithoutNDS     	"
						", CostNDS            	"
						", ProcNDS           	"
						", Discount      	    "
						", ProcDiscount     	"
						", fAdv              	"
						", fAdvMIN              "
						", fType				"
						", DateMod      		"
						", DateIns      		"
						", IdIns                "
						", CostMINWithNDS       "
						", CostMINWithoutNDS	"
						", idAdvTNClass         "
						", CostBaseWithNDS      "
						", CostBudjetWithNDS    "
						", DateJobMIN           "
						", DateJobMAX	        "
						", KanalSale	        "
						", Id32NameUnit			"
						", Id32NameItemType		"
						", ItemId				"
						", fNoNDS               "
						", MergedCount	   		"
						", VOrder	    		"
						", AlterName            "
						", NoteName "
						", ColPI)               "
					  " SELECT TOP 1  		"
						"  PIdn	                "
						", idRasp   	 		"
						", Id24TypeProduceIndex "
						", idAdvProduceClass  	"
						", '_Копия.'+NameRaspDetail     	"
						", NumbNE             	"
						", Year               	"
						", CostWithNDS        	"
						", CostWithoutNDS     	"
						", CostNDS            	"
						", ProcNDS           	"
						", Discount      	    "
						", ProcDiscount     	"
						", fAdv              	"
						", fAdvMIN              "
						", fType				"
						", DateMod      		"
						", GetDate()      		"
						", :D0	                "
						", CostMINWithNDS       "
						", CostMINWithoutNDS    "
						", idAdvTNClass         "
						", CostBaseWithNDS      "
						", CostBudjetWithNDS    "
						", DateJobMIN           "
						", DateJobMAX	        "
						", KanalSale 	        "
						", Id32NameUnit			"
						", Id32NameItemType		"
						", ItemId				"
						", fNoNDS               "
						", MergedCount	   		"
						", :D1		    		"
						", '_Копия.'+AlterName            "
						", NoteName             "
						", ColPI                "
	 " FROM bm_RaspDetail"
	 " WHERE Idn=:D2"
	 " declare @viTmp int; SET  @viTmp=SCOPE_IDENTITY(); "
	 " SELECT @viTmp";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value=PermisHdr.KeyUserStartProgramm;
 Qw->Parameters->Items[1]->Value=TmpMAXVOrder+1;
 Qw->Parameters->Items[2]->Value=FR->QIndexIdn->AsInteger;
 Qw->Open();
int viTmpIdn=Qw->Fields->Fields[0]->AsInteger;
	vsSQLQw= 	 		"INSERT INTO bm_RaspDetail(  	"
						"  PIdn	                "
						", idRasp   	 		"
						", Id24TypeProduceIndex "
						", idAdvProduceClass  	"
						", NameRaspDetail     	"
						", NumbNE             	"
						", Year               	"
						", CostWithNDS        	"
						", CostWithoutNDS     	"
						", CostNDS            	"
						", ProcNDS           	"
						", Discount      	    "
						", ProcDiscount     	"
						", fType				"
						", fAdv              	"
						", fAdvMIN              "
						", DateMod      		"
						", DateIns      		"
						", IdIns                "
						", CostMINWithNDS       "
						", CostMINWithoutNDS    "
						", Id32NameUnit			"
						", Id32NameItemType		"
						", ItemId				"
						", IdnAxapta 			"
						", NameAxapta 			"
						", fNoNDS  	            "
						", MergedCount	   )	"
						" SELECT 		  		"
						"  :D0	                "
						", idRasp  	 			"
						", Id24TypeProduceIndex "
						", idAdvProduceClass  	"
						", NameRaspDetail     	"
						", NumbNE             	"
						", Year               	"
						", CostWithNDS        	"
						", CostWithoutNDS     	"
						", CostNDS            	"
						", ProcNDS           	"
						", Discount      	    "
						", ProcDiscount     	"
						", fType				"
						", fAdv              	"
						", fAdvMIN              "						
						", DateMod      		"
						", GetDate()      		"
						", :D1                  "
						", CostMINWithNDS       "
						", CostMINWithoutNDS    "
						", Id32NameUnit			"
						", Id32NameItemType		"
						", ItemId				"
						", IdnAxapta 			"
						", NameAxapta 			"
						", fNoNDS               "
						", MergedCount	   		"
	 " FROM bm_RaspDetail"
	 " WHERE PIdn=:D2 AND DateDel is null;";

 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value=viTmpIdn;
 Qw->Parameters->Items[1]->Value=PermisHdr.KeyUserStartProgramm;
 Qw->Parameters->Items[2]->Value=FR->QIndexIdn->AsInteger;
 Qw->ExecSQL();
 FrBisniessMenedger->QRaspDetail->Close();
 FrBisniessMenedger->QRaspDetail->Open();


		  Qw->Close();
		  Qw->SQL->Clear();
		  vsSQLQw= "INSERT INTO "+TempTableName+ "( Idn, NameRaspDetail, fType, fInsDouble ) select Idn, NameRaspDetail, fType, 0 from bm_RaspDetail where Idn ="+viTmpIdn+" OR PIdn="+viTmpIdn +" and DateDel is null;";
		  Qw->SQL->Add(vsSQLQw);
		  Qw->ExecSQL();
		}
  delete (FR);
  TmIndex->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetailComplect::FormCloseQuery(TObject *Sender,
	  bool &CanClose)
{
   QTmpTable->Close();	
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetailComplect::DSEditRaspDetailComplecIndexDataChange(
      TObject *Sender, TField *Field)
{
 TmRefresh->Enabled=true;	
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetailComplect::TmRefreshTimer(TObject *Sender)
{
   TmRefresh->Enabled=false;


		  QEditRaspDetailComplectNE->Close();
		  QEditRaspDetailComplectNE->SQL->Clear();
		  vsSQLEditRaspDetailComplectNE= "SELECT Idn, NameRaspDetail ,fType FROM bm_RaspDetail WHERE  fType=3 and PIdn=" +IntToStr(+QEditRaspDetailComplecIndexIdn->AsInteger)+" and  DateDel is null;";
		  QEditRaspDetailComplectNE->SQL->Add(vsSQLEditRaspDetailComplectNE);
		  QEditRaspDetailComplectNE->Open();

}
//---------------------------------------------------------------------------------------------------------------------------
void __fastcall TFrEditRaspDetailComplect::QEditRaspDetailComplecIndexfAdvGetText(TField *Sender, UnicodeString &Text, bool DisplayText)
{     // 0-годовой; 1-1п\г; 2-2п\г; 3-1 квартал;  4-2 квартал; 5-3 квартал; 6 -4 квартал; 7-раз в год.
 //	if ( VarIsNull(QEditRaspDetailComplecIndexfAdv->Value)) {Text="Не задан";}
  if (QEditRaspDetailComplecIndexfAdv->AsString == "")
	 {Text="Не задан";}
  else
	 {
	  switch (QEditRaspDetailComplecIndexfAdv->AsInteger)
			 {
			  case  0: Text = "годовой";
					   break;
			  case  1: Text = "1п\г";
					   break;
			  case  2: Text = "2п\г";
					   break;
			  case  3: Text = "1 квартал";
					   break;
			  case  4: Text = "2 квартал";
					   break;
			  case  5: Text = "3 квартал";
					   break;
			  case  6: Text = "4 квартал";
					   break;
			  case  7: Text = "раз в год";
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
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetailComplect::btDelEditRaspDetailComplecIndexClick(TObject *Sender)
{
		  Qw->Close();
		  Qw->SQL->Clear();
		  vsSQLQw= "DELETE FROM "+TempTableName+ " WHERE Idn="+ IntToStr(+QEditRaspDetailComplecIndexIdn->AsInteger);
		  Qw->SQL->Add(vsSQLQw);
		  Qw->ExecSQL();

  TmIndex->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetailComplect::TmIndexTimer(TObject *Sender)
{
  TmIndex->Enabled=false;
  QEditRaspDetailComplecIndex->Close();
  vsSQLEditRaspDetailComplecIndex="SELECT Idn, NameRaspDetail,fAdv,fAdvMIN, CostWithoutNDS, ProcNDS,CostWithNDS, ProcDiscount,fType, CostNDS, ColPI"
                                  "  FROM bm_RaspDetail WHERE  fType=2 and Idn in (select Idn from "+TempTableName+" ) and  DateDel is null;";
  QEditRaspDetailComplecIndex->SQL->Clear();
  QEditRaspDetailComplecIndex->SQL->Add(vsSQLEditRaspDetailComplecIndex);
  QEditRaspDetailComplecIndex->Open();

  String s1 = "SELECT Idn "
			  "  FROM bm_RaspDetail "
			  " WHERE idRasp = " + IntToStr(viRaspIdn) + " "
			  "   AND PIdn = " + IntToStr(viIdnDetail) + " "
			  "   AND fType = 2 "
			  "   AND DateDel IS NULL ";
  String s2 = "";
  QtmpQuer->Active = true;
  QtmpQuer->SQL->Clear();
  QtmpQuer->SQL->Add(s1);
  QtmpQuer->Open();
  QtmpQuer->First();
  while (!QtmpQuer->Eof)
		{
		 s2 += "," + IntToStr(QtmpQuerIdn->Value);
		 QtmpQuer->Next();
		 }
  s2 = s2.Delete(1,1);
  QtmpQuer->Active = false;

  Qw->Close();
  Qw->SQL->Clear();
  vsSQLQw=" SELECT SUM(CostWithoutNDS*ColPI),SUM(CostWithNDS*ColPI),SUM(CostNDS*ColPI),SUM(CostMINWithoutNDS*ColPI),SUM(CostMINWithNDS*ColPI)"
		" from bm_RaspDetail"
		" where fType=2 and Idn in (select Idn from "+TempTableName+" ) and  DateDel is null;";   // (old query)
  /*vsSQLQw = "SELECT SUM(CostWithoutNDS*ColPI), SUM(CostWithNDS*ColPI), SUM(CostNDS*ColPI), SUM(CostMINWithoutNDS*ColPI), SUM(CostMINWithNDS*ColPI) "
			"  FROM bm_RaspDetail"
			" WHERE idn IN (" + s2 + ")"; */     //(new query) запрос изменён 2014-04-07 by R.Perkatov
  Qw->SQL->Add(vsSQLQw);
  Qw->Open();

 edCostWithoutNDS->Value=Qw->Fields->Fields[0]->AsCurrency;
 edCostWithNDS->Value=Qw->Fields->Fields[1]->AsCurrency;
 edCostNDS->Value=Qw->Fields->Fields[2]->AsCurrency;
 edCostMINWithoutNDS->Value=Qw->Fields->Fields[3]->AsCurrency;
 edCostMINWithNDS->Value=Qw->Fields->Fields[4]->AsCurrency;
//	viTmpIdnIndex=FrBisniessMenedger->QRaspDetailIdn->AsInteger;
if(viTmpIdnIndex>0)
  { try{Opts.Clear();locvalues[0]=Variant(viTmpIdnIndex);QEditRaspDetailComplecIndex->Locate("Idn",locvalues,Opts);}catch(...){};}
  
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetailComplect::FormKeyDown(TObject *Sender,
      WORD &Key, TShiftState Shift)
{
   if(Key == VK_ESCAPE) Close();
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRaspDetailComplect::cxGridDBBandedTableView1CostWithNDSPropertiesChange(
	  TObject *Sender)
{
 //edCostWithoutNDS->Value=StrToCurr(cxGridDBBandedTableView1->DataController->Summary->FooterSummaryItems[0].);//     FooterSummaryItems[0];
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRaspDetailComplect::cxGridDBBandedTableView1DblClick(TObject *Sender)
{
/*
		  vsSQLQw= "SELECT fInsDouble FROM "+TempTableName+ " WHERE Idn =:D0;";
		  Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		  Qw->Parameters->Items[0]->Value=QEditRaspDetailComplecIndexIdn->AsInteger;
		  Qw->Open();
	 if (Qw->Fields->Fields[0]->AsInteger==1) {ShowMessage("Этот подписной индекс создан по методу 'Создать как' \n Для редактирования этого подписного индекса сперва сохраните комплект."); return; }
  */

	viTmpIdnComplect = FrBisniessMenedger->QRaspDetailIdn->AsInteger;
	if(QEditRaspDetailComplecIndexIdn->AsInteger>0)
	 { viTmpIdnIndex=QEditRaspDetailComplecIndexIdn->AsInteger;
	 try{Opts.Clear();locvalues[0]=Variant(QEditRaspDetailComplecIndexIdn->AsInteger);FrBisniessMenedger->QRaspDetail->Locate("Idn",locvalues,Opts);}catch(...){};
	  FrBisniessMenedger->fIdnDetailPI = 1;
	  FrBisniessMenedger->btUpdRaspDetailClick(Sender);
	  FrBisniessMenedger->fFlagEditInsert=1;
	  TmIndex->Enabled=true;


	 }
}
//---------------------------------------------------------------------------
void __fastcall TFrEditRaspDetailComplect::btInsRaspDetailIndexClick(TObject *Sender)
{
  //использую создание и редактирование новых ПИ из формы BisniessMenedger, Возможно следует переделать.
  FrBisniessMenedger->btInsRaspDetailIndexClick(Sender);
  Qw->Close();
  Qw->SQL->Clear();
  vsSQLQw = "INSERT INTO "+TempTableName+ "( Idn, NameRaspDetail, fType, fInsDouble ) select Idn, NameRaspDetail, fType, 0 "
				   "  from bm_RaspDetail where Idn ="+FrBisniessMenedger->QRaspDetailIdn->AsInteger+
				   " OR PIdn="+FrBisniessMenedger->QRaspDetailIdn->AsInteger +" and DateDel is null;";
  Qw->SQL->Add(vsSQLQw);
  Qw->ExecSQL();
		//  FrBisniessMenedger->fFlagEditInsert=1;
  viTmpIdnIndex = FrBisniessMenedger->QRaspDetailIdn->AsInteger;
  TmIndex->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TFrEditRaspDetailComplect::btCreateNameComplectClick(TObject *Sender)
{  //TmpLocate int; и предупредить!!!
  meNameComplect->Text="Комплект: ";
  QEditRaspDetailComplecIndex->First();
  while(QEditRaspDetailComplecIndex->Eof==false)
	{
  Qw->Close();
  Qw->SQL->Clear();
	 vsSQLQw= "SELECT A.iText"
	 " FROM spl_LbText512 A"
	 " LEFT JOIN all_AdvProduceClass C on C.idn = (SELECT idAdvProduceClass FROM bm_RaspDetail WHERE Idn=:D0 AND DateDel is NULL)" //@idAdvProduceClass
	 " WHERE A.Idn=C.id512Name ;" ;
  Qw->SQL->Add(vsSQLQw);
  Qw->Parameters->Items[0]->Value= QEditRaspDetailComplecIndexIdn->AsInteger;
  Qw->Open();
  meNameComplect->Text=meNameComplect->Text+Qw->Fields->Fields[0]->AsString;
  QEditRaspDetailComplecIndex->Next(); meNameComplect->Text=meNameComplect->Text+"+";
	}
 meNameComplect->Text=meNameComplect->Text.SubString(0,meNameComplect->Text.Length()-1)+".";


  Qw->Close();
  Qw->SQL->Clear();
	 vsSQLQw= "  SELECT A.fAdv ,COUNT(A.Idn),A.Year "
	   " FROM bm_RaspDetail A "
	   " WHERE A.Idn in (SELECT Idn FROM "+TempTableName+") AND A.DateDel is NULL AND fType=2"
	   " GROUP BY A.fAdv,A.Year  "  ;
  Qw->SQL->Add(vsSQLQw);
  Qw->Open();
  AnsiString  TmpText;
  if (Qw->Fields->Fields[1]->AsInteger==QEditRaspDetailComplecIndex->RecordCount)
	 { 	switch(Qw->Fields->Fields[0]->AsInteger)
	 {case 0:
		TmpText="годовая";
		break;
	  case 1:
		TmpText="на 1п/г";
		break;
	  case 2:
		TmpText="на 2п/г";
		break;
	  case 3:
		TmpText="на 1 квартал";
		break;
	  case 4:
		TmpText="на 2 квартал";
		break;
	  case 5:
		TmpText="на 3 квартал";
		break;
	  case 6:
		TmpText="на 4 квартал";
		break;
	  case 7:
		TmpText="раз в год";
		break;
	 }
	 meNameComplect->Text=meNameComplect->Text+" Подписка " + TmpText+" "+Qw->Fields->Fields[2]->AsString+"г." ;
	 }
 /*  //Приписка формата (320+152+64)
 QEditRaspDetailComplecIndex->First();
 meNameComplect->Text=meNameComplect->Text+" (";
  while(QEditRaspDetailComplecIndex->Eof==false)
	{
  Qw->Close();
  Qw->SQL->Clear();
	 vsSQLQw=  "  SELECT TOP 1 A.CostWithoutNDS  "
	   " FROM bm_RaspDetail A "
	   " WHERE A.PIdn =:D0 AND A.DateDel is NULL";
  Qw->SQL->Add(vsSQLQw);
  Qw->Parameters->Items[0]->Value= QEditRaspDetailComplecIndexIdn->AsInteger;
  Qw->Open();
  meNameComplect->Text=meNameComplect->Text+CurrToStr(Qw->Fields->Fields[0]->AsCurrency);
  QEditRaspDetailComplecIndex->Next();
   meNameComplect->Text=meNameComplect->Text+"+";
	}
  meNameComplect->Text=meNameComplect->Text.SubString(0,meNameComplect->Text.Length()-1)+")";

  */
}
//---------------------------------------------------------------------------




void __fastcall TFrEditRaspDetailComplect::FormShow(TObject *Sender)
{
   if (viIdnDetailPI>0)
	  { QEditRaspDetailComplecIndex->Open();
	   try{Opts.Clear();locvalues[0]=Variant(viIdnDetailPI);QEditRaspDetailComplecIndex->Locate("Idn",locvalues,Opts);}catch(...){};
	   cxGridDBBandedTableView1DblClick(Sender);
	  }	          
}
//---------------------------------------------------------------------------

