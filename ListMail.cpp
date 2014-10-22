//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Init.h"
#include "main.h"
#include "AccountPrint.h"
#include "BisinessMenedger.h"
//#include "winbase.h"



#include "ListMail.h"
#include "ListMailAddress.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzEdit"
#pragma link "RzPanel"
#pragma link "cxContainer"
#pragma link "cxControls"
#pragma link "cxEdit"
#pragma link "cxMemo"
#pragma link "cxTextEdit"
#pragma link "RzLabel"
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
#pragma link "RzSplit"
#pragma link "RzTabs"
#pragma link "cxButtonEdit"
#pragma link "RzShellDialogs"
#pragma link "frxClass"
#pragma link "frxExportPDF"
#pragma link "frxDBSet"
#pragma link "frxPreview"
#pragma link "cxCheckBox"
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
TFrListMail *FrListMail;
char flFrListMail;
//---------------------------------------------------------------------------
__fastcall TFrListMail::TFrListMail(TComponent* Owner)
	: TForm(Owner)
{
   
   DateTimeToString(TempTableName,"yyyymmdd",Now());
   TempTableName="#TMP_"+TempTableName+"_"+"_"+IntToStr(PermisHdr.KeyUserStartProgramm)+"_"+IntToStr(PermisHdr.KeyConnect);// ���������� ��� �����������; ��� �������� ������������

  vsSQLTmpTable= "IF(EXISTS (select * from tempdb..sysobjects where id = object_id('tempdb.."+TempTableName+"')))DROP TABLE "+TempTableName+";"
   "CREATE TABLE "+TempTableName+"( MailPathAddFile varchar(8000) NULL);";
   QTmpTable->Close();
   QTmpTable->SQL->Clear();
   QTmpTable->SQL->Add(vsSQLTmpTable);
   QTmpTable->ExecSQL();

   
}
//---------------------------------------------------------------------------
void __fastcall TFrListMail::FormClose(TObject *Sender, TCloseAction &Action)
{
 Action = caFree;flFrListMail=WINCLS;
}
//---------------------------------------------------------------------------

void __fastcall TFrListMail::RzToolButton2Click(TObject *Sender)
{
 Close();
}
//---------------------------------------------------------------------------


void __fastcall TFrListMail::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
   if(Key == VK_ESCAPE) Close();	
}
//---------------------------------------------------------------------------

void __fastcall TFrListMail::RzToolButton3Click(TObject *Sender)
{
#ifdef  TFR
#undef  TFR
#undef  FR

#endif
#define TFR TFrListMailAddress
#define FR  FrListMailAddress




  FR=new TFR(Application);
  if (pcSoglasovanieRassilka->ActivePage==tsSoglasovanie)
	 { FR->fType=0;
	   FR->cxGridTableViewEmplUser->Bands->Items[0]->Caption="���� ������������";
	   FR->RzPanel5->Visible=false;
	 }
  if (pcSoglasovanieRassilka->ActivePage==tsRassilka)
	 { FR->fType=1;
	   FR->cxGridTableViewEmplUser->Bands->Items[0]->Caption="��������� ��������";
	   FR->RzPanel5->Visible=false;
	 }
  if (pcSoglasovanieRassilka->ActivePage==tsCostComitet)
	 { FR->fType=3;
	   FR->cxGridTableViewEmplUser->Bands->Items[0]->Caption="������� �������";
	   FR->RzPanel5->Visible=true;
	 }
  FR->IdRasp=IdRasp;
  FR->ShowModal();
  FR->WindowState=wsMinimized;
  FR->ModalResult;

  delete (FR);

TmEmplUser->Enabled=true;

}
//---------------------------------------------------------------------------

