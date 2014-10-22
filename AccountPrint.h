//---------------------------------------------------------------------------

#ifndef AccountPrintH
#define AccountPrintH
#include "winsock2.h"
//#include "userunit.hpp"
#include "main.h"
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzPanel.hpp"
#include <ExtCtrls.hpp>
#include <ImgList.hpp>
#include "frxClass.hpp"
#include "frxPreview.hpp"
#include "frxDBSet.hpp"
#include <ADODB.hpp>
#include <DB.hpp>
#include "RzRadGrp.hpp"
#include <Buttons.hpp>
#include "frxRich.hpp"
#include "frxExportCSV.hpp"
#include "frxExportHTML.hpp"
#include "frxExportPDF.hpp"
#include "frxExportRTF.hpp"
#include "frxExportXLS.hpp"
#include "frxExportXML.hpp"
#include "RzCommon.hpp"
#include "RzEdit.hpp"
#include "RzLabel.hpp"
#include <Mask.hpp>
#include "frxExportImage.hpp"
#include "frxExportMail.hpp"
#include "frxServerClient.hpp"
#include "frxDMPExport.hpp"
#include "frxDesgn.hpp"
#include "frxExportText.hpp"
//---------------------------------------------------------------------------
class TFrAccountPrint : public TForm
{
__published:	// IDE-managed Components
	TImageList *ImageList1;
	TfrxPreview *frxPreview1;
	TRzPanel *RzPanel400;
	TSpeedButton *SpeedButton2;
	TSpeedButton *SpeedButton3;
	TRzRadioGroup *RzRadioGroup1;
	TfrxRichObject *frxRichObject1;
	TRzPanel *RzPanel1;
	TRzSpacer *RzSpacer8;
	TRzToolButton *RzToolButton7;
	TRzToolButton *RzToolButton8;
	TRzSpacer *RzSpacer5;
	TRzToolButton *BtnPrint;
	TRzToolButton *BtnView;
	TRzToolButton *BtnZoomIn;
	TRzToolButton *BtnZoomOut;
	TRzToolButton *BtnLastRecord;
	TRzToolButton *BtnNextRecord;
	TRzToolButton *RzToolButton2;
	TRzToolButton *RzToolButton1;
	TRzToolButton *BtnSave;
	TRzSpacer *RzSpacer1;
	TRzSpacer *RzSpacer2;
	TRzSpacer *RzSpacer3;
	TRzSpacer *RzSpacer4;
	TRzSpacer *RzSpacer6;
	TRzSpacer *RzSpacer7;
	TRzSpacer *RzSpacer10;
	TRzSpacer *RzSpacer11;
	TRzSpacer *RzSpacer13;
	TfrxPDFExport *frxPDFExport1;
	TfrxXLSExport *frxXLSExport1;
	TfrxRTFExport *frxRTFExport1;
	TfrxHTMLExport *frxHTMLExport1;
	TfrxXMLExport *frxXMLExport1;
	TRzFrameController *RzFrameController1;
	TRzToolButton *BtnVentaFax;
	TRzSpacer *RzSpacer15;
	TfrxTIFFExport *frxTIFFExport1;
	TRzToolButton *RzToolButton4;
	TRzSpacer *RzSpacer16;
	TADOQuery *Qw;
	TfrxSimpleTextExport *frxSimpleTextExport1;
	TfrxJPEGExport *frxJPEGExport1;
	TfrxBMPExport *frxBMPExport1;
	TfrxGIFExport *frxGIFExport1;
	TTimer *TmRefresh;
	TRzToolButton *RzToolButton3;
	TRzSpacer *RzSpacer9;
	TfrxDBDataset *frxDSRasp;
	TADOQuery *QRasp;
	TfrxReport *frxRasp;
	TADOQuery *QRaspDetail;
	TAutoIncField *QRaspDetailIdn;
	TIntegerField *QRaspDetailPIdn;
	TIntegerField *QRaspDetailidRasp;
	TStringField *QRaspDetailiText;
	TIntegerField *QRaspDetailYear;
	TIntegerField *QRaspDetailidAdvProduceClass;
	TStringField *QRaspDetailiText_1;
	TStringField *QRaspDetailNameRaspDetail;
	TBCDField *QRaspDetailCostWithNDS;
	TBCDField *QRaspDetailCostWithoutNDS;
	TBCDField *QRaspDetailCostNDS;
	TBCDField *QRaspDetailProcNDS;
	TBCDField *QRaspDetailDiscount;
	TBCDField *QRaspDetailProcDiscount;
	TIntegerField *QRaspDetailNumbNE;
	TIntegerField *QRaspDetailfAdv;
	TIntegerField *QRaspDetailfType;
	TDateTimeField *QRaspDetailDateIns;
	TIntegerField *QRaspDetailIdIns;
	TDateTimeField *QRaspDetailDateMod;
	TIntegerField *QRaspDetailIdMod;
	TDateTimeField *QRaspDetailDateDel;
	TIntegerField *QRaspDetailIdDel;
	TIntegerField *QRaspDetailId24TypeProduceIndex;
	TfrxDBDataset *frxDSRaspDetail;
	TfrxReport *R0;
	TADOQuery *QCreateTmpTable;
	TIntegerField *QCreateTmpTableIdn;
	TStringField *QCreateTmpTableComplectsOrAdvProduceClass;
	TStringField *QCreateTmpTableNameRaspDetail;
	TBCDField *QCreateTmpTableCostWithNDS;
	TBCDField *QCreateTmpTableCostWithoutNDS;
	TBCDField *QCreateTmpTableCostOneWithNDS;
	TBCDField *QCreateTmpTableCostOneWithoutNDS;
	TStringField *QCreateTmpTableTNumbNE;
	TIntegerField *QCreateTmpTablefType;
	TStringField *QCreateTmpTableTfAdv;
	TfrxReport *frxRaspAlter;
	TfrxDBDataset *frxDSRaspDetailAlter;
	TADOQuery *QRaspDetailAlter;
	TfrxReport *frxRaspAlter2;
	TfrxDBDataset *frxDSRaspDetailAlter2;
	TADOQuery *QRaspDetailAlter2;
	TIntegerField *QRaspDetailAlterIdn;
	TStringField *QRaspDetailAlterComplectName;
	TStringField *QRaspDetailAlterProduceName;
	TStringField *QRaspDetailAlterNameRaspDetail;
	TBCDField *QRaspDetailAlterCostWithNDS;
	TBCDField *QRaspDetailAlterCostWithoutNDS;
	TBCDField *QRaspDetailAlterCostComplectWithNDS;
	TBCDField *QRaspDetailAlterCostomplectWithoutNDS;
	TBCDField *QRaspDetailAlterCostMINWithNDS;
	TBCDField *QRaspDetailAlterCostMINWithoutNDS;
	TStringField *QRaspDetailAlterTNumbNE;
	TIntegerField *QRaspDetailAlterfAdvMIN;
	TStringField *QRaspDetailAlterTfAdv;
	TIntegerField *QRaspDetailAlterProcNDS;
	TIntegerField *QRaspDetailAlterPIdn;
	TIntegerField *QRaspDetailAlterfType;
	TIntegerField *QRaspIdUserBM;
	TIntegerField *QRaspId24NameStatus;
	TIntegerField *QRaspId256TypeRasp;
	TIntegerField *QRaspId24City;
	TDateTimeField *QRaspDateRasp;
	TStringField *QRaspNumbRaspName;
	TMemoField *QRaspRaspNameRTF;
	TMemoField *QRaspContentTargetRTF;
	TIntegerField *QRaspId24NameStatuser;
	TMemoField *QRaspContentRTF;
	TIntegerField *QRaspEmplDol;
	TIntegerField *QRaspIdEmplUsers;
	TStringField *QRaspRaspName;
	TDateTimeField *QRaspDateIns;
	TIntegerField *QRaspIdIns;
	TDateTimeField *QRaspDateMod;
	TIntegerField *QRaspIdMod;
	TDateTimeField *QRaspDateDel;
	TIntegerField *QRaspIdDel;
	TIntegerField *QRaspVidRasp;
	TStringField *QRaspFamIO;
	TStringField *QRaspauFamIO;
	TStringField *QRaspiText;
	TStringField *QRaspiText_1;
	TStringField *QRaspiText_2;
	TStringField *QRaspFamIO_1;
	TWideStringField *QRaspDol;
	TStringField *QRaspTmpGetDate;
	TStringField *QRaspauFamIO_1;
	TADOQuery *QEmplUserDol;
	TAutoIncField *QEmplUserDolIdn;
	TStringField *QEmplUserDolFamIO;
	TWideStringField *QEmplUserDolMail;
	TIntegerField *QEmplUserDolfTurn;
	TfrxDBDataset *frxDSEmplUserDol;
	TfrxReport *frxEmplUserDol;
	TfrxReport *frxEmplUserDolRass;
	TfrxDBDataset *frxDSEmplUserDolRass;
	TADOQuery *QEmplUserDolRass;
	TAutoIncField *AutoIncField1;
	TStringField *StringField1;
	TWideStringField *WideStringField1;
	TIntegerField *IntegerField1;
	TWideStringField *WideStringField2;
	TIntegerField *QEmplUserDolfResault;
	TDateTimeField *QEmplUserDolDateMod;
	TADOQuery *QInfoMailList;
	TMemoField *QInfoMailListMailText;
	TfrxReport *frxRasp_Comments;
	TfrxDBDataset *frxDBRasp_Comments;
	TADOQuery *QRasp_Comments;
	TStringField *QRasp_CommentsTypeCost;
	TStringField *QRasp_CommentsStringField;
	TStringField *QRasp_CommentsStringField2;
	TDateTimeField *QRasp_CommentsDateTimeField;
	TStringField *QRasp_CommentsStringField3;
	TStringField *QRasp_CommentsStringField4;
	TStringField *QRasp_CommentsProduce;
	TIntegerField *QRasp_CommentsPrognozOtklik;
	TBCDField *QRasp_CommentsFactorCost;
	TBCDField *QRasp_CommentsHalfReceivedProfit;
	TBCDField *QRasp_CommentsAllCost;
	TBCDField *QRasp_CommentsPrognozProfit;
	TBCDField *QRasp_CommentsAllProfit;
	TStringField *QRasp_CommentsauFamIO;
	TDateTimeField *QRasp_CommentsDateTimeField2;
	TStringField *QRasp_CommentsStringField5;
	TStringField *QRasp_CommentsStringField6;
	TStringField *QRasp_CommentsStringField7;
	TIntegerField *QRasp_CommentsTypeC;
	TStringField *QRasp_CommentsStringField8;
	TStringField *QRasp_CommentsStringField9;
	TBCDField *QRaspDetailAlterCostBaseWithNDS;
	TBCDField *QRaspDetailAlterCostBudjetWithNDS;
	TStringField *QEmplUserDolDol;
	TAutoIncField *QRaspIdn;
	TStringField *QRaspauPhoneUser;
	TDateTimeField *QEmplUserDolDateLastSheet;
	TADOQuery *QEmplUserDolSheet;
	TAutoIncField *QEmplUserDolSheetIdn;
	TStringField *QEmplUserDolSheetFamIO;
	TWideStringField *QEmplUserDolSheetMail;
	TIntegerField *QEmplUserDolSheetfTurn;
	TWideStringField *QEmplUserDolSheetDol;
	TStringField *QEmplUserDolNote;
	TfrxDBDataset *frxDSNE;
	TADOQuery *QNE;
	TIntegerField *QNENumbNE;
	TIntegerField *QNEYear;
	TBCDField *QNECostWithNDS;
	TBCDField *QNECostWithoutNDS;
	TBCDField *QNECostNDS;
	TBCDField *QNEProcNDS;
	TBCDField *QNEDiscount;
	TBCDField *QNEProcDiscount;
	TBCDField *QNECostWithNDS_1;
	TBCDField *QNECostWithoutNDS_1;
	TBCDField *QNECostNDS_1;
	TBCDField *QNEProcNDS_1;
	TBCDField *QNEDiscount_1;
	TBCDField *QNEProcDiscount_1;
	TStringField *QRaspDetailAlterCostOneWithoutNDS;
	TStringField *QRaspDetailAlterfAdv;
	TAutoIncField *QRaspIdSeller;
	TStringField *QRaspShortName;
	TStringField *QRaspLongName;
	TStringField *QRaspDetailAlterTypeProduceIndex;
	TStringField *QNEItemIdAxapta;
	TStringField *QNENameRaspDetail;
	TStringField *QNENameRaspDetail_1;
	TStringField *QNENameRaspDetail2;
	TIntegerField *QNEColPI;
	TIntegerField *QNEColPI_1;
	TADOQuery *DiscQuer;
	TWideStringField *DiscQuerTermsDiscount;
	TfrxDBDataset *frxDSDisc;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall RzToolButton8Click(TObject *Sender);
	void __fastcall BtnPrintClick(TObject *Sender);
	void __fastcall RzToolButton7Click(TObject *Sender);
	void __fastcall BtnSaveClick(TObject *Sender);
	void __fastcall SpeedButton3Click(TObject *Sender);
	void __fastcall SpeedButton2Click(TObject *Sender);
	void __fastcall BtnZoomInClick(TObject *Sender);
	void __fastcall BtnZoomOutClick(TObject *Sender);
	void __fastcall BtnViewClick(TObject *Sender);
	void __fastcall RzToolButton1Click(TObject *Sender);
	void __fastcall RzToolButton2Click(TObject *Sender);
	void __fastcall BtnNextRecordClick(TObject *Sender);
	void __fastcall BtnLastRecordClick(TObject *Sender);
	void __fastcall R0GetValue(const UnicodeString VarName, Variant &Value);
	void __fastcall BtnVentaFaxClick(TObject *Sender);
	void __fastcall RzToolButton4Click(TObject *Sender);
	void __fastcall R2GetValue(const UnicodeString VarName, Variant &Value);
	void __fastcall RzToolButton3Click(TObject *Sender);
	void __fastcall TmRefreshTimer(TObject *Sender);
	void __fastcall QRaspDateRaspGetText(TField *Sender, AnsiString &Text,
          bool DisplayText);
	void __fastcall frxRaspGetValue(const UnicodeString VarName, Variant &Value);
	void __fastcall frxEmplUserDolGetValue(const UnicodeString VarName,
          Variant &Value);
	void __fastcall frxEmplUserDolRassGetValue(const UnicodeString VarName,
          Variant &Value);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
int OpenForm,IdAccountPrint, flShow;
AnsiString VFileName;//Имя файла при промежуточном преобразовании из шаблоша RTF в ДОГОВОР.RTF
AnsiString VAuthor; //Имя
AnsiString VDescription;//Имя
AnsiString VName;//Имя

TfrxReport *fReport; //


public:		// User declarations
bool flEnd;//Флаг завершения генерации страниц.
bool fGenerationPDF;//Флаг вызова формы для генерации PDF файла.
int fType; //Код типа письма 1-Согласование, 2-Рассылка
struct rMail rMail;//Струкутра текста рассылки.
void __fastcall OpenFormAccountPrint(int IdFrom, int IdAccount,int Show);
	__fastcall TFrAccountPrint(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrAccountPrint *FrAccountPrint;
extern char flFrAccountPrint;
//---------------------------------------------------------------------------
#endif
