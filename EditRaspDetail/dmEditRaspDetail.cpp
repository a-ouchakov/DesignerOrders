//---------------------------------------------------------------------------


#pragma hdrstop

#include "dmEditRaspDetail.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma resource "*.dfm"
//---------------------------------------------------------------------------
TdmRaspDetail *dmRaspDetail;
//---------------------------------------------------------------------------
static AnsiString sqlCompositionPi =
    "select iText from spl_LbText where iLvl = 1540 order by Idn";
//---------------------------------------------------------------------------
__fastcall TdmRaspDetail::TdmRaspDetail(TComponent* Owner)
  : TDataModule(Owner)
{
}
//------------------------------------------------------------------------------
void __fastcall TdmRaspDetail::OpenTmpQuery(AnsiString sql)
{
  if(TmpQuery->Active == true)
    TmpQuery->Close();
  TmpQuery->SQL->Add(sql);
  TmpQuery->Open();
}
//------------------------------------------------------------------------------
bool __fastcall TdmRaspDetail::RaspDetailCheckComplect()
{
  int RecCount;
  String q1 =
    " SELECT idn "
    "   FROM dbo.bm_RaspDetail "
    "     WHERE Idn = "     + IntToStr(QRaspDetail->FieldByName("PIdn")->AsInteger) + String(" "
    "       AND idRasp = ") + IntToStr(QRaspDetail->FieldByName("idRasp")->AsInteger) + String(" "
    "       AND fType = 1 "
    "       AND DateDel IS NULL");

  OpenTmpQuery(q1);
  RecCount = TmpQuery->RecordCount;
  TmpQuery->Close();
  return RecCount != 0;
}
//---------------------------------------------------------------------------
AnsiString __fastcall TdmRaspDetail::RaspDetailValue(AnsiString fieldName)
{
  return RaspDetail->FieldByName(fieldName)->AsString;
}
//---------------------------------------------------------------------------
TField* __fastcall TdmRaspDetail::RaspDetailField(AnsiString fieldName)
{
  return RaspDetail->FieldByName(fieldName);
}
//---------------------------------------------------------------------------
 TField* __fastcall TdmRaspDetail::TmpQueryField(AnsiString fieldName)
 {
  return TmpQuery->FieldByName(fieldName);
 }