void __fastcall TFrListMail::FormActivate(TObject *Sender)
{AnsiString NewFileName;
   if(MainForm->flInsertClient) RzPanel1->Visible=true; else RzPanel1->Visible=false;
 // TmEmplUser->Enabled=true;
  QEmplUserDol2->Close();
  QEmplUserDol2->Parameters->Items[0]->Value=IdRasp;
  QEmplUserDol2->Open();
  QEmplUserDol3->Close();
  QEmplUserDol3->Parameters->Items[0]->Value=IdRasp;
  QEmplUserDol3->Open();
  QEmplUserDolSheet->Close();
  QEmplUserDolSheet->Parameters->Items[0]->Value=IdRasp;
  QEmplUserDolSheet->Open();
  QCostComitet->Close();
  QCostComitet->Parameters->Items[0]->Value=IdRasp;
  QCostComitet->Open();

  QRasp->Close();
  QRasp->Parameters->Items[0]->Value=IdRasp;
  QRasp->Open();
  
  AnsiString TmpMyDate;
  if (QRaspTmpGetDate->AsString=="01.01.1900")TmpMyDate=""; else TmpMyDate=QRaspTmpGetDate->AsString;

if (Trim(QEmplUserDol2MailText->AsString)=="")
   {
	reContentRTF->Text="		  "+QRaspiText_1->AsString+"\n"+" 			"+ QRaspiText->AsString+"\n"+ TmpMyDate+"   	 	"+ QRaspNumbRaspName->AsString
						+"\n"+QRaspRaspNameRTF->AsString+"\n\n"+QRaspContentTargetRTF->AsString+"\n"
						+"   "+QRaspiText_2->AsString+"\n"+QRaspContentRTF->AsString+"\n\n"
						+QRaspDol->AsString+"			"+QRaspFamIO_1->AsString;
	}
	else   reContentRTF->Text=QEmplUserDol2MailText->AsString;



}
//---------------------------------------------------------------------------

void __fastcall TFrListMail::RzToolButton4Click(TObject *Sender)
{

	#ifdef  TFR
	#undef  TFR
	#undef  FR
	#undef  FL

	#endif
	#define TFR TFrAccountPrint
	#define FR  FrAccountPrint
	#define FL  flFrAccountPrint
	 int viIdn ;
	 int viFType;//��� ������
	 viIdn = IdRasp;// �������� Idn ������ ��� ������
	  if(pcSoglasovanieRassilka->ActivePage==tsSoglasovanie) viFType =30; else viFType=31;

	{
		switch(FL)
		{
		case WINCLS:   FR=new TFR(Application);FL=WINWRK;FR->Caption="������ ������������";
				 FR->OpenFormAccountPrint(viFType,viIdn,1);
				 FR->Show();break;
		case WINWRK:   if(FR->WindowState==wsMinimized){FR->WindowState=wsNormal;}
				 FR->Caption="���� ������������";FR->OpenFormAccountPrint(viFType,viIdn,1);
				 FR->Show();break;
		}
	}

}
//---------------------------------------------------------------------------




void __fastcall TFrListMail::TmEmplUserTimer(TObject *Sender)
{
  TmEmplUser->Enabled=false;
  QEmplUserDol2->Close();
  QEmplUserDol2->Parameters->Items[0]->Value=IdRasp;
  QEmplUserDol2->Open();
  QEmplUserDol3->Close();
  QEmplUserDol3->Parameters->Items[0]->Value=IdRasp;
  QEmplUserDol3->Open();
  QEmplUserDolSheet->Close();
  QEmplUserDolSheet->Parameters->Items[0]->Value=IdRasp;
  QEmplUserDolSheet->Open();
  QCostComitet->Close();
  QCostComitet->Parameters->Items[0]->Value=IdRasp;
  QCostComitet->Open();

}
//---------------------------------------------------------------------------



