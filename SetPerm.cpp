//------------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "Main.h"
#include "Init.h"
#define say1 "������������� ���� �������"
#include "LoderExe.c"
//------------------------------------------------------------------------------
void  __fastcall SetPermis                (struct PermisHdr   *PH,
                                           TADOQuery          *Qi);
int   __fastcall SrchNames                (TStringList        *Si,
                                           AnsiString         *SL);
int   __fastcall LoadNewConnectionString  (TADOConnection     *C,
                                           AnsiString         *Base,
                                           AnsiString         *Serv,
                                           AnsiString         *Log,
                                           AnsiString         *Pass,
                                           struct PermisHdr   *PH);
//------------------------------------------------------------------------------
union Acc {
  int Num ;
  char M[8];
};
//------------------------------------------------------------------------------
// � ������� ����� ��������� � utils ��� ������ �������������
//------------------------------------------------------------------------------
String __fastcall PrepareStringParamForSql(String in)
{
  String out = "";
  int pos = 0;

  while(in.c_str()[pos] != 0)
  {
    if(in.c_str()[pos] == wchar_t('\''))
      out += "'";
    out += in.c_str()[pos++];
  }
  return out;
}
//------------------------------------------------------------------------------
void  __fastcall  SetPermis (struct PermisHdr   *PH,
                             TADOQuery          *Qi)
{
  AnsiString       SL;
  TStrings        *OldSql;
  TBlobField      *F;
  struct Permis   *Pi;
  union Acc        Acc;
  int              i;

  OldSql =new TStringList();
  try
  {
    Qi->Close();
    OldSql->Assign(Qi->SQL);
    Qi->SQL->Clear();
    Qi->Parameters->Clear();
  	Qi->SQL->Add("EXECUTE prUserSet");
    Qi->Open();
    //Id ������������
  	PH->KeyUserStartProgramm = Qi->Fields->Fields[0]->AsInteger;
    //id ����������
	  PH->KeyConnect           = Qi->Fields->Fields[1]->AsInteger;
    //Id ������������ �� ������� �����������
	  PH->IdUserFromEmplUser   = Qi->Fields->Fields[2]->AsInteger;
	  SL = Qi->Fields->Fields[3]->AsString;
    //������� � �������� �������� ������������
    Ansistrings::StrLCopy(PH->NameUserStartProgramm,
                          SL.c_str(),
                          sizeof(PermisHdr.NameUserStartProgramm));
    // Login �������� ������������
  	SL = Qi->Fields->Fields[4]->AsString;
    Ansistrings::StrLCopy(PH->LoginUserStartProgramm,
                          SL.c_str(),
                          sizeof(PermisHdr.LoginUserStartProgramm));
    // Mail �������� ������������
  	SL = Qi->Fields->Fields[5]->AsString;
    Ansistrings::StrLCopy(PH->MailUserStartProgramm,
                          SL.c_str(),
                          sizeof(PermisHdr.MailUserStartProgramm));
	  Qi->Close();

	  Pi = PH->StartPerm;
	  while(Pi->NamePerm[0] != 0)
	  {
    	Qi->SQL->Clear();
      Qi->SQL->Add("EXEC prUserGetResourseId '"
                  + PrepareStringParamForSql(PH->NameProgram) + "','"
                  + PrepareStringParamForSql(Pi->NamePerm) + "'");
  	  Qi->Open();
	    if(Qi->Eof == false)
      {
        Pi->id = Qi->Fields->Fields[0]->AsInteger;
      }
	    Qi->Close();
      Pi++;
	  }

    Qi->Close();
    OldSql->Assign(Qi->SQL);
    Qi->SQL->Clear();
    Qi->Parameters->Clear();
    Qi->SQL->Add(
      "DECLARE @idUs int,@idResNameProg int;"
      "SELECT @idUs=auId FROM aa_Users WHERE auLogUser=sUser_sName();"
      "SELECT TOP 1 UdcAcces FROM aa_UsDoc WHERE UdcIdUs=@idUs AND "
      "UdcTypDoc=1 order by UdcData DESC;");
    Qi->Open();

    if(Qi->Eof == true ||
       Qi->Fields->Fields[0]->IsNull == true)
	  {   //������� �������� �����
	    Pi = PH->StartPerm;
	    while(Pi->NamePerm[0] != 0)
	    {
        Pi->EnablePerm  = Pi->EnableRoleGuest; // default ���������� ��� ������
	      Pi->VisiblePerm = Pi->VisiblRoleGuest; // default ���������� ��� ������
        Pi++;
	    }
	  }
    else
	  { //���� ���������� ��� �������
	    TMemoryStream * pms  = new TMemoryStream();  //��������� �� ��������� ������
	    try
      {
        F = (TBlobField*)Qi->Fields->Fields[0];
		    F->SaveToStream(pms);
        pms->Position = 0;
        while((pms->Read(&Acc.M[0], 8)) == 8)
        {
          Pi = PH->StartPerm;
          while(Pi->NamePerm[0] != 0)
          {
            if(Pi->id == Acc.Num)
            {
              // �� ����� ������ ������ � ����������, ���� ��� ������
              // ������� �� �������� �� case 0 � 1 � � case 3 �� ���������
              // break
              Pi->EnablePerm  = false;
              Pi->VisiblePerm = false;
              switch(Acc.M[4]&0x3)
              {
                case 3:
                  Pi->EnablePerm  = true;
                case 2:
                  Pi->VisiblePerm = true;
                  break;
              };
            break;
            }
	  		  Pi++;
          }
        }
      }
      __finally
      {
        delete pms;
      }
    }
  }
  __finally
  {
    Qi->Close();
    Qi->SQL->Assign(OldSql);
    delete OldSql;
  }
};
//##############################################################################
//################## ������ ������ �����������                             #####
//##############################################################################
int   __fastcall  LoadNewConnectionString (TADOConnection     *C,
                                           AnsiString         *Base,
                                           AnsiString         *Serv,
                                           AnsiString         *Log,
                                           AnsiString         *Pass,
                                           struct PermisHdr   *PH)
{
  AnsiString SL,SS;
  int i,j;
  char buf[2048];
  static unsigned long Ul;
  TStringList *Si = new TStringList();