//---------------------------------------------------------------------------
AnsiString __fastcall TdmRaspDetail::TmpQueryValue(AnsiString fieldName)
{
  return TmpQuery->FieldByName(fieldName)->AsString;
}
//---------------------------------------------------------------------------
void __fastcall TdmRaspDetail::OpenPI(void)
{
  OpenTmpQuery(sqlCompositionPi);
}
//---------------------------------------------------------------------------
AnsiString  __fastcall TdmRaspDetail::QBlockValue(AnsiString fieldName)
{
  return QBlock->FieldByName(fieldName)->AsString;
}
//---------------------------------------------------------------------------
TField*     __fastcall TdmRaspDetail::QBlockField(AnsiString fieldName)
{
  return QBlock->FieldByName(fieldName);
}
//---------------------------------------------------------------------------
void __fastcall TdmRaspDetail::getBlockList(int PI, AnsiString PiDescr)
{
  String sql =
    " declare @inI int ; "
    " SET @inI = " + IntToStr(PI) + " ;"
    " DECLARE @idRD AS int ; "
    " SET @idRD = " + RaspDetailValue("Idn") +
    " SELECT pb.idn, bc.IdFAdv, "
    "   CASE WHEN pb.BlockType = 0 THEN '���������' ELSE '�������' END AS bType, "
    "   pc.CostWitnDiscount, bc.Description, "
    "   L1.iText AS BlockName, L2.iText AS BlockTerm, L3.iText AS BlockDesc, "
    "   P.iText AS iPI, "
    "   ISNULL ((SELECT rl.Choice "
    "             FROM dbo.ProduceBlockRaspLink AS rl "
    "             WHERE rl.IdRaspDetail = @idRD "
    "              AND pb.Idn = rl.IdBlock), 0) AS ch, "
    "  (SELECT rl.Idn "
    "   FROM dbo.ProduceBlockRaspLink AS rl "
    "   WHERE rl.IdRaspDetail = @idRD "
    "     AND pb.Idn = rl.IdBlock) AS LinkIdn "
    "   FROM dbo.ProduceBlock AS pba "
    "     left JOIN dbo.ProduceBlock AS pb ON pb.idn=pba.idn "
    "     LEFT OUTER JOIN dbo.ProduceBlockCost AS pc ON pc.BlockId = pb.idn "
    "     LEFT OUTER JOIN dbo.ProduceBlockCycle AS bc ON bc.idn = pc.CycleId AND bc.IdFAdv = 0 "
    "     LEFT OUTER JOIN dbo.spl_LbText AS L1 ON (L1.Idn = pb.idMBlockName) "
    "     LEFT OUTER JOIN dbo.spl_LbText AS L2 ON (L2.Idn = pb.idMBlockDesc) "
    "     LEFT OUTER JOIN dbo.spl_LbText AS L3 ON (L3.Idn = pb.idMBlockTerm) "
    "     LEFT OUTER JOIN dbo.spl_LbText AS P ON (pba.CompositionOfPI = P.iValue and P.iLvl = 1540) "
    " WHERE pba.DateDel IS NULL and (pba.CompositionOfPI & @inI)  <> 0 "
    " and bc.Description = '" + PiDescr + "' ";
	  //������ �������� ��� ����� (����������), ����������� � ������������ �������� � ������ ������� ��������
/*	  String q1 = "DECLARE @idRD AS int "
				  "    SET @idRD = " + RaspDetailValue("Idn") + String(" "
				  " SELECT pb.idn, e.id512Name as ProduceIdn, L.iText AS Product, bc.IdFAdv, "
				  "        CASE WHEN BlockType = 0 THEN '���������' ELSE '�������' END AS bType, "
				  "        pc.idn AS IdCost, pc.CostWitnDiscount, bc.Description, L1.iText AS BlockName, L2.iText AS BlockTerm, L3.iText AS BlockDesc, "
				  "        ISNULL ((SELECT rl.Choice "
				  "                   FROM dbo.ProduceBlockRaspLink AS rl "
				  "                  WHERE rl.IdRaspDetail = @idRD "
				  "                    AND pb.Idn = rl.IdBlock), 0) AS ch, "
				  "       (SELECT rl.Idn    "
				  "          FROM dbo.ProduceBlockRaspLink AS rl "
				  "         WHERE rl.IdRaspDetail = @idRD "
				  "           AND pb.Idn = rl.IdBlock) AS LinkIdn "
				  "   FROM dbo.ProduceBlock AS pb "
				  "        LEFT OUTER JOIN dbo.ProduceBlockCost AS pc ON pc.BlockId = pb.idn "
				  "        LEFT OUTER JOIN dbo.ProduceBlockCycle AS bc ON bc.idn = pc.CycleId "
				  "        LEFT OUTER JOIN dbo.ProduceBlockLink AS blp ON blp.IdBlock=pb.idn "
				  "        LEFT OUTER JOIN dbo.spl_LbText AS L1 ON (L1.Idn = pb.idMBlockName) " //added by R.Perkatov 2014-03-31
				  "        LEFT OUTER JOIN dbo.spl_LbText AS L2 ON (L2.Idn = pb.idMBlockDesc) " //added by R.Perkatov 2014-03-31
				  "        LEFT OUTER JOIN dbo.spl_LbText AS L3 ON (L3.Idn = pb.idMBlockTerm) " //added by R.Perkatov 2014-03-31
				  "        LEFT OUTER JOIN dbo.all_AdvProduceClass AS e ON e.idn = blp.IdProduct "
				  "        LEFT OUTER JOIN dbo.spl_LbText512 AS L ON l.idn = e.id512Name "
				  "  WHERE pb.DateDel IS NULL "
				  "    AND L.iText = '") + edProduce->Text + String("' "
				  "    AND bc.IdFAdv = ") + cbfAdv->ItemIndex + String(" ");
 */
    if(QBlock->Active == true)
      QBlock->Close();
	  QBlock->SQL->Clear();
	  QBlock->SQL->Add(sql);
	  QBlock->Open();
}
//---------------------------------------------------------------------------