void __fastcall TFrListMail::RzToolButton1Click(TObject *Sender)
{   TMemoryStream *pms= new TMemoryStream();
	TStringList *LS =new TStringList();
	struct rMail rMail;
	AnsiString NewFileName;
	int i,viTmpMINfTurn;
	AnsiString vsQRaspRaspNameRTF;
	//���� ������������ ��� �����������, �� �� ���������, ���� �� ������ �� �� �������������� ����.
 /*			vsSQLQw="SELECT Id24NameStatus FROM bm_Rasp   "
					" WHERE Idn=:D0 ; ";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value= IdRasp;
 Qw->Open();
 if((Qw->Fields->Fields[0]->AsInteger==5448350)&&(!MainForm->flEditAllRasp))  	// Id24NameStatus=5448350//�� �����������
 {ShowMessage(AnsiString("��� ����������� ��� ���������� �� �����������")); return; }
 */ //������ �� Enable ������ ��������
	///





 if (pcSoglasovanieRassilka->ActivePage==tsSoglasovanie)
 {      ///�������� �� ���������� "_�����" � "����� ��������� ������"
	 StartProcedure:
	  vsSQLQw =   " SELECT TOP 1 Idn  FROM bm_RaspDetail "
				  " WHERE idRasp=:D0 AND DateDel is NULL "
				  " AND  LTRIM(RTRIM(NameRaspDetail)) LIKE '%_�����%'; ";    //? �����_
	   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	   Qw->Parameters->Items[0]->Value=IdRasp;
	   Qw->Open();
	  if(Qw->RecordCount>0)// { ShowMessage("�������� ����������. \n � ��������� ��������� �������� ������������ ����� '_�����'"); return;}
		 {
		if (MessageDlg("�������� ����������. \n � ���������  ������������ ����� '_�����'. �������������?",mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)!=mrYes)
		  {return;}else
			 {
			  {try{Opts.Clear();locvalues[0]=Variant(Qw->Fields->Fields[0]->AsInteger);FrBisniessMenedger->QRaspDetail->Locate("Idn",locvalues,Opts);}catch(...){};};
			  FrBisniessMenedger->btUpdRaspDetailClick(Sender);
			  goto StartProcedure;
			 }
         }



	  vsSQLQw =   " SELECT TOP 1 Idn, isnull(PIdn,0)  FROM bm_RaspDetail "
				  " WHERE idRasp=:D0 AND DateDel is NULL "
				  " AND LTRIM(RTRIM(NameRaspDetail))='����� ��������� ������' ; ";
	   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	   Qw->Parameters->Items[0]->Value=IdRasp;
	   Qw->Open();
	  if(Qw->RecordCount>0)
		 {
			if (MessageDlg("�������� ����������. \n � ��������� ��������� �������� ������������ '����� ��������� ������'. �������?",mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)!=mrYes)
			  {	if (MessageDlg(" �������������  '����� ��������� ������'?",mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)!=mrYes)
				   {return;}else
				{
					  {try{Opts.Clear();locvalues[0]=Variant(Qw->Fields->Fields[0]->AsInteger);FrBisniessMenedger->QRaspDetail->Locate("Idn",locvalues,Opts);}catch(...){};};
					  FrBisniessMenedger->btUpdRaspDetailClick(Sender);
					  goto StartProcedure;
			    }


			  }//������� ������� � ��������������.
			else
			  {   int TmpIdnPIForDel,TmpIdnComplForDel;
				  TmpIdnComplForDel=0;
				  TmpIdnPIForDel=Qw->Fields->Fields[0]->AsInteger;
				  TmpIdnComplForDel=Qw->Fields->Fields[1]->AsInteger;

				  vsSQLQw = " DECLARE @Idn int; SET @Idn=:D0; "
				  " DELETE FROM bm_RaspDetail "
				  " WHERE Idn=@Idn OR PIdn=@Idn; ";
				   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
				   Qw->Parameters->Items[0]->Value=TmpIdnPIForDel;
				   Qw->ExecSQL();

				   if(TmpIdnComplForDel>0)
					  {
						  vsSQLQw=	" DECLARE  @IdInsMod int, @Idn int, @CostWithNDS money, @CostWithoutNDS money, @CostMINWithNDS money, @CostMINWithoutNDS money"
						  " SET @Idn=:D0"
						  " SET @IdInsMod=:D1"
						  " SELECT  @CostWithoutNDS=SUM(CostWithoutNDS),@CostWithNDS=SUM(CostWithNDS),@CostMINWithoutNDS=SUM(CostMINWithoutNDS),@CostMINWithNDS=SUM(CostMINWithNDS)"
						  " FROM bm_RaspDetail"
						  " WHERE fType=2 AND PIdn =@Idn and  DateDel is null;"
							" UPDATE bm_RaspDetail SET"
							"	 CostWithNDS =@CostWithNDS "
							"	,CostWithoutNDS =@CostWithoutNDS "
							"	,CostMINWithNDS =@CostMINWithNDS "
							"	,CostMINWithoutNDS =@CostMINWithoutNDS "
							"	,DateMod = GetDate() "
							"	,IdMod =@IdInsMod "
							"	WHERE Idn= @Idn ;" ;
						  Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
						  Qw->Parameters->Items[0]->Value=TmpIdnComplForDel;
						  Qw->Parameters->Items[1]->Value=PermisHdr.KeyUserStartProgramm;;
						  Qw->ExecSQL();
					   }
				   ShowMessage("��������� ������ � ������������� '����� ��������� ������' ������.\n �������� ���������� ��������. ");
				   goto StartProcedure;
//				   return;
              }
		 }

//�������� ��� ���� ������ �� ���������� � ����.

	 vsSQLQw =   " SELECT top 1 Idn FROM bm_RaspDetail WHERE IdRasp=:D0 AND DateDel IS NULL and fType=2 and CompositionOfPI=0 ";
				   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
				   Qw->Parameters->Items[0]->Value=IdRasp;
				   Qw->Open();
 if((Qw->RecordCount>0)&&((QListRaspVidRasp->AsInteger==4742151)||(QListRaspVidRasp->AsInteger==4742153)))
   {ShowMessage(AnsiString("� ������������ �� � ���� ��������� �������� ������ \"C����� ��\".\n ��� ���������� ��������� ��� ����."));
	return;
   }

///�������� ������� ����� Axapta

		 vsSQLQw =   " SELECT Idn FROM bm_RaspDetail WHERE IdRasp=:D0 AND DateDel IS NULL AND fType=3 AND (ItemIdAxapta ='' OR ItemIdAxapta is NULL OR IdnAxapta is NULL)";
				   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
				   Qw->Parameters->Items[0]->Value=IdRasp;
				   Qw->Open();

		 if(Qw->RecordCount>0){ShowMessage(AnsiString("�� � ���� ����������� ����������� ���� Axapta. �������� ������������ �� ����������� ����������.")); return;}

///




//�������� ������������� ���� ����� ������������ � �����������
   QListRasp->Close();
   QListRasp->Parameters->Items[0]->Value=IdRasp;
   QListRasp->Open();




 //�������� ������� �������� ��������.

	 vsSQLQw =   " SELECT Idn FROM bm_RaspDetail WHERE IdRasp=:D0 AND DateDel IS NULL ";
				   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
				   Qw->Parameters->Items[0]->Value=IdRasp;
				   Qw->Open();

				   //if(QListRasp->Active==false){QListRasp->Open(); }
				   //int ttt= QListRaspVidRasp->AsInteger;
				  // int yyy=Qw->RecordCount;
 if((Qw->RecordCount>0)&&((QListRaspVidRasp->AsInteger==4742151)||(QListRaspVidRasp->AsInteger==4742153)))
   {
	 vsSQLQw =   " SELECT Idn FROM bm_ListMail WHERE IdRasp=:D0 AND DateDel IS NULL AND fType=3/*������� �������*/ ";
				   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
				   Qw->Parameters->Items[0]->Value=IdRasp;
				   Qw->Open();

	 if(Qw->RecordCount==0){ShowMessage(AnsiString("�� �������� ������ �������� ��������. �������� ������������ �� ����������� ����������.")); return;}
	}

 //

/*
//�������� ������������� ���� ����� ������������ � �����������
   QListRasp->Close();
   QListRasp->Parameters->Items[0]->Value=IdRasp;
   QListRasp->Open();
 */
   QListComments->Close();
   QListComments->Parameters->Items[0]->Value=IdRasp;
   QListComments->Open();

   fAllEntering=true;//���� �������� ������������� ���� �����
   //�������� ������������
	   if((QListRaspId256TypeRasp->AsInteger)==0)        fAllEntering=false;           //��� ������������
	   // ���� ������ if(Trim(QListRaspId24City->AsInteger)==0) fAllEntering=false;    //�����
	   if(Trim(QListRaspRaspNameRTF->AsString)=="")      fAllEntering=false;           //������������ ������������
	   if(Trim(QListRaspContentTargetRTF->AsString)=="") fAllEntering=false;           // ���� ������������
	   if(Trim(QListRaspId24NameStatuser->AsString)=="") fAllEntering=false;           // (���������:, ����������: � ������)
	   if(Trim(QListRaspContentRTF->AsString)=="")       fAllEntering=false;           // ���������� ������������
	   if((QListRaspEmplDol->AsInteger)==0)              fAllEntering=false;           //��������� �������������
	   if((QListRaspIdEmplUsers->AsInteger)==0)          fAllEntering=false;           // ��� �������������
/*   ///�������� �� ���������� "_�����" � "����� ��������� ������"
	  vsSQLQw =   " SELECT  Idn  FROM bm_RaspDetail "
				  " WHERE idRasp=:D0 AND DateDel is NULL "
				  " AND ((LTRIM(RTRIM(NameRaspDetail))='����� ��������� ������') OR (LTRIM(RTRIM(NameRaspDetail)) LIKE '%_�����%')); ";
	   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
	   Qw->Parameters->Items[0]->Value=IdRasp;
	   Qw->Open();
	  if(Qw->RecordCount>0) { ShowMessage("�������� ����������. \n � ��������� ��������� �������� ������������ '����� ��������� ������' ��� '_�����'"); return;}


   */
  ///
	  QAddFilesEXEL->Close();
	  QAddFilesEXEL->Parameters->Items[0]->Value=IdRasp;
	  QAddFilesEXEL->Open();

	 if ((QListRaspVidRasp->AsInteger==4742152/*"������������ � ������� ������ ��������" ����� ������ ���������� ���������� ��� ������� ����*/)&&(QAddFilesEXEL->RecordCount<1))//�������
	  {
	   ShowMessage("�������� ����������. \n ���������� ������� ������������� ���� EXEL"); return;//������� �������������� �����

	  }
   ///

     ///
	  QAddFilesDOC->Close();
	  QAddFilesDOC->Parameters->Items[0]->Value=IdRasp;
	  QAddFilesDOC->Open();

	 if ((QListRaspVidRasp->AsInteger==4742440/*"����������� ������� �� ��������� � ����� ���������� � ������������� ����������� ���������" ����� ������ ���������� ���������� ��� ������� ����*/)&&(QAddFilesDOC->RecordCount<1))//�������
	  {
	   ShowMessage("�������� ����������. \n ���������� ������� ������������� ���� DOC"); return;//������� �������������� �����

	  }
   ///

   //�������� ������������
   if ((QListRaspVidRasp->AsInteger==4742151)||((QListRaspVidRasp->AsInteger==4742153)))//����
	  {
	   //�������� �� ������������  ��� ����. 1-�������;2-���������;3-�� �������. �����������;4-�� �������. ���������
	   if ((QListCommentsTypeCost->AsInteger==3)||((QListCommentsTypeCost->AsInteger==4)))
		  {
		   if(((QListCommentsId256NameDiscount->AsInteger)==0)&&(QListCommentsTypeCost->AsInteger==3)) fAllEntering=false;  //��� �� Lib256 � ����� ������
		   if(((QListCommentsId256NameAction ->AsInteger)==0)&&(QListCommentsTypeCost->AsInteger==4)) fAllEntering=false;  //��� �� Lib256 � ����� ������
		   if((QListCommentsId256CostDiscount->AsInteger)==0) fAllEntering=false;  //��� �� Lib256 � ��������� ������� ������
		   if((QListCommentsDateRealization->AsDateTime)==TDateTime(1900, 01, 01)) fAllEntering=false;  //���� ����������
		   if(Trim(QListCommentsPrognozEffects->AsString)=="") fAllEntering=false; //������� �������������
		   if(Trim(QListCommentsGrantingConditions->AsString)=="") fAllEntering=false; // ������� ������
		//��������� CheckBox'�
		  //	vsSQLQw = " SELECT (isnull(A.id256TextActionPurpose,0)+isnull(A.id256TextGroupClients,0)+isnull(A.id256TextAdvancementChannel,0))id256Text,A.TypeFi�ld "
		  vsSQLQw =   " SELECT  DISTINCT A.TypeFi�ld "
					  " FROM bm_CheckLists A "
					  "	LEFT JOIN bm_CommentsCheckLists B ON B.IdCheckLists=A.Idn "
					  "	LEFT JOIN bm_Comments C ON C.Idn= B.IdComments "
					  " WHERE C.idRasp=:D0 AND B.DateDel is NULL ";
		   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
		   Qw->Parameters->Items[0]->Value=IdRasp;
		   Qw->Open();
		   if (Qw->RecordCount<3) fAllEntering=false; //���� ��������� ������ 3 CheckBox'��
		   Qw->Close();

		///
		   if (QListCommentsTypeCost->AsInteger==4)  //��������� ������������� �� �������� � ������� �������������� ������ � � ��������� ��������
			  {										// ��� ���� ������������ 4-�� �������. ���������-
			  bool fProduce=true;//���� ������������ ���������. true-�������������

			  vsSQLQw =   " SELECT  DISTINCT IdProduce "
						  " FROM bm_PredictedDebit  "
						  " WHERE idRasp=:D0 AND DateDel is NULL ";
			   Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
			   Qw->Parameters->Items[0]->Value=IdRasp;
			   Qw->Open();
			  vsSQLQw =   " SELECT  DISTINCT idAdvProduceClass "
						  " FROM bm_RaspDetail  "
						  " WHERE idRasp=:D0 AND DateDel is NULL ";
			   Qw2->Close();Qw2->SQL->Clear();Qw2->SQL->Add(vsSQLQw);
			   Qw2->Parameters->Items[0]->Value=IdRasp;
			   Qw2->Open();

			   if(Qw->RecordCount!=Qw2->RecordCount) fProduce=false;
			   while(Qw->Eof==false)
			   {
			   vsSQLQw =  " SELECT  TOP 1 idAdvProduceClass "
						  " FROM bm_RaspDetail  "
						  " WHERE idRasp=:D0 AND idAdvProduceClass=:D1 AND DateDel is NULL ";
			   Qw2->Close();Qw2->SQL->Clear();Qw2->SQL->Add(vsSQLQw);
			   Qw2->Parameters->Items[0]->Value=IdRasp;
			   Qw2->Parameters->Items[1]->Value=Qw->Fields->Fields[0]->AsInteger;
			   Qw2->Open();
			   if(Qw2->RecordCount>0) fProduce=false;
			   Qw->Next();}

			   Qw->Close();
			   Qw2->Close();


			  if (!fProduce) { if(MessageDlg("�������� � ��������� �������� � � �������������� �������� �� �������������. ���������� ��������?",mtInformation,TMsgDlgButtons()<<mbYes<<mbNo,0)!=mrYes) {Abort();return;}}
			  }//if (QListCommentsTypeCost->AsInteger==4)
		  }//if ((QListCommentsTypeCost->AsInteger==3)||((QListCommentsTypeCost->AsInteger==4)))
	   ///
	  }//if (QListRaspVidRasp->AsInteger==0)//����
   ///


///
  if (!fAllEntering)
	 {
	  ShowMessage(AnsiString("�� ��� ���� ���������. �������� ������������ �� ����������� ����������."));

	  //--- ������ ����� ������������� ������
	  if ((QListRaspId256TypeRasp->AsInteger)==0)
		 {ShowMessage("�� ������ ��� ������������...");}
	  if (Trim(QListRaspRaspNameRTF->AsString)=="")
		 {ShowMessage("�� ������� ������������ ������������...");}
	  if (Trim(QListRaspContentTargetRTF->AsString)=="")
		 {ShowMessage("�� ������� ���� ������������...");}
	  if (Trim(QListRaspId24NameStatuser->AsString)=="")
		 {ShowMessage("�� ������� ''���������:'', ''����������:'' � ������...");}
	  if (Trim(QListRaspContentRTF->AsString)=="")
		 {ShowMessage("�� ������� ''���������� ������������''...");}
	  if ((QListRaspEmplDol->AsInteger)==0)
		 {ShowMessage("�� ������� ''��������� �������������''...");}
	  if ((QListRaspIdEmplUsers->AsInteger)==0)
		 {ShowMessage("�� ������� ''��� �������������''...");}

	  //--- ������ ����� ������������� ������
	  if (((QListCommentsId256NameDiscount->AsInteger)==0)&&(QListCommentsTypeCost->AsInteger==3))
		 {ShowMessage("�� ������ ''��� �� Lib256 � ����� ������''...");}
	  if (((QListCommentsId256NameAction ->AsInteger)==0)&&(QListCommentsTypeCost->AsInteger==4))
		 {ShowMessage("�� ������ ''��� �� Lib256 � ����� ������''...");}
	  if ((QListCommentsId256CostDiscount->AsInteger)==0)
		 {ShowMessage("�� ������ ''��� �� Lib256 � ��������� ������� ������''...");}
	  if ((QListCommentsDateRealization->AsDateTime)==TDateTime(1900, 01, 01))
		 {ShowMessage("�� ������ ''���� ����������''...");}
	  if (Trim(QListCommentsPrognozEffects->AsString)=="")
		 {ShowMessage("�� ������ ''������� �������������''...");}
	  if (Trim(QListCommentsGrantingConditions->AsString)=="")
		 {ShowMessage("�� ������� ''������� ������''...");}
	  //����� ������ - �������

	  return;
	  }
///�������� ��������� ����
	QNE->Close();
	QNE->Parameters->Items[0]->Value=IdRasp;
    QNE->Open();
	QNE->First();
	while(QNE->Eof==false)
	   {if((((QNECostWithNDS->AsCurrency*100)%1)>0)||(((QNECostWithoutNDS->AsCurrency*100)%1)>0))
	   {ShowMessage("���������� ����������. \n ������ ��������� �������� ��� � ��� � ��� ��� ��� �������������� ������ � ����� ��������."); return; }
	   QNE->Next();}
///////////////////////////


   /////������ ������ ������ � ��
   vsSQLQw = "DECLARE @IdRasp int, @PermisHdr int;"//, @MailPathAddFiles text, @MailText text ; " //������ ��������� ���������� ���� text
				" SET @IdRasp =:D0; SET @PermisHdr =:D1;"// SET @MailPathAddFiles =:D2; SET @MailText =:D3; "
				" UPDATE bm_ListMail SET MailPathAddFiles=:D2, MailText=:D3, DateMod=GetDate(), IdMod= @PermisHdr WHERE IdRasp=@IdRasp ";
   Qw->Close();
   Qw->SQL->Clear();
   Qw->SQL->Add(vsSQLQw);
   Qw->Parameters->Items[0]->Value = IdRasp;
   Qw->Parameters->Items[1]->Value = PermisHdr.KeyUserStartProgramm;

	LS->Clear();        
	pms->Position=0;
	LS->SaveToStream(pms);
	pms->Position=0;
	Qw->Parameters->Items[2]->LoadFromStream(pms,ftMemo);
	pms->Clear();
	pms->Position=0;
	reContentRTF->Lines->SaveToStream(pms);
	pms->Position=0;
	Qw->Parameters->Items[3]->LoadFromStream(pms,ftMemo);
	pms->Clear();
	Qw->ExecSQL();
	Qw->Close();
    LS->Clear();

  RzPanel300->Visible=true;

  rMail=MainForm->CreateMail(IdRasp,1);
 
  ///// ��������� ������������ ����� � ����������� �������� ������� fTyrn, �� �� 0
  vsSQLQw=" SELECT MIN(fTurn) FROM bm_ListMail"
			" WHERE  DateDel is null"
			" AND IdRasp=:D0"
			" AND ( fType=0 OR fType=2) "
			" AND fTurn>0"
			" AND (fResault=0 OR fResault is NULL )";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value= IdRasp;
 Qw->Open();
 viTmpMINfTurn=Qw->Fields->Fields[0]->AsInteger;
	QEmplUserDol2->First();
	while((QEmplUserDol2->Eof==false))
		 {
		  if ((Trim(QEmplUserDol2Mail->AsString) != "") && (QEmplUserDol2fTurn->AsInteger == viTmpMINfTurn))
			 {
			  rMail.ResiveName        = QEmplUserDol2FamIO->AsString;
			  rMail.ResiveMailAddress = QEmplUserDol2Mail->AsString;
			  vsSQLQw = "UPDATE bm_ListMail SET DateSheet = GetDate() "
						"WHERE Idn = :D0;";
			  Qw->Close();
			  Qw->SQL->Clear();
			  Qw->SQL->Add(vsSQLQw);
			  Qw->Parameters->Items[0]->Value = QEmplUserDol2Idn->AsString;
			  Qw->ExecSQL();
			  MainForm->SendEmail(&rMail);
			  }
		  QEmplUserDol2->Next();
		  }


  //��������� ���������� ������������
  QEmplUserDol3->First();
	while((QEmplUserDol3->Eof==false))
	  {if ((Trim(QEmplUserDol3Mail->AsString)!="")&&(QEmplUserDol3fTurn->AsInteger==viTmpMINfTurn))
		 { rMail.ResiveName=QEmplUserDol3FamIO->AsString;
		   rMail.ResiveMailAddress=QEmplUserDol3Mail->AsString;

		   MainForm->SendEmail(&rMail);
		 }
   QEmplUserDol3->Next();
	  }
 ////
  ///���������� ������������ ���������-� ��������-
			vsSQLQw="UPDATE bm_Rasp  SET "
					"  Id24NameStatus=5448350"//�� �����������
					" ,DateSheet= GetDate() "
					" ,IdSheet=:D0  "
					" WHERE Idn=:D1 ; ";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value= PermisHdr.KeyUserStartProgramm;
 Qw->Parameters->Items[1]->Value= IdRasp;
 Qw->ExecSQL();
///

 RzPanel300->Visible=false;

 ShowMessage("�������� ����� �� ����� ������������ ������.");
}// if (pcSoglasovanieRassilka->ActivePage=tsSoglasovanie)
 if (pcSoglasovanieRassilka->ActivePage==tsRassilka)
 { MainForm->Sheet(IdRasp);
    
 }
}
//---------------------------------------------------------------------------

