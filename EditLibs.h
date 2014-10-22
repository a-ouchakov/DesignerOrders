//---------------------------------------------------------------------------

#ifndef EditLibsH
#define EditLibsH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzEdit.hpp"
#include "RzPanel.hpp"
#include <ExtCtrls.hpp>
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
#include <DB.hpp>
#include <ADODB.hpp>
#include <ImgList.hpp>
#include "cxLookAndFeelPainters.hpp"
#include "cxLookAndFeels.hpp"
#include "dxSkinsCore.hpp"
#include "dxSkinscxPCPainter.hpp"
#include "dxSkinsDefaultPainters.hpp"
#include "dxSkinBlack.hpp"
#include "dxSkinBlue.hpp"
#include "dxSkinBlueprint.hpp"
#include "dxSkinCaramel.hpp"
#include "dxSkinCoffee.hpp"
#include "dxSkinDarkRoom.hpp"
#include "dxSkinDarkSide.hpp"
#include "dxSkinDevExpressDarkStyle.hpp"
#include "dxSkinDevExpressStyle.hpp"
#include "dxSkinFoggy.hpp"
#include "dxSkinGlassOceans.hpp"
#include "dxSkinHighContrast.hpp"
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
#include "dxSkinSevenClassic.hpp"
#include "dxSkinSharp.hpp"
#include "dxSkinSharpPlus.hpp"
#include "dxSkinSilver.hpp"
#include "dxSkinSpringTime.hpp"
#include "dxSkinStardust.hpp"
#include "dxSkinSummer2008.hpp"
#include "dxSkinTheAsphaltWorld.hpp"
#include "dxSkinValentine.hpp"
#include "dxSkinVS2010.hpp"
#include "dxSkinWhiteprint.hpp"
#include "dxSkinXmas2008Blue.hpp"
#include "cxNavigator.hpp"
//---------------------------------------------------------------------------
class TFrEditLibs : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RzPanel1;
	TRzToolButton *btInsRaspDetail;
	TRzSpacer *RzSpacer5;
	TRzToolButton *btClose;
	TRzSpacer *RzSpacer6;
	TRzGroupBox *RzGroupBox1;
	TRzEdit *edT256Name;
	TcxGrid *cxGridEmplUser;
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
	TADOQuery *Qw;
	TADOQuery *QWTable;
	TImageList *ImageList1;
	TDataSource *DSWTable;
	TStringField *QWTableiText;
	TcxGridDBBandedColumn *cxGridTableViewEmplUseriText;
	void __fastcall btInsRaspDetailClick(TObject *Sender);
	void __fastcall btCloseClick(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
private:	// User declarations
public:		// User declarations
	__fastcall TFrEditLibs(TComponent* Owner);
	AnsiString  vsSQLQw;
	int fType; //Флаг типа поля 0-Не определено; 1- Видом скидки; 2-Специальнfz акциz(краткосрочная) (В зависимости от типпа цены(Скидка стандартная\Скидка расчетная)
               //3-цель акции; 4-Группа клиентов, учавствующих в акции; 5-Канал продвижения.
};
//---------------------------------------------------------------------------
extern PACKAGE TFrEditLibs *FrEditLibs;
//---------------------------------------------------------------------------
#endif
