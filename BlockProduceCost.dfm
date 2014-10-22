object FrBlockProduceCost: TFrBlockProduceCost
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  Caption = #1057#1090#1086#1080#1084#1086#1089#1090#1100' '#1073#1083#1086#1082#1072
  ClientHeight = 422
  ClientWidth = 370
  Color = clBtnFace
  Constraints.MaxHeight = 460
  Constraints.MaxWidth = 386
  Constraints.MinHeight = 460
  Constraints.MinWidth = 386
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  KeyPreview = True
  OldCreateOrder = False
  Position = poScreenCenter
  OnShow = FormShow
  DesignSize = (
    370
    422)
  PixelsPerInch = 96
  TextHeight = 13
  object RzPanel1: TRzPanel
    Left = 0
    Top = 396
    Width = 370
    Height = 26
    Align = alBottom
    TabOrder = 0
    object RzToolButton1: TRzToolButton
      AlignWithMargins = True
      Left = 8
      Top = 1
      Width = 174
      Height = 24
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      GradientColorStyle = gcsMSOffice
      ImageIndex = 15
      Images = FrBlockProduce.ImageList1
      ShowCaption = True
      UseToolbarButtonLayout = False
      UseToolbarButtonSize = False
      UseToolbarShowCaption = False
      UseToolbarVisualStyle = False
      VisualStyle = vsGradient
      Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
      OnClick = RzToolButton1Click
    end
    object btClose: TRzToolButton
      AlignWithMargins = True
      Left = 187
      Top = 1
      Width = 174
      Height = 24
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      GradientColorStyle = gcsMSOffice
      ImageIndex = 21
      Images = FrBlockProduce.ImageList1
      ShowCaption = True
      UseToolbarButtonLayout = False
      UseToolbarButtonSize = False
      UseToolbarShowCaption = False
      UseToolbarVisualStyle = False
      VisualStyle = vsGradient
      Caption = #1042#1099#1093#1086#1076
      OnClick = btCloseClick
    end
  end
  object RzGroupBox2: TRzGroupBox
    Left = 8
    Top = 8
    Width = 353
    Height = 50
    Caption = ' '#1055#1077#1088#1080#1086#1076#1080#1095#1085#1086#1089#1090#1100' '#1074#1099#1087#1091#1089#1082#1072' '#1073#1083#1086#1082#1072': '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    object PeriodBox: TComboBox
      Left = 8
      Top = 20
      Width = 310
      Height = 21
      Style = csDropDownList
      TabOrder = 0
      OnChange = PeriodBoxChange
      OnKeyDown = PeriodBoxKeyDown
    end
    object RzBitBtn1: TRzBitBtn
      Left = 320
      Top = 20
      Width = 25
      Height = 21
      Hint = #1054#1090#1082#1088#1099#1090#1100' '#1089#1087#1080#1089#1086#1082' '#1076#1086#1089#1090#1091#1087#1085#1099#1093' '#1087#1077#1088#1080#1086#1076#1086#1074' '#1087#1086#1076#1087#1080#1089#1082#1080
      Caption = 'RzBitBtn1'
      ParentShowHint = False
      ShowHint = True
      TabOrder = 1
      OnClick = RzBitBtn1Click
      Glyph.Data = {
        36030000424D3603000000000000360000002800000010000000100000000100
        18000000000000030000C40E0000C40E00000000000000000000FFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFF105C40105C40105C40FFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF156144
        33936B156144FFFFFF7474747474747474747474747474747474747474747474
        74747474FFFFFFFFFFFFFFFFFF1B67491B67491B6749FFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF2E7B5B
        2E7B5B2E7B5BFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFF34836164B497348361FFFFFF8C8C8C8C8C8C8C
        8C8C8C8C8C8C8C8C8C8C8C8C8C8C8C8C8C8C8C8CFFFFFFFFFFFFFFFFFF3B8A67
        3B8A673B8A67FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFF4D9D784D9D784D9D78FFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF52A27C
        91D2BF52A27CFFFFFFA1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1
        A1A1A1A1FFFFFFFFFFFFFFFFFF56A78056A78056A780FFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF}
    end
  end
  object RzGroupBox3: TRzGroupBox
    Left = 8
    Top = 60
    Width = 353
    Height = 93
    Caption = ' '#1057#1090#1086#1080#1084#1086#1089#1090#1100' '#1073#1083#1086#1082#1072': '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
    Transparent = True
    object RzLabel1: TRzLabel
      Left = 96
      Top = 28
      Width = 46
      Height = 13
      Caption = #1057#1082#1080#1076#1082#1072':'
      Transparent = True
    end
    object RzLabel2: TRzLabel
      Left = 40
      Top = 51
      Width = 170
      Height = 13
      Caption = #1057#1090#1086#1080#1084#1086#1089#1090#1100' '#1073#1083#1086#1082#1072' '#1089#1086' '#1089#1082#1080#1076#1082#1086#1081':'
    end
    object CostBlockEd: TEdit
      Left = 217
      Top = 20
      Width = 128
      Height = 21
      Alignment = taRightJustify
      MaxLength = 10
      TabOrder = 0
      Text = '0,00'
      OnChange = CostBlockEdChange
      OnExit = CostBlockEdExit
      OnKeyPress = CostBlockEdKeyPress
    end
    object BaseCheck: TRzCheckBox
      Left = 8
      Top = 27
      Width = 67
      Height = 15
      Caption = #1041#1072#1079#1086#1074#1072#1103
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clGray
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      State = cbUnchecked
      TabOrder = 1
      Transparent = True
      OnClick = BaseCheckClick
    end
    object DiscountEd: TRzSpinEdit
      Left = 146
      Top = 20
      Width = 65
      Height = 21
      Max = 100.000000000000000000
      TabOrder = 2
      OnChange = DiscountEdChange
    end
    object WithDiscEd: TRzEdit
      Left = 217
      Top = 43
      Width = 128
      Height = 21
      Text = '0,00'
      Alignment = taRightJustify
      MaxLength = 10
      TabOrder = 3
      OnChange = WithDiscEdChange
      OnExit = WithDiscEdExit
      OnKeyPress = WithDiscEdKeyPress
    end
    object ActivCheck: TRzCheckBox
      Left = 8
      Top = 72
      Width = 343
      Height = 15
      Caption = #1040#1082#1090#1080#1074#1085#1086#1089#1090#1100' '#1089#1090#1086#1080#1084#1086#1089#1090#1080' '#1073#1083#1086#1082#1072' ('#1080#1089#1087#1086#1083#1100#1079#1091#1077#1090#1089#1103' '#1076#1083#1103' '#1072#1082#1090#1091#1072#1083#1100#1085#1086#1089#1090#1080')'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clNavy
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      State = cbUnchecked
      TabOrder = 4
    end
  end
  object RzGroupBox4: TRzGroupBox
    Left = 8
    Top = 213
    Width = 353
    Height = 128
    Anchors = [akLeft, akRight, akBottom]
    Caption = #1055#1088#1080#1084#1077#1095#1072#1085#1080#1077' '#1082' '#1089#1090#1086#1080#1084#1086#1089#1090#1080' '#1073#1083#1086#1082#1072':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    object DescMemo: TRzMemo
      Left = 8
      Top = 26
      Width = 337
      Height = 96
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clNavy
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = [fsItalic]
      MaxLength = 255
      ParentFont = False
      TabOrder = 0
      OnChange = DescMemoChange
    end
  end
  object RzGroupBox1: TRzGroupBox
    Left = 8
    Top = 341
    Width = 174
    Height = 52
    Anchors = [akRight, akBottom]
    Caption = #1057#1086#1079#1076#1072#1085#1086':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clGray
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    object DBText1: TDBText
      Left = 10
      Top = 18
      Width = 41
      Height = 13
      AutoSize = True
      DataField = 'DateIns'
      DataSource = FrBlockProduceAddEd.CostData
    end
    object DBText2: TDBText
      Left = 10
      Top = 34
      Width = 41
      Height = 13
      AutoSize = True
      DataField = 'Creator'
      DataSource = FrBlockProduceAddEd.CostData
    end
  end
  object RzGroupBox5: TRzGroupBox
    Left = 187
    Top = 341
    Width = 174
    Height = 52
    Anchors = [akRight, akBottom]
    Caption = #1048#1079#1084#1077#1085#1077#1085#1086':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clGray
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
    object DBText3: TDBText
      Left = 10
      Top = 18
      Width = 41
      Height = 13
      AutoSize = True
      DataField = 'DateEdit'
      DataSource = FrBlockProduceAddEd.CostData
    end
    object DBText4: TDBText
      Left = 10
      Top = 34
      Width = 41
      Height = 13
      AutoSize = True
      DataField = 'Editor'
      DataSource = FrBlockProduceAddEd.CostData
    end
  end
  object RzGroupBox6: TRzGroupBox
    Left = 8
    Top = 160
    Width = 353
    Height = 50
    Caption = ' '#1050#1072#1085#1072#1083' '#1087#1088#1086#1076#1072#1078' '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 6
    object chcbKanalSale: TcxCheckComboBox
      AlignWithMargins = True
      Left = 8
      Top = 20
      Margins.Left = 1
      Margins.Top = 0
      Margins.Right = 1
      Margins.Bottom = 0
      AutoSize = False
      BeepOnEnter = False
      Properties.ShowEmptyText = False
      Properties.Items = <
        item
        end
        item
        end
        item
        end
        item
        end
        item
        end
        item
        end
        item
        end
        item
        end
        item
        end
        item
        end>
      Style.BorderColor = clBtnShadow
      Style.BorderStyle = ebsSingle
      Style.Color = clWhite
      Style.Edges = [bLeft, bTop, bRight, bBottom]
      Style.HotTrack = True
      Style.LookAndFeel.Kind = lfStandard
      Style.LookAndFeel.NativeStyle = False
      Style.Shadow = False
      Style.TransparentBorder = False
      Style.ButtonStyle = btsFlat
      Style.ButtonTransparency = ebtInactive
      StyleDisabled.BorderColor = clBtnShadow
      StyleDisabled.BorderStyle = ebsOffice11
      StyleDisabled.Color = clWindow
      StyleDisabled.LookAndFeel.Kind = lfStandard
      StyleDisabled.LookAndFeel.NativeStyle = False
      StyleDisabled.ButtonStyle = btsSimple
      StyleFocused.BorderStyle = ebsFlat
      StyleFocused.Color = clWhite
      StyleFocused.LookAndFeel.Kind = lfStandard
      StyleFocused.LookAndFeel.NativeStyle = False
      StyleFocused.ButtonStyle = btsDefault
      StyleHot.BorderColor = clWindowFrame
      StyleHot.BorderStyle = ebsFlat
      StyleHot.Color = clWhite
      StyleHot.LookAndFeel.Kind = lfStandard
      StyleHot.LookAndFeel.NativeStyle = False
      StyleHot.ButtonStyle = btsDefault
      TabOrder = 0
      Height = 21
      Width = 337
    end
  end
  object CostComm: TADOCommand
    Connection = MainForm.CallCenterConnect
    Parameters = <>
    Left = 40
    Top = 336
  end
  object ListQuer: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'SELECT idn, Description'
      'FROM dbo.ProduceBlockCycle'
      'ORDER BY Description')
    Left = 96
    Top = 336
    object ListQueridn: TAutoIncField
      FieldName = 'idn'
      ReadOnly = True
    end
    object ListQuerDescription: TWideStringField
      FieldName = 'Description'
      Size = 128
    end
  end
  object DeptQuer: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'SELECT idn, DeptName FROM dbo.Depts WHERE (FL IS NOT NULL)'
      'ORDER BY DeptName')
    Left = 144
    Top = 336
    object DeptQueridn: TAutoIncField
      FieldName = 'idn'
      ReadOnly = True
    end
    object DeptQuerDeptName: TStringField
      FieldName = 'DeptName'
      Size = 256
    end
  end
  object Qw: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      
        'SELECT idn, DeptName FROM dbo.Depts WHERE (FL IS NOT NULL) ORDER' +
        ' BY DeptName')
    Left = 192
    Top = 336
    object Qwidn: TAutoIncField
      FieldName = 'idn'
      ReadOnly = True
    end
    object QwDeptName: TStringField
      FieldName = 'DeptName'
      Size = 256
    end
  end
end
