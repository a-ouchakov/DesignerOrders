//---------------------------------------------------------------------
#include <vcl.h>

#include "UIndivUsers.h"
//...................
#include "Main.h"

#include "INIT.h"
#pragma hdrstop

//---------------------------------------------------------------------
#pragma link "RzEdit"


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
#pragma link "RzPanel"
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
#pragma hdrstop

TFrIndivUsers *FrIndivUsers;
char          flFrIndivUsers;

//---------------------------------------------------------------------

__fastcall TFrIndivUsers :: TFrIndivUsers(TComponent* AOwner):TForm(AOwner)
{int i,j,k,*s,*p;

//Установить размеры ОКОН
#define DIni SetupIni.sIndivUsers
{if(MainForm->CheckSumParam((char*)&DIni.Chk,sizeof(DIni))==DIni.Chk)//Проверка контрольной сумммы блока параметров
  {try{i=DIni.SizeWind[0];if(i<30)i=30;TreeView1->Width=i;
       i=DIni.SizeWind[1];if(i<30)i=30;GroupBox6->Height=i;
       i=DIni.SizeWind[2];if(i<30)i=30;GroupBox4->Height=i;
       i=DIni.SizeWind[3];if(i<30)i=30;GroupBox11->Height=i;
	  }__finally{}
   }
}
}
//---------------------------------------------------------------------


//---------------------------------------------------------------------
#define  FF Q->Fields->Fields
void __fastcall TFrIndivUsers::FormCreate(TObject *Sender)
{//Создание формы
TTreeNodes *pN;
TTreeNode *xN1,*xN2;
TADOQuery *Q,*QQ;
Adodb::TParameters *P;
Variant *Pv;
int Key,Idn;

pN=TreeView1->Items;pN->BeginUpdate();pN->Clear();
pN->AddChildObject(NULL, "Формуляр пользователя",(void*)4);xN1=pN->Item[0];
Q=Qw;if(Q->Active==true)Q->Active=false;
Q->SQL->Clear();Q->SQL->Add("SELECT TOP 1 azId FROM aa_Lib WHERE azPid=3 AND azName='"+AnsiString(NameProgram)+"' ORDER BY azId;");
Q->Open();Idn=Q->Fields->Fields[0]->AsInteger;Q->Close();




Q=Qw;if(Q->Active==true)Q->Active=false;
Q->SQL->Clear();Q->SQL->Add("SELECT azId,azName,azPId,azCode FROM aa_Lib WHERE azPId=:D0 ORDER BY azCode,azId;");
Pv=&(Q->Parameters->Items[0]->Value);
Q->Parameters->Items[0]->Value=Idn;
Q->LockType=ltReadOnly;
RecreateChildNode(Q,Idn,Pv,xN1,pN);
Q->Close();  xN1->Expand(true);pN->EndUpdate();

Button1->Enabled=false;Button2->Enabled=false;
PageControl1->ActivePage=TabSheet2;
PageControl2->ActivePage=TabSheet3;
TmSrch->Enabled=true;


}
//---------------------------------------------------------------------------
void __fastcall TFrIndivUsers::RecreateChildNode(TADOQuery *Q,int PId,Variant *Pv,TTreeNode *Nn,TTreeNodes *Pn)
{
TLocateOptions Opts;
Variant locvalues[1];
int OldPId;
int CId,NId;
Opts.Clear();
TTreeNode *xN3;

if(Q->Active==true)
   {OldPId=Q->Parameters->Items[0]->Value;CId=FF[0]->AsInteger;locvalues[0]=Variant(CId);Q->Close();}else{locvalues[0]=-1;};
    Q->Parameters->Items[0]->Value=PId;Q->Open();
while(Q->Eof==false)
 {NId=FF[0]->AsInteger;xN3=Pn->AddChildObject(Nn,FF[1]->AsString,(void*)(NId));
  //Pn->Item-> Enabled=false;
  if(FF[3]->AsInteger==1)IdProgramm=FF[0]->AsInteger; // xN3->Data=(void*)IdProgramm;
  RecreateChildNode(Q,NId,Pv,xN3,Pn);
  if(xN3->HasChildren ==true){xN3->SelectedIndex=0;xN3->ImageIndex=0;}
  else{xN3->SelectedIndex=1;xN3->ImageIndex=1;}
  Q->Next();
 }
Q->Close();
if(locvalues[0]!=-1){Q->Parameters->Items[0]->Value=OldPId;Q->Open();Q->Locate("azId",locvalues,Opts);}

}


