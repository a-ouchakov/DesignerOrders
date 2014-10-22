//---------------------------------------------------------------------------

#ifndef dmEditRaspDetailH
#define dmEditRaspDetailH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TdmRaspDetail : public TDataModule
{
__published:	// IDE-managed Components
  // ��������� ��� �������
  TADOQuery         *QRaspDetail;
  TADOQuery         *QTmpQuery;
  TDataSource       *dsQueryPI;
  TADOQuery         *QueryPI;
  TWideMemoField    *QueryPIiText;
  // QBlock
  TADOQuery         *QBlock;
  TAutoIncField     *QBlockidn;
  TWideMemoField    *QBlockBlockName;
  TWideMemoField    *QBlockBlockTerm;
  TWideMemoField    *QBlockBlockDesc;
  TBCDField         *QBlockCostWitnDiscount;
  TWideStringField  *QBlockDescription;
  TBooleanField     *QBlockch;
  TIntegerField     *QBlockLinkIdn;
  TStringField      *QBlockbType;
  TWideMemoField    *QBlockiPI;
  TDataSource       *dsBlock;
  //
private:	// User declarations
  void        __fastcall OpenTmpQuery             (AnsiString sql);
public:		// User declarations
  TField*     __fastcall RaspDetailField          (AnsiString fieldName);
  AnsiString  __fastcall RaspDetailValue          (AnsiString fieldName);
              __fastcall TdmRaspDetail            (TComponent* Owner);
  bool        __fastcall RaspDetailCheckComplect  (void);
  TField*     __fastcall TmpQueryField            (AnsiString fieldName);
  AnsiString  __fastcall TmpQueryValue            (AnsiString fieldName);
  void        __fastcall OpenPI                   (void);
  void        __fastcall getBlockList             (int        PI,
                                                   AnsiString PiDescr);
  AnsiString  __fastcall QBlockValue              (AnsiString fieldName);
  TField*     __fastcall QBlockField              (AnsiString fieldName);

	__property TADOQuery*  RaspDetail      = { read = QRaspDetail };
  __property TADOQuery*  TmpQuery        = { read = QTmpQuery };
};
//---------------------------------------------------------------------------
extern PACKAGE TdmRaspDetail *dmRaspDetail;
//---------------------------------------------------------------------------
#endif