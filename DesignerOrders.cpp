//$$---- EXE CPP ----
//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------








USEFORM("InsertMail.cpp", FrInsertMail);
USEFORM("HintJOB.cpp", FrHintJOB);
USEFORM("ListMail.cpp", FrListMail);
USEFORM("LoadProgram.cpp", FrLoadProgram);
USEFORM("ListTarif.cpp", FrListTarif);
USEFORM("ListMailAddress.cpp", FrListMailAddress);
USEFORM("HelpsText.cpp", FrHelpsText);
USEFORM("FindRaspDetailComplecIndex.cpp", FrFindRaspDetailComplecIndex);
USEFORM("FindProduceNE.cpp", FrFindProduceNE);
USEFORM("FindProduce.cpp", FrFindProduce);
USEFORM("FindRaspName.cpp", FrFindRaspName);
USEFORM("GetPI.cpp", FrGetPI);
USEFORM("GetNE.cpp", FrGetNE);
USEFORM("FundRTFText.cpp", FrFundRTFText);
USEFORM("LookSheet.cpp", FrLookSheet);
USEFORM("SelectDol.cpp", FrSelectDol);
USEFORM("SelectAdvPriseList.cpp", FrSelectAdvPriseList);
USEFORM("SincNE.cpp", FrSincNE);
USEFORM("UIndivUsers.cpp", FrIndivUsers);
USEFORM("TraceMail.cpp", FrTraceMail);
USEFORM("SincPI_PP.cpp", FrSincPI_PP);
USEFORM("RealVirtualDol.cpp", FrRealVirtualDol);
USEFORM("ManagerRaspAccess.cpp", FRManagerRaspAccess);
USEFORM("ManagerChiefSelect.cpp", FRManagerChiefSelect);
USEFORM("main.cpp", MainForm);
USEFORM("ManagersChief.cpp", FrManagersChief);
USEFORM("ProtOn.cpp", FrProtOn);
USEFORM("PrintProductCatalog.cpp", FrPrintProductCatalog);
USEFORM("NESincProduce.cpp", FrNESincProduce);
USEFORM("FindEmplUser.cpp", FrEmplUser);
USEFORM("BlockProduceAddEd.cpp", FrBlockProduceAddEd);
USEFORM("BlockProduce.cpp", FrBlockProduce);
USEFORM("BisinessMenedger.cpp", FrBisniessMenedger);
USEFORM("BlockProduceCost.cpp", FrBlockProduceCost);
USEFORM("BugHistory.cpp", FrBugHistory);
USEFORM("BlockProducePeriod.cpp", FrBlockProducePeriod);
USEFORM("BlockProduceDiscount.cpp", FrBlockProduceDiscount);
USEFORM("AuditPriseList.cpp", FrAuditPriseList);
USEFORM("AddFiles.cpp", FrAddFiles);
USEFORM("AccountPrint.cpp", FrAccountPrint);
USEFORM("AboutBox.cpp", FrAboutBox);
USEFORM("AddProduce.cpp", FrAddProduce);
USEFORM("AlarmSheet.cpp", FrAlarmSheet);
USEFORM("AlarmHoliday.cpp", FrAlarmHoliday);
USEFORM("AddProduceNew.cpp", FrAddProduceNew);
USEFORM("Category.cpp", FrCategory);
USEFORM("EditProduce.cpp", FrEditProduce);
USEFORM("EditPriseList.cpp", FrEditPriseList);
USEFORM("EditPIinProduce.cpp", FrEditPIinProduce);
USEFORM("EditRasp.cpp", FrEditRasp);
USEFORM("EditTarif.cpp", FrEditTarif);
USEFORM("EditRaspDetailComplect.cpp", FrEditRaspDetailComplect);
USEFORM("EditRaspDetail\EditRaspDetail.cpp", FrEditRaspDetail);
USEFORM("EditLibs.cpp", FrEditLibs);
USEFORM("ControlEditProduce.cpp", FrControlEditProduce);
USEFORM("ChancheNE.cpp", FrChancheNE);
USEFORM("CategoryNE.cpp", FrCategNE);
USEFORM("ControlMail.cpp", FrControlMail);
USEFORM("EditComment.cpp", FrEditComment);
USEFORM("EditRaspDetail\dmEditRaspDetail.cpp", dmRaspDetail); /* TDataModule: File Type */
//---------------------------------------------------------------------------
extern char NameProgram[];
extern bool vMin;
extern bool vAuto;//�����������-�����������
extern bool vDemo;
extern bool vSheet; //������������ ��������� � ������ ��������
extern bool vUtverjdenie;  //������� ������� ���������� �� ������  �� �����������
extern AnsiString vsUtverjdenie;  //�������� �� ����������� ���� U+��� ������������.
extern char  NamedMutex[];
HANDLE CheckInstance(const char *Name,LPSTR P)
{
char *V;
V=P;
vMin=false;
vAuto=false;
vDemo=false;
vSheet=false;
vUtverjdenie=false;
vsUtverjdenie="";

while((V=StrScan((const char *)V,'/'))!=NULL)
  {switch(*(V+1))
	{case 'M':case 'm': case '�': case '�': vMin =true; break;
	 case 'A':case 'a': case '�': case '�': vAuto=true; break;
	 case 'S':case 's': case '�': case '�': vSheet=true; break;
	 case 'R':case 'r': case '�': case '�': vDemo=true; break;
	 case 'U':case 'u': case '�': case '�': {vUtverjdenie=true; vsUtverjdenie=P;} break;
	}
  V++;
  };
HANDLE Mutex= CreateMutex(NULL,true,Name);
int r=GetLastError();if(vAuto==true)return(Mutex);if(r!=0){return(0);}else{return(Mutex);}
};
//---------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR P, int)
{
HANDLE Mutex= CheckInstance(NamedMutex,P);
if((Mutex==NULL)&&(!vAuto)&&(!vSheet)&&(!vUtverjdenie))
 {ShowMessage("��������, �� ��� ���������\n�� ����� ���������� ��� ��������.");
  ReleaseMutex(Mutex);return(1);
 } 
	try
	{
		Application->Initialize();
	Application->Title=AnsiString(NameProgram);
	Application->HelpFile = Application->Title;
		Application->CreateForm(__classid(TMainForm), &MainForm);
     Application->CreateForm(__classid(TFRManagerRaspAccess), &FRManagerRaspAccess);
     Application->CreateForm(__classid(TFRManagerChiefSelect), &FRManagerChiefSelect);
     Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