  try
  {
    SL = AnsiString(C->ConnectionString);
    i = SL.Pos(CONST_FILE_NAME);
    if(i > 0)
    {
      SL.Delete(1, i + sizeof(CONST_FILE_NAME) - 2);
      i = FileOpen(SL, 0x00);
      j = FileRead(i, &buf[0], sizeof(buf));
      FileClose(i);
      SS = WideCharToString((wchar_t *)buf);
    }
    else
      SS=SL;

    i = SS.Pos("\n");
    while(i > 0)
    {
      if(i > 3)
        SL=SS.SubString(1, i - 1);
      if(SL.Pos("Provider=") > 0)
        break;
      else
      {
        SL = "";
        SS.Delete(1, i);
        i = SS.Pos("\n");
      }
    }

    if(SL.Length() > 0)
    {
      SS = SL + ";";
      i = SS.Pos(";");
      while(i > 0)
      {
        if(i > 3)
          Si->Add((SS.SubString(1, i - 1)).Trim());
        SS.Delete(1, i);
        i = SS.Pos(";");
      }

  	  if((i = SrchNames(Si,&AnsiString("Application Name"))) != -1)
        Si->Delete(i);
      Si->Add("Application Name="+AnsiString(NameProgram));

      if((i = SrchNames(Si,&AnsiString("Use Encryption for Data"))) != -1)
        Si->Delete(i);
      Si->Add("Use Encryption for Data=False");

  	  SL = "";
      Ul = sizeof(buf) - 1;
      if(GetComputerName(buf, &((unsigned long)Ul)) == true)
        SL=AnsiString(buf);

  	  SS = "";
      Ul = sizeof(buf) - 1;
      if(GetUserName(buf, &((unsigned long)Ul)) == true)
        SS=AnsiString(buf);

  	  SL = "Computer\"" + SL +
           "\",User\""  + SS +
           "\",Ver\""   + AnsiString(ExecDate) + "\"";
      SL.Trim();

  	  if((i = SrchNames(Si, &AnsiString("Workstation ID"))) != -1)
        Si->Delete(i);
      Si->Add("Workstation ID=" + SL);

      if(Base!=NULL)
	    {
        if((i = SrchNames(Si, &AnsiString("Initial Catalog"))) != -1)
          Si->Delete(i);
        Si->Add("Initial Catalog=" + *Base);
	      C->DefaultDatabase = WideString(*Base);
	    }

      if(Serv!=NULL)
	    {
        if((i = SrchNames(Si, &AnsiString("Data Source"))) != -1)
          Si->Delete(i);
        Si->Add("Data Source=" + *Serv);
      }

      if(Log != NULL && Pass != NULL) //������������ ��� �������� �������������
	    {
        Ansistrings::StrLCopy(buf, Pass->c_str(), sizeof(buf) - 1);
	      char *M;
        for(M = buf; *M != 0; M++)
          *M -= 18;

	      if((i = SrchNames(Si, &AnsiString("Integrated Security"))) != -1)
          Si->Delete(i);
  	    if((i = SrchNames(Si, &AnsiString("Password"))) != -1)
          Si->Delete(i);
	      if((i = SrchNames(Si, &AnsiString("User ID"))) != -1)
          Si->Delete(i);
  			Si->Add("Password=\"" + AnsiString(buf) + "\"");
        Si->Add("User ID=\"" + *Log + "\"");
	    }
    }

    SL = "";
    for(i = 0, j = Si->Count; i < j; i++)
      SL += Si->Strings[i] + ";";
    C->ConnectionString=WideString(SL);
  }

