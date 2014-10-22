object dmRaspDetail: TdmRaspDetail
  OldCreateOrder = False
  Height = 427
  Width = 637
  object QRaspDetail: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    LockType = ltReadOnly
    Parameters = <
      item
        Name = 'D0'
        Attributes = [paSigned, paNullable]
        DataType = ftInteger
        Precision = 10
        Size = 4
        Value = 1
      end
      item
        Name = 'D1'
        Attributes = [paSigned]
        DataType = ftInteger
        Precision = 10
        Size = 4
        Value = 1
      end>
    SQL.Strings = (
      'SELECT A.Idn'
      '      ,A.PIdn'
      '      ,A.idRasp'
      '      ,A.Id24TypeProduceIndex'
      '      ,B.iText'
      '      ,A.Year'
      '      ,A.idAdvProduceClass'
      '      ,D.iText'
      '      ,A.NameRaspDetail'
      '      ,A.CostWithNDS'
      '      ,A.CostWithoutNDS'
      '      ,A.CostNDS'
      '      ,A.ProcNDS'
      '      ,A.Discount'
      '      ,A.ProcDiscount'
      '      ,A.NumbNE'
      '      ,A.fAdv'
      '      ,A.fAdvMIN'
      '      ,A.fType'
      '      ,A.DateIns'
      '      ,A.IdIns'
      '      ,A.DateMod'
      '      ,A.IdMod'
      '      ,A.DateDel'
      '      ,A.IdDel'
      '      ,A.CostMINWithNDS'
      '      ,A.CostMINWithoutNDS'
      '      ,A.CostBaseWithNDS'
      '      ,A.CostBudjetWithNDS'
      '      ,A.DateJobMIN'
      '      ,A.DateJobMAX'
      '      ,A.KanalSale'
      '      ,isnull(A.fNoNDS,0) fNoNDS '
      '      ,A.AlterName'
      '      ,A.NoteName'
      '      ,isnull(A.CompositionOfPI,0) as CompositionOfPI'
      '      ,DateEventStart'
      '      ,DateEventEnd'
      '      ,ColPI'
      '  FROM bm_RaspDetail A '
      '  LEFT JOIN spl_LbText24 B on B.Idn=A.Id24TypeProduceIndex'
      '  LEFT JOIN all_AdvProduceClass C on C.idn=A.idAdvProduceClass'
      ' LEFT JOIN spl_LbText512 D ON D.Idn=C.id512Name '
      ''
      'WHERE A.idRasp=:D0 and A.DateDel is null AND A.Idn=:D1;')
    Left = 16
    Top = 14
  end
  object QTmpQuery: TADOQuery
    Connection = MainForm.CallCenterConnect
    Parameters = <>
    Left = 80
    Top = 16
  end
  object dsQueryPI: TDataSource
    AutoEdit = False
    DataSet = QueryPI
    Left = 512
    Top = 85
  end
  object QueryPI: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    Parameters = <>
    Prepared = True
    SQL.Strings = (
      'select iText from spl_LbText where iLvl = 1540 order by iValue')
    Left = 584
    Top = 80
    object QueryPIiText: TWideMemoField
      FieldName = 'iText'
      BlobType = ftWideMemo
    end
  end
  object QBlock: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'declare @inI int ;'
      'SET @inI=256'
      ''
      ''
      'DECLARE @idRD AS int     '
      'SET @idRD = 874662  '
      'SELECT pb.idn,'
      'bc.IdFAdv, '
      '       '
      
        '   CASE WHEN pb.BlockType = 0 THEN '#39#209#238#241#242#224#226#237#238#233#39' ELSE '#39#193#224#231#238#226#251#233#39' EN' +
        'D AS bType,         '
      '   pc.CostWitnDiscount, bc.Description, '
      
        '   L1.iText AS BlockName, L2.iText AS BlockTerm, L3.iText AS Blo' +
        'ckDesc, P.iText AS iPI,       '
      '   ISNULL ((SELECT rl.Choice                    '
      
        '            FROM dbo.ProduceBlockRaspLink AS rl                 ' +
        '  '
      '            WHERE rl.IdRaspDetail = @idRD                     '
      '              AND pb.Idn = rl.IdBlock), 0) AS ch,        '
      '  (SELECT rl.Idn              '
      '   FROM dbo.ProduceBlockRaspLink AS rl          '
      '   WHERE rl.IdRaspDetail = @idRD            '
      '     AND pb.Idn = rl.IdBlock) AS LinkIdn    '
      '   FROM dbo.ProduceBlock AS pba   '
      '     left JOIN dbo.ProduceBlock AS pb ON pb.idn=pba.idn'
      
        '     LEFT OUTER JOIN dbo.ProduceBlockCost AS pc ON pc.BlockId = ' +
        'pb.idn         '
      
        '     LEFT OUTER JOIN dbo.ProduceBlockCycle AS bc ON bc.idn = pc.' +
        'CycleId AND bc.IdFAdv = 0        '
      
        '     LEFT OUTER JOIN dbo.spl_LbText AS L1 ON (L1.Idn = pb.idMBlo' +
        'ckName)              '
      
        '     LEFT OUTER JOIN dbo.spl_LbText AS L2 ON (L2.Idn = pb.idMBlo' +
        'ckDesc)         '
      
        '     LEFT OUTER JOIN dbo.spl_LbText AS L3 ON (L3.Idn = pb.idMBlo' +
        'ckTerm)'
      
        '     LEFT OUTER JOIN dbo.spl_LbText AS P ON (pba.CompositionOfPI' +
        ' = P.iValue and P.iLvl = 1540)       '
      '     '
      'WHERE pba.DateDel IS NULL '
      'and (pba.CompositionOfPI & @inI)  <> 0 ')
    Left = 584
    Top = 19
    object QBlockidn: TAutoIncField
      FieldName = 'idn'
      ReadOnly = True
    end
    object QBlockBlockName: TWideMemoField
      FieldName = 'BlockName'
      BlobType = ftWideMemo
    end
    object QBlockBlockTerm: TWideMemoField
      FieldName = 'BlockTerm'
      BlobType = ftWideMemo
    end
    object QBlockBlockDesc: TWideMemoField
      FieldName = 'BlockDesc'
      BlobType = ftWideMemo
    end
    object QBlockCostWitnDiscount: TBCDField
      FieldName = 'CostWitnDiscount'
      DisplayFormat = '### ##0.00'#1088'.'
      Precision = 19
    end
    object QBlockDescription: TWideStringField
      FieldName = 'Description'
      Size = 100
    end
    object QBlockch: TBooleanField
      FieldName = 'ch'
      ReadOnly = True
    end
    object QBlockLinkIdn: TIntegerField
      FieldName = 'LinkIdn'
      ReadOnly = True
    end
    object QBlockbType: TStringField
      FieldName = 'bType'
      ReadOnly = True
      Size = 9
    end
    object QBlockiPI: TWideMemoField
      FieldName = 'iPI'
      BlobType = ftWideMemo
    end
  end
  object dsBlock: TDataSource
    DataSet = QBlock
    Left = 512
    Top = 19
  end
end