void __fastcall TFrListMail::cxGridDBBandedTableView2Column2PropertiesButtonClick(
      TObject *Sender, int AButtonIndex)
{
RzBitBtn3Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TFrListMail::RzBitBtn3Click(TObject *Sender)
{
/*  RzOpenDialog1->Execute();
   vsSQLTmpTable= "INSERT INTO "+TempTableName+"(MailPathAddFile) VALUES('"+RzOpenDialog1->FileName+"') ;";
   QTmpTable->Close();
   QTmpTable->SQL->Clear();
   QTmpTable->SQL->Add(vsSQLTmpTable);
   QTmpTable->ExecSQL();
   QMailPathAddFiles->Close();
   QMailPathAddFiles->SQL->Clear();
   QMailPathAddFiles->SQL->Add("SELECT MailPathAddFile FROM "+TempTableName+";");
   QMailPathAddFiles->Open();
  */
}
//---------------------------------------------------------------------------

void __fastcall TFrListMail::frxRaspAlterGetValue(const UnicodeString VarName,
      Variant &Value)
{
 if(VarName=="sYear")
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
   if(vsTmpYear=="1900") Value= "__________ ����";
   else
	  {
		vsTmpDay=QRaspDateRasp->AsDateTime.FormatString("d");
		vsTmpMouth=QRaspDateRasp->AsDateTime.FormatString("m");

	   switch (StrToInt(vsTmpMouth))
		{
		case 1: vsTmpMouth = "������";break;
		case 2: vsTmpMouth = "�������";break;
		case 3: vsTmpMouth = "�����";break;
		case 4: vsTmpMouth = "������";break;
		case 5: vsTmpMouth = "���";break;
		case 6: vsTmpMouth = "����";break;
		case 7: vsTmpMouth = "����";break;
		case 8: vsTmpMouth = "�������";break;
		case 9: vsTmpMouth = "��������";break;
		case 10: vsTmpMouth = "�������";break;
		case 11: vsTmpMouth = "������";break;
		case 12: vsTmpMouth = "�������";break;
		}

	   Value=vsTmpDay+" "+vsTmpMouth+" "+vsTmpYear+" ����";
	  }
 }
   if(VarName=="TextAdv")
  {    switch (QRaspDetailfAdv->AsInteger)
   {
case 0:
		Value="�������";
		break;
	  case 1:
		Value="1�\�";
		break;
	  case 2:
		Value="2�\�";
		break;
	  case 3:
		Value="1 �������";
		break;
	  case 4:
		Value="2 �������";
		break;
	  case 5:
		Value="3 �������";
		break;
	  case 6:
		Value="4 �������";
		break;
	  case 7:
		Value="��� � ���";
		break;
   }

  }
  if(VarName=="DateRasp")
	{ AnsiString vsTmpDay, vsTmpMouth, vsTmpYear;

	  vsTmpYear=QRaspDateRasp->AsDateTime.FormatString("yyyy");
	  if(vsTmpYear=="1900") Value= "__________ �.";
	  else  Value=QRaspDateRasp->AsDateTime.FormatString("dd.mm.yyyy�.");
	 }
  if(VarName=="NumbRasp")
	{
	 if(Trim(QRaspNumbRaspName->AsString)=="") Value= "__________ ";
	  else  Value=QRaspNumbRaspName->AsString;
	}	
}
//---------------------------------------------------------------------------