  __finally
  {
    delete Si;
  }
return(0);
}
//------------------------------------------------------------------------------
int __fastcall  SrchNames(TStringList   *Si,
                          AnsiString    *SL) //����������� � ���� ������
{
  int i, j;
  for(i = 0, j = Si->Count; i < j; i++)
  {
    if(Si->Strings[i].Pos("=") > 1 &&
       Si->Names[i] == *SL)
      return(Si->IndexOfName(Si->Names[i]));
  }
  return(-1);
}
//##############################################################################
//##################       �������� �� �������� ����� ������               #####
//##################       c SQL �������                                   #####
//##############################################################################
bool __fastcall TestLoadNewVers(TADOQuery *Qabs,int KeyConnect)
{
  AnsiString      SL,FileSfx,FileExe;
  int             i,id;
  TADOQuery       *Q;
  TDateTime       Dt,Df;
  bool            flP,flD;
  struct TSearchRec SearchRec;

  Q = Qabs;
  try
  {
    //��������� ������ ��������� ��� ������������ ����� �����
    // ��� �� ���������� �������
  SL = AnsiString(GetCommandLine());
  i  = SL.Pos("\"");
  SL = SL.Delete(i, 1);
  i  = SL.Pos("\"");
  SL = SL.Delete(i, SL.Length() - i + 1);
  i  = SL.LastDelimiter("\\:");
  SL = SL.Delete(1, i);
  SL = AnsiUpperCase(SL);
  FileExe = SL;

  Q->SQL->Clear();
  Q->SQL->Add("SELECT TOP 1 LpDate,LpName,"
                           "LpId,LpPrxExe,"
                           "LpVers "
                "FROM aa_LoadProgram where LpExe='"
           + PrepareStringParamForSql(SL)
           + "' ORDER BY LpDate DESC;");
//  Q->Parameters->Items[0]->Value = SL;//ID �������

  Q->Open();
  FileSfx = Q->Fields->Fields[3]->AsString+FileExe;
  Dt = Q->Fields->Fields[0]->AsDateTime;
  id = Q->Fields->Fields[2]->AsInteger;
  flP = !Q->Fields->Fields[0]->IsNull;
  flD = !Q->Fields->Fields[1]->IsNull;
  if(flD == true)
  {
    Ansistrings::StrLCopy(SetupIni.ExecDateLast,
                          AnsiString(Q->Fields->Fields[4]->AsString).c_str(),
                          31);
  }

  Q->Close();
  if(FindFirst(SL, 0x2F, SearchRec) != 0)
    return(false);  //�� ��������� ����� ������

  Df = FileDateToDateTime(SearchRec.Time);
  if(flP == true) //���� ���������
  {
    if(flD == false && Dt == Df)    //��������� ��������
    {
      Q->Close();
      Q->SQL->Clear();
      Q->SQL->Add("UPDATE aa_LoadProgram SET LpName=:D0,LpVers=:D1 WHERE LpId=:D0;");
      Q->Parameters->Items[0]->Value = AnsiString(NameProgram);
      Q->Parameters->Items[1]->Value = AnsiString(ExecDate);
      Q->Parameters->Items[2]->Value = id;
      Q->ExecSQL();
      Q->Close();
    }
 // Df=TDateTime("15.01.2008");
  if(Dt>Df)    //���� ���������� ����������
    {Q->Close();Q->SQL->Clear();Q->SQL->Add("EXEC prUserExit :D0;");
     Q->Parameters->Items[0]->Value=KeyConnect;  Q->ExecSQL();//ID �����������

     i=FileCreate("LoaderExe.exe");FileWrite(i,LoderExe,sizeof(LoderExe));FileClose(i);
     WinExec(("LoaderExe.exe \""+FileExe+"\",\""+ FileSfx+"\"").c_str(),SW_SHOW);
     DeleteFile(FileSfx);
     Q->Close();Q->SQL->Clear();
	 Q->SQL->Add("SELECT LpPrg FROM aa_LoadProgram where LpId=:D0;");
     Q->Parameters->Items[0]->Value=id;//ID �������
     Q->Open();
     ((TBlobField*)(Q->Fields->Fields[0]))->SaveToFile(FileSfx);
     Q->Close();
     Q->Connection->Connected=false;//���� �������� ����� ������
     return(true);   //����� ��������� ����� ������
    }
  }
 }catch(...){};
 return(false);  //�� ��������� ����� ������
}
//------------------------------------------------------------------------------
//##############################################################################
//##############################################################################
//##############################################################################
//##################       ���� ���� ��������� � �������� �������,         #####
//##################       �� ���������� ��� � ����������� �����           #####
//##################       ������� �� ��������� � �������������            #####
//##############################################################################
/*
��������� 	�������� 	��������
fmOpenRead 	$0000 	������ ������
fmOpenWrite 	$0001 	������ ������
fmOpenReadWrite 	$0002 	�������� ��� ������ � ������
fmShareCompat 	$0000 	���������� ������, ����������� FCBs (File Control Blocks)
fmShareExclusive 	$0010 	������� ������ ���������� �� ����� ��������� ���� �� � ����� ������
fmShareDenyWrite 	$0020 	������ ���������� ����� ��������� ���� ������ ��� ������
fmShareDenyRead 	$0030 	������ ���������� ����� ��������� ���� ������ ��� ������
fmShareDenyNone 	$0040 	������ ������ ��� ������ ����������
*/

