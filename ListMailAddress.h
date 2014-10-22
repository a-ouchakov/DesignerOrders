//---------------------------------------------------------------------------

#ifndef ListMailAddressH
#define ListMailAddressH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzChkLst.hpp"
#include "RzCmboBx.hpp"
#include "RzEdit.hpp"
#include "RzLabel.hpp"
#include "RzLstBox.hpp"
#include "RzPanel.hpp"
#include "RzSplit.hpp"
#include "RzTabs.hpp"
#include <ADODB.hpp>
#include <DB.hpp>
#include <ExtCtrls.hpp>
#include <ImgList.hpp>
#include <Mask.hpp>
#include "cxClasses.hpp"
#include "cxControls.hpp"
#include "cxCurrencyEdit.hpp"
#include "cxCustomData.hpp"
#include "cxData.hpp"
#include "cxDataStorage.hpp"
#include "cxDBData.hpp"
#include "cxEdit.hpp"
#include "cxFilter.hpp"
#include "cxGraphics.hpp"
#include "cxGrid.hpp"
#include "cxGridBandedTableView.hpp"
#include "cxGridCustomTableView.hpp"
#include "cxGridCustomView.hpp"
#include "cxGridDBBandedTableView.hpp"
#include "cxGridDBTableView.hpp"
#include "cxGridLevel.hpp"
#include "cxGridTableView.hpp"
#include "cxStyles.hpp"
#include "cxImageComboBox.hpp"
#include "cxCheckBox.hpp"
#include "cxLookAndFeelPainters.hpp"
#include "cxLookAndFeels.hpp"
#include "dxSkinsCore.hpp"
#include "dxSkinscxPCPainter.hpp"
#include "dxSkinsDefaultPainters.hpp"
#include "dxSkinBlack.hpp"
#include "dxSkinBlue.hpp"
#include "dxSkinCaramel.hpp"
#include "dxSkinCoffee.hpp"
#include "dxSkinDarkRoom.hpp"
#include "dxSkinDarkSide.hpp"
#include "dxSkinFoggy.hpp"
#include "dxSkinGlassOceans.hpp"
#include "dxSkiniMaginary.hpp"
#include "dxSkinLilian.hpp"
#include "dxSkinLiquidSky.hpp"
#include "dxSkinLondonLiquidSky.hpp"
#include "dxSkinMcSkin.hpp"
#include "dxSkinMoneyTwins.hpp"
#include "dxSkinOffice2007Black.hpp"
#include "dxSkinOffice2007Blue.hpp"
#include "dxSkinOffice2007Green.hpp"
#include "dxSkinOffice2007Pink.hpp"
#include "dxSkinOffice2007Silver.hpp"
#include "dxSkinOffice2010Black.hpp"
#include "dxSkinOffice2010Blue.hpp"
#include "dxSkinOffice2010Silver.hpp"
#include "dxSkinPumpkin.hpp"
#include "dxSkinSeven.hpp"
#include "dxSkinSharp.hpp"
#include "dxSkinSilver.hpp"
#include "dxSkinSpringTime.hpp"
#include "dxSkinStardust.hpp"
#include "dxSkinSummer2008.hpp"
#include "dxSkinValentine.hpp"
#include "dxSkinXmas2008Blue.hpp"
#include "dxSkinBlueprint.hpp"
#include "dxSkinDevExpressDarkStyle.hpp"
#include "dxSkinDevExpressStyle.hpp"
#include "dxSkinHighContrast.hpp"
#include "dxSkinSevenClassic.hpp"
#include "dxSkinSharpPlus.hpp"
#include "dxSkinTheAsphaltWorld.hpp"
#include "dxSkinVS2010.hpp"
#include "dxSkinWhiteprint.hpp"
//---------------------------------------------------------------------------
class TFrListMailAddress : public TForm
{
__published:	// IDE-managed Components
	TADOQuery *QFrs;
	TImageList *ImageList1;
	TRzPageControl *RzPageControl1;
	TRzTabSheet *TabSheet1;
	TRzSplitter *RzSplitter1;
	TRzSplitter *RzSplitter2;
	TRzPanel *RzPanel2;
	TRzToolButton *RzToolButton1;
	TRzSpacer *RzSpacer1;
	TRzToolButton *RzToolButton2;
	TRzSpacer *RzSpacer2;
	TRzSpacer *RzSpacer3;
	TRzLabel *RzLabel1;
	TRzCheckList *clEmplUsers;
	TRzPanel *RzPanel1;
	TRzToolButton *btInsRaspDetail;
	TRzSpacer *RzSpacer5;
	TRzGroupBox *RzGroupBox6;
	TRzComboBox *cbGroupMail;
	TRzBitBtn *btGroupMailClear;
	TRzBitBtn *btGroupMailDel;
	TRzPanel *RzPanel3;
	TRzToolButton *RzToolButton3;
	TRzSpacer *RzSpacer4;
	TRzToolButton *RzToolButton4;
	TRzSpacer *RzSpacer6;
	TRzGroupBox *RzGroupBox5;
	TcxGrid *cxGridEmplUserDol;
	TcxGridDBColumn *cxGridDBColumn1;
	TcxGridDBColumn *cxGridDBColumn2;
	TcxGridDBColumn *cxGridDBColumn3;
	TcxGridDBColumn *cxGridDBColumn4;
	TcxGridDBColumn *cxGridDBColumn5;
	TcxGridDBColumn *cxGridDBColumn6;
	TcxGridDBColumn *cxGridDBColumn7;
	TcxGridDBColumn *cxGridDBColumn8;
	TcxGridDBBandedTableView *cxGridTableViewEmplUser;
	TcxGridLevel *cxGridLevel1;
	TADOQuery *QEmplUsers;
	TDataSource *DSEmplUsers;
	TADOQuery *QEmplUserDol;
	TDataSource *DSEmplUserDol;
	TADOQuery *Qw;
	TADOQuery *Qw2;
	TAutoIncField *QEmplUserDolIdn;
	TStringField *QEmplUserDolFamIO;
	TWideStringField *QEmplUserDolMail;
	TIntegerField *QEmplUserDolfTurn;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserFamIO;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserMail;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserfTurn;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserDol;
	TTimer *TmEmplUserDol;
	TIntegerField *QEmplUserDolIdUser;
	TcxStyleRepository *cxStyleRepository1;
	TcxStyle *cxStyle1;
	TDateTimeField *QEmplUserDolStarDate;
	TDateTimeField *QEmplUserDolEndDate;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserfHoliday;
	TIntegerField *QEmplUserDolfHoliday;
	TTimer *TmEmplUsers;
	TRzGroupBox *RzGroupBox1;
	TRzEdit *edFindName;
	TRzMemo *edFindText;
	TIntegerField *QEmplUserDolfType;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserfType;
	TRzBitBtn *RzBitBtn1;
	TRzPanel *RzPanel4;
	TRzToolButton *RzToolButton5;
	TStringField *QEmplUserDolDol;
	TStringField *QEmplUserDolFamIO_2;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserColumn1;
	TIntegerField *QEmplUserDolfTurnSheet;
	TcxGridDBBandedColumn *cxGridTableViewEmplUserfTurnSheet;
	TRzToolButton *RzToolButton6;
	TRzSpacer *RzSpacer7;
	TRzPanel *RzPanel5;
	TRzToolButton *RzToolButton7;
	TIntegerField *QEmplUsersIDUser;
	TWideStringField *QEmplUsersTmpFamIO;
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall RzToolButton4Click(TObject *Sender);
	void __fastcall RzToolButton1Click(TObject *Sender);
	void __fastcall RzToolButton2Click(TObject *Sender);
	void __fastcall QEmplUserDolBeforePost(TDataSet *DataSet);
	void __fastcall cxGridTableViewEmplUserKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
	void __fastcall RzToolButton3Click(TObject *Sender);
	void __fastcall TmEmplUserDolTimer(TObject *Sender);
	void __fastcall btInsRaspDetailClick(TObject *Sender);
	void __fastcall cbGroupMailDropDown(TObject *Sender);
	void __fastcall cbGroupMailChange(TObject *Sender);
	void __fastcall btGroupMailClearClick(TObject *Sender);
	void __fastcall btGroupMailDelClick(TObject *Sender);
	void __fastcall QEmplUserDolFHolidayGetText(TField *Sender, AnsiString &Text,
          bool DisplayText);
	void __fastcall QEmplUserDolCalcFields(TDataSet *DataSet);
	void __fastcall TmEmplUsersTimer(TObject *Sender);
	void __fastcall edFindNameChange(TObject *Sender);
	void __fastcall cxGridTableViewEmplUserEditKeyDown(
          TcxCustomGridTableView *Sender, TcxCustomGridTableItem *AItem,
          TcxCustomEdit *AEdit, WORD &Key, TShiftState Shift);
	void __fastcall cxGridTableViewEmplUserfTypePropertiesChange(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall RzBitBtn1Click(TObject *Sender);
	void __fastcall RzToolButton5Click(TObject *Sender);
	void __fastcall RzToolButton6Click(TObject *Sender);
	void __fastcall RzToolButton7Click(TObject *Sender);
private:	// User declarations
AnsiString  vsSQLQw;
int viIdn ;//Для Location в QEmplUserDolIdn
TLocateOptions Opts;
Variant locvalues[1];
public:		// User declarations
	__fastcall TFrListMailAddress(TComponent* Owner);
	int fType;// Тип рассылки. 0-соглосование. 1-рассылка 2-cогласовнаие без утверждения
	int IdRasp;//Код распоряжения
	int IDUserP; //Код сотрудника из EmplUsers, имеющего право подписывать за данного

};
//---------------------------------------------------------------------------
extern PACKAGE TFrListMailAddress *FrListMailAddress;
//---------------------------------------------------------------------------
#endif