void __fastcall TFrListMail::RzToolButton5Click(TObject *Sender)
{
	#ifdef  TFR
	#undef  TFR
	#undef  FR
	#undef  FL

	#endif
	#define TFR TFrAccountPrint
	#define FR  FrAccountPrint
	#define FL  flFrAccountPrint

	{
		switch(FL)
		{
		case WINCLS:   FR=new TFR(Application);FL=WINWRK;FR->Caption="������ ������������";
				 FR->OpenFormAccountPrint(41,IdRasp,1);
				 FR->Show();break;
		case WINWRK:   if(FR->WindowState==wsMinimized){FR->WindowState=wsNormal;}
				 FR->Caption="���� ������������";FR->OpenFormAccountPrint(41,IdRasp,1);
				 FR->Show();break;
		}
	}
 
}
//---------------------------------------------------------------------------



void __fastcall TFrListMail::pcSoglasovanieRassilkaChange(TObject *Sender)
{ if (pcSoglasovanieRassilka->ActivePage==tsSoglasovanie) {RzToolButton1->Enabled=true;RzToolButton4->Enabled=true; }
  if (pcSoglasovanieRassilka->ActivePage==tsRassilka)
	 { RzToolButton4->Enabled=true;
	   if(MainForm->flSheet) {RzToolButton1->Enabled=true;RzToolButton4->Enabled=true;} else	  {RzToolButton1->Enabled=false;}
	 }
   if (pcSoglasovanieRassilka->ActivePage==tsCostComitet) {RzToolButton1->Enabled=false; RzToolButton4->Enabled=false; }

}
//---------------------------------------------------------------------------

void __fastcall TFrListMail::RzToolButton6Click(TObject *Sender)
{
 vsSQLQw="UPDATE bm_ListMail  SET "
					"  MailText=:D0"//�� �����������
					" WHERE IdRasp=:D1 ; ";
 Qw->Close();Qw->SQL->Clear();Qw->SQL->Add(vsSQLQw);
 Qw->Parameters->Items[0]->Value= reContentRTF->Text;
 Qw->Parameters->Items[1]->Value= IdRasp;
 Qw->ExecSQL();



}
//---------------------------------------------------------------------------