bool __fastcall TestAutoInstall(AnsiString SW)//�������������� ���������
{
AnsiString SL,SS,S1,S2,SR;
int i,Rfile,Wfile,Siz;
char Buf[32*1024];
extern HANDLE Mutex;
SL=SW;
if(SL.UpperCase().AnsiPos("WORK_DB")==0)goto MLOAD;
if(*(SL.c_str()+1)==':')return(false); //�������� � ��� � ���������� ���-��
MLOAD:;
SL=vFILEPATHDEF"\\"vFILENAME".exe";  //������� ����� � ����������� ���� �� ���������
SS=ExtractFileDir(SL);
if(FileExists(SL)!=true)             //������� ���� ��� ���������� ??
   {
   SL=vFILEPATHDEF"\\SFX'"vFILENAME".exe";  //������� ����� � ���������������� ����� �� ���������
   SR=vFILEPATH_IS"\\SFX'"vFILENAME".exe";  //�������� ����� � ���������������� ����� �� ���������
   SS=ExtractFileDir(SL);
   if(FileExists(SL)==false)
	 {//������� ����� � ������������ ����
	  if(DirectoryExists(SS)==false)
		{S1="";
		 while((i=SS.Pos("\\"))!=0)
		  {S2=SS;
		   SS.Delete(1,i);
		   S2.Delete(i,(S2.Length()-i+1));
		   S1+=S2;
		   try{CreateDir(S1);}catch(...){}
		   S1+="\\";
		  }
		 S1+=SS;
		 try{CreateDir(S1);}catch(...){}
		 SS=ExtractFileDir(SL);
		}
      if(FileExists(SR)==false)return(false);                      //��� ����� ��������� ������� ����������
      if((Rfile=FileOpen(SR,Sysutils::fmShareDenyNone))==-1)return(false);   //��� ������� � ����� ���������
      if((Wfile=FileCreate(SL))==-1)return(false);                 //�� ������ ������� ����
      do{Siz=FileRead(Rfile,Buf,sizeof(Buf));if(Siz>0){FileWrite(Wfile,Buf,Siz);}}while((unsigned int)Siz==sizeof(Buf));//����������
      FileClose(Rfile);FileClose(Wfile);
     }
   }
CloseHandle(Mutex);                          //�������� ������� ����������� �������
SetCurrentDir(SS);
WinExec(SL.c_str(),SW_SHOW);
return(true);
}
//------------------------------------------------------------------------------
//##############################################################################
//##############################################################################
//##############################################################################
//##################  �������� � ������� ����� ����� UDL ���� ��� ���,     #####
//##################  �� ���������� ��� � ����������� �����, � ���������   #####
//################## ���� ��� ��� ���, �� �������������                    #####
//##############################################################################
bool __fastcall TestUDLAutoInstall(AnsiString SW,TADOConnection *ADOConnection1)//�������� ������� UDL � ����������� ��� ���������
{
//AnsiString SL,SS,SR;
int i,Rfile,Siz;
char Buf[2*1024];
wchar_t SS[2*1024];
wchar_t *eP;
try{//����������� � ����� ����� ���������
  if(FileExists(SW)==true)return(false);
  if((Rfile=FileOpen(vFILEPATH_IS"\\"vFILENAME".udl",Sysutils::fmShareDenyNone))!=-1)
     {Siz=FileRead(Rfile,Buf,sizeof(Buf));FileClose(Rfile);
      if((Rfile=FileCreate(SW))==-1){return(false);};
      FileWrite(Rfile,Buf,Siz);FileClose(Rfile);
     }
   }catch(...){}
  if(FileExists(SW)==true)return(false);
  //������������� �� ��������� ������
try{Rfile=FileCreate(SW);
      if(Rfile!=-1)
	 {eP=WideString("[oledb]\x0D\x0A; Everything after this line is an OLE DB initstring\x0D\x0A"
	  +ADOConnection1->ConnectionString+"\x0D\x0A\x0D\x0A\x00\x00").Copy(&SS[1],1020);
	   char *p=(char*) &SS[0];*p=0xFF;*(p+1)=0xFE;
	   FileWrite(Rfile,SS,(wcslen(eP)<<1));
	   FileClose(Rfile);
	 }
      
   }catch(...){}
return(true);
}
//------------------------------------------------------------------------------