//---------------------------------------------------------------------------
void __fastcall TFrIndivUsers::FormClose(TObject *Sender, TCloseAction &Action)
{

flFrIndivUsers=WINCLS;
Action = caFree;
QUs->Close(); Qr1->Close();Qw->Close();


DIni.SizeWind[0]=TreeView1->Width;
DIni.SizeWind[1]=GroupBox6->Height;
DIni.SizeWind[2]=GroupBox4->Height;
DIni.SizeWind[3]=GroupBox11->Height;
//for(g=dxDBGrid1,s=&DIni.dx1[0],j=g->ColumnCount,i=0;i<16 && i<j;i++,s++){*s=g->Columns[i]->Width;}//Сохранить размер столбцов
//for(g=dxDBGrid1,s=&DIni.dp1[0],j=g->ColumnCount,i=0;i<16 && i<j;i++,s++){*s=g->Columns[i]->Tag;}  //Сохранить порядок столбцов
DIni.Chk=MainForm->CheckSumParam((char*)&DIni.Chk,sizeof(DIni));//Проверка контрольной сумммы блока параметров

}
//---------------------------------------------------------------------------
//###########################################################################
//################### Процедуры #############################################
//###########################################################################
void __fastcall TFrIndivUsers::EnableSave()//Разрешить сохранение данных
{Button1->Enabled=true;Button2->Enabled=true;}
//___________________________________________________________________________
void __fastcall TFrIndivUsers::TreeView1DblClick(TObject *Sender)
{
if(SelNode!=NULL)
  {SelNode->ImageIndex--;//Выбранный узел
   if(SelNode->ImageIndex<1)SelNode->ImageIndex=3;
     SelNode->SelectedIndex=SelNode->ImageIndex;
     EnableSave();//Разрешить сохранение данных
  }
}
//---------------------------------------------------------------------------
void __fastcall TFrIndivUsers::TreeView1Change(TObject *Sender,TTreeNode *Node)
{if(Node->ImageIndex==0)SelNode=NULL;else {SelNode=Node;}}
//---------------------------------------------------------------------------
void __fastcall TFrIndivUsers::ExitButtonClick(TObject *Sender)
{ Close();}
//---------------------------------------------------------------------------
//############################################################################
//############################################################################
//############################################################################
//---------------------------------------------------------------------------
void __fastcall TFrIndivUsers::DSUsDataChange(TObject *Sender,TField *Field)
{TmUs->Enabled=false;TmUs->Enabled=true;}//Сменился пользователь
//---------------------------------------------------------------------------
void __fastcall TFrIndivUsers::TmUsTimer(TObject *Sender)
{//Сменился пользователь.Рисовать нового пользователя
TimerPic->Enabled=false;TmUs->Enabled=false;
Edit1->Text=QUsauFamUser->AsString;
Edit2->Text=QUsauNamUser->AsString;
Edit3->Text=QUsauOtcUser->AsString;
Edit5->Text=QUsauLogUser->AsString;
Edit6->Text=QUsauMailUser->AsString;
Edit4->Text=QUsauPhoneUser->AsString;
Edit7->Text=QUsauMobPhoneUser->AsString;
if(QUsauDateDel->IsNull==true)RadioButton1->Checked=true;else RadioButton2->Checked=true;

if(Qr1->Active==true)Qr1->Close();Qr1->Parameters->Items[0]->Value=QUsauId->AsInteger;Qr1->Open();
TimerPic->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TFrIndivUsers::DsQr1DataChange(TObject *Sender,TField *Field)
{TimerPic->Enabled=false;TimerPic->Enabled=true;}
//---------------------------------------------------------------------------
void __fastcall TFrIndivUsers::TabSheet4Show(TObject *Sender)
{TimerPic->Enabled=false;TimerPic->Enabled=true;}
//---------------------------------------------------------------------------
union Acc{int Num ;char M[8];};
void __fastcall TFrIndivUsers::TimerPicTimer(TObject *Sender)
{//Таймер перерисовки данных по доступу к программе /документам
char U[128];
TField *F;
int i,j,k;
TTreeNodes *pN;
TTreeNode  *xN1;
AnsiString SL;
union Acc Acc; //{int Num ;char M[5];};

TimerPic->Enabled=false;

//Коментарии  администратора
TMemoryStream * pms  = new TMemoryStream();  //Указатель на временную память
try{
if(Qr1UdcRemAdmin->BlobSize>0)
  {Qr1UdcRemAdmin->SaveToStream(pms);pms->Position=0;
   RichEdit2->Lines->LoadFromStream(pms);
  }
/*else RichEdit2->Lines->Clear();
//if(Qr1UdcDoc->BlobSize>100 )
  //	{//TJPEGImage    *Jpg = new TJPEGImage();
	 //try{pms->Clear();Qr1UdcDoc->SaveToStream(pms);pms->Position = 0;
	 //   Jpg->LoadFromStream(pms);Image3->Picture->Assign(Jpg);
	  //   Image3->Tag=1;
		//}__finally{delete Jpg;}
  //  }
   else
    { if(Image3->Picture->Graphic!=NULL)
       {          //Убрать фотографию
        Image3->Picture->Bitmap->Dormant();           // Free up GDI resources
        Image3->Picture->Bitmap->FreeImage();         // Free up Memory.
        Image3->Canvas->Brush->Color = clBtnFace;
        Image3->Canvas->FillRect(Image3->Canvas->ClipRect);
        Image3->Tag=0;
        GroupBox13->Repaint();
       }
	}     */
  //Рисовать права доступа
    //......Подготовить масив доступа ....
    for(pN=TreeView1->Items,pN->BeginUpdate(),j=(pN->Count),i=0;i<j;i++)
	   {xN1=pN->Item[i];if(xN1->ImageIndex>0){xN1->ImageIndex=1;xN1->SelectedIndex=1;}}
	if(Qr1UdcAcces->BlobSize>7)
	  {pms->Clear();Qr1UdcAcces->SaveToStream(pms);pms->Position=0;
	   while(pms->Read(( void*)&Acc,8)==8)
		 {for(i=0;i<j;i++)
		   {xN1=pN->Item[i];SL=pN->Item[i]->Text;
			if(Acc.Num==((int)(xN1->Data)))
			 {k=((int)Acc.M[4])&0x03;xN1->ImageIndex=k;xN1->SelectedIndex=k;break;}
		   }
		 }
	   }
	pN->EndUpdate();

}__finally{delete pms;}
//............Рисовать сведения по доступу к архиву..............................
//if(UserDrawDocAcc==DM->AdoSrchID->AsInteger)return; //Код пользователя на которого нарисованы данные по доступу к документам
//if(PageControl2->ActivePage==TabSheet4)
//     {UserDrawDocAcc=DM->AdoSrchID->AsInteger;ReDrawStatus();}
}
//---------------------------------------------------------------------------
void __fastcall TFrIndivUsers::MovToDataBaseFotoUser()//Загрузка в базу даных фото польз
{
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------//Изменение в правах доступа
//---------------------------------------------------------------------------
void __fastcall TFrIndivUsers::Button2Click(TObject *Sender)
{//Нажата кнопка ОТМЕНА

Button1->Enabled=false;Button2->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TFrIndivUsers::Button1Click(TObject *Sender)
{//Нажата кнопка ПРИМЕНИТЬ

union Acc Acc,p1Acc,p2Acc; //{int Num ;char M[5];};
int LastWr,i,j;//ii;
char *p;
char U[128];
TTreeNodes *pN;
TTreeNode *xN1,*xN2,*xN3;
AnsiString SL,Si,St;
TADOQuery *Q;
Adodb::TParameters *P;
//---------------------------
TLocateOptions Opts;
Variant locvalues[1];
int OldPId;
//---------------------------



//if(Edit6->Text!=Edit7->Text)
//   {Application->MessageBox("Несовпадение паролей!\nПовторите ввод паролей","Внимание!",MB_OK|0x40);return;}
PageControl1->ActivePage=TabSheet1;
//Panel4->Repaint();
PageControl2->Repaint();
if(Application->MessageBox(L"Вы уверены, что хотите\nвнести изменения?",L"Внимание!",
 MB_OKCANCEL) != IDOK)return;
if(Qr1->Active==true)Qr1->Close();Qr1->Parameters->Items[0]->Value=QUsauId->AsInteger;Qr1->Open();
St=IntToStr(PermisHdr.KeyConnect);
try{Q=Qw;
    Q->SQL->Clear();Q->SQL->Add("BEGIN TRANSACTION MyTransAdmin"+St);Q->ExecSQL();
   }catch(...){goto ErrExit;}
try{
    TMemoryStream * pms  = new TMemoryStream();  //Указатель на временную память
	TMemoryStream * pms2 = new TMemoryStream();  //Указатель на временную память
	TMemoryStream * pms3 = new TMemoryStream();  //Указатель на временную память
   //......Подготовить масив доступа ....
    Acc.M[5]=0;Acc.M[6]=0;Acc.M[7]=0;
    for(pN=TreeView1->Items,i=0,j=pN->Count;i<j;i++)
        {xN1=pN->Item[i];        //SL=pN->Item[i]->Text;
        if(xN1->ImageIndex>0)
            {Acc.Num=(int)(xN1->Data);
             Acc.M[4]=(char)(xN1->ImageIndex);
			 pms2->Write((const void*)&Acc,8);
            }
		}pms2->Position=0;
	if(RadioButton1->Checked!=true)pms2->Clear(); //Уволен
	else
	{//Замена или Добавление прав к уже существующим
	  if(Qr1UdcAcces->BlobSize>7)
	  {pms->Clear();Qr1UdcAcces->SaveToStream(pms);pms->Position=0;
	   while(pms->Read(( void*)&p1Acc,8)==8)
		 {pms2->Position=0;i=-1;
		  while(pms2->Read(( void*)&p2Acc,8)==8)
			{if(p1Acc.Num==p2Acc.Num){i=1;break;}}
		   if(i==-1)//Добавить в конец
			 {pms3->Write((const void*)&p1Acc,8);}
		 }
		 pms3->Position=0;
		if(pms3->Size>7){pms2->Write((const void*)pms3->Memory,pms3->Size);}
		pms2->Position=0; i=pms2->Size;
	   }
 	}

  //....................................................................
    if(Q->Active==true)Q->Close();Q->SQL->Clear();
    if(pms2->Size>2)
     {Q->SQL->Add(
      "DECLARE @US INT,@AVT INT;SET @US=:D0;SET @AVT=:D1;"
	  "INSERT INTO aa_UsDoc(UdcIdUs,UdcUserSet,UdcDoc,UdcRemAdmin,UdcAcces, UdcTypDoc)VALUES(@US,@AVT,null,:D3,:D4,1);"
      "SELECT MAX(UdcId) FROM aa_UsDoc WHERE UdcIdUs=@US AND UdcUserSet=@AVT AND UdcTypDoc=1;");
      P=Q->Parameters;
      P->Items[3]->LoadFromStream(pms2,ftBlob);     //масив доступа
     }
    else
     {Q->SQL->Add(
      "DECLARE @US INT,@AVT INT;SET @US=:D0;SET @AVT=:D1;"
	  "INSERT INTO aa_UsDoc(UdcIdUs,UdcUserSet,UdcDoc,UdcRemAdmin,UdcAcces,UdcTypDoc)VALUES(@US,@AVT,null,:D3,null,1);"
	  "SELECT MAX(UdcId) FROM aa_UsDoc WHERE UdcIdUs=@US AND UdcUserSet=@AVT AND UdcTypDoc=1;");
     }
    P=Q->Parameters;
    P->Items[0]->Value=QUsauId->AsInteger; //ID
    P->Items[1]->Value=PermisHdr.KeyUserStartProgramm;//SetupIni.IdUser;    //Код текущего пользователя
	//if(pms->Size>2)P->Items[2]->LoadFromStream(pms,ftBlob);else P->Items[2]->Value=0;     //Скан-копия документа
    pms->Clear();RichEdit1->Lines->SaveToStream(pms);pms->Position = 0;
    if(pms->Size>2)P->Items[2]->LoadFromStream(pms,ftBlob);     //Коментарии администратора
    Q->ExecSQL();    Q->Close();
		//delete Jpg;
		delete pms;delete pms2;delete pms3;
    //............Сделать отметку в таблице USER-ов ..............
    SL=Edit5->Text.Trim();Edit5->Text=SL;                                                    //Логин
	SL=Edit1->Text;MainForm->SetNameF(&SL);Edit1->Text=SL;Si=SL+" ";                               //Фамилия
	SL=Edit2->Text;MainForm->SetNameF(&SL);Edit2->Text=SL;if(SL.Length()>0){Si+=SL[1];Si+=".";}
    SL=Edit3->Text;MainForm->SetNameF(&SL);Edit3->Text=SL;if(SL.Length()>0){Si+=SL[1];Si+=".";}

    Q=Qw;if(Q->Active==true)Q->Active=false; Q->SQL->Clear();
    if(RadioButton1->Checked!=true)SL=",auDateDel=getdate()";else SL=",auDateDel=NULL"; //Уволен

	Q->SQL->Add("UPDATE aa_Users SET auFamUser=:D0,auNamUser=:D1,auOtcUser=:D2,"
				"auFamIO=:D3"+SL+",auMailUser=:D4,auPhoneUser=:D5,auMobPhoneUser=:D6 WHERE auId=:D7;");
	Q->Parameters->Items[0]->Value=Edit1->Text.Trim();          // Фамилия
	Q->Parameters->Items[1]->Value=Edit2->Text.Trim();          // Имя
	Q->Parameters->Items[2]->Value=Edit3->Text.Trim();          // Отчество
	Q->Parameters->Items[3]->Value=Si;                          // Фамилия и И.О.
	Q->Parameters->Items[4]->Value=Edit6->Text.Trim();          // auMailUser
	Q->Parameters->Items[5]->Value=Edit4->Text.Trim();          // auPhoneUser
	Q->Parameters->Items[6]->Value=Edit7->Text.Trim();          // auMobPhoneUser
	Q->Parameters->Items[7]->Value=QUsauId->AsInteger;   // ID
    Si=Q->SQL->Text; Q->ExecSQL();
    if(Q->Active==true)Q->Active=false;Q->SQL->Clear();
    Q->SQL->Add("COMMIT TRANSACTION MyTransAdmin"+St);Q->ExecSQL();

    if(QUs->Active==true)
      {locvalues[0]=Variant(QUsauId->AsInteger);QUs->Close();QUs->Open();
        QUs->Locate("auId",locvalues,Opts);
      // DM->SortForColumn(QUs,dxDBGrid2,Column,0);//Сортировка по столбцам

      }
   }
catch(...)
   {if(Q->Active==true)Q->Active=false;Q->SQL->Clear();
    Q->SQL->Add("ROLLBACK TRANSACTION  MyTransAdmin"+St);Q->ExecSQL();
    ShowMessage("Ошибка на сервере.");
   }
ErrExit:
Button1->Enabled=false;Button2->Enabled=false;


}
//---------------------------------------------------------------------------

void __fastcall TFrIndivUsers::Edit1Change(TObject *Sender)
{EnableSave();}//Разрешить сохранение данных
//---------------------------------------------------------------------------


void __fastcall TFrIndivUsers::DBNavigator1Click(TObject *Sender,TNavigateBtn Button)
{//Клик на навигаторе
if(PageControl1->ActivePage!=TabSheet2)
  {PageControl1->ActivePage=TabSheet2;PageControl2->Repaint();}

}
//---------------------------------------------------------------------------
void __fastcall TFrIndivUsers::DBGrid1Enter(TObject *Sender)
{if(PageControl1->ActivePage!=TabSheet2)
  {PageControl1->ActivePage=TabSheet2;PageControl2->Repaint();}
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//##############################################################################
//########################Распределение прав доступа в архие ###################
//##############################################################################

//---------------------------------------------------------------------------
void __fastcall TFrIndivUsers::ReDrawStatus() //Изменился допуск перерисовать
{
}
//------------------------------------------------------------------------------
//##############################################################################
//##############################################################################
//######### Сортировка по столбцам #############################################
//##############################################################################
//void __fastcall TFrIndivUsers::dxDBGrid2ColumnClick(TObject *Sender,TdxDBTreeListColumn *Column){DM->SortForColumn(QUs,dxDBGrid2,Column,1);}//Сортировка по столбцам
//---------------------------------------------------------------------------
void __fastcall TFrIndivUsers::RzEdit1Change(TObject *Sender)
{//Строка поиска
 TmSrch->Enabled=false;TmSrch->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TFrIndivUsers::TmSrchTimer(TObject *Sender)
{//Поиск
 TmSrch->Enabled=false;
int i;
TLocateOptions Opts;
Variant locvalues[1];
AnsiString SL,SV;
SL="SELECT auId,auFamUser,auNamUser,auOtcUser,auLogUser,auDateDel,auFamIO,auMailUser,auPhoneUser,auMobPhoneUser FROM aa_Users";
SV=RzEdit1->Text;
if(SV.Length()>0)
  {SL+=" WHERE auFamUser LIKE '%"+SV+"%' OR auNamUser LIKE '%"+SV+"%' ";}
if(QUs->Active==true)i=QUsauId->AsInteger;else i=-1;
QUs->DisableControls();
QUs->Close();QUs->SQL->Clear();QUs->SQL->Add(SL);QUs->Open();
	if(QUs->Active==true && i!=-1)
	{locvalues[0]=Variant(i);QUs->Close();QUs->Open();
	 QUs->Locate("auId",locvalues,Opts);
	}
QUs->EnableControls();
}
//---------------------------------------------------------------------------

